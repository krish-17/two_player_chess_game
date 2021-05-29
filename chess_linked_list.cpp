#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
struct project
{
char pos[5],c_name[5];
struct project *l,*r,*u,*d,*urc,*ulc,*drc,*dlc;
};
char user_pos[5],user_c[5];
int wcount=0,bcount=0;
typedef struct project chess;
chess *h1=NULL,*h2=NULL,*h3=NULL,*h4=NULL,*h5=NULL,*h6=NULL,*h7=NULL,*h8=NULL;
char bmain[8][4]={"BR1","BH1","BB1","BQ","BK","BB2","BH2","BR2"};
char wmain[8][4]={"WR1","WH1","WB1","WQ","WK","WB2","WH2","WR2"};
char bsub[8][4]={"BS1","BS2","BS3","BS4","BS5","BS6","BS7","BS8"};
char wsub[8][4]={"WS1","WS2","WS3","WS4","WS5","WS6","WS7","WS8"};
char z[8]={'a','b','c','d','e','f','g','h'};
int y[8]={'1','2','3','4','5','6','7','8'};
char x[64][4]={"a1","a2","a3","a4","a5","a6","a7","a8","b1","b2","b3","b4","b5","b6","b7","b8","c1","c2","c3","c4","c5","c6","c7","c8","d1","d2","d3","d4","d5","d6","d7","d8","e1","e2","e3","e4","e5","e6","e7","e8","f1","f2","f3","f4","f5","f6","f7","f8","g1","g2","g3","g4","g5","g6","g7","g8","h1","h2","h3","h4","h5","h6","h7","h8"};
void create()
{
int i;static int j=0;
for(i=0;i<8;i++)
{
chess *t=(chess *)malloc(sizeof(chess)),*s;
strcpy(t->pos,x[j++]);
strcpy(t->c_name,bmain[i]);
if(h1==NULL)
{
t->drc=t->urc=t->dlc=t->ulc=t->l=t->r=t->u=t->d=NULL;
h1=t;s=t;
continue;
}
t->drc=t->urc=t->dlc=t->ulc=t->l=t->u=t->d=t->r=NULL;
while(s->r!=NULL)
s=s->r;
s->r=t;
t->l=s;
s=h1;
}
for(i=0;i<8;i++)
{
chess *t=(chess *)malloc(sizeof(chess)),*s;
strcpy(t->pos,x[j++]);
strcpy(t->c_name,bsub[i]);
if(h2==NULL)
{
t->drc=t->urc=t->dlc=t->ulc=t->l=t->r=t->u=t->d=NULL;
h2=t;s=t;
continue;
}
t->drc=t->urc=t->dlc=t->ulc=t->l=t->u=t->d=t->r=NULL;
while(s->r!=NULL)
s=s->r;
s->r=t;
t->l=s;
s=h2;
}
for(i=0;i<8;i++)
{
chess *t=(chess *)malloc(sizeof(chess)),*s;
strcpy(t->pos,x[j++]);
strcpy(t->c_name,"  ");
if(h3==NULL)
{
t->drc=t->urc=t->dlc=t->ulc=t->l=t->r=t->u=t->d=NULL;
h3=t;s=t;
continue;
}
t->drc=t->urc=t->dlc=t->ulc=t->l=t->u=t->d=t->r=NULL;
while(s->r!=NULL)
s=s->r;
s->r=t;
t->l=s;
s=h3;
}
for(i=0;i<8;i++)
{
chess *t=(chess *)malloc(sizeof(chess)),*s;
strcpy(t->pos,x[j++]);
strcpy(t->c_name,"  ");
if(h4==NULL)
{
t->drc=t->urc=t->dlc=t->ulc=t->l=t->r=t->u=t->d=NULL;
h4=t;s=t;
continue;
}
t->drc=t->urc=t->dlc=t->ulc=t->l=t->u=t->d=t->r=NULL;
while(s->r!=NULL)
s=s->r;
s->r=t;
t->l=s;
s=h4;
}
for(i=0;i<8;i++)
{
chess *t=(chess *)malloc(sizeof(chess)),*s;
strcpy(t->pos,x[j++]);
strcpy(t->c_name,"  ");
if(h5==NULL)
{
t->drc=t->urc=t->dlc=t->ulc=t->l=t->r=t->u=t->d=NULL;
h5=t;s=t;
continue;
}
t->drc=t->urc=t->dlc=t->ulc=t->l=t->u=t->d=t->r=NULL;
while(s->r!=NULL)
s=s->r;
s->r=t;
t->l=s;
s=h5;
}
for(i=0;i<8;i++)
{
chess *t=(chess *)malloc(sizeof(chess)),*s;
strcpy(t->pos,x[j++]);
strcpy(t->c_name,"  ");
if(h6==NULL)
{
t->drc=t->urc=t->dlc=t->ulc=t->l=t->r=t->u=t->d=NULL;
h6=t;s=t;
continue;
}
t->drc=t->urc=t->dlc=t->ulc=t->l=t->u=t->d=t->r=NULL;
while(s->r!=NULL)
s=s->r;
s->r=t;
t->l=s;
s=h6;
}
for(i=0;i<8;i++)
{
chess *t=(chess *)malloc(sizeof(chess)),*s;
strcpy(t->pos,x[j++]);
strcpy(t->c_name,wsub[i]);
if(h7==NULL)
{
t->drc=t->urc=t->dlc=t->ulc=t->l=t->r=t->u=t->d=NULL;
h7=t;s=t;
continue;
}
t->drc=t->urc=t->dlc=t->ulc=t->l=t->u=t->d=t->r=NULL;
while(s->r!=NULL)
s=s->r;
s->r=t;
t->l=s;
s=h7;
}
for(i=0;i<8;i++)
{
chess *t=(chess *)malloc(sizeof(chess)),*s;
strcpy(t->pos,x[j++]);
strcpy(t->c_name,wmain[i]);
if(h8==NULL)
{
t->drc=t->urc=t->dlc=t->ulc=t->l=t->r=t->u=t->d=NULL;
h8=t;s=t;
continue;
}
t->drc=t->urc=t->dlc=t->ulc=t->l=t->u=t->d=t->r=NULL;
while(s->r!=NULL)
s=s->r;
s->r=t;
t->l=s;
s=h8;
}
return;
}

