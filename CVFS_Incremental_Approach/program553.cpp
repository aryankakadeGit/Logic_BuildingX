///////////////////////////////////////////////////////////////////////////////////////
//
//      Header Files
//
///////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
// #include<unistd.h>
#include<stdbool.h>
#include<string.h>

///////////////////////////////////////////////////////////////////////////////////////
//
//      User Defined MACROS
//
///////////////////////////////////////////////////////////////////////////////////////
#define MAX_FILE_SIZE 50
#define MAX_OPEN_FILES 20
#define MAX_INODE 5
// PERMISSIONS 
#define READ 1
#define WRITE 2
#define EXECUTE 4

// Offset
#define START 0
#define CURRENT 1
#define END 2

// Successful Execution
#define EXECUTE_SUCCESS 0

// File Type
#define REGULARFILE 1
#define SPECIALFILE 2

///////////////////////////////////////////////////////////////////////////////////////
//
//      User Defined Macros for Error Handling
//
///////////////////////////////////////////////////////////////////////////////////////
#define ERR_INVALID_PARAMETER -1

#define ERR_NO_INODES -2

#define ERR_FILE_ALREADY_EXIST -3
#define ERR_FILE_NOT_EXIST -4

#define ERR_PERMISSION_DENIED -5

#define ERR_INSUFFIECIENT_SPACE -6
#define ERR_INSUFFIECIENT_DATA -7

#define ERR_MAX_FILES_OPENED -8



///////////////////////////////////////////////////////////////////////////////////////
//
// User Defined Structures
//
///////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////
//
// Structure Name : BootBlock
// Description    : Holds Information to boot the OS
//
///////////////////////////////////////////////////////////////////////////////////////
struct BootBlock
{
    char Information[100];
};


///////////////////////////////////////////////////////////////////////////////////////
//
// Structure Name : SuperBlock
// Description    : Holds Information about File System
//
///////////////////////////////////////////////////////////////////////////////////////
struct SuperBlock
{
    int TotalInodes;
    int FreeInodes;
};


///////////////////////////////////////////////////////////////////////////////////////
//
// Structure Name : Inode
// Description    : Holds Information about File 
//
///////////////////////////////////////////////////////////////////////////////////////
#pragma pack(1)
struct Inode           
{
    char File_name[20];
    int InodeNumber;
    int FileSize;
    int ActualFileSize;
    int FileType;
    int ReferenceCount;
    int Permission;
    char* Buffer;
    struct Inode* next;
};


typedef struct Inode INODE;
typedef struct Inode* PINODE;
typedef struct Inode** PPINODE;


///////////////////////////////////////////////////////////////////////////////////////
//
// Structure Name : FileTable
// Description    : Holds Information about OPENED File 
//
///////////////////////////////////////////////////////////////////////////////////////
struct FileTable           
{
    int ReadOffset;
    int WriteOffset;
    int Mode;
    PINODE ptrinode;
};


///////////////////////////////////////////////////////////////////////////////////////
//
// Structure Name : UAREA
// Description    : Holds Information about process  
//
///////////////////////////////////////////////////////////////////////////////////////
typedef FileTable FILETABLE;
typedef FileTable* PFILETABLE;
struct UAREA           
{
    char ProcessName[20];
    PFILETABLE UFDT[MAX_OPEN_FILES];
};



///////////////////////////////////////////////////////////////////////////////////////
//
//      GLOBAL VARIABLES FOR PROJECT
//
///////////////////////////////////////////////////////////////////////////////////////
BootBlock bootobj;
SuperBlock superobj;
UAREA uareaobj;
PINODE head=NULL;

///////////////////////////////////////////////////////////////////////////////////////
// Function Name : InitializeUAREA
// Description   : Used to initialize UAREA members
// Author        : Aryan Hanumant Kakade
// Date          : 13/01/2026
///////////////////////////////////////////////////////////////////////////////////////
void InitializeUAREA()
{
    strcpy(uareaobj.ProcessName,"myexe\n");
    int i =0;
    for(i = 0 ; i<MAX_OPEN_FILES ; i++)
    {
        uareaobj.UFDT[i]=NULL;
    }
    printf("Marvellous CVFS : UAREA gets Initialized Successfully\n");

}


///////////////////////////////////////////////////////////////////////////////////////
// Function Name : InitializeSuperBlock
// Description :   Used to initialize Super Block members
// Author :        Aryan Hanumant Kakade
// Date :          13/01/2026
///////////////////////////////////////////////////////////////////////////////////////
void InitializeSuperBlock()
{
    superobj.TotalInodes=MAX_INODE;
    superobj.FreeInodes=MAX_INODE;
    printf("Marvellous CVFS : Super Block gets Initialized Successfully\n");
}

