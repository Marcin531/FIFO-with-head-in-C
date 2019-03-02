
// Implementacja kolejki FIFO z glowa przy uzyciu wskaznikow
// Implementation of FIFO queue with head using the pointers

#include "pch.h"
#include<stdio.h>
#include"global.h"


int main()
{

	QueueFIFO queue;

	if( !QfCreate( &queue ) )
	{
		perror( "NIE MOZNA STWORZYC KOLEJKI" );
	}
	


	if( QFEmpty( &queue ) )
		printf( "Kolejka jest pusta\n" );

	printf( "Dodanie 4 elementow\n" );
	QFEnqueue( &queue, 5 );
	QFEnqueue( &queue, 6 );
	QFEnqueue( &queue, 7 );
	QFEnqueue( &queue, 8 );
	QFPrint( queue );

	printf( "Sciagnienie elementu: %d\n", QFDequeue( &queue ) );
	printf( "Sciagnienie elementu: %d\n", QFDequeue( &queue ) );
	printf( "Pierwszy element: %d\n",queue.pHead->pNext->nKey );

	QFPrint( queue );

	printf( "Usuniecie pierwszego elementu: \n" );
	QFDel( &queue );
	QFPrint( queue );

	printf( "Czyszczenie\n" );
	QFClear( &queue );
	
	if( QFEmpty( &queue ) )
		printf( "Kolejka jest pusta\n" );
	printf( "Usuniecie kolejki: \n" );
	QFRemove( &queue );
}