void verticallink()
{
chess *t1=h1,*t2=h2,*t3=h3,*t4=h4,*t5=h5,*t6=h6,*t7=h7,*t8=h8;
t1->d=t2;t2->u=t1;t2->d=t3;t3->u=t2;t3->d=t4;t4->u=t3;t4->d=t5;t5->u=t4;t5->d=t6;t6->u=t5;t6->d=t7;t7->u=t6;t7->d=t8;t8->u=t7;
t1=t1->r;t2=t2->r;t3=t3->r;t4=t4->r;t5=t5->r;t6=t6->r;t7=t7->r;t8=t8->r;
t1->d=t2;t2->u=t1;t2->d=t3;t3->u=t2;t3->d=t4;t4->u=t3;t4->d=t5;t5->u=t4;t5->d=t6;t6->u=t5;t6->d=t7;t7->u=t6;t7->d=t8;t8->u=t7;
t1=t1->r;t2=t2->r;t3=t3->r;t4=t4->r;t5=t5->r;t6=t6->r;t7=t7->r;t8=t8->r;
t1->d=t2;t2->u=t1;t2->d=t3;t3->u=t2;t3->d=t4;t4->u=t3;t4->d=t5;t5->u=t4;t5->d=t6;t6->u=t5;t6->d=t7;t7->u=t6;t7->d=t8;t8->u=t7;
t1=t1->r;t2=t2->r;t3=t3->r;t4=t4->r;t5=t5->r;t6=t6->r;t7=t7->r;t8=t8->r;
t1->d=t2;t2->u=t1;t2->d=t3;t3->u=t2;t3->d=t4;t4->u=t3;t4->d=t5;t5->u=t4;t5->d=t6;t6->u=t5;t6->d=t7;t7->u=t6;t7->d=t8;t8->u=t7;
t1=t1->r;t2=t2->r;t3=t3->r;t4=t4->r;t5=t5->r;t6=t6->r;t7=t7->r;t8=t8->r;
t1->d=t2;t2->u=t1;t2->d=t3;t3->u=t2;t3->d=t4;t4->u=t3;t4->d=t5;t5->u=t4;t5->d=t6;t6->u=t5;t6->d=t7;t7->u=t6;t7->d=t8;t8->u=t7;
t1=t1->r;t2=t2->r;t3=t3->r;t4=t4->r;t5=t5->r;t6=t6->r;t7=t7->r;t8=t8->r;
t1->d=t2;t2->u=t1;t2->d=t3;t3->u=t2;t3->d=t4;t4->u=t3;t4->d=t5;t5->u=t4;t5->d=t6;t6->u=t5;t6->d=t7;t7->u=t6;t7->d=t8;t8->u=t7;
t1=t1->r;t2=t2->r;t3=t3->r;t4=t4->r;t5=t5->r;t6=t6->r;t7=t7->r;t8=t8->r;
t1->d=t2;t2->u=t1;t2->d=t3;t3->u=t2;t3->d=t4;t4->u=t3;t4->d=t5;t5->u=t4;t5->d=t6;t6->u=t5;t6->d=t7;t7->u=t6;t7->d=t8;t8->u=t7;
t1=t1->r;t2=t2->r;t3=t3->r;t4=t4->r;t5=t5->r;t6=t6->r;t7=t7->r;t8=t8->r;
t1->d=t2;t2->u=t1;t2->d=t3;t3->u=t2;t3->d=t4;t4->u=t3;t4->d=t5;t5->u=t4;t5->d=t6;t6->u=t5;t6->d=t7;t7->u=t6;t7->d=t8;t8->u=t7;
return;
}