///////////////////////////////////////////////////////////////////////////////////////
// Function Name : CreateDILB
// Description :   Used to create LINKEDLIST of INODES
// Author :        Aryan Hanumant Kakade
// Date :          13/01/2026
///////////////////////////////////////////////////////////////////////////////////////
void CreateDILB()
{
    int i=1;
    PINODE newn= NULL;
    PINODE temp= head;
    for(i=1 ; i<=MAX_INODE ; i++)
    {
        newn=(PINODE)malloc(sizeof(INODE));
        strcpy(newn->File_name,"");

        newn->InodeNumber=i;
        newn->FileSize=0;
        newn->ActualFileSize=0;
        newn->ReferenceCount=0;
        newn->Permission=0;
        newn->FileType=0;
        newn->Buffer=NULL;
        newn->next=NULL;

        if(temp == NULL) //LL EMPTY
        {
            head=newn;
            temp=head;
        }
        else //LL at least one
        {
            temp->next=newn;
            temp=temp->next;
        }
    }
    printf("Marvellous CVFS : DILB created successfully\n");
}



///////////////////////////////////////////////////////////////////////////////////////
// Function Name : StartAuxillaryDataInitialization
// Description :   Used to call functions which are used  
//                 to initialize Auxillary Data
// Author :        Aryan Hanumant Kakade
// Date :          13/01/2026
///////////////////////////////////////////////////////////////////////////////////////
void StartAuxillaryDataInitialization()
{
    strcpy(bootobj.Information,"Booting Process of Marvellous CVFS is done\n");
    printf("%s\n", bootobj.Information);
    InitializeSuperBlock();
    CreateDILB();
    InitializeUAREA();
    printf("Marvellous CVFS : Auxillary Data Initialized Successfully\n");
}

///////////////////////////////////////////////////////////////////////////////////////
// Function Name : DisplayHelp
// Description :   Used to Display help menu
// Author :        Aryan Hanumant Kakade
// Date :          14/01/2026
///////////////////////////////////////////////////////////////////////////////////////
void DisplayHelp()
{
    printf("--------------------------------------------------\n");
    printf("--------------Marvellous HELP PAGE----------------\n");
    printf("--------------------------------------------------\n");
    
    printf("man   : It is used to Display Manual Page\n");
    printf("clear : It is used to Clear the Terminal\n");
    printf("creat : It is used to create new file\n");
    printf("write : It is used to write the data in the file\n");
    printf("read  : It is used to rea the data from file\n");
    printf("stat  : It is used to Display stastical information\n");
    printf("unlink: It is used to delete the file\n");
    printf("exit  : It is used to terminate CVFS\n");
    printf("--------------------------------------------------\n");

}


///////////////////////////////////////////////////////////////////////////////////////
// Function Name : ManPageDisplay
// Description :   Used to Display Man Page
// Author :        Aryan Hanumant Kakade
// Date :          14/01/2026
///////////////////////////////////////////////////////////////////////////////////////
void ManPageDisplay(char Name[])
{
    if(strcmp("ls",Name)==0)
    {
        printf("About : It is used to list names of all files\n");
        printf("Usage : ls\n");
    }
    else if(strcmp("man",Name)==0)
    {
        printf("About : It is used to Display Manual Page\n");
        printf("Usage : man command_name\n");
        printf("command_name : It is name of command \n");
    }
    else if(strcmp("exit",Name)==0)
    {
        printf("About : It is used to Terminate the shell\n");
        printf("Usage : exit \n");
    }
    else if(strcmp("clear",Name)==0)
    {
        printf("About : It is used to clear the shell\n");
        printf("Usage : clear \n");
    }
    else
    {
        printf("No Manual Entry for %s\n",Name);
    }
}


///////////////////////////////////////////////////////////////////////////////////////
// Function Name : IsFileExist
// Description :   Used to check file already exist or not .
// Input :         Accepts File name
// Output :        Returns BOOLEAN
// Author :        Aryan Hanumant Kakade
// Date :          16/01/2026
///////////////////////////////////////////////////////////////////////////////////////
bool IsFileExist
            (
                char *name    //Name for new file
            )
{
    PINODE temp=head;
    bool bFlag = false;
    while(temp!=NULL)
    {
        if(((strcmp(name,temp->File_name)==0)&&(temp->FileType==REGULARFILE)))
        {
            bFlag=true;
            break;
        }
        temp=temp->next;
    }
    return bFlag;
}



