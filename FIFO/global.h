#ifndef GLOBAL_H
#define GLOBAL_H

#include<stdio.h>
#include <stdlib.h>

typedef struct tagQueueFIFO
{
	int nKey;
	tagQueueFIFO* pNext;
}QFIFOItem;

typedef struct 
{
	QFIFOItem* pHead; // na pierwszy element kolejki
	QFIFOItem* pTail; // na ostatni element kolejki 

}QueueFIFO;



int QfCreate( QueueFIFO* q); // inicjalizuje kolejke zwraca 1 i 0 
int QFEmpty( QueueFIFO* q );	// zwraca 1 gdy pusta, else 0
void QFEnqueue( QueueFIFO* q, int x );// wstawia na koniec kolejki
int QFDequeue( QueueFIFO* q ); //nie zwalnia pamieci, tylko zwraca wskaznik i wstawia tam NULL	  = sciagniecie ala pop
void QFClear( QueueFIFO* q ); //czysci wszystkie podlaczone elementy dynamiczne- czysci kolejke, ustawia head i tail na nulla
void QFRemove( QueueFIFO* q );	//czysci cala kolejke, usuwa ja 
void QFDel( QueueFIFO* q );// usuwa tylko pierwszy element
void QFPrint( QueueFIFO q );



#endif
