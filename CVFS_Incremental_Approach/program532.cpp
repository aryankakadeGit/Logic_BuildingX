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

#define START 0
#define CURRENT 1
#define END 2
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
    strcpy(uareaobj.ProcessName,"myexe");
    int i =0;
    for(i = 0 ; i<MAX_OPEN_FILES ; i++)
    {
        uareaobj.UFDT[i]=NULL;
    }
    printf("Marvellous CVFS : UAREA gets Initialized Successfully");

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
    printf("Marvellous CVFS : Super Block gets Initialized Successfully");
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

        if(temp == NULL)//LL EMPTY
        {
            head=newn;
            temp=head;
        }
        else//LL at least one
        {
            temp->next=newn;
            temp=temp->next;
        }
    }
    printf("Marvellous CVFS : DILB created successfully");
}

///////////////////////////////////////////////////////////////////////////////////////
//
//      ENTRY POINT FUNCTION
//
///////////////////////////////////////////////////////////////////////////////////////
int main()
{

    return 0;                                                                                                     
}