///////////////////////////////////////////////////////////////////////////////////////
// Function Name : CreateFile
// Description :   Used to create new Regular file
// Input :         Accepts File name & Permissions
// Output :        Returns File Descriptors
// Author :        Aryan Hanumant Kakade
// Date :          16/01/2026
///////////////////////////////////////////////////////////////////////////////////////
int CreateFile
            (
                char *name,    //Name for new file
                int permission //Permission for that File
            )
{
    PINODE temp = head;
    int i=0;
    printf("Total no of inodes remaining %d\n",superobj.FreeInodes);
    
    //Name missing
    if(name==NULL)
    {
        return ERR_INVALID_PARAMETER;
    }

    //Permission value is wrong
    //permission 1 - read
    //permission 2 - write
    //permission 3 - read + write
    if(permission<1 || permission>3)
    {
        return ERR_INVALID_PARAMETER;  
    }

    //INODES are FULL
    if(superobj.FreeInodes==0)
    {
        return ERR_NO_INODES;
    }

    //File Already Exist in DILB
    if(IsFileExist(name)==true)
    {
        return ERR_FILE_ALREADY_EXIST;
    }
    
    //SEARCH EMPTY INODE
    while(temp!=NULL)
    {
        if((temp->FileType)==0)
        {
            break;
        }
        temp=temp->next;
    }

    if(temp==NULL)
    {
        printf("There is no iNode");
        return ERR_NO_INODES;
    }


    // search for empty UFDT entry
    // 0,1,2 are reserved
    for(i = 3 ; i<MAX_OPEN_FILES ; i++)
    {
        if(uareaobj.UFDT[i]==NULL)
        {
            break;
        }
    }

    //if UFDT full
    if (i==MAX_OPEN_FILES)
    {
        return ERR_MAX_FILES_OPENED;
    }


    //Allocate memory for file table
    uareaobj.UFDT[i] = (PFILETABLE)malloc(sizeof(FILETABLE));

    //INITIALIZE FILE TABLE
    uareaobj.UFDT[i] -> ReadOffset = 0 ;
    uareaobj.UFDT[i] -> WriteOffset = 0 ;
    uareaobj.UFDT[i] -> Mode = permission ;

    //Connect FILETABLE with INODE
    uareaobj.UFDT[i]->ptrinode = temp;

    //INITIALIZE MEMBERS OF INODE
    strcpy(uareaobj.UFDT[i]->ptrinode->File_name,name);
    uareaobj.UFDT[i]->ptrinode->ActualFileSize=0;
    uareaobj.UFDT[i]->ptrinode->FileType=REGULARFILE;
    uareaobj.UFDT[i]->ptrinode->ReferenceCount=1;
    uareaobj.UFDT[i]->ptrinode->Permission=permission;

    //Allocate eMemory for files Data
    uareaobj.UFDT[i]->ptrinode->Buffer = (char*)malloc(MAX_OPEN_FILES);
    superobj.FreeInodes--;
    return i;
}

///////////////////////////////////////////////////////////////////////////////////////
// Function Name : LSFile
// Description :   Used to list all files
// Input :         nothing
// Output :        nothing
// Author :        Aryan Hanumant Kakade
// Date :          16/01/2026
///////////////////////////////////////////////////////////////////////////////////////
void LSFile()
{
    PINODE temp = head ;
    printf("--------------------------------------------------\n");
    printf("------------Marvellous CVFS Files info------------\n");
    printf("--------------------------------------------------\n");
    
    while(temp!=NULL)
    {
        if(temp->FileType!=0)
        {
            printf("%d\t%s\t%d\n",temp->InodeNumber,temp->File_name,temp->ActualFileSize);
        }
        temp=temp->next;
    }
    printf("--------------------------------------------------\n");
}


///////////////////////////////////////////////////////////////////////////////////////
// Function Name : UnlinkFile
// Description :   Used to Delete the file .
// Input :         Accepts File name
// Output :        Returns nothing
// Author :        Aryan Hanumant Kakade
// Date :          22/01/2026
///////////////////////////////////////////////////////////////////////////////////////
int UnlinkFile(
                char * name
              )
{
    int i =0;
    if(name==NULL)
    {
        return ERR_INVALID_PARAMETER;        
    }
    if(IsFileExist(name)==false)
    {
        return ERR_FILE_NOT_EXIST;
    }
    //Travel the UFDT
    for(i=0;i<=MAX_OPEN_FILES;i++)
    {
        if(uareaobj.UFDT[i]!=NULL)
        {
            if(strcmp(uareaobj.UFDT[i]->ptrinode->File_name,name)==0)
            {
                //Deallocate Memory of Buffer
                free(uareaobj.UFDT[i]->ptrinode->Buffer);
                uareaobj.UFDT[i]->ptrinode->Buffer=NULL;

                //Reset all Values of Inode
                //Not Deallocating memory of inode
                uareaobj.UFDT[i]->ptrinode->FileSize=0;
                uareaobj.UFDT[i]->ptrinode->ActualFileSize=0;
                uareaobj.UFDT[i]->ptrinode->FileType=0;
                uareaobj.UFDT[i]->ptrinode->ReferenceCount=0;
                uareaobj.UFDT[i]->ptrinode->Permission=0;
                
                memset(uareaobj.UFDT[i]->ptrinode->File_name,'\0',sizeof(uareaobj.UFDT[i]->ptrinode->File_name));

                //Deallocate MEmory of file table
                free(uareaobj.UFDT[i]);

                //Set Null to UFDT
                uareaobj.UFDT[i]=NULL;

                //Increment FreeInodeCount
                superobj.FreeInodes++;

                break; //IMP stop when name found

            }//END OF IF
        }//END OF IF
    }//END OF FOR
    return EXECUTE_SUCCESS;
}//END OF FUNCTION