void crosslink1()
{
int i;
chess *t1=h1,*t2=h2,*t3=h3,*t4=h4,*t5=h5,*t6=h6,*t7=h7,*t8=h8;
i=1;
  while(i--)
t2=t2->r;
i=2;
while(i--)
t3=t3->r;
i=3;
while(i--)
t4=t4->r;
i=4;
while(i--)
t5=t5->r;
i=5;
while(i--)
t6=t6->r;
i=6;
while(i--)
t7=t7->r;
i=7;
while(i--)
t8=t8->r;
t1->drc=t2;t2->ulc=t1;t2->drc=t3;t3->ulc=t2;t3->drc=t4;t3->ulc=t4;t4->drc=t5;t5->ulc=t4;t5->drc=t6;t6->ulc=t5;t6->drc=t7;t7->ulc=t6;t7->drc=t8;t8->ulc=t7;
t1=h1;t2=h2;t3=h3;t4=h4;t5=h5;t6=h6;t7=h7;t8=h8;
i=1;
  while(i--)
t3=t3->r;
i=2;
while(i--)
t4=t4->r;
i=3;
while(i--)
t5=t5->r;
i=4;
while(i--)
t6=t6->r;
i=5;
while(i--)
t7=t7->r;
i=6;
while(i--)
t8=t8->r;
t2->drc=t3;t3->ulc=t2;t3->drc=t4;t3->ulc=t4;t4->drc=t5;t5->ulc=t4;t5->drc=t6;t6->ulc=t5;t6->drc=t7;t7->ulc=t6;t7->drc=t8;t8->ulc=t7;
t1=h1;t2=h2;t3=h3;t4=h4;t5=h5;t6=h6;t7=h7;t8=h8;
i=1;
  while(i--)
t4=t4->r;
i=2;
while(i--)
t5=t5->r;
i=3;
while(i--)
t6=t6->r;
i=4;
while(i--)
t7=t7->r;
i=5;
while(i--)
t8=t8->r;
t3->drc=t4;t4->ulc=t3;t4->drc=t5;t5->ulc=t4;t5->drc=t6;t6->ulc=t5;t6->drc=t7;t7->ulc=t6;t7->drc=t8;t8->ulc=t7;
t1=h1;t2=h2;t3=h3;t4=h4;t5=h5;t6=h6;t7=h7;t8=h8;
i=1;
  while(i--)
t5=t5->r;
i=2;
while(i--)
t6=t6->r;
i=3;
while(i--)
t7=t7->r;
i=4;
while(i--)
t8=t8->r;
t4->drc=t5;t5->ulc=t4;t5->drc=t6;t6->ulc=t5;t6->drc=t7;t7->ulc=t6;t7->drc=t8;t8->ulc=t7;
t1=h1;t2=h2;t3=h3;t4=h4;t5=h5;t6=h6;t7=h7;t8=h8;
i=1;
  while(i--)
t6=t6->r;
i=2;
while(i--)
t7=t7->r;
i=3;
while(i--)
t8=t8->r;
t5->drc=t6;t6->ulc=t5;t6->drc=t7;t7->ulc=t6;t7->drc=t8;t8->ulc=t7;
t1=h1;t2=h2;t3=h3;t4=h4;t5=h5;t6=h6;t7=h7;t8=h8;
i=1;
  while(i--)
t7=t7->r;
i=2;
while(i--)
t8=t8->r;
t6->drc=t7;t7->ulc=t6;t7->drc=t8;t8->ulc=t7;
t1=h1;t2=h2;t3=h3;t4=h4;t5=h5;t6=h6;t7=h7;t8=h8;
i=1;
  while(i--)
t8=t8->r;
t7->drc=t8;t8->ulc=t7;
t1=h1;t2=h2;t3=h3;t4=h4;t5=h5;t6=h6;t7=h7;t8=h8;
i=6;
  while(i--)
t1=t1->r;
i=7;
while(i--)
t2=t2->r;
t1->drc=t2;t2->ulc=t1;
t1=h1;t2=h2;t3=h3;t4=h4;t5=h5;t6=h6;t7=h7;t8=h8;
i=5;
while(i--)
t1=t1->r;
i=6;
while(i--)
t2=t2->r;
i=7;
while(i--)
t3=t3->r;
t1->drc=t2;t2->ulc=t1;t2->drc=t3;t3->ulc=t2;
t1=h1;t2=h2;t3=h3;t4=h4;t5=h5;t6=h6;t7=h7;t8=h8;
i=4;
while(i--)
t1=t1->r;
i=5;
while(i--)
t2=t2->r;
i=6;
while(i--)
t3=t3->r;
i=7;
while(i--)
t4=t4->r;
t1->drc=t2;t2->ulc=t1;t2->drc=t3;t3->ulc=t2;t3->drc=t4;t4->ulc=t3;
t1=h1;t2=h2;t3=h3;t4=h4;t5=h5;t6=h6;t7=h7;t8=h8;
i=3;
  while(i--)
t1=t1->r;
i=4;
while(i--)
t2=t2->r;
i=5;
while(i--)
t3=t3->r;
i=6;
while(i--)
t4=t4->r;
i=7;
while(i--)
t5=t5->r;
t1->drc=t2;t2->ulc=t1;t2->drc=t3;t3->ulc=t2;t3->drc=t4;t4->ulc=t3;t4->drc=t5;t5->ulc=t4;
t1=h1;t2=h2;t3=h3;t4=h4;t5=h5;t6=h6;t7=h7;t8=h8;
i=2;
  while(i--)
t1=t1->r;
i=3;
while(i--)
t2=t2->r;
i=4;
while(i--)
t3=t3->r;
i=5;
while(i--)
t4=t4->r;
i=6;
while(i--)
t5=t5->r;
i=7;
while(i--)
t6=t6->r;
t1->drc=t2;t2->ulc=t1;t2->drc=t3;t3->ulc=t2;t3->drc=t4;t4->ulc=t3;t4->drc=t5;t5->ulc=t4;t5->drc=t6;t6->ulc=t5;
t1=h1;t2=h2;t3=h3;t4=h4;t5=h5;t6=h6;t7=h7;t8=h8;
i=1;
  while(i--)
t1=t1->r;
i=2;
while(i--)
t2=t2->r;
i=3;
while(i--)
t3=t3->r;
i=4;
while(i--)
t4=t4->r;
i=5;
while(i--)
t5=t5->r;
i=6;
while(i--)
t6=t6->r;
i=7;
while(i--)
t7=t7->r;
t1->drc=t2;t2->ulc=t1;t2->drc=t3;t3->ulc=t2;t3->drc=t4;t4->ulc=t3;t4->drc=t5;t5->ulc=t4;t5->drc=t6;t6->ulc=t5;t6->drc=t7;t7->ulc=t6;
return;
}

