#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include<string.h>
int main()
{  char type;
int sala,salb,salc,sald,na,nb,nc,nd,ns,a,prev_c,inf_type,data_choice;
float ret,fee,tot,staff,infra,stu,IT,other,inv,tot_f,tot_sal,inf,tot_ex;
float staffe,infrae,stue,ITe,othere,inve,rete,tot_need;
     printf("\n\n\n\n----------------------------------------------------------------------------------------------------------");
    printf("\n\n\n\n\n\n                                      WELCOME TO EDUFINPLAN");
    printf("\n\n\n\n\n\n\n\n\n\n------------------------------------------------------------------------------------------------------------");
    printf("\n");
    printf("\n");system("pause");
    system("cls");
    printf("Hello");
    printf("\nThanks again for using EduFinPlan");
    printf("\nRegards From");
    printf("\nPiyush Baderia");
    printf("\nSonali Sachdev");
    printf("\n Shefali Swatantra");
    printf("\nSarthak Garg");
    printf("\nSpecial Thanks to Mr.Ravi Singhal Sir for helping us out during the entire duration of the project");
    printf("\nPlease Enter Last Year's data");
    printf("\nPlease enter your type of institute");
    printf("\nPress c for college");
    printf("\nPress s for school");
    scanf("%c",&type);
    if(type=='c')
    {
        printf("\nWould you like to use pre defined set of values for expenses and return?");
        printf("\nPress 1 for yes and 2 for no");
        scanf("%d",&a);
        sala=75000;
        salb=91600;
        salc=125000;
        sald=133000;
        printf("Enter no of Employees for grade 1 (bearing salary =75000 approximately)");
        scanf("%d",&na);
        printf("Enter no of Employees for grade 2(bearing salary =91600 approximately)");
        scanf("%d",&nb);
        printf("Enter no of Employees for grade 3(bearing salary =125000 approximately)");
        scanf("%d",&nc);
        printf("Enter no of Employees for grade 4(bearing salary =133000 approximately)");
        scanf("%d",&nd);
        tot_sal=(na*sala)+(nb*salb)+(nc*salc)+(nd*sald);
        printf("\nTotal salary expenses are:%f",tot_sal);
        printf("\nPlease enter last year\'s average fees per student");
        scanf("%f",&fee);
        printf("\nPlease enter no of students last year");
        scanf("%d",&ns);
        if(a ==2){
        printf("\nPlease enter return earned on your investment");
        scanf("%f",&ret);
        printf("\nPlease enter %% of funds you desire to spend on your staff");
        scanf("%f",&staff);
        printf("\nPlease enter %% of funds you desire to spend on your infrastructure");
        scanf("%f",&infra);
        printf("\nPlease enter %% of funds you desire to spend on students(fests and other events)");
        scanf("%f",&stu);
        printf("\nPlease enter %% of funds you desire to spend on IT services");
        scanf("%f",&IT);
        printf("\nPlease enter the %% of funds you desire to spend on miscellaneous expenses of the institute");
        scanf("%f",&other);
        printf("\nPlease enter the  of funds generated by fees you desire to invest");
        scanf("%f",&inv);
        tot_f=fee*ns;
        tot=tot_f+((inv*tot_f/100)*ret/100);
        printf("Total available funds are=%f",tot);
        }
        if(a==1){
            printf("\nPre-defined set of values are as follows");
            printf("\n %% of Return on investment=8.5");
            printf("\n %%of Funds expenditure on staff=25");
            printf("\n %%of Funds expenditure on infrastructure(Maintainence & Expansion)=30");
            printf("\n %% of Funds expenditure on fests and other events=5");
            printf("\n %%of funds for expenditure on IT services=20");
            printf("\n %% of Funds expenditure on Miscellaneous expenses of the institute=10");
            printf("\n %% of funds to be invested=10");
            ret=8.5;
            staff=25;
            infra=30;
            stu=5;
            IT=20;
            inv=10;
            other=10;
            tot_f=fee*ns;
            tot=tot_f+((inv*tot_f/100)*ret/100);
            printf("\nTotal available funds are=%f",tot);
            }
            staffe=staff*tot/100;
            infrae=infra*tot/100;
            stue=stu*tot/100;
            ITe=IT*tot/100;
            inve=inv*tot_f/100;
            rete=ret*inve/100;
            othere=other*tot/100;
            printf("\nExpenditure on Staff=%f",staffe);
            printf("\nExpenditure on Infrastructure=%f",infrae);
            printf("\nExpenditure on Fests and Other Events=%f",stue);
            printf("\nExpenditure on Information Technology Services=%f",ITe);
            printf("\nMiscellaneous Expenses=%f",othere);
            printf("\nFunds Invested=%f",inve);
            printf("\nReturn Earned On Investment=%f",rete);
            printf("\n");
            system("pause");
            system("cls");
            printf("Previous Report is=");
            printf("\nNumber of Employees for grade 1 (bearing salary =75000 approximately)%d",na);
            printf("\nNumber of Employees for grade 2(bearing salary =91600 approximately)%d",nb);
            printf("\nNumber of Employees for grade 3(bearing salary =125000 approximately)%d",nc);
            printf("\nNumber of Employees for grade 4(bearing salary =133000 approximately)%d",nd);
            printf("\nTotal Salary Expenses=%f",tot_sal);
            printf("\nNumber of Students=%d",ns);
            printf("\nAverage Fees per student=%f",fee);
            printf("\n %% of Return on investment=%f",ret);
            printf("\n %%of Funds expenditure on staff=%f",staff);
            printf("\n %%of Funds expenditure on infrastructure(Maintainence & Expansion)=%f",infra);
            printf("\n %% of Funds expenditure on fests and other events=%f",stu);
            printf("\n %%of funds for expenditure on IT services=%f",IT);
            printf("\n %% of Funds expenditure on Miscellaneous expenses of the institute=%f",other);
            printf("\n %% of funds to be invested=%f",inv);
            printf("\nExpenditure on Staff=%f",staffe);
            printf("\nExpenditure on Infrastructure=%f",infrae);
            printf("\nExpenditure on Fests and Other Events=%f",stue);
            printf("\nExpenditure on Information Technology Services=%f",ITe);
            printf("\nMiscellaneous Expenses=%f",othere);
            printf("\nFunds Invested=%f",inve);
            printf("\nReturn Earned On Investment=%f",rete);
            printf("\nIs the above printed report correct");
            printf("\nPress 1 for yes and 2 for no");
            scanf("%d",&prev_c);
            printf("\n");
            system("pause");
            if(prev_c==2)
            {
                printf("\nThe program will exit after you press a key ");
                printf("\nPlease restart the program and enter the correct details");
                printf("\n");
                system("pause");
            }
            if(prev_c==1)
            {
            printf("\nPlease choose the method using which you wish to calculate inflation");
            printf("\nPress 1 for CPI");
            printf("\nPress 2 to calculate using prices of goods");
            scanf("%d",&inf_type);
            if(inf_type==1)
            {float curr_CPI,prev_CPI;
            printf("\nPlease enter last year's CPI");
            scanf("%f",&prev_CPI);
            printf("\nPlease enter current year's CPI");
            scanf("%f",&curr_CPI);
            inf=100*(curr_CPI-prev_CPI)/prev_CPI;
            printf("\nInflation rate is=%f",inf);
            system("pause");
            }
            else if(inf_type==2)
            {
            float prev_price,cur_price;
            printf("\nPlease Enter previous year's price of item ");
            scanf("%d",&prev_price);
            printf("\nPlease enter current price of item ");
            scanf("%d",&cur_price);
            inf=cur_price/prev_price;
            inf=inf*100;
            inf=inf-100;
            printf("\nRate of Inflation is=%f",inf);
            system("pause");
            }
            printf("\nPlease Enter this year's data");
            printf("\nWould you like to use previous year's values for Calculation");
            printf("\nPress 1 for yes 2 for no");
            scanf("%d",&data_choice);
            if(data_choice==1)
            {
                printf("\nPlease Enter No of Students");
                scanf("%d",&ns);
                staffe=staffe+((staffe*inf)/100);
                infrae=infrae+((infrae*inf)/100);
                stue=stue+((stue*inf)/100);
                ITe=ITe+((ITe*inf)/100);
                inve=inve+((inve*inf)/100);
                rete=ret*inve/100;
                othere=othere+((othere*inf)/100);
                tot_ex=staffe+infrae+stue+ITe+inve+othere;
                printf("\nTotal Expenditure is=%f",tot_ex);
                tot_need=tot_ex-rete;
                fee=tot_need/ns;
                printf("\nTotal fund needed are=%f",tot_need);
                printf("\nFees that should be taken per student is=%f",fee);
                system("pause");
                system("cls");
                printf("This year's Report is=");
                printf("\nNumber of Employees for grade 1 (bearing salary =75000 approximately)%d",na);
                printf("\nNumber of Employees for grade 2(bearing salary =91600 approximately)%d",nb);
                printf("\nNumber of Employees for grade 3(bearing salary =125000 approximately)%d",nc);
                printf("\nNumber of Employees for grade 4(bearing salary =133000 approximately)%d",nd);
                printf("\nTotal Salary Expenses=%f",tot_sal);
                printf("\nNumber of Students=%d",ns);
                printf("\nAverage Fees per student=%f",fee);
                printf("\n %% of Return on investment=%f",ret);
                printf("\n %%of Funds expenditure on staff=%f",staff);
                printf("\n %%of Funds expenditure on infrastructure(Maintainence & Expansion)=%f",infra);
                printf("\n %% of Funds expenditure on fests and other events=%f",stu);
                printf("\n %%of funds for expenditure on IT services=%f",IT);
                printf("\n %% of Funds expenditure on Miscellaneous expenses of the institute=%f",other);
                printf("\n %% of funds to be invested=%f",inv);
                printf("\nExpenditure on Staff=%f",staffe);
                printf("\nExpenditure on Infrastructure=%f",infrae);
                printf("\nExpenditure on Fests and Other Events=%f",stue);
                printf("\nExpenditure on Information Technology Services=%f",ITe);
                printf("\nMiscellaneous Expenses=%f",othere);
                printf("\nFunds Invested=%f",inve);
                printf("\nReturn Earned On Investment=%f",rete);
                system("pause");

            }
            if(data_choice==2)
            {
                printf("\nWould you like to use pre defined set of values for expenses and return?");
                printf("\nPress 1 for yes and 2 for no");
                scanf("%d",&a);
                sala=75000;
                salb=91600;
                salc=125000;
                sald=133000;
                printf("Enter no of Employees for grade 1 (bearing salary =75000 approximately)");
                scanf("%d",&na);
                printf("Enter no of Employees for grade 2(bearing salary =91600 approximately)");
                scanf("%d",&nb);
                printf("Enter no of Employees for grade 3(bearing salary =125000 approximately)");
                scanf("%d",&nc);
                printf("Enter no of Employees for grade 4(bearing salary =133000 approximately)");
                scanf("%d",&nd);
                tot_sal=(na*sala)+(nb*salb)+(nc*salc)+(nd*sald);
                printf("\nTotal salary expenses are:%f",tot_sal);
                if(a ==2){
                printf("\nPlease enter return earned on your investment");
                scanf("%f",&ret);
                printf("\nPlease enter %% of funds you desire to spend on your staff");
                scanf("%f",&staff);
                printf("\nPlease enter %% of funds you desire to spend on your infrastructure");
                scanf("%f",&infra);
                printf("\nPlease enter %% of funds you desire to spend on students(fests and other events)");
                scanf("%f",&stu);
                printf("\nPlease enter %% of funds you desire to spend on IT services");
                scanf("%f",&IT);
                printf("\nPlease enter the %% of funds you desire to spend on miscellaneous expenses of the institute");
                scanf("%f",&other);
                printf("\nPlease enter the %% of funds generated by fees you desire to invest");
                scanf("%f",&inv);
                tot_f=fee*ns;
                tot=tot_f+((inv*tot_f/100)*ret/100);
                printf("Total available funds are=%f",tot);
                }
        if(a==1){
            printf("\nPre-defined set of values are as follows");
            printf("\n %% of Return on investment=8.5");
            printf("\n %%of Funds expenditure on staff=25");
            printf("\n %%of Funds expenditure on infrastructure(Maintainence & Expansion)=30");
            printf("\n %% of Funds expenditure on fests and other events=5");
            printf("\n %%of funds for expenditure on IT services=20");
            printf("\n %% of Funds expenditure on Miscellaneous expenses of the institute=10");
            printf("\n %% of funds to be invested=10");
            ret=8.5;
            staff=25;
            infra=30;
            stu=5;
            IT=20;
            inv=10;
            other=10;
            tot_f=fee*ns;
            tot=tot_f+((inv*tot_f/100)*ret/100);
            printf("\nTotal available funds are=%f",tot);
            }
            staffe=staff*tot/100;
            infrae=infra*tot/100;
            stue=stu*tot/100;
            ITe=IT*tot/100;
            inve=inv*tot_f/100;
            rete=ret*inve/100;
            othere=other*tot/100;
            }
            printf("\nPlease Enter No of Students for this year");
            scanf("%d",&ns);
            staffe=staffe+((staffe*inf)/100);
                infrae=infrae+((infrae*inf)/100);
                stue=stue+((stue*inf)/100);
                ITe=ITe+((ITe*inf)/100);
                inve=inve+((inve*inf)/100);
                rete=ret*inve/100;
                othere=othere+((othere*inf)/100);
                tot_ex=staffe+infrae+stue+ITe+inve+othere;
                printf("\nTotal Expenditure is=%f",tot_ex);
                tot_need=tot_ex-rete;
                fee=tot_need/ns;
                printf("\nTotal fund needed are=%f",tot_need);
                printf("\nFees that should be taken per student is=%f",fee);
                system("pause");
                system("cls");
                printf("This year's Report is=");
                printf("\nNumber of Employees for grade 1 (bearing salary =75000 approximately)%d",na);
                printf("\nNumber of Employees for grade 2(bearing salary =91600 approximately)%d",nb);
                printf("\nNumber of Employees for grade 3(bearing salary =125000 approximately)%d",nc);
                printf("\nNumber of Employees for grade 4(bearing salary =133000 approximately)%d",nd);
                printf("\nTotal Salary Expenses=%f",tot_sal);
                printf("\nNumber of Students=%d",ns);
                printf("\nAverage Fees per student=%f",fee);
                printf("\n %% of Return on investment=%f",ret);
                printf("\n %%of Funds expenditure on staff=%f",staff);
                printf("\n %%of Funds expenditure on infrastructure(Maintainence & Expansion)=%f",infra);
                printf("\n %% of Funds expenditure on fests and other events=%f",stu);
                printf("\n %%of funds for expenditure on IT services=%f",IT);
                printf("\n %% of Funds expenditure on Miscellaneous expenses of the institute=%f",other);
                printf("\n %% of funds to be invested=%f",inv);
                printf("\nExpenditure on Staff=%f",staffe);
                printf("\nExpenditure on Infrastructure=%f",infrae);
                printf("\nExpenditure on Fests and Other Events=%f",stue);
                printf("\nExpenditure on Information Technology Services=%f",ITe);
                printf("\nMiscellaneous Expenses=%f",othere);
                printf("\nFunds Invested=%f",inve);
                printf("\nReturn Earned On Investment=%f",rete);
                system("pause");

            }}
            if(type=='s')
            {
        printf("\nWould you like to use pre defined set of values for expenses and return?");
        printf("\nPress 1 for yes and 2 for no");
        scanf("%d",&a);
        printf("\n Enter salary for grade 1");
        scanf("%d",&sala);
        printf("\n Enter salary for grade 2");
        scanf("%d",&salb);
        printf("\n Enter Salary for grade 3");
        scanf("%d",&salc);
        printf("\n Enter Salary for Grade 4");
        scanf("%d",&sald);
        printf("Enter no of Employees for grade 1 (bearing salary =%d approximately)",sala);
        scanf("%d",&na);
        printf("Enter no of Employees for grade 2(bearing salary =%d approximately)",salb);
        scanf("%d",&nb);
        printf("Enter no of Employees for grade 3(bearing salary =%d approximately)",salc);
        scanf("%d",&nc);
        printf("Enter no of Employees for grade 4(bearing salary =%d approximately)",sald);
        scanf("%d",&nd);
        tot_sal=(na*sala)+(nb*salb)+(nc*salc)+(nd*sald);
        printf("\nTotal salary expenses are:%f",tot_sal);
        printf("\nPlease enter last year\'s average fees per student");
        scanf("%f",&fee);
        printf("\nPlease enter no of students last year");
        scanf("%d",&ns);
        if(a ==2){
        printf("\nPlease enter return earned on your investment");
        scanf("%f",&ret);
        printf("\nPlease enter %% of funds you desire to spend on your staff");
        scanf("%f",&staff);
        printf("\nPlease enter %% of funds you desire to spend on your infrastructure");
        scanf("%f",&infra);
        printf("\nPlease enter %% of funds you desire to spend on students(fests and other events)");
        scanf("%f",&stu);
        printf("\nPlease enter %% of funds you desire to spend on IT services");
        scanf("%f",&IT);
        printf("\nPlease enter the %% of funds you desire to spend on miscellaneous expenses of the institute");
        scanf("%f",&other);
        printf("\nPlease enter the  of funds generated by fees you desire to invest");
        scanf("%f",&inv);
        tot_f=fee*ns;
        tot=tot_f+((inv*tot_f/100)*ret/100);
        printf("Total available funds are=%f",tot);
        }
        if(a==1){
            printf("\nPre-defined set of values are as follows");
            printf("\n %% of Return on investment=8.5");
            printf("\n %%of Funds expenditure on staff=25");
            printf("\n %%of Funds expenditure on infrastructure(Maintainence & Expansion)=30");
            printf("\n %% of Funds expenditure on fests and other events=5");
            printf("\n %%of funds for expenditure on IT services=20");
            printf("\n %% of Funds expenditure on Miscellaneous expenses of the institute=10");
            printf("\n %% of funds to be invested=10");
            ret=8.5;
            staff=25;
            infra=30;
            stu=5;
            IT=20;
            inv=10;
            other=10;
            tot_f=fee*ns;
            tot=tot_f+((inv*tot_f/100)*ret/100);
            printf("\nTotal available funds are=%f",tot);
            }
            staffe=staff*tot/100;
            infrae=infra*tot/100;
            stue=stu*tot/100;
            ITe=IT*tot/100;
            inve=inv*tot_f/100;
            rete=ret*inve/100;
            othere=other*tot/100;
            printf("\nExpenditure on Staff=%f",staffe);
            printf("\nExpenditure on Infrastructure=%f",infrae);
            printf("\nExpenditure on Fests and Other Events=%f",stue);
            printf("\nExpenditure on Information Technology Services=%f",ITe);
            printf("\nMiscellaneous Expenses=%f",othere);
            printf("\nFunds Invested=%f",inve);
            printf("\nReturn Earned On Investment=%f",rete);
            printf("\n");
            system("pause");
            system("cls");
            printf("Previous Report is=");
            printf("\nNumber of Employees for grade 1 (bearing salary =%d approximately)%d",sala,na);
            printf("\nNumber of Employees for grade 2(bearing salary =%d approximately)%d",salb,nb);
            printf("\nNumber of Employees for grade 3(bearing salary =%d approximately)%d",salc,nc);
            printf("\nNumber of Employees for grade 4(bearing salary =%d approximately)%d",sald,nd);
            printf("\nTotal Salary Expenses=%f",tot_sal);
            printf("\nNumber of Students=%d",ns);
            printf("\nAverage Fees per student=%f",fee);
            printf("\n %% of Return on investment=%f",ret);
            printf("\n %%of Funds expenditure on staff=%f",staff);
            printf("\n %%of Funds expenditure on infrastructure(Maintainence & Expansion)=%f",infra);
            printf("\n %% of Funds expenditure on fests and other events=%f",stu);
            printf("\n %%of funds for expenditure on IT services=%f",IT);
            printf("\n %% of Funds expenditure on Miscellaneous expenses of the institute=%f",other);
            printf("\n %% of funds to be invested=%f",inv);
            printf("\nExpenditure on Staff=%f",staffe);
            printf("\nExpenditure on Infrastructure=%f",infrae);
            printf("\nExpenditure on Fests and Other Events=%f",stue);
            printf("\nExpenditure on Information Technology Services=%f",ITe);
            printf("\nMiscellaneous Expenses=%f",othere);
            printf("\nFunds Invested=%f",inve);
            printf("\nReturn Earned On Investment=%f",rete);
            printf("\nIs the above printed report correct");
            printf("\nPress 1 for yes and 2 for no");
            scanf("%d",&prev_c);
            printf("\n");
            system("pause");
            if(prev_c==2)
            {
                printf("\nThe program will exit after you press a key ");
                printf("\nPlease restart the program and enter the correct details");
                printf("\n");
                system("pause");
            }
            if(prev_c==1)
            {
            printf("\nPlease choose the method using which you wish to calculate inflation");
            printf("\nPress 1 for CPI");
            printf("\nPress 2 to calculate using prices of goods");
            scanf("%d",&inf_type);
            if(inf_type==1)
            {float curr_CPI,prev_CPI;
            printf("\nPlease enter last year's CPI");
            scanf("%f",&prev_CPI);
            printf("\nPlease enter current year's CPI");
            scanf("%f",&curr_CPI);
            inf=100*(curr_CPI-prev_CPI)/prev_CPI;
            printf("\nInflation rate is=%f",inf);
            system("pause");
            }
            else if(inf_type==2)
            {
            float prev_price,cur_price;
            printf("\nPlease Enter previous year's price of item ");
            scanf("%d",&prev_price);
            printf("\nPlease enter current price of item ");
            scanf("%d",&cur_price);
            inf=cur_price/prev_price;
            inf=inf*100;
            inf=inf-100;
            printf("\nRate of Inflation is=%f",inf);
            system("pause");
            }
            printf("\nPlease Enter this year's data");
            printf("\nWould you like to use previous year's values for Calculation");
            printf("\nPress 1 for yes 2 for no");
            scanf("%d",&data_choice);
            if(data_choice==1)
            {
                printf("\nPlease Enter No of Students");
                scanf("%d",&ns);
                staffe=staffe+((staffe*inf)/100);
                infrae=infrae+((infrae*inf)/100);
                stue=stue+((stue*inf)/100);
                ITe=ITe+((ITe*inf)/100);
                inve=inve+((inve*inf)/100);
                rete=ret*inve/100;
                othere=othere+((othere*inf)/100);
                tot_ex=staffe+infrae+stue+ITe+inve+othere;
                printf("\nTotal Expenditure is=%f",tot_ex);
                tot_need=tot_ex-rete;
                fee=tot_need/ns;
                printf("\nTotal fund needed are=%f",tot_need);
                printf("\nFees that should be taken per student is=%f",fee);
                system("pause");
                system("cls");
                printf("This year's Report is=");
                printf("\nNumber of Employees for grade 1 (bearing salary =%d approximately)%d",sala,na);
                printf("\nNumber of Employees for grade 2(bearing salary =%d approximately)%d",salb,nb);
                printf("\nNumber of Employees for grade 3(bearing salary =%d approximately)%d",salc,nc);
                printf("\nNumber of Employees for grade 4(bearing salary =%d approximately)%d",sald,nd);
                printf("\nTotal Salary Expenses=%f",tot_sal);
                printf("\nNumber of Students=%d",ns);
                printf("\nAverage Fees per student=%f",fee);
                printf("\n %% of Return on investment=%f",ret);
                printf("\n %%of Funds expenditure on staff=%f",staff);
                printf("\n %%of Funds expenditure on infrastructure(Maintainence & Expansion)=%f",infra);
                printf("\n %% of Funds expenditure on fests and other events=%f",stu);
                printf("\n %%of funds for expenditure on IT services=%f",IT);
                printf("\n %% of Funds expenditure on Miscellaneous expenses of the institute=%f",other);
                printf("\n %% of funds to be invested=%f",inv);
                printf("\nExpenditure on Staff=%f",staffe);
                printf("\nExpenditure on Infrastructure=%f",infrae);
                printf("\nExpenditure on Fests and Other Events=%f",stue);
                printf("\nExpenditure on Information Technology Services=%f",ITe);
                printf("\nMiscellaneous Expenses=%f",othere);
                printf("\nFunds Invested=%f",inve);
                printf("\nReturn Earned On Investment=%f",rete);
                system("pause");

            }
            if(data_choice==2)
            {
                printf("\nWould you like to use pre defined set of values for expenses and return?");
                printf("\nPress 1 for yes and 2 for no");
                scanf("%d",&a);
                printf("\n Enter salary for grade 1");
                scanf("%d",&sala);
                printf("\n Enter salary for grade 2");
                scanf("%d",&salb);
                printf("\n Enter Salary for grade 3");
                scanf("%d",&salc);
                printf("\n Enter Salary for Grade 4");
                scanf("%d",&sald);
                printf("\nEnter no of Employees for grade 1 (bearing salary =%d approximately)",sala);
                scanf("%d",&na);
                printf("\nEnter no of Employees for grade 2(bearing salary =%d approximately)",salb);
                scanf("%d",&nb);
                printf("\nEnter no of Employees for grade 3(bearing salary =%d approximately)",salc);
                scanf("%d",&nc);
                printf("\nEnter no of Employees for grade 4(bearing salary =%d approximately)",sald);
                scanf("%d",&nd);
                tot_sal=(na*sala)+(nb*salb)+(nc*salc)+(nd*sald);
                printf("\nTotal salary expenses are:%f",tot_sal);
                if(a ==2){
                printf("\nPlease enter return earned on your investment");
                scanf("%f",&ret);
                printf("\nPlease enter %% of funds you desire to spend on your staff");
                scanf("%f",&staff);
                printf("\nPlease enter %% of funds you desire to spend on your infrastructure");
                scanf("%f",&infra);
                printf("\nPlease enter %% of funds you desire to spend on students(fests and other events)");
                scanf("%f",&stu);
                printf("\nPlease enter %% of funds you desire to spend on IT services");
                scanf("%f",&IT);
                printf("\nPlease enter the %% of funds you desire to spend on miscellaneous expenses of the institute");
                scanf("%f",&other);
                printf("\nPlease enter the %% of funds generated by fees you desire to invest");
                scanf("%f",&inv);
                tot_f=fee*ns;
                tot=tot_f+((inv*tot_f/100)*ret/100);
                printf("Total available funds are=%f",tot);
                }
        if(a==1){
            printf("\nPre-defined set of values are as follows");
            printf("\n %% of Return on investment=8.5");
            printf("\n %%of Funds expenditure on staff=25");
            printf("\n %%of Funds expenditure on infrastructure(Maintainence & Expansion)=30");
            printf("\n %% of Funds expenditure on fests and other events=5");
            printf("\n %%of funds for expenditure on IT services=20");
            printf("\n %% of Funds expenditure on Miscellaneous expenses of the institute=10");
            printf("\n %% of funds to be invested=10");
            ret=8.5;
            staff=25;
            infra=30;
            stu=5;
            IT=20;
            inv=10;
            other=10;
            tot_f=fee*ns;
            tot=tot_f+((inv*tot_f/100)*ret/100);
            printf("\nTotal available funds are=%f",tot);
            }
            staffe=staff*tot/100;
            infrae=infra*tot/100;
            stue=stu*tot/100;
            ITe=IT*tot/100;
            inve=inv*tot_f/100;
            rete=ret*inve/100;
            othere=other*tot/100;
            printf("\nPlease Enter No of Students");
            scanf("%d",&ns);
            staffe=staffe+((staffe*inf)/100);
                infrae=infrae+((infrae*inf)/100);
                stue=stue+((stue*inf)/100);
                ITe=ITe+((ITe*inf)/100);
                inve=inve+((inve*inf)/100);
                rete=ret*inve/100;
                othere=othere+((othere*inf)/100);
                tot_ex=staffe+infrae+stue+ITe+inve+othere;
                printf("\nTotal Expenditure is=%f",tot_ex);
                tot_need=tot_ex-rete;
                fee=tot_need/ns;
                printf("\nTotal fund needed are=%f",tot_need);
                printf("\nFees that should be taken per student is=%f",fee);
                system("pause");
                system("cls");
                printf("This year's Report is=");
                printf("\nNumber of Employees for grade 1 (bearing salary =%d approximately)%d",sala,na);
                printf("\nNumber of Employees for grade 2(bearing salary =%d approximately)%d",salb,nb);
                printf("\nNumber of Employees for grade 3(bearing salary =%d approximately)%d",salc,nc);
                printf("\nNumber of Employees for grade 4(bearing salary =%d approximately)%d",sald,nd);
                printf("\nTotal Salary Expenses=%f",tot_sal);
                printf("\nNumber of Students=%d",ns);
                printf("\nAverage Fees per student=%f",fee);
                printf("\n %% of Return on investment=%f",ret);
                printf("\n %%of Funds expenditure on staff=%f",staff);
                printf("\n %%of Funds expenditure on infrastructure(Maintainence & Expansion)=%f",infra);
                printf("\n %% of Funds expenditure on fests and other events=%f",stu);
                printf("\n %%of funds for expenditure on IT services=%f",IT);
                printf("\n %% of Funds expenditure on Miscellaneous expenses of the institute=%f",other);
                printf("\n %% of funds to be invested=%f",inv);
                printf("\nExpenditure on Staff=%f",staffe);
                printf("\nExpenditure on Infrastructure=%f",infrae);
                printf("\nExpenditure on Fests and Other Events=%f",stue);
                printf("\nExpenditure on Information Technology Services=%f",ITe);
                printf("\nMiscellaneous Expenses=%f",othere);
                printf("\nFunds Invested=%f",inve);
                printf("\nReturn Earned On Investment=%f",rete);
                system("pause");
            }}
    }
}