///////////////////////////////////////////////////////////////////////////////////////
//
//      ENTRY POINT FUNCTION
//
///////////////////////////////////////////////////////////////////////////////////////
int main()
{
    char str[80]={'\0'};
    char command[5][20]={'\0'};
    int iCount = 0;
    int iRet = 0;

    StartAuxillaryDataInitialization();
    printf("--------------------------------------------------\n");
    printf("--------------Marvellous CVFS started-------------\n");
    printf("--------------------------------------------------\n");
    // Infinite Listening Shell
    while(1)
    {
        fflush(stdin);
        strcpy(str,"");
        printf("\nMarvellous CVFS : > ");
        fgets(str,sizeof(str),stdin);
        iCount=sscanf(str,"%s %s %s %s %s",command[0],command[1],command[2],command[3],command[4]);
        fflush(stdin);
        if(iCount==1)
        {
            // Marvellous CVFS : > exit
            if(strcmp("exit",command[0])==0)
            {
                printf("Thanks for using Marvellous CVFS\n");
                printf("Deallocating all allocated resources\n");
                break;
            }
            // Marvellous CVFS : > ls
            else if(strcmp("ls",command[0])==0)
            {
                LSFile();
            }

            // Marvellous CVFS : > help
            else if(strcmp("help",command[0])==0)
            {
                DisplayHelp();
            }

            // Marvellous CVFS : > clear
            else if(strcmp("clear",command[0])==0)
            {
                #ifdef _WIN32
                    system("cls");
                #else
                    system("clear");
                #endif 
            }
        }//END OF IF 1
        else if(iCount==2)
        {
            // Marvellous CVFS : > man ls
            if(strcmp("man",command[0])==0)
            {
                ManPageDisplay(command[1]);
            }

            // Marvellous CVFS : > unlink Demo.txt
            if(strcmp("unlink",command[0])==0)
            {
                iRet = UnlinkFile(command[1]);

                if(iRet==ERR_INVALID_PARAMETER)
                {
                    printf("ERROR : INVALID PARAMETER");
                }

                if(iRet==ERR_FILE_NOT_EXIST)
                {
                    printf("ERROR : UNABLE TO DELETE AS THERE IS NO SUCH FILE");
                }

                if(iRet==EXECUTE_SUCCESS)
                {
                    printf("FILE SUCCESSFULLY DELETED...");                    
                }
                
            }
            
        }//END OF ELSE IF 2
        else if(iCount==3)
        {
            // Marvellous CVFS : > creat Ganesh.txt 3
            if(strcmp("creat",command[0])==0)
            {
                iRet=CreateFile(command[1],atoi(command[2]));
                if(iRet==ERR_INVALID_PARAMETER)
                {
                    printf("Error : Unable to create the file as parameters are invalid\n");
                    printf("PLEASE REFER MAN PAGE\n");
                }
                if(iRet==ERR_NO_INODES)
                {
                    printf("Error : Unable to create the file as there is no INODE\n");
                }
                if(iRet==ERR_FILE_ALREADY_EXIST)
                {
                    printf("Error : Unable to create file because File already present\n");
                }
                if(iRet==ERR_MAX_FILES_OPENED)
                {
                    printf("Error : Unable to create file because Max Files Opened limit reached\n");  
                }
                printf("File gets successfully created with fd %d\n",iRet);
            }

            else
            {
                printf("There is no such command");
            }
            
            
            
        }//END OF ELSE IF 3
        else if(iCount==4)
        {

        }//END OF ELSE IF 4
        else
        {
            printf("Command not found \n");
            printf("Please refer help option to get more information\n");
        }// END OF ELSE
    }//END OF WHILE

    return 0;                                                                                                     
}