void crosslink2()
{
int i;
chess *t1=h1,*t2=h2,*t3=h3,*t4=h4,*t5=h5,*t6=h6,*t7=h7,*t8=h8;
while(t1->r!=NULL)
{t1=t1->r;t2=t2->r;t3=t3->r;t4=t4->r;t5=t5->r;t6=t6->r;t7=t7->r;t8=t8->r;}
i=1;
  while(i--)
t2=t2->l;
i=2;
while(i--)
t3=t3->l;
i=3;
while(i--)
t4=t4->l;
i=4;
while(i--)
t5=t5->l;
i=5;
while(i--)
t6=t6->l;
i=6;
while(i--)
t7=t7->l;
i=7;
while(i--)
t8=t8->l;
t1->dlc=t2;t2->urc=t1;t2->dlc=t3;t3->urc=t2;t3->dlc=t4;t3->urc=t4;t4->dlc=t5;t5->urc=t4;t5->dlc=t6;t6->urc=t5;t6->dlc=t7;t7->urc=t6;t7->dlc=t8;t8->urc=t7;
t1=h1;t2=h2;t3=h3;t4=h4;t5=h5;t6=h6;t7=h7;t8=h8;
while(t1->r!=NULL)
{t1=t1->r;t2=t2->r;t3=t3->r;t4=t4->r;t5=t5->r;t6=t6->r;t7=t7->r;t8=t8->r;}
i=1;
while(i--)
t3=t3->l;
i=2;
while(i--)
t4=t4->l;
i=3;
while(i--)
t5=t5->l;
i=4;
while(i--)
t6=t6->l;
i=5;
while(i--)
t7=t7->l;
i=6;
while(i--)
t8=t8->l;
t2->dlc=t3;t3->urc=t2;t3->dlc=t4;t3->urc=t4;t4->dlc=t5;t5->urc=t4;t5->dlc=t6;t6->urc=t5;t6->dlc=t7;t7->urc=t6;t7->dlc=t8;t8->urc=t7;
t1=h1;t2=h2;t3=h3;t4=h4;t5=h5;t6=h6;t7=h7;t8=h8;
while(t1->r!=NULL)
{t1=t1->r;t2=t2->r;t3=t3->r;t4=t4->r;t5=t5->r;t6=t6->r;t7=t7->r;t8=t8->r;}
i=1;
while(i--)
t4=t4->l;
i=2;
while(i--)
t5=t5->l;
i=3;
while(i--)
t6=t6->l;
i=4;
while(i--)
t7=t7->l;
i=5;
while(i--)
t8=t8->l;
t3->dlc=t4;t4->urc=t3;t4->dlc=t5;t5->urc=t4;t5->dlc=t6;t6->urc=t5;t6->dlc=t7;t7->urc=t6;t7->dlc=t8;t8->urc=t7;
t1=h1;t2=h2;t3=h3;t4=h4;t5=h5;t6=h6;t7=h7;t8=h8;
while(t1->r!=NULL)
{t1=t1->r;t2=t2->r;t3=t3->r;t4=t4->r;t5=t5->r;t6=t6->r;t7=t7->r;t8=t8->r;}
i=1;
while(i--)
t5=t5->l;
i=2;
while(i--)
t6=t6->l;
i=3;
while(i--)
t7=t7->l;
i=4;
while(i--)
t8=t8->l;
t4->dlc=t5;t5->urc=t4;t5->dlc=t6;t6->urc=t5;t6->dlc=t7;t7->urc=t6;t7->dlc=t8;t8->urc=t7;
t1=h1;t2=h2;t3=h3;t4=h4;t5=h5;t6=h6;t7=h7;t8=h8;
while(t1->r!=NULL)
{t1=t1->r;t2=t2->r;t3=t3->r;t4=t4->r;t5=t5->r;t6=t6->r;t7=t7->r;t8=t8->r;}
i=1;
while(i--)
t6=t6->l;
i=2;
while(i--)
t7=t7->l;
i=3;
while(i--)
t8=t8->l;
t5->dlc=t6;t6->urc=t5;t6->dlc=t7;t7->urc=t6;t7->dlc=t8;t8->urc=t7;
t1=h1;t2=h2;t3=h3;t4=h4;t5=h5;t6=h6;t7=h7;t8=h8;
while(t1->r!=NULL)
{t1=t1->r;t2=t2->r;t3=t3->r;t4=t4->r;t5=t5->r;t6=t6->r;t7=t7->r;t8=t8->r;}
i=1;
while(i--)
t7=t7->l;
i=2;
while(i--)
t8=t8->l;
t6->dlc=t7;t7->urc=t6;t7->dlc=t8;t8->urc=t7;
t1=h1;t2=h2;t3=h3;t4=h4;t5=h5;t6=h6;t7=h7;t8=h8;
while(t1->r!=NULL)
{t1=t1->r;t2=t2->r;t3=t3->r;t4=t4->r;t5=t5->r;t6=t6->r;t7=t7->r;t8=t8->r;}
i=1;
while(i--)
t8=t8->l;
t7->dlc=t8;t8->urc=t7;
t1=h1;t2=h2;t3=h3;t4=h4;t5=h5;t6=h6;t7=h7;t8=h8;
i=1;
  while(i--)
t1=t1->r;
t1->dlc=t2;t2->urc=t1;
t1=h1;t2=h2;t3=h3;t4=h4;t5=h5;t6=h6;t7=h7;t8=h8;
i=2;
 while(i--)
t1=t1->r;
i=1;
while(i--)
t2=t2->r;
t1->dlc=t2;t2->urc=t1;t2->dlc=t3;t3->urc=t2;
i=3;
 while(i--)
t1=t1->r;
i=2;
while(i--)
t2=t2->r;
i=1;
while(i--)
t3=t3->r;
t1->dlc=t2;t2->urc=t1;t2->dlc=t3;t3->urc=t2;t3->dlc=t4;t4->urc=t3;
t1=h1;t2=h2;t3=h3;t4=h4;t5=h5;t6=h6;t7=h7;t8=h8;
i=4;
  while(i--)
t1=t1->r;
i=3;
while(i--)
t2=t2->r;
i=2;
while(i--)
t3=t3->r;
i=1;
while(i--)
t4=t4->r;
t1->dlc=t2;t2->urc=t1;t2->dlc=t3;t3->urc=t2;t3->dlc=t4;t4->urc=t3;t4->dlc=t5;t5->urc=t4;
t1=h1;t2=h2;t3=h3;t4=h4;t5=h5;t6=h6;t7=h7;t8=h8;
i=5;
  while(i--)
t1=t1->r;
i=4;
while(i--)
t2=t2->r;
i=3;
while(i--)
t3=t3->r;
i=2;
while(i--)
t4=t4->r;
i=1;
while(i--)
t5=t5->r;
t1->dlc=t2;t2->urc=t1;t2->dlc=t3;t3->urc=t2;t3->dlc=t4;t4->urc=t3;t4->dlc=t5;t5->urc=t4;t5->dlc=t6;t6->urc=t5;
t1=h1;t2=h2;t3=h3;t4=h4;t5=h5;t6=h6;t7=h7;t8=h8;
i=6;
  while(i--)
t1=t1->r;
i=5;
while(i--)
t2=t2->r;
i=4;
while(i--)
t3=t3->r;
i=3;
while(i--)
t4=t4->r;
i=2;
while(i--)
t5=t5->r;
i=1;
while(i--)
t6=t6->r;
t1->dlc=t2;t2->urc=t1;t2->dlc=t3;t3->urc=t2;t3->dlc=t4;t4->urc=t3;t4->dlc=t5;t5->urc=t4;t5->dlc=t6;t6->urc=t5;t6->dlc=t7;t7->urc=t6;
return;
}

