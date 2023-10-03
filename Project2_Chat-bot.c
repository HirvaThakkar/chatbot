#include<stdio.h>
#include<string.h>
#include<process.h>
main()
{
	char in[1000],opt[5],fb[1000],name[50],email[50],num[15],opt2[5];
	int opt3,opt4,opt5,opt6,opt7;
	printf("\n                          Welcome To The Chatbot Of XYZ College");
	printf("\n             We Have Tried Our Best To Provide You With An Informative Platform");
	while(1)
	{
		fflush(stdin);
		printf("\n\nHello Everyone !! This is XYZ This Side.\nWe Hope You Get The Information You Are Looking For...");
		printf("\n\nYou Can Ask About Your Query Here, or Enter 'Quit' if You Want to Exit.");
		printf("\nIt Would Become Better For us to Communicate if The Query Has Been Explained Properly.");
		printf("\n\nWrite Here or Enter 1 to Exit :");
		gets(in);
		if(strcmpi(in,"quit")==0 || strcmpi(in,"1")==0)
		{
			system("cls");
			printf("\nThank-you For Visiting Our Chat-bot.\nWe Hope You Had a Good Experience.");
			printf("\n\nIt Would Be Thankful of You if You Could Give a Feedback About Your Experience. Thank-you.");
			fflush(stdin);
			printf("\n\nDo You Want To Give a Feedback (yes or no) ?");
			gets(opt);
			if(strcmpi(opt,"yes")==0)
			{
				system("cls");
				fflush(stdin);
				printf("\nPlease Enter Your Feedback Here. We Will Try Our Best To Improve.");
				printf("\n\nFeedback :");
				gets(fb);
				printf("\n\nThank-you For The Feedback.");
				sleep(1);
				goto end;
			}
			else
			{
				system("cls");
				printf("\nThank-you For Using Our Chatbot.");
				sleep(1);
				goto end;
			}
		}
		
		else if(strstr(in,"admission")!=NULL)
		{
			system("cls");
			printf("\nOur Admission Structure is as Follows :");
			printf("\n\nXYZ College Has Four Departments For Diploma Engineering.");
			printf("\n1.Computer Department \n2.IT Department \n3.Auto-Mobile Department \n4.Bio-Medical Department");
			printf("\n\nFor More Information on the Courses And Deparments , Please Ask For Courses in Query.");
			printf("\n\nThe Admission Process of This College is as Follows :");
			printf("\n1.Offline Process : If You Want to Follow the Admission Process Offline , You Can Visit Our Admission Office.");
			printf("\n                   You Can Enter The Campus From Gate Number-2.");
			printf("\n                   All The Information Along With Admission Form Will Be Provided There.");
			printf("\n\n2.Online Process : A Link Will Be Provided To You By Our College's Website After You Fill Up The Form Give Below.");
		    printf("\n                   All The Information For Admission , Along With The Admission Form Will Be Provided There.");
		    printf("\n                   We Asure You That The Information Given By You Will Be Kept Safe And Protected.");
			printf("\n\nDo You Want to Continue or Exit (yes or no) ?");
		    gets(opt2);
		    if(strcmp(opt2,"yes")==0)
		    {
		    	fflush(stdin);
		    	printf("\nFull Name    :");
		    	gets(name);
		    	fflush(stdin);
		    	printf("\nE-mail       :");
			    gets(email);
			    fflush(stdin);
		    	printf("\nPhone Number :");
		    	gets(num);
		    	printf("\n\nThe Link Will Be Sent To You.\nThank-you.");
		    	printf("\n\nPress 1 to Continue :");
		    	scanf("%d",&opt3);
		    	if(opt3==1)
		    	{
		    		system("cls");
		    		continue;
				}
			}
			else
			{
				system("cls");
				continue;
			}
		}
		
		else if(strstr(in,"department")!=NULL || strstr(in,"course")!=NULL || strstr(in,"program")!=NULL)
		{
			up :
			system("cls");
			printf("\nXYZ College Has Four Departments/Courses for Diploma Engineering.");
			printf("\n1.Computer Department \n2.IT Department \n3.Auto-Mobile Department \n4.Bio-Medical Department");
			printf("\n\nEnter The Department/Course's Number For More Information. Enter 5 To Exit :");
			scanf("\n%d",&opt4);
			if(opt4==1)
			{
				system("cls");
				printf("\n                  Computer Department");
				printf("\n\n A Diploma in Computer Engineering Will Equip You With The Skills to Program in Various Languages And Makes You Employable in the Field.");
				printf("\nOur College Provides You With a Course Approved By GTU And Well Educated Faculty.");
				printf("\n\nEnter 1 if You Want to Explore More Courses.\nEnter 2 to Exit :");
				scanf("%d",&opt5);
				if(opt5==2)
				{
					system("cls");
					continue;
				}
				else if(opt5==1)
				{
					goto up;
				}
			}
			else if(opt4==2)
			{
				system("cls");
				printf("\n                      IT Department");
				printf("\n\nA Diploma in IT or Diploma in Information Technology is an Undergraduate Diploma Course of Three-year.");
				printf("\nOur College Provides You With a Course Approved By GTU And Well Educated Faculty.");
				printf("\n\nEnter 1 if You Want to Explore More Courses.\nEnter 2 to Exit :");
				scanf("%d",&opt5);
				if(opt5==2)
				{
					system("cls");
					continue;
				}
				else if(opt5==1)
				{
					goto up;
				}
			}
			else if(opt4==3)
			{
				system("cls");
				printf("\n                  Auto-Mobile Department");
				printf("\nA Diploma in Automobile Engineering is a Specialised Undergraduate Course Offered by Academic Institutions.");
				printf("\nOur College Provides You With a Course Approved By GTU And Well Educated Faculty.");
				printf("\n\nEnter 1 if You Want to Explore More Courses.\nEnter 2 to Exit :");
				scanf("%d",&opt5);
				if(opt5==2)
				{
					system("cls");
					continue;
				}
				else if(opt5==1)
				{
					goto up;
				}
			}
			else if(opt4==4)
			{
				system("cls");
				printf("\n                  Bio-medical Department");
				printf("\nThis Diplomaa Course is All About Getting Comprehensive Knowledge About Medical Technology Along With Engineering Techniques.");
				printf("\nOur College Provides You With a Course Approved By GTU And Well Educated Faculty.");
				printf("\n\nEnter 1 if You Want to Explore More Courses.\nEnter 2 to Exit :");
				scanf("%d",&opt5);
				if(opt5==2)
				{
					system("cls");
					continue;
				}
				else if(opt5==1)
				{
					goto up;
				}
			}
			else if(opt4==5)
			{
				system("cls");
				continue;
			}
		}
		
		else if(strstr(in,"fee")!=NULL || strstr(in,"finance")!=NULL || strstr(in,"financial")!=NULL || strstr(in,"money")!=NULL || strstr(in,"scholarship")!=NULL)
		{
			up2 :
			system("cls");
			printf("\nThe Fees Structure Of XYZ College Can Be Provided To You Directly From The Admission Office Of Our College.");
			printf("\n\nOur College Also Supports Some of the Scholarship Programs Approved By Government.");
			printf("\n\nA List Of Those Scholarships is Given Below :");
			printf("\n\n1.Mukhyamantri Yuva Swavalamban Yojana \n2.Instrumental Assistance for Medical, Engineering, Diploma Students (SEBC) \n3.Post Matric Scholarship for SC Girl Students");
			printf("\n\nFor Information About These Scholarships, Enter Respective Number.\nEnter 4 to Exit :");
			scanf("%d",&opt6);
			if(opt6==2)
			{
				system("cls");
				printf("\n   Instrumental Assistance for Medical, Engineering, Diploma Students (SEBC)");
				printf("\n\n>> EDUCATION REQUIREMENT FOR THIS SCHEME :");
				printf("\nMedical, Engineering and Diploma.");
				printf("\n\n>> ANNUAL INCOME OF FAMILY :");
				printf("\nMust Be Below 2.50 Lakh.");
				printf("\n\n>> CATEGORY :");
				printf("\nSEBC");
				printf("\n\nEnter 1 if You Want to Explore More Schemes.\nEnter 2 to Exit :");
				scanf("%d",&opt7);
				if(opt7==2)
				{
					system("cls");
					continue;
				}
				else if(opt7==1)
				{
					goto up2;
				}
			}
			if(opt6==1)
			{
				system("cls");
				printf("\n         Mukhyamantri Yuva Swavalamban Yojana");
				printf("\n\n>> EDUCATION REQUIREMENT FOR THIS SCHEME :");
				printf("\nFirst-year Degree/ Diploma Students Who Have Secured at-least 80 Percent in 10th or 12th.");
				printf("\nDegree Students Who Have taken Admission After Diploma Course With 65 Percent marks.");
				printf("\n\n>> ANNUAL INCOME OF FAMILY :");
				printf("\nMust Be Below 6 Lakh.");
				printf("\n\n>> CATEGORY :");
				printf("\nOpen Category");
				printf("\n\nEnter 1 if You Want to Explore More Schemes.\nEnter 2 to Exit :");
				scanf("%d",&opt7);
				if(opt7==2)
				{
					system("cls");
					continue;
				}
				else if(opt7==1)
				{
					goto up2;
				}
			}
			if(opt6==3)
			{
				system("cls");
				printf("\n      Post Matric Scholarship for SC Girl Students");
				printf("\n\n>> EDUCATION REQUIREMENT FOR THIS SCHEME :");
				printf("\nDegree or Diploma Courses.");
				printf("\n\n>> ANNUAL INCOME OF FAMILY :");
				printf("\nMust Be Below 2.5 Lakh.");
				printf("\n\n>> CATEGORY :");
				printf("\nST");
				printf("\n\nEnter 1 if You Want to Explore More Schemes.\nEnter 2 to Exit :");
				scanf("%d",&opt7);
				if(opt7==2)
				{
					system("cls");
					continue;
				}
				else if(opt7==1)
				{
					goto up2;
				}
			}
			if(opt6==4)
			{
				system("cls");
				continue;
			}
		}
	}
	
	end :
	system("cls");
	printf("\nThank-you For Using Our Website.");
	printf("\nOur Main Aim is to Provide Everyone With Proper Information. We Hope You Had a Good Experience Using This Chatbot.");
	printf("\n\nWe Thank-you For The Support. For More Information About Our College , You Can Visit Our Website Or Can Also Visit Our  Admission Office.");
	printf("\n\n             Hoping  To Seeing You Soon...");
}
