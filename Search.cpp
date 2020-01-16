#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#include "prototypes.h"
#include "functions.cpp"


//int currentSize=0;

DATA s = std_array[MAX];

void search_stdnt(char *text, search_t type)
{	int head=0, i; 

	//DATA s = stdnt[x];

	if(type==F_NAME)
	{	for(int i=0; i<currentSize; i++)
		{	if(strcmp(text, std_array[i].f_name)==0)
			{	++head;
				if(head==1)
					heading();
			}
			display(i);
		}
	}
	else
		printf("\n\n !!Sorry, Invalid Input!!");
		
		
	if(type==L_NAME)
	{	for(int i=0; i<currentSize; i++)
		{	if(strcmp(text, std_array[i].l_name)==0)
			{	++head;
				if(head==1)
					heading();
			}
			display(i);
		}
	}
	else
		printf("\n\n !!Sorry, Invalid Input!!");
		
		
	if(type==N_NAME)
	{	for(int i=0; i<currentSize; i++)
		{	if(strcmp(text, std_array[i].n_name)==0)
			{	++head;
				if(head==1)
					heading();
			}
			display(i);
		}
	}
	else
		printf("\n\n !!Sorry, Invalid Input!!");

	
	if(type==C_NAME)
	{	for(int i=0; i<currentSize; i++)
		{	if(strcmp(text, std_array[i].c_name)==0)
			{	++head;
				if(head==1)
					heading();
			}
			display(i);
		}
	}
	else
		printf("\n\n !!Sorry, Invalid Input!!");


	if(type==B_G)
	{	for(int i=0; i<currentSize; i++)
		{	if(strcmp(text, std_array[i].b_g)==0)
			{	++head;
				if(head==1)
					heading();
			}
			display(i);
		}
	}
	else
		printf("\n\n !!Sorry, Invalid Input!!");


	if(type==EMAIL)
	{	for(int i=0; i<currentSize; i++)
		{	if(strcmp(text, std_array[i].email)==0)
			{	++head;
				if(head==1)
					heading();
			}
			display(i);
		}
	}
	else
		printf("\n\n !!Sorry, Invalid Input!!");


	if(type==C_N)
	{	for(int i=0; i<currentSize; i++)
		{	if(strcmp(text, std_array[i].c_n)==0)
			{	++head;
				if(head==1)
					heading();
			}
			display(i);
		}
	}
	else
		printf("\n\n !!Sorry, Invalid Input!!");
}


void search_sim()
{	int check=0, found=0, head=0;
	char sim[20];
	
	for(int i=0; i<currentSize; i++)
	{	strcpy(sim, s.c_n);
		if(sim[0]==0 && sim[1]==1)
		{	if(sim[2]==3 || sim[2]==7 || sim[2]==5 || sim[2]==6 ||sim[2]==8 || sim[2]==9)
				check=1;
		
			if(check=0)
				printf("\n\n !!Sorry, Invalid Operator!!");
			
		}
	}
			if(sim==GP)
			{	for(i=0;i<currentSize;i++)
				{	strcpy(sim, s.c_n);
					if(sim[0]==0 && sim[1]==1)
					{	if(sim[2]==3 || sim[2]==7)
							++found;
					}
					if(found>0)
					{	++head;
						if(head==1)
							display(i);
					}
					else
						printf("\n\n\n !!Sorry, No Grameen Phone User Found!!");
				}
			}
			
			
			if(sim==Teletalk)
			{	for(i=0;i<currentSize;i++)
				{	strcpy(sim, s.c_n);
					if(sim[0]==0 && sim[1]==1)
					{	if(sim[2]==5)
							++found;
					}
					if(found>0)
					{	++head;
						if(head==1)
							display(i);
					}
					else
						printf("\n\n\n !!Sorry, No Teletalk User Found!!");
				}
			}


			if(sim==Airtel)
			{	for(i=0;i<currentSize;i++)
				{	strcpy(sim, s.c_n);
					if(sim[0]==0 && sim[1]==1)
					{	if(sim[2]==6)
							++found;
					}
					if(found>0)
					{	++head;
						if(head==1)
							display(i);
					}
					else
						printf("\n\n\n !!Sorry, No Airtel User Found!!");
				}
			}


			if(sim==Robi)
			{	for(i=0;i<currentSize;i++)
				{	strcpy(sim, s.c_n);
					if(sim[0]==0 && sim[1]==1)
					{	if(sim[2]==8)
							++found;
					}
					if(found>0)
					{	++head;
						if(head==1)
							display(i);
					}
					else
						printf("\n\n\n !!Sorry, No Robi User Found!!");
				}
			}


			if(sim==Banglalink)
			{	for(i=0;i<currentSize;i++)
				{	strcpy(sim, s.c_n);
					if(sim[0]==0 && sim[1]==1)
					{	if(sim[2]==9)
							++found;
					}
					if(found>0)
					{	++head;
						if(head==1)
							display(i);
					}
					else
						printf("\n\n\n !!Sorry, No Banglalink User Found!!");
				}
			}

}