void Sleep(unsigned int ms)
{
clock_t goal=ms+clock();
while(goal>clock());
return;
}

void invalid()
{
clrscr();
printf("\n\n\n\n\t\t\t\tINVALID MOVE!");
Sleep(40);
return;
}

chess * find_node()
{
clrscr();
char c[5];
chess *t1=h1,*t2=h2,*t3=h3,*t4=h4,*t5=h5,*t6=h6,*t7=h7,*t8=h8;
strcpy(c,user_c);
while(t1!=NULL)
{
if(strcmp(c,t1->c_name)==0)
return t1;
t1=t1->r;
}
while(t2!=NULL)
{
if(strcmp(c,t2->c_name)==0)
return t2;
t2=t2->r;
}
while(t3!=NULL)
{
if(strcmp(c,t3->c_name)==0)
return t3;
t3=t3->r;
}
while(t4!=NULL)
{
if(strcmp(c,t4->c_name)==0)
return t4;
t4=t4->r;
}
while(t5!=NULL)
{
if(strcmp(c,t5->c_name)==0)
return t5;
t5=t5->r;
}
while(t6!=NULL)
{
if(strcmp(c,t6->c_name)==0)
return t6;
t6=t6->r;
}
while(t7!=NULL)
{
if(strcmp(c,t7->c_name)==0)
return t7;
t7=t7->r;
}
while(t8!=NULL)
{
if(strcmp(c,t8->c_name)==0)
return t8;
t8=t8->r;
}
return NULL;
}

chess * find_node1(char c[])
{
chess *t1=h1,*t2=h2,*t3=h3,*t4=h4,*t5=h5,*t6=h6,*t7=h7,*t8=h8;
while(t1!=NULL)
{
if(strcmp(c,t1->c_name)==0)
return t1;
t1=t1->r;
}
while(t2!=NULL)
{
if(strcmp(c,t2->c_name)==0)
return t2;
t2=t2->r;
}
while(t3!=NULL)
{
if(strcmp(c,t3->c_name)==0)
return t3;
t3=t3->r;
}
while(t4!=NULL)
{
if(strcmp(c,t4->c_name)==0)
return t4;
t4=t4->r;
}
while(t5!=NULL)
{
if(strcmp(c,t5->c_name)==0)
return t5;
t5=t5->r;
}
while(t6!=NULL)
{
if(strcmp(c,t6->c_name)==0)
return t6;
t6=t6->r;
}
while(t7!=NULL)
{
if(strcmp(c,t7->c_name)==0)
return t7;
t7=t7->r;
}
while(t8!=NULL)
{
if(strcmp(c,t8->c_name)==0)
return t8;
t8=t8->r;
}
return NULL;
}

