#include <stdio.h>
#include <stdlib.h>
#define TRUE  1
#define FALSE 0

typedef int KeyType;
typedef struct RegType
{
    KeyType Key;
}RegType;

typedef enum{
    Vertical, Horizontal
}SlopeType;

typedef struct NodeType *PointerType;
typedef struct NodeType{
    RegType Reg;
    PointerType Left, Right;
    SlopeType BitL,BitR;
}NodeType;

void initializeSBB(PointerType *Node);
void insertSBB(PointerType *Node, RegType Key);
void iinsertSBB(RegType Key, PointerType *Node,SlopeType *Slope, short *End);
void LL(PointerType *Node);
void LR(PointerType *Node);
void RR(PointerType *Node);
void RL(PointerType *Node);
void mainmenu();
