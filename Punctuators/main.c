//
//  main.c
//  Punctuators
//
//  Created by Александр Черный on 10.09.13.
//  Copyright (c) 2013 Alexander Chenryy. All rights reserved.
//

#include <stdio.h>

int digraphs(int argc, const char * argv[]);
int trigraphs(int argc, const char * argv[]);

int whoFramedRogerRabbitSpolier();

int main(int argc, const char * argv[])
{
	digraphs(argc, argv);
	trigraphs(argc, argv);
	
	whoFramedRogerRabbitSpolier();
		
	return 0;
}