chess * final_node()
{
int flag=0;
chess *node=find_node(),*t;
t=node;

if(node==NULL)
{
invalid();
return NULL;
}
if(node->c_name[1]=='R')
{
if(user_pos[0]==node->pos[0])
{
if(user_pos[1]<node->pos[1])
{
t=node;t=t->l;
while(t!=NULL&&strcmp(user_pos,t->pos)!=0)
{
if(strcmp(t->c_name,"  ")==0)
t=t->l;
else
{
flag=1;break;}}}
else
{
t=node;t=t->r;
while(t!=NULL&&strcmp(user_pos,t->pos)!=0)
{
if(strcmp(t->c_name,"  ")==0)
t=t->r;
else
{flag=1;break;}}}
}
else
{
if(user_pos[0]<node->pos[0])
{
t=node;t=t->u;
while(t!=NULL&&strcmp(user_pos,t->pos)!=0)
{
if(strcmp(t->c_name,"  ")==0)
t=t->u;
else
{
flag=1;break;}}}
else
{
t=node;t=t->d;
while(t!=NULL&&strcmp(user_pos,t->pos)!=0)
{
if(strcmp(t->c_name,"  ")==0)
t=t->d;
else
{flag=1;break;}}}
}
if(flag==1)
return NULL;
else
return t;
}
else if(node->c_name[1]=='B')
{
if(user_pos[0]<node->pos[0])
{
if(user_pos[1]<node->pos[1])
{t=node;t=t->ulc;
while(t!=NULL&&strcmp(user_pos,t->pos)!=0)
{if(strcmp(t->c_name,"  ")==0)
t=t->ulc;
else
{
flag=1;break;
}}}
else
{
t=node;t=t->urc;
while(t!=NULL&&strcmp(user_pos,t->pos)!=0)
{
if(strcmp(t->c_name,"  ")==0)
t=t->urc;
else
{flag=1;break;}}}
}
else
{
if(user_pos[1]<node->pos[1])
{
t=node;t=t->dlc;
while(t!=NULL&&strcmp(user_pos,t->pos)!=0)
{if(strcmp(t->c_name,"  ")==0)
t=t->dlc;
else
{
flag=1;break;
}}}
else
{
t=node;t=t->drc;
while(t!=NULL&&strcmp(user_pos,t->pos)!=0)
{
if(strcmp(t->c_name,"  ")==0)
t=t->drc;
else
{
flag=1;break;}}}
}
if(flag==1)
return NULL;
else
return t;
}
else if(node->c_name[1]=='H')
{
  if(user_pos[0]<node->pos[0])
   {
    if(user_pos[1]<node->pos[1])
      {
       if(user_pos[1]==node->pos[1]-1)
	{
	t=node;
	int i=2;
	while(i--)
	t=t->u;
	t=t->l;
	if(strcmp(t->pos,user_pos)!=0)
	  {
	  invalid();
	  return NULL;
	  }
	}
       else
	{
	 t=node;
	 int i=2;
	 while(i--)
	 t=t->l;
	 t=t->u;
	 if(strcmp(t->pos,user_pos)!=0)
	  {
	  invalid();
	  return NULL;
	  }
	 }
      }
      else
      {
	if(user_pos[1]==node->pos[1]+1)
	{
	  t=node;
	  int i=2;
	  while(i--)
	  t=t->u;
	  t=t->r;
	  if(strcmp(t->pos,user_pos)!=0)
	  {
	  invalid();
	  return NULL;
	  }
	}
	else
	{
	  t=node;
	  int i=2;
	  while(i--)
	  t=t->r;
	  t=t->u;
	  if(strcmp(t->pos,user_pos)!=0)
	  {
	  invalid();
	  return NULL;
	  }
	}
      }
    }
    else
       {
	if(user_pos[1]<node->pos[1])
	 {
	   if(user_pos[1]==node->pos[1]-1)
	    {
	     t=node;
	     int i=2;
	     while(i--)
	     t=t->d;
	     t=t->l;
	     if(strcmp(t->pos,user_pos)!=0)
	  {
	  invalid();
	  return NULL;
	  }
	     }
	    else
	       {
		t=node;
		int i=2;
		while(i--)
		t=t->l;
		t=t->d;
		if(strcmp(t->pos,user_pos)!=0)
		{
		invalid();
		return NULL;
		}
	       }
	 }
	 else
	   {
	    if(user_pos[1]==node->pos[1]+1)
	     {
	      t=node;
	      int i=2;
	      while(i--)
	      t=t->d;
	      t=t->r;
	      if(strcmp(t->pos,user_pos)!=0)
		{
		invalid();
		return NULL;
		}
	      }
	     else
		{
		 t=node;
		 int i=2;
		 while(i--)
		 t=t->r;
		 t=t->d;
		 if(strcmp(t->pos,user_pos)!=0)
		{
		invalid();
		return NULL;
		}
		}
	   }
       }
       return t;
 }
else if(node->c_name[1]=='S')
{
  if(node->c_name[0]=='W'&&node->pos[0]<user_pos[0])
    {
      invalid();
      return NULL;
    }
     if(node->c_name[0]=='B'&&node->pos[0]>user_pos[0])
    {
      invalid();
      return NULL;
    }
  if(node->c_name[0]=='W'&&node->pos[1]==user_pos[1]&&t->u->c_name[0]==' '&&node->pos[0]=='g'&&node->pos[0]==user_pos[0]+2)
  {t=t->u;t=t->u;}
  else if(node->c_name[0]=='B'&&node->pos[1]==user_pos[1]&&t->d->c_name[0]==' '&&node->pos[0]=='b'&&node->pos[0]==user_pos[0]-2)
  {t=t->d;t=t->d;}
  else if(node->c_name[0]=='W'&&node->pos[1]==user_pos[1]&&t->u->c_name[0]==' '&&node->pos[0]!='g'&&node->pos[0]==user_pos[0]+2)
  return NULL;
  else if(node->c_name[0]=='B'&&node->pos[1]==user_pos[1]&&t->d->c_name[0]==' '&&node->pos[0]!='b'&&node->pos[0]==user_pos[0]-2)
  return NULL;
  else if(node->c_name[0]=='W'&&node->pos[1]==user_pos[1]&&t->u->c_name[0]==' ')
    t=t->u;
  else if(node->c_name[0]=='B'&&node->pos[1]==user_pos[1]&&t->d->c_name[0]==' ')
    t=t->d;
  else if(node->c_name[0]=='W'&&node->pos[1]==user_pos[1]-1&&node->urc->c_name[0]=='B')
    t=t->urc;
  else if(node->c_name[0]=='B'&&node->pos[1]==user_pos[1]-1&&node->drc->c_name[0]=='W')
    t=t->drc;
  else if(node->c_name[0]=='W'&&node->pos[1]==user_pos[1]+1&&node->ulc->c_name[0]=='B')
    t=t->ulc;
  else if(node->c_name[0]=='B'&&node->pos[1]==user_pos[1]+1&&node->dlc->c_name[0]=='W')
    t=t->dlc;
  else
    return NULL;
    return t;
}
else if(node->c_name[1]=='K')
{
  if(node->pos[1]==user_pos[1]&&user_pos[0]==node->pos[0]-1)
    t=t->u;
  else if(node->pos[1]==user_pos[1]&&node->pos[0]==user_pos[0]-1)
    t=t->d;
  else if(node->pos[0]==user_pos[0]&&node->pos[1]==user_pos[1]+1)
    t=t->l;
  else if(node->pos[0]==user_pos[0]&&node->pos[1]==user_pos[1]-1)
    t=t->r;
  else if(node->pos[0]==user_pos[0]+1&&node->pos[1]==user_pos[1]+1)
    t=t->ulc;
  else if(node->pos[0]==user_pos[0]+1&&node->pos[1]==user_pos[1]-1)
    t=t->urc;
  else if(node->pos[0]==user_pos[0]-1&&node->pos[1]==user_pos[1]+1)
    t=t->dlc;
  else if(node->pos[0]==user_pos[0]-1&&node->pos[1]==user_pos[1]-1)
    t=t->drc;
  else
  return NULL;
  return t;
}
else if(node->c_name[1]=='Q')
{
if(user_pos[0]==node->pos[0])
{
if(user_pos[1]<node->pos[1])
{
t=node;t=t->l;
while(t!=NULL&&strcmp(user_pos,t->pos)!=0)
{
if(strcmp(t->c_name,"  ")==0)
t=t->l;
else
{
flag=1;break;}}}
else
{
t=node;t=t->r;
while(t!=NULL&&strcmp(user_pos,t->pos)!=0)
{
if(strcmp(t->c_name,"  ")==0)
t=t->r;
else
{flag=1;break;}}}
}
else if(user_pos[1]==node->pos[1])
{
if(user_pos[0]<node->pos[0])
{
t=node;t=t->u;
while(t!=NULL&&strcmp(user_pos,t->pos)!=0)
{
if(strcmp(t->c_name,"  ")==0)
t=t->u;
else
{
flag=1;break;}}}
else
{
t=node;t=t->d;
while(t!=NULL&&strcmp(user_pos,t->pos)!=0)
{
if(strcmp(t->c_name,"  ")==0)
t=t->d;
else
{flag=1;break;}}}
}
else if(user_pos[0]<node->pos[0])
{
if(user_pos[1]<node->pos[1])
{t=node;t=t->ulc;
while(t!=NULL&&strcmp(user_pos,t->pos)!=0)
{if(strcmp(t->c_name,"  ")==0)
t=t->ulc;
else
{
flag=1;break;
}}}
else
{
t=node;t=t->urc;
while(t!=NULL&&strcmp(user_pos,t->pos)!=0)
{
if(strcmp(t->c_name,"  ")==0)
t=t->urc;
else
{flag=1;break;}}}
}
else
{
if(user_pos[1]<node->pos[1])
{
t=node;t=t->dlc;
while(t!=NULL&&strcmp(user_pos,t->pos)!=0)
{if(strcmp(t->c_name,"  ")==0)
t=t->dlc;
else
{
flag=1;break;
}}}
else
{
t=node;t=t->drc;
while(t!=NULL&&strcmp(user_pos,t->pos)!=0)
{
if(strcmp(t->c_name,"  ")==0)
t=t->drc;
else
{
flag=1;break;}}}
}
if(flag==1)
return NULL;
else
return t;
}
}

int valid_pos()
{
chess *node=final_node();
if(node==NULL)
{
invalid();
return 0;
}
else
{
if(user_c[0]!=node->c_name[0])
return 1;
else
return 0;
}
}

void change_coin(chess *t)
{
 char q[5];
 chess *s;
 s=find_node();
 if(strcmp(t->c_name,"  ")==0)
   {
   strcpy(t->c_name,user_c);
   strcpy(s->c_name,"  ");
   }
 else
   {
   strcpy(q,t->c_name);
   strcpy(t->c_name,user_c);
   strcpy(s->c_name,"  ");
   if(q[0]=='W')
   wcount++;
   else
   bcount++;
   }
 return;
}

char kc1[10],kc2[10],kc3[10],kc4[10];
int check(chess *t)
{
if(t==NULL||t->c_name[1]!='K')
return 0;
/*if(t->c_name[1]=='K')
{
if(strcmp(kc1,s->c_name)==0&&strcmp(kc2,s->pos)==0&&strcmp(kc3,t->pos)==0&&strcmp(kc4,t->c_name)==0)
{
clrscr();
printf("\n\n\n\n\t\t\t\tCHECK MATE!");
Sleep(40);
return 5;
}
else
{
strcpy(kc1,s->c_name);strcpy(kc2,s->pos);strcpy(kc3,t->pos);strcpy(kc4,t->c_name);
}
printf("\n\n\n\n\n\t\t\t\t\tCHECK!");
Sleep(40);
return 1;
}*/
else
return 1;
}

void change_queen(chess *t,int i)
{
char c[10];
z:clrscr();
printf("\n\n\n\n\n\t\t\tEnter the Coin Name that you want to change the soldier to:");
scanf("%s",c);
if(i==1)
{
if(c[0]=='W')
strcpy(t->c_name,c);
else
{
clrscr();
printf("\n\n\n\n\n\t\t\tEnter a coin belonging to you not your opponent.");
Sleep(40);
goto z;
}
}
else
{
if(c[0]=='B')
strcpy(t->c_name,c);
else
{
clrscr();
printf("\n\n\n\n\n\t\t\tEnter a coin belonging to you not your opponent.");
Sleep(40);
goto z;
}
}
return;
}

