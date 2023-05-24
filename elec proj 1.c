#include <stdio.h>

int main()
{   int n,i;
   char a=2,as=178;
   system("color 0F");
   printf("\n\n******************************************************************* HELLO *****************************************************************");
   printf("\n\n**************************************************%c THIS IS ELECTRICITY BILL PRINTING MACHINE %c %c******************************************",as,a,as);
    printf("\n\n***************************************************** STARTING ELECTRICITY BILLING PROCESS ************************************************\n\n");
    printf("\n If you want to print a bill then press postiive number ");
    printf("\n If u dont want to print the bill then press '0' ");
    printf("\n\n How many bills are to be generated : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    int ut,m,ct,c,ec;
    char ac=219,as=178,a=2,ai=205,aa=196,ah=223;
    char name[20],area[20],mn[16]   ;
    float charge,tot_am,add_sc,extra;
    printf("\n\n*************************************************** ELECTRICITY BILLING DETAILED PROCESS **************************************************\n\n");
    printf("\n Enter the customer/user name : ");
    scanf("\n");
    scanf("%[^\n]%*c",&name);
    printf("\n *Enter the category you want the bill for : \n\n 1)BUSINESS ADVERTISING BOARDS         2)DOMESTIC USAGE(ONLY FOR HOUSES) \n");
    printf("\n 3)ELECTRIC USAGE PLACES/STATIONS      4)GREEN POWER(SOLAR,WIND,ETC,.) \n");
    printf("\n *Choose the digit(1,2,3 or 4) you want to get the bill for :- ");
    scanf("%d",&c);
    if(c==1 || c==2 || c==3 || c==4)
    {
switch(c)
    {
case 1:printf("\n *Enter your sub category in Business advertising boards you want the bill for : \n");
     printf("\n 1)MINOR BUSINESS USAGE BILL        2)MAJOR BUSINESS USAGE BILL\n");
     printf("\n *Enter your choice (1 or 2) : ");
     scanf("%d",&ct);
     if(ct==1 || ct==2 )
{
switch(ct)
     {
     case 1:printf("\n Enter the Area you are from (in alphabets only)  : ");
    scanf("\n");
    scanf("%[^\n]%*c",&area);
    printf("\n Enter the dd/month/year of the electricity bill you want ( like 11/Jan/2021 or 11/Mar/2021 ) : ");
    scanf("\n");
    scanf("%[^\n]%*c",&mn);
    printf("\n Enter the meter number of the user(must be six numbers) : ");
    scanf("%d",&m);
    printf("\n *(NOTE) :- The total kilowatts consumed by user is almost equal to the value of no of units used  \n");
    printf("\n Enter the total units consumed by user(in positive digits) : ");
    scanf("%d",&ut);

    if(ut >=0 && ut <= 50)
    {
     charge = ut*1.45;
    }
    else if( ut>50 && ut<=75)
    {
     charge = 72.5+((ut-50)*2.60);
    }
    else if(ut>75)
    {
     charge = 137.5+((ut-75)*3.5);
    }
    extra=(ut)*10;
    add_sc= extra + 25;
    tot_am = charge + add_sc;

    printf("\n\n\n\n                ***************************************************%c PRINTING THE ELECTRICITY BILL %c**************************************************\n\n",as,as);
    printf("                *************************************************** PLEASE WAIT IT TAKES SOME TIME  **************************************************\n\n");
    printf("                *************************************************** PLEASE BE PATIENT FOR A SECOND. **************************************************\n\n");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n                *************************************************** PRINTING ...................... **************************************************\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf("          %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac);
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    printf("          %c***************************************************************************************************************************************************%c\n",ac,ac);
    printf("          %c***************************************************************************************************************************************************%c\n",ac,ac);
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    printf("          %c                                %c                                                                                       %c                          %c\n",ac,ah,ah,ac);
    printf("          %c                                 %c                                                                                       %c                         %c\n",ac,ah,ah,ac);
    printf("          %c                                %c %c                                                                                     %c %c                        %c\n",ac,ah,ah,ah,ah,ac);
    printf("          %c                                 %c %c                                                                                     %c %c                       %c\n",ac,ah,ah,ah,ah,ac);
    printf("          %c                            %c %c %c %c %c           %c CENTRAL POWER DISTRIBUTION COMPANY LIMITED (CPDCL) %c              %c %c %c %c %c                      %c\n",ac,ah,ah,ah,ah,ah,as,as,ah,ah,ah,ah,ah,ac);
    printf("          %c                             %c %c                                                                                     %c %c                           %c\n",ac,ah,ah,ah,ah,ac);
    printf("          %c                              %c %c                                                                                     %c %c                          %c\n",ac,ah,ah,ah,ah,ac);
    printf("          %c                               %c                                                                                       %c                           %c\n",ac,ah,ah,ac);
    printf("          %c                                %c                                                                                       %c                          %c\n",ac,ah,ah,ac);
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    printf("          %c***************************************************************************************************************************************************%c\n",ac,ac);
    printf("          %c***************************************************************************************************************************************************%c\n",ac,ac);
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    printf("          %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac);
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    printf("          %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",ac,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,ac);
    printf("          %c                      ************************************ ELECTRICITY BILL PRIMARY DETAILS ************************************                   %c\n",ac,ac);
    printf("          %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",ac,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,ac);
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    printf("          %c         Bill number of the customer                                       :           110826                                                      %c\n",ac,ac);
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    printf("          %c         Name of the customer                                              :           %s                                                      %c\n",ac,name,ac);
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    printf("          %c         Connection number given to the customer                           :           1113003645234                                               %c\n",ac,ac);
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    printf("          %c         Area section of the customer                                      :           D-%s                                                    %c\n",ac,area,ac);
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    printf("          %c         Meter number (six numbers)                                        :           %d                                                      %c\n",ac,m,ac);
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    if(c==1){
      if(ct==1){
    printf("          %c         Category choosed for billing                                      :          Business Advertising Boards(1)-Minor Business Usage Bill     %c\n",ac,ac);}
    else if(ct==2){
    printf("          %c         Category choosed for billing                                      :          Business Advertising Boards(1)-Major Business Usage Bill     %c\n",ac,ac);}}
    else if(c==2){
    printf("          %c         Category choosed for billing                                      :          Domestic Usage(Only For Houses)(2)                           %c\n",ac,ac);}
    else if(c==3){
    if(ec==1){
    printf("          %c         Category choosed for billing                                      : Electric Usage Places/Stations(3)-Electric Vehicle Charging Stations  %c\n",ac,ac);}
    else if (ec==2){
    printf("          %c         Category choosed for billing                                      :          Electric Usage Places/Stations(3)-Holy Places                %c\n",ac,ac);}}
    else if(c==4){
    printf("          %c         Category choosed for billing                                      :          Green Power(solar,wind,etc,.)(4)                             %c\n",ac,ac);}
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    printf("          %c---------------------------------------------------------------------------------------------------------------------------------------------------%c\n",ac,ac);
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    printf("          %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",ac,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,ac);
    printf("          %c                       ************************************  UNITS AND KILOWATTS CONSUMPTION ************************************                  %c\n",ac,ac);
    printf("          %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",ac,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,ac);
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    printf("          %c         Number of units used by the customer                              :            %d                                                        %c\n",ac,ut,ac);
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    printf("          %c         Number of KW used by the customer                                 :            %d                                                        %c\n",ac,ut,ac);
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    printf("          %c         Electricity bill for the month of (dd/mm/year)                    :            %s                                                %c\n",ac,mn,ac);
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    printf("          %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",ac,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,ac);
    printf("          %c                        ************************************ CHARGES AND TOTAL AMOUNT BILL ************************************                    %c\n",ac,ac);
    printf("          %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",ac,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,ac);
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    printf("          %c         Charges on Total Units used                                       :          %.2f                                                       %c\n",ac,charge,ac);
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    printf("          %c         Extra charges on KW used                                          :          %.2f                                                      %c\n",ac,extra,ac);
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    printf("          %c         Additional charges(extra charges + 25 rs additional charge)       :          %.2f                                                      %c\n",ac,add_sc,ac);
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    printf("          %c                   *TOTAL ELECTRICITY BILL*                                :          %.2f                                                      %c\n",ac,tot_am,ac);
    printf("          %c        (Additional charges + charges on Total Units used)                                                                                         %c\n",ac,ac);
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    printf("          %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",ac,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ac);
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    printf("          %c  ***************************** YOU CAN MAKE OFFLINE PAYMENT (OR) YOU CAN MAKE DIGITAL PAYMENT USING WEB/MOBILE APP *****************************  %c\n",ac,ac);
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    printf("          %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",ac,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ac);
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    printf("          %c  **************************************************************** %c THANK YOU %c ****************************************************************  %c\n",ac,a,a,ac);
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    printf("          %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac);
    printf("\n\n\n\n\n\n");
    break;
    case 2: printf("\n Enter the Area you are from (in alphabets only)  : ");
    scanf("\n");
    scanf("%[^\n]%*c",&area);
    printf("\n Enter the dd/month/year of the electricity bill you want ( like 11/Jan/2021 or 11/Mar/2021 ) : ");
    scanf("\n");
    scanf("%[^\n]%*c",&mn);
    printf("\n Enter the meter number of the user(must be six numbers) : ");
    scanf("%d",&m);
    printf("\n *(NOTE) :- The total kilowatts consumed by user is almost equal to the value of no of units used  \n");
    printf("\n Enter the total units consumed by user(in positive digits) : ");
    scanf("%d",&ut);

    if(ut >=0 && ut <= 50)
    {
     charge = ut*6.90;
    }
    else if( ut>50 && ut <=100)
    {
     charge = 345+((ut-50)*7.65);
    }
    else if(ut>100 && ut<=300)
    {
     charge = 727.5+((ut-100)*9.05);
    }
    else if(ut>300 && ut<=500)
    {
      charge = 2537.5+((ut-300)*9.05);
    }
    else if(ut>500)
    {
      charge = 4347.5+((ut-500)*10.15);
    }
    extra=(ut)*(75.0);
    add_sc= extra +37.5;
    tot_am = charge + add_sc;
    if(ut>=0){
   printf("\n\n\n\n                ***************************************************%c PRINTING THE ELECTRICITY BILL %c**************************************************\n\n",as,as);
    printf("                *************************************************** PLEASE WAIT IT TAKES SOME TIME  **************************************************\n\n");
    printf("                *************************************************** PLEASE BE PATIENT FOR A SECOND. **************************************************\n\n");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n                *************************************************** PRINTING ...................... **************************************************\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf("          %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac);
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    printf("          %c***************************************************************************************************************************************************%c\n",ac,ac);
    printf("          %c***************************************************************************************************************************************************%c\n",ac,ac);
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    printf("          %c                                %c                                                                                       %c                          %c\n",ac,ah,ah,ac);
    printf("          %c                                 %c                                                                                       %c                         %c\n",ac,ah,ah,ac);
    printf("          %c                                %c %c                                                                                     %c %c                        %c\n",ac,ah,ah,ah,ah,ac);
    printf("          %c                                 %c %c                                                                                     %c %c                       %c\n",ac,ah,ah,ah,ah,ac);
    printf("          %c                            %c %c %c %c %c           %c CENTRAL POWER DISTRIBUTION COMPANY LIMITED (CPDCL) %c              %c %c %c %c %c                      %c\n",ac,ah,ah,ah,ah,ah,as,as,ah,ah,ah,ah,ah,ac);
    printf("          %c                             %c %c                                                                                     %c %c                           %c\n",ac,ah,ah,ah,ah,ac);
    printf("          %c                              %c %c                                                                                     %c %c                          %c\n",ac,ah,ah,ah,ah,ac);
    printf("          %c                               %c                                                                                       %c                           %c\n",ac,ah,ah,ac);
    printf("          %c                                %c                                                                                       %c                          %c\n",ac,ah,ah,ac);
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    printf("          %c***************************************************************************************************************************************************%c\n",ac,ac);
    printf("          %c***************************************************************************************************************************************************%c\n",ac,ac);
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    printf("          %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac);
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    printf("          %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",ac,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,ac);
    printf("          %c                      ************************************ ELECTRICITY BILL PRIMARY DETAILS ************************************                   %c\n",ac,ac);
    printf("          %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",ac,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,ac);
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    printf("          %c         Bill number of the customer                                       :           110826                                                      %c\n",ac,ac);
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    printf("          %c         Name of the customer                                              :           %s                                                      %c\n",ac,name,ac);
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    printf("          %c         Connection number given to the customer                           :           1113003645234                                               %c\n",ac,ac);
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    printf("          %c         Area section of the customer                                      :           D-%s                                                    %c\n",ac,area,ac);
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    printf("          %c         Meter number (six numbers)                                        :           %d                                                      %c\n",ac,m,ac);
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    if(c==1){
      if(ct==1){
    printf("          %c         Category choosed for billing                                      :          Business Advertising Boards(1)-Minor Business Usage Bill     %c\n",ac,ac);}
    else if(ct==2){
    printf("          %c         Category choosed for billing                                      :          Business Advertising Boards(1)-Major Business Usage Bill     %c\n",ac,ac);}}
    else if(c==2){
    printf("          %c         Category choosed for billing                                      :          Domestic Usage(Only For Houses)(2)                           %c\n",ac,ac);}
    else if(c==3){
    if(ec==1){
    printf("          %c         Category choosed for billing                                      : Electric Usage Places/Stations(3)-Electric Vehicle Charging Stations  %c\n",ac,ac);}
    else if (ec==2){
    printf("          %c         Category choosed for billing                                      :          Electric Usage Places/Stations(3)-Holy Places                %c\n",ac,ac);}}
    else if(c==4){
    printf("          %c         Category choosed for billing                                      :          Green Power(solar,wind,etc,.)(4)                             %c\n",ac,ac);}
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    printf("          %c---------------------------------------------------------------------------------------------------------------------------------------------------%c\n",ac,ac);
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    printf("          %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",ac,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,ac);
    printf("          %c                       ************************************  UNITS AND KILOWATTS CONSUMPTION ************************************                  %c\n",ac,ac);
    printf("          %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",ac,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,ac);
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    printf("          %c         Number of units used by the customer                              :            %d                                                        %c\n",ac,ut,ac);
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    printf("          %c         Number of KW used by the customer                                 :            %d                                                        %c\n",ac,ut,ac);
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    printf("          %c         Electricity bill for the month of (dd/mm/year)                    :            %s                                                %c\n",ac,mn,ac);
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    printf("          %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",ac,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,ac);
    printf("          %c                        ************************************ CHARGES AND TOTAL AMOUNT BILL ************************************                    %c\n",ac,ac);
    printf("          %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",ac,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,ac);
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    printf("          %c         Charges on Total Units used                                       :          %.2f                                                       %c\n",ac,charge,ac);
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    printf("          %c         Extra charges on KW used                                          :          %.2f                                                      %c\n",ac,extra,ac);
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    printf("          %c         Additional charges(extra charges + 25 rs additional charge)       :          %.2f                                                      %c\n",ac,add_sc,ac);
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    printf("          %c                   *TOTAL ELECTRICITY BILL*                                :          %.2f                                                      %c\n",ac,tot_am,ac);
    printf("          %c        (Additional charges + charges on Total Units used)                                                                                         %c\n",ac,ac);
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    printf("          %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",ac,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ac);
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    printf("          %c  ***************************** YOU CAN MAKE OFFLINE PAYMENT (OR) YOU CAN MAKE DIGITAL PAYMENT USING WEB/MOBILE APP *****************************  %c\n",ac,ac);
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    printf("          %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",ac,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ac);
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    printf("          %c  **************************************************************** %c THANK YOU %c ****************************************************************  %c\n",ac,a,a,ac);
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    printf("          %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac);
    printf("\n\n\n\n\n\n");}
    break;}
    break;}
     else {
    printf("\n *************************************************** SORRY THERE IS NO INFORMATION BUT , THANKS FOR SPENDING YOUR VALUABLE TIME %c *************************************************** \n",as=2);
   }
   break;

case 2:printf("\n Enter the Area you are from (in alphabets only)  : ");
    scanf("\n");
    scanf("%[^\n]%*c",&area);
    printf("\n Enter the dd/month/year of the electricity bill you want ( like 11/Jan/2021 or 11/Mar/2021 ) : ");
    scanf("\n");
    scanf("%[^\n]%*c",&mn);
    printf("\n Enter the meter number of the user(must be six numbers) : ");
    scanf("%d",&m);
    printf("\n *(NOTE) :- The total kilowatts consumed by user is almost equal to the value of no of units used  \n");
    printf("\n Enter the total units consumed by user(in positive digits) : ");
    scanf("%d",&ut);

    if(ut >=0 && ut <= 50)
    {
     charge = ut*2.60;
    }
    else if(ut>50 && ut <=100)
    {
     charge = 130+((ut-50)*2.60);
    }
    else if(ut>100 && ut<=200)
    {
     charge = 260+((ut-100)*3.60);
    }
    else if(ut>200 && ut<=250)
    {
     charge = 620+((ut-200)*6.90);
    }
    else if(ut>250&& ut<=300)
    {
     charge = 965+((ut-250)*7.10);
    }
    else if(ut>300 && ut<=400)
    {
     charge = 1320+((ut-300)*7.95);
    }
    else if(ut>400 && ut<=500)
    {
     charge = 2115+((ut-400)*8.50);
    }
    else if(ut>500)
    {
     charge = 2965+((ut-500)*9.95);
    }
    extra=(ut)*(10);
    add_sc= extra +45.0;
    tot_am = charge + add_sc;
      printf("\n\n\n\n                ***************************************************%c PRINTING THE ELECTRICITY BILL %c**************************************************\n\n",as,as);
    printf("                *************************************************** PLEASE WAIT IT TAKES SOME TIME  **************************************************\n\n");
    printf("                *************************************************** PLEASE BE PATIENT FOR A SECOND. **************************************************\n\n");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n                *************************************************** PRINTING ...................... **************************************************\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf("          %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac);
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    printf("          %c***************************************************************************************************************************************************%c\n",ac,ac);
    printf("          %c***************************************************************************************************************************************************%c\n",ac,ac);
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    printf("          %c                                %c                                                                                       %c                          %c\n",ac,ah,ah,ac);
    printf("          %c                                 %c                                                                                       %c                         %c\n",ac,ah,ah,ac);
    printf("          %c                                %c %c                                                                                     %c %c                        %c\n",ac,ah,ah,ah,ah,ac);
    printf("          %c                                 %c %c                                                                                     %c %c                       %c\n",ac,ah,ah,ah,ah,ac);
    printf("          %c                            %c %c %c %c %c           %c CENTRAL POWER DISTRIBUTION COMPANY LIMITED (CPDCL) %c              %c %c %c %c %c                      %c\n",ac,ah,ah,ah,ah,ah,as,as,ah,ah,ah,ah,ah,ac);
    printf("          %c                             %c %c                                                                                     %c %c                           %c\n",ac,ah,ah,ah,ah,ac);
    printf("          %c                              %c %c                                                                                     %c %c                          %c\n",ac,ah,ah,ah,ah,ac);
    printf("          %c                               %c                                                                                       %c                           %c\n",ac,ah,ah,ac);
    printf("          %c                                %c                                                                                       %c                          %c\n",ac,ah,ah,ac);
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    printf("          %c***************************************************************************************************************************************************%c\n",ac,ac);
    printf("          %c***************************************************************************************************************************************************%c\n",ac,ac);
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    printf("          %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac);
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    printf("          %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",ac,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,ac);
    printf("          %c                      ************************************ ELECTRICITY BILL PRIMARY DETAILS ************************************                   %c\n",ac,ac);
    printf("          %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",ac,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,ac);
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    printf("          %c         Bill number of the customer                                       :           110826                                                      %c\n",ac,ac);
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    printf("          %c         Name of the customer                                              :           %s                                                      %c\n",ac,name,ac);
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    printf("          %c         Connection number given to the customer                           :           1113003645234                                               %c\n",ac,ac);
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    printf("          %c         Area section of the customer                                      :           D-%s                                                    %c\n",ac,area,ac);
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    printf("          %c         Meter number (six numbers)                                        :           %d                                                      %c\n",ac,m,ac);
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    if(c==1){
      if(ct==1){
    printf("          %c         Category choosed for billing                                      :          Business Advertising Boards(1)-Minor Business Usage Bill     %c\n",ac,ac);}
    else if(ct==2){
    printf("          %c         Category choosed for billing                                      :          Business Advertising Boards(1)-Major Business Usage Bill     %c\n",ac,ac);}}
    else if(c==2){
    printf("          %c         Category choosed for billing                                      :          Domestic Usage(Only For Houses)(2)                           %c\n",ac,ac);}
    else if(c==3){
    if(ec==1){
    printf("          %c         Category choosed for billing                                      : Electric Usage Places/Stations(3)-Electric Vehicle Charging Stations  %c\n",ac,ac);}
    else if (ec==2){
    printf("          %c         Category choosed for billing                                      :          Electric Usage Places/Stations(3)-Holy Places                %c\n",ac,ac);}}
    else if(c==4){
    printf("          %c         Category choosed for billing                                      :          Green Power(solar,wind,etc,.)(4)                             %c\n",ac,ac);}
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    printf("          %c---------------------------------------------------------------------------------------------------------------------------------------------------%c\n",ac,ac);
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    printf("          %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",ac,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,ac);
    printf("          %c                       ************************************  UNITS AND KILOWATTS CONSUMPTION ************************************                  %c\n",ac,ac);
    printf("          %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",ac,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,ac);
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    printf("          %c         Number of units used by the customer                              :            %d                                                        %c\n",ac,ut,ac);
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    printf("          %c         Number of KW used by the customer                                 :            %d                                                        %c\n",ac,ut,ac);
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    printf("          %c         Electricity bill for the month of (dd/mm/year)                    :            %s                                                %c\n",ac,mn,ac);
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    printf("          %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",ac,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,ac);
    printf("          %c                        ************************************ CHARGES AND TOTAL AMOUNT BILL ************************************                    %c\n",ac,ac);
    printf("          %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",ac,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,ac);
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    printf("          %c         Charges on Total Units used                                       :          %.2f                                                       %c\n",ac,charge,ac);
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    printf("          %c         Extra charges on KW used                                          :          %.2f                                                      %c\n",ac,extra,ac);
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    printf("          %c         Additional charges(extra charges + 25 rs additional charge)       :          %.2f                                                      %c\n",ac,add_sc,ac);
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    printf("          %c                   *TOTAL ELECTRICITY BILL*                                :          %.2f                                                      %c\n",ac,tot_am,ac);
    printf("          %c        (Additional charges + charges on Total Units used)                                                                                         %c\n",ac,ac);
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    printf("          %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",ac,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ac);
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    printf("          %c  ***************************** YOU CAN MAKE OFFLINE PAYMENT (OR) YOU CAN MAKE DIGITAL PAYMENT USING WEB/MOBILE APP *****************************  %c\n",ac,ac);
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    printf("          %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",ac,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ac);
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    printf("          %c  **************************************************************** %c THANK YOU %c ****************************************************************  %c\n",ac,a,a,ac);
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    printf("          %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac);
    printf("\n\n\n\n\n\n");
    break;

case 3:printf("\n *Enter your category : ");
     printf("\n\n 1)ELECTRIC VEHICLE CHARGING STATIONS         2)WORSHIP PLACES ");
     printf("\n\n *Enter your choice (1 or 2): ");
     scanf("%d",&ec);
     if(ec==1 || ec==2)
{
switch(ec)
     {
       case 1:printf("\n Enter the Area you are from (in alphabets only)  : ");
    scanf("\n");
    scanf("%[^\n]%*c",&area);
    printf("\n Enter the dd/month/year of the electricity bill you want ( like 11/Jan/2021 or 11/Mar/2021 ) : ");
    scanf("\n");
    scanf("%[^\n]%*c",&mn);
    printf("\n Enter the meter number of the user(must be six numbers) : ");
    scanf("%d",&m);
    printf("\n *(NOTE) :- The total kilowatts consumed by user is almost equal to the value of no of units used  \n");
    printf("\n Enter the total units consumed by user(in positive digits) : ");
    scanf("%d",&ut);

    if(ut>=0)
    {
     charge = ut*6.70;
    }
    add_sc= 250;
    tot_am = charge + add_sc;
      printf("\n\n\n\n                ***************************************************%c PRINTING THE ELECTRICITY BILL %c**************************************************\n\n",as,as);
    printf("                *************************************************** PLEASE WAIT IT TAKES SOME TIME  **************************************************\n\n");
    printf("                *************************************************** PLEASE BE PATIENT FOR A SECOND. **************************************************\n\n");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n                *************************************************** PRINTING ...................... **************************************************\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf("          %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac);
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    printf("          %c***************************************************************************************************************************************************%c\n",ac,ac);
    printf("          %c***************************************************************************************************************************************************%c\n",ac,ac);
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    printf("          %c                                %c                                                                                       %c                          %c\n",ac,ah,ah,ac);
    printf("          %c                                 %c                                                                                       %c                         %c\n",ac,ah,ah,ac);
    printf("          %c                                %c %c                                                                                     %c %c                        %c\n",ac,ah,ah,ah,ah,ac);
    printf("          %c                                 %c %c                                                                                     %c %c                       %c\n",ac,ah,ah,ah,ah,ac);
    printf("          %c                            %c %c %c %c %c           %c CENTRAL POWER DISTRIBUTION COMPANY LIMITED (CPDCL) %c              %c %c %c %c %c                      %c\n",ac,ah,ah,ah,ah,ah,as,as,ah,ah,ah,ah,ah,ac);
    printf("          %c                             %c %c                                                                                     %c %c                           %c\n",ac,ah,ah,ah,ah,ac);
    printf("          %c                              %c %c                                                                                     %c %c                          %c\n",ac,ah,ah,ah,ah,ac);
    printf("          %c                               %c                                                                                       %c                           %c\n",ac,ah,ah,ac);
    printf("          %c                                %c                                                                                       %c                          %c\n",ac,ah,ah,ac);
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    printf("          %c***************************************************************************************************************************************************%c\n",ac,ac);
    printf("          %c***************************************************************************************************************************************************%c\n",ac,ac);
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    printf("          %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac);
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    printf("          %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",ac,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,ac);
    printf("          %c                      ************************************ ELECTRICITY BILL PRIMARY DETAILS ************************************                   %c\n",ac,ac);
    printf("          %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",ac,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,ac);
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    printf("          %c         Bill number of the customer                                       :           110826                                                      %c\n",ac,ac);
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    printf("          %c         Name of the customer                                              :           %s                                                      %c\n",ac,name,ac);
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    printf("          %c         Connection number given to the customer                           :           1113003645234                                               %c\n",ac,ac);
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    printf("          %c         Area section of the customer                                      :           D-%s                                                    %c\n",ac,area,ac);
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    printf("          %c         Meter number (six numbers)                                        :           %d                                                      %c\n",ac,m,ac);
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    if(c==1){
      if(ct==1){
    printf("          %c         Category choosed for billing                                      :          Business Advertising Boards(1)-Minor Business Usage Bill     %c\n",ac,ac);}
    else if(ct==2){
    printf("          %c         Category choosed for billing                                      :          Business Advertising Boards(1)-Major Business Usage Bill     %c\n",ac,ac);}}
    else if(c==2){
    printf("          %c         Category choosed for billing                                      :          Domestic Usage(Only For Houses)(2)                           %c\n",ac,ac);}
    else if(c==3){
    if(ec==1){
    printf("          %c         Category choosed for billing                                      : Electric Usage Places/Stations(3)-Electric Vehicle Charging Stations  %c\n",ac,ac);}
    else if (ec==2){
    printf("          %c         Category choosed for billing                                      :          Electric Usage Places/Stations(3)-Holy Places                %c\n",ac,ac);}}
    else if(c==4){
    printf("          %c         Category choosed for billing                                      :          Green Power(solar,wind,etc,.)(4)                             %c\n",ac,ac);}
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    printf("          %c---------------------------------------------------------------------------------------------------------------------------------------------------%c\n",ac,ac);
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    printf("          %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",ac,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,ac);
    printf("          %c                       ************************************  UNITS AND KILOWATTS CONSUMPTION ************************************                  %c\n",ac,ac);
    printf("          %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",ac,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,ac);
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    printf("          %c         Number of units used by the customer                              :            %d                                                        %c\n",ac,ut,ac);
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    printf("          %c         Number of KW used by the customer                                 :            %d                                                        %c\n",ac,ut,ac);
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    printf("          %c         Electricity bill for the month of (dd/mm/year)                    :            %s                                                %c\n",ac,mn,ac);
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    printf("          %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",ac,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,ac);
    printf("          %c                        ************************************ CHARGES AND TOTAL AMOUNT BILL ************************************                    %c\n",ac,ac);
    printf("          %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",ac,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,ac);
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    printf("          %c         Charges on Total Units used                                       :          %.2f                                                       %c\n",ac,charge,ac);
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    printf("          %c         Extra charges on KW used                                          :          %.2f                                                         %c\n",ac,extra,ac);
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    printf("          %c         Additional charges(extra charges + 25 rs additional charge)       :          %.2f                                                       %c\n",ac,add_sc,ac);
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    printf("          %c                   *TOTAL ELECTRICITY BILL*                                :          %.2f                                                       %c\n",ac,tot_am,ac);
    printf("          %c        (Additional charges + charges on Total Units used)                                                                                         %c\n",ac,ac);
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    printf("          %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",ac,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ac);
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    printf("          %c  ***************************** YOU CAN MAKE OFFLINE PAYMENT (OR) YOU CAN MAKE DIGITAL PAYMENT USING WEB/MOBILE APP *****************************  %c\n",ac,ac);
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    printf("          %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",ac,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ac);
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    printf("          %c  **************************************************************** %c THANK YOU %c ****************************************************************  %c\n",ac,a,a,ac);
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    printf("          %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac);
    printf("\n\n\n\n\n\n");
    break;
     case 2:printf("\n Enter the Area you are from (in alphabets only)  : ");
    scanf("\n");
    scanf("%[^\n]%*c",&area);
    printf("\n Enter the dd/month/year of the electricity bill you want ( like 11/Jan/2021 or 11/Mar/2021 ) : ");
    scanf("\n");
    scanf("%[^\n]%*c",&mn);
    printf("\n Enter the meter number of the user(must be six numbers) : ");
    scanf("%d",&m);
    printf("\n *(NOTE) :- The total kilowatts consumed by user is almost equal to the value of no of units used  \n");
    printf("\n Enter the total units consumed by user(in positive digits) : ");
    scanf("%d",&ut);

     if(ut>=0 && ut<=500)
     {
      charge = ut*4.80;
     }
    else if(ut>500)
    {
     charge = 2400+((ut-500)*5.00);
    }
    extra=(ut)*(30);
    add_sc= extra + 30.0;
    tot_am = charge + add_sc;
     printf("\n\n\n\n                ***************************************************%c PRINTING THE ELECTRICITY BILL %c**************************************************\n\n",as,as);
    printf("                *************************************************** PLEASE WAIT IT TAKES SOME TIME  **************************************************\n\n");
    printf("                *************************************************** PLEASE BE PATIENT FOR A SECOND. **************************************************\n\n");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n                *************************************************** PRINTING ...................... **************************************************\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf("          %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac);
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    printf("          %c***************************************************************************************************************************************************%c\n",ac,ac);
    printf("          %c***************************************************************************************************************************************************%c\n",ac,ac);
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    printf("          %c                                %c                                                                                       %c                          %c\n",ac,ah,ah,ac);
    printf("          %c                                 %c                                                                                       %c                         %c\n",ac,ah,ah,ac);
    printf("          %c                                %c %c                                                                                     %c %c                        %c\n",ac,ah,ah,ah,ah,ac);
    printf("          %c                                 %c %c                                                                                     %c %c                       %c\n",ac,ah,ah,ah,ah,ac);
    printf("          %c                            %c %c %c %c %c           %c CENTRAL POWER DISTRIBUTION COMPANY LIMITED (CPDCL) %c              %c %c %c %c %c                      %c\n",ac,ah,ah,ah,ah,ah,as,as,ah,ah,ah,ah,ah,ac);
    printf("          %c                             %c %c                                                                                     %c %c                           %c\n",ac,ah,ah,ah,ah,ac);
    printf("          %c                              %c %c                                                                                     %c %c                          %c\n",ac,ah,ah,ah,ah,ac);
    printf("          %c                               %c                                                                                       %c                           %c\n",ac,ah,ah,ac);
    printf("          %c                                %c                                                                                       %c                          %c\n",ac,ah,ah,ac);
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    printf("          %c***************************************************************************************************************************************************%c\n",ac,ac);
    printf("          %c***************************************************************************************************************************************************%c\n",ac,ac);
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    printf("          %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac);
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    printf("          %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",ac,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,ac);
    printf("          %c                      ************************************ ELECTRICITY BILL PRIMARY DETAILS ************************************                   %c\n",ac,ac);
    printf("          %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",ac,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,ac);
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    printf("          %c         Bill number of the customer                                       :           110826                                                      %c\n",ac,ac);
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    printf("          %c         Name of the customer                                              :           %s                                                      %c\n",ac,name,ac);
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    printf("          %c         Connection number given to the customer                           :           1113003645234                                               %c\n",ac,ac);
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    printf("          %c         Area section of the customer                                      :           D-%s                                                    %c\n",ac,area,ac);
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    printf("          %c         Meter number (six numbers)                                        :           %d                                                      %c\n",ac,m,ac);
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    if(c==1){
      if(ct==1){
    printf("          %c         Category choosed for billing                                      :          Business Advertising Boards(1)-Minor Business Usage Bill     %c\n",ac,ac);}
    else if(ct==2){
    printf("          %c         Category choosed for billing                                      :          Business Advertising Boards(1)-Major Business Usage Bill     %c\n",ac,ac);}}
    else if(c==2){
    printf("          %c         Category choosed for billing                                      :          Domestic Usage(Only For Houses)(2)                           %c\n",ac,ac);}
    else if(c==3){
    if(ec==1){
    printf("          %c         Category choosed for billing                                      : Electric Usage Places/Stations(3)-Electric Vehicle Charging Stations  %c\n",ac,ac);}
    else if (ec==2){
    printf("          %c         Category choosed for billing                                      :          Electric Usage Places/Stations(3)-Holy Places                %c\n",ac,ac);}}
    else if(c==4){
    printf("          %c         Category choosed for billing                                      :          Green Power(solar,wind,etc,.)(4)                             %c\n",ac,ac);}
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    printf("          %c---------------------------------------------------------------------------------------------------------------------------------------------------%c\n",ac,ac);
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    printf("          %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",ac,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,ac);
    printf("          %c                       ************************************  UNITS AND KILOWATTS CONSUMPTION ************************************                  %c\n",ac,ac);
    printf("          %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",ac,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,ac);
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    printf("          %c         Number of units used by the customer                              :            %d                                                        %c\n",ac,ut,ac);
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    printf("          %c         Number of KW used by the customer                                 :            %d                                                        %c\n",ac,ut,ac);
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    printf("          %c         Electricity bill for the month of (dd/mm/year)                    :            %s                                                %c\n",ac,mn,ac);
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    printf("          %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",ac,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,ac);
    printf("          %c                        ************************************ CHARGES AND TOTAL AMOUNT BILL ************************************                    %c\n",ac,ac);
    printf("          %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",ac,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,ac);
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    printf("          %c         Charges on Total Units used                                       :          %.2f                                                       %c\n",ac,charge,ac);
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    printf("          %c         Extra charges on KW used                                          :          %.2f                                                      %c\n",ac,extra,ac);
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    printf("          %c         Additional charges(extra charges + 25 rs additional charge)       :          %.2f                                                      %c\n",ac,add_sc,ac);
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    printf("          %c                   *TOTAL ELECTRICITY BILL*                                :          %.2f                                                      %c\n",ac,tot_am,ac);
    printf("          %c        (Additional charges + charges on Total Units used)                                                                                         %c\n",ac,ac);
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    printf("          %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",ac,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ac);
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    printf("          %c  ***************************** YOU CAN MAKE OFFLINE PAYMENT (OR) YOU CAN MAKE DIGITAL PAYMENT USING WEB/MOBILE APP *****************************  %c\n",ac,ac);
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    printf("          %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",ac,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ac);
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    printf("          %c  **************************************************************** %c THANK YOU %c ****************************************************************  %c\n",ac,a,a,ac);
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    printf("          %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac);
    printf("\n\n\n\n\n\n");
    break;}
    break;}
      else {
    printf("\n *************************************************** SORRY THERE IS NO INFORMATION BUT , THANKS FOR SPENDING YOUR VALUABLE TIME %c *************************************************** \n",as=2);
           }
       break;
case 4:printf("\n Enter the Area you are from (in alphabets only)  : ");
    scanf("\n");
    scanf("%[^\n]%*c",&area);
    printf("\n Enter the dd/month/year of the electricity bill you want ( like 11/Jan/2021 or 11/Mar/2021 ) : ");
    scanf("\n");
    scanf("%[^\n]%*c",&mn);
    printf("\n Enter the meter number of the user(must be six numbers) : ");
    scanf("%d",&m);
    printf("\n *(NOTE) :- The total kilowatts consumed by user is almost equal to the value of no of units used  \n");
    printf("\n Enter the total units consumed by user(in positive digits) : ");
    scanf("%d",&ut);

    if(ut>=0 )
    {
     charge= ut*12.25;
    }
     extra=(ut)*(30);
    add_sc= extra + 30.0;
    tot_am = charge + add_sc;
    printf("\n\n\n\n                ***************************************************%c PRINTING THE ELECTRICITY BILL %c**************************************************\n\n",as,as);
    printf("                *************************************************** PLEASE WAIT IT TAKES SOME TIME  **************************************************\n\n");
    printf("                *************************************************** PLEASE BE PATIENT FOR A SECOND. **************************************************\n\n");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n                *************************************************** PRINTING ...................... **************************************************\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf("          %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac);
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    printf("          %c***************************************************************************************************************************************************%c\n",ac,ac);
    printf("          %c***************************************************************************************************************************************************%c\n",ac,ac);
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    printf("          %c                                %c                                                                                       %c                          %c\n",ac,ah,ah,ac);
    printf("          %c                                 %c                                                                                       %c                         %c\n",ac,ah,ah,ac);
    printf("          %c                                %c %c                                                                                     %c %c                        %c\n",ac,ah,ah,ah,ah,ac);
    printf("          %c                                 %c %c                                                                                     %c %c                       %c\n",ac,ah,ah,ah,ah,ac);
    printf("          %c                            %c %c %c %c %c           %c CENTRAL POWER DISTRIBUTION COMPANY LIMITED (CPDCL) %c              %c %c %c %c %c                      %c\n",ac,ah,ah,ah,ah,ah,as,as,ah,ah,ah,ah,ah,ac);
    printf("          %c                             %c %c                                                                                     %c %c                           %c\n",ac,ah,ah,ah,ah,ac);
    printf("          %c                              %c %c                                                                                     %c %c                          %c\n",ac,ah,ah,ah,ah,ac);
    printf("          %c                               %c                                                                                       %c                           %c\n",ac,ah,ah,ac);
    printf("          %c                                %c                                                                                       %c                          %c\n",ac,ah,ah,ac);
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    printf("          %c***************************************************************************************************************************************************%c\n",ac,ac);
    printf("          %c***************************************************************************************************************************************************%c\n",ac,ac);
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    printf("          %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac);
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    printf("          %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",ac,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,ac);
    printf("          %c                      ************************************ ELECTRICITY BILL PRIMARY DETAILS ************************************                   %c\n",ac,ac);
    printf("          %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",ac,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,ac);
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    printf("          %c         Bill number of the customer                                       :           110826                                                      %c\n",ac,ac);
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    printf("          %c         Name of the customer                                              :           %s                                                      %c\n",ac,name,ac);
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    printf("          %c         Connection number given to the customer                           :           1113003645234                                               %c\n",ac,ac);
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    printf("          %c         Area section of the customer                                      :           D-%s                                                    %c\n",ac,area,ac);
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    printf("          %c         Meter number (six numbers)                                        :           %d                                                      %c\n",ac,m,ac);
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    if(c==1){
      if(ct==1){
    printf("          %c         Category choosed for billing                                      :          Business Advertising Boards(1)-Minor Business Usage Bill     %c\n",ac,ac);}
    else if(ct==2){
    printf("          %c         Category choosed for billing                                      :          Business Advertising Boards(1)-Major Business Usage Bill     %c\n",ac,ac);}}
    else if(c==2){
    printf("          %c         Category choosed for billing                                      :          Domestic Usage(Only For Houses)(2)                           %c\n",ac,ac);}
    else if(c==3){
    if(ec==1){
    printf("          %c         Category choosed for billing                                      : Electric Usage Places/Stations(3)-Electric Vehicle Charging Stations  %c\n",ac,ac);}
    else if (ec==2){
    printf("          %c         Category choosed for billing                                      :          Electric Usage Places/Stations(3)-Holy Places                %c\n",ac,ac);}}
    else if(c==4){
    printf("          %c         Category choosed for billing                                      :          Green Power(solar,wind,etc,.)(4)                             %c\n",ac,ac);}
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    printf("          %c---------------------------------------------------------------------------------------------------------------------------------------------------%c\n",ac,ac);
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    printf("          %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",ac,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,ac);
    printf("          %c                       ************************************  UNITS AND KILOWATTS CONSUMPTION ************************************                  %c\n",ac,ac);
    printf("          %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",ac,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,ac);
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    printf("          %c         Number of units used by the customer                              :            %d                                                        %c\n",ac,ut,ac);
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    printf("          %c         Number of KW used by the customer                                 :            %d                                                        %c\n",ac,ut,ac);
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    printf("          %c         Electricity bill for the month of (dd/mm/year)                    :            %s                                                %c\n",ac,mn,ac);
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    printf("          %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",ac,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,ac);
    printf("          %c                        ************************************ CHARGES AND TOTAL AMOUNT BILL ************************************                    %c\n",ac,ac);
    printf("          %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",ac,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,aa,ac);
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    printf("          %c         Charges on Total Units used                                       :          %.2f                                                      %c\n",ac,charge,ac);
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    printf("          %c         Extra charges on KW used                                          :          %.2f                                                      %c\n",ac,extra,ac);
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    printf("          %c         Additional charges(extra charges + 25 rs additional charge)       :          %.2f                                                      %c\n",ac,add_sc,ac);
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    printf("          %c                   *TOTAL ELECTRICITY BILL*                                :          %.2f                                                      %c\n",ac,tot_am,ac);
    printf("          %c        (Additional charges + charges on Total Units used)                                                                                         %c\n",ac,ac);
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    printf("          %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",ac,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ac);
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    printf("          %c  ***************************** YOU CAN MAKE OFFLINE PAYMENT (OR) YOU CAN MAKE DIGITAL PAYMENT USING WEB/MOBILE APP *****************************  %c\n",ac,ac);
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    printf("          %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",ac,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ai,ac);
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    printf("          %c  **************************************************************** %c THANK YOU %c ****************************************************************  %c\n",ac,a,a,ac);
    printf("          %c                                                                                                                                                   %c\n",ac,ac);
    printf("          %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac,ac);
    printf("\n\n\n\n\n\n");
      break;}}
      else{
        printf("\n *************************************************** SORRY THERE IS NO INFORMATION BUT , THANKS FOR SPENDING YOUR VALUABLE TIME %c *************************************************** \n",a);
          }
    }
   if(n<0)
    {
    printf("\n *************************************************** SORRY THERE IS NO INFORMATION BUT , THANKS FOR SPENDING YOUR VALUABLE TIME %c *************************************************** \n",a);
    }
   if(n==0)
    {
    printf("\n*************************************************** THANKS FOR COMING %c , VISIT AGAIN IF YOU WANT TO PRINT %c ***************************************************\n\n",a,a);
    }
return 0;
}

