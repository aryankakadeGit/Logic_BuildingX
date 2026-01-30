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
//      MACROS
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
// Description :   Used to initialize UAREA members
// Author :        Aryan Hanumant Kakade
// Date :          13/01/2026
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
        newn->ActualFileSize=0;
        newn->ReferenceCount=0;
        newn->Permission=0;
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
//
//      ENTRY POINT FUNCTION
//
///////////////////////////////////////////////////////////////////////////////////////
int main()
{
    char str[80]={'\0'};
    char command[5][20]={'\0'};
    int iCount =0;

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
            if(strcmp("exit",command[0])==0)
            {
                printf("Thanks for using Marvellous CVFS\n");
                printf("Deallocating all allocated resources\n");
                break;
            }
            else if(strcmp("ls",command[0])==0)
            {
                printf("Inside ls");
            }
        }//END OF IF 1
        else if(iCount==2)
        {

        }//END OF ELSE IF 2
        else if(iCount==3)
        {
            
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