void soldier()
{
int i;
chess *t1=h1,*t8=h8;
while(t1!=NULL)
{
if(t1->c_name[1]=='S')
change_queen(t1,1);
t1=t1->r;
}
while(t8!=NULL)
{
if(t8->c_name[1]=='S')
change_queen(t1,2);
t8=t8->r;
}
}

void display()
{
clrscr();
chess *t1=h1,*t2=h2,*t3=h3,*t4=h4,*t5=h5,*t6=h6,*t7=h7,*t8=h8;
printf("\t1  \t2  \t3  \t4  \t5  \t6  \t7  \t8\n\n");
printf("a\t");
while(t1!=NULL)
{
printf("%s\t",t1->c_name);
t1=t1->r;
}
printf("\n\n");
printf("b\t");
while(t2!=NULL)
{
printf("%s\t",t2->c_name);
t2=t2->r;
}
printf("\n\n");
printf("c\t");
while(t3!=NULL)
{
printf("%s\t",t3->c_name);
t3=t3->r;
}
printf("\n\n");
printf("d\t");
while(t4!=NULL)
{
printf("%s\t",t4->c_name);
t4=t4->r;
}
printf("\n\n");
printf("e\t");
while(t5!=NULL)
{
printf("%s\t",t5->c_name);
t5=t5->r;
}
printf("\n\n");
printf("f\t");
while(t6!=NULL)
{
printf("%s\t",t6->c_name);
t6=t6->r;
}
printf("\n\n");
printf("g\t");
while(t7!=NULL)
{
printf("%s\t",t7->c_name);
t7=t7->r;
}
printf("\n\n");
printf("h\t");
while(t8!=NULL)
{
printf("%s\t",t8->c_name);
t8=t8->r;
}
}
void message()
{
printf("\n\n\n\n\tWelcome to TWO PLAYER CHESS GAME!\n\tRules are simple!\n\tYou must be well aware of the game to play it here!\nEnter 'exit' to get out anytime!\nEnter 'cast' for doing castling!\n\n\tBoth players must be aware of who is moving the coin!\nThe compiler will not judge it!");Sleep(150);
return;
}

void castling(int code)
{
chess *t1=h1,*t,*t8=h8,*s=h1;
int i,a,b,flag=0;char c[10];
if(code==1)
{
i=4;
while(i--)
t1=t1->r;
t=t1;
if(t1->c_name[1]=='K')
a=1;
else
a=0;
i=1;
t1=t1->r;
while(i--)
{
if(strcmp(t1->c_name,"  ")==0)
t1=t1->r;
else
{
flag=1;
break;
}
}
if(flag==0)
{
t1=t1->r;
if(t1->c_name[1]=='R')
b=1;
else
b=0;
if(a&&b)
{
strcpy(t->c_name,"  ");
t=t->r;
strcpy(t1->c_name,"  ");
t1=t1->l;
strcpy(t->c_name,"BR2");
strcpy(t1->c_name,"BK");
return;
}
}
else
{
clrscr();
printf("\n\n\n\n\n\nCASTLING CANNOT BE DONE.OPPONENT WAKE UP!HE/SHE IS DOING AN ILLEGAL MOVE.");
return;
}
}
else
{
i=4;
while(i--)
t8=t8->r;
t=t8;
if(t8->c_name[1]=='K')
a=1;
else
a=0;
i=1;
t8=t8->r;
while(i--)
{
if(strcmp(t8->c_name,"  ")==0)
t8=t8->r;
else
{
flag=1;
break;
}
}
if(flag==0)
{
t8=t8->r;
if(t8->c_name[1]=='R')
b=1;
else
b=0;
if(a&&b)
{
strcpy(t->c_name,"  ");t=t->r;
strcpy(t8->c_name,"  ");
t8=t8->l;
strcpy(t->c_name,"WR2");
strcpy(t8->c_name,"WK");
return;
}
}
else
{
clrscr();
printf("\n\n\tCASTLING CANNOT BE DONE.OPPONENT WAKE UP!HE/SHE IS DOING AN ILLEGAL MOVE.");
return;
}
}
}

void main()
{
int kcheck;static int kcheck1=0,i=1,l;char user_check[10],che[10];
chess *a;
clrscr();
message();
create();
verticallink();
crosslink1();
crosslink2();
while(1)
{
soldier();
display();
printf("\nEnter coin name:");
scanf("%s",user_c);
if(strcmp(user_c,"cast")==0)
{
clrscr();
printf("Enter 1 for black and 2 white:");
scanf("%d",&l);
castling(l);
Sleep(40);
continue;
}
else if(strcmp(user_c,"exit")!=0)
{
printf("Enter position:");
scanf("%s",user_pos);
printf("WANT TO SAY CHECK(yes/no):");
scanf("%s",user_check);
if(strcmp(user_check,"yes")==0)
{
chess *t;
printf("ENTER THE CODE(COIN NAME) OF OPPONENT'S KING:");
scanf("%s",che);
t=find_node1(che);
kcheck=check(t);
if(kcheck==0&&kcheck1==0)
{
kcheck1=kcheck;
clrscr();
printf("\n\n\n\n\n\t\tBETTER LUCK NEXT TIME!");
Sleep(40);
continue;
}
else if(kcheck==1&&kcheck1==0)
{
kcheck1=kcheck;
clrscr();
printf("\n\n\n\n\n\t\tCHECK!");
Sleep(40);
}
else
{
clrscr();
printf("\n\n\n\n\n\t\tCHECK MATE!");
Sleep(40);
goto b;
}
}
else
{}
}
else
{
printf("Thank YOU!");
goto b;
}
if(valid_pos())
a=final_node();
else
{
invalid();
continue;
}
if(a!=NULL)
change_coin(a);
}
b:getch();
return;
}
