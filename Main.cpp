#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>

#include "prototypes.h"
#include "functions.cpp"
#include "search.cpp"

#define MAX 80


char file[]={"HSC_student.dat"};

main()
{	int ch;
	char text[25];
	
	void readFromFile();
	
	//start:
	
		while(1)
		{	system("cls");
			
			printf("==========>> HSC Student Database System <<==========");
			printf("\n\n --------------------------------------------------");
			printf("\n\n Last saved :");
			printf("\t Date : %s", __DATE__);
			printf("\t Time : %s", __TIME__);
			printf("\n\n ----------------------------------------");
			printf("\n\n 1. Insert New Entry");
			printf("\n 2. Display");
			printf("\n 3. Search");
			printf("\n 4. Save to Database");
			printf("\n 5. Modify");
			printf("\n 6. Delete Info");
			printf("\n 7. Remove Database File");
			printf("\n 8. Exit");
			printf("\n\n --------------------------");
			printf("\n\n Please Enter Your Choice :");
			scanf("%d", &ch);
		
			switch(ch)
			{	case 1: add();
						break;
				case 2: int choice;
				
						startDis:
							
						printf("\n\n\n1. Single or Multiple Student(s)\n2. All Students\n3. Full Payment Info\n4. Dues Info\n5.Not Pay Info\n6.Back");
						printf("\n --------------------------");
						printf("\n\n Please Enter Your Choice :");
						scanf("%d", &choice);
					
						switch(choice)
						{	case 1: displaySM();
									break;
							case 2: displayAll();
									break;
							case 3: displayFull();
									break;
							case 4: displayDues();
									break;
							case 5: display_NotPaid
									break;
							case 6: goto startDis;
									break;
							default:printf("\n\nWrong Choice, Please Try Again.");
						}
				
						break;
				case 3: int selection;
				
						startS:
						
						printf("\n\n\n1. by First Name\n2. by Last Name\n3. by Nick Name\n4. by College Name\n5. by Blood Group\n6. by Email\n7. by Sim\n8.by Contact Number\n9. Back");
						printf("\n\n --------------------------");
						printf("\n\n Please Enter Your Choice :");
						scanf("%d", &selection);
							
						switch(selection)
						{	case 1: printf("\n\n Enter the First Name :");
									scanf("%s", text);
									search_stdnt(text, F_NAME);
									break;
							case 2: printf("\n\n Enter the Last Name :");
									scanf("%s", text);
									search_stdnt(text, L_NAME);
									break;
							case 3: printf("\n\n Enter the Nick Name :");
									scanf("%s", text);
									search_stdnt(text, N_NAME);
									break;
							case 4: printf("\n\n Enter the College Name :");
									scanf("%s", text);
									search_stdnt(text, C_NAME);
									break;
							case 5: printf("\n\n Enter the Blood Group :");
									scanf("%s", text);
									search_stdnt(text, B_G);
									break;
							case 6: printf("\n\n Enter the Email Address :");
									scanf("%s", text);
									search_stdnt(text, EMAIL);
									break;
							case 7: char sim;
							
									searchSm:
									
									printf("\n\n Which Operator You Want to Search?");
									printf("\n\n1. Grameen Phone\t2. Teletalk\t3. Airtel\t4. Robi\t5. Banglalink\t6. Back");
									printf("\n==========", sim);
									
									switch(sim)
									{	case 1: search_sim(GP);
												break;
										case 2: search_sim(Teletalk);
												break;
										case 3: search_sim(Airtel);
												break;
										case 4: search_sim(Robi);
												break;
										case 5: search_sim(Banglalink);
												break;
										case 6: goto searchSm;
												break;
										default:printf("\n Wrong Choice, Please Try Again.");
									}
									break;
							case 8: printf("\n\n Enter the Contact Number :");
									scanf("%s", text);
									search_stdnt(text, C_N);
									break;
							case 9: goto startS;
									break;
							default:printf("\n\nWrong Choice, Please Try Again.");
						}
						break;
			case 4: save();
					break;
			case 5: modify();
					break;
			case 6: del();
					break;
			case 7: fremove();
					break;
			case 8: exit(0);
			default: printf("\n\n Wrong Choice, Please Try Again.");
		}
		
		getch();
		}
		
	
}


//char getch()
//{	char val;
//	char rel;
	
//	scanf("%c", &val);
//	scanf("%c", &rel);
	
//	return(val);
//}
