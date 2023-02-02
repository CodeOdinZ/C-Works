#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <stdbool.h>

void star(){
    char name[5] = "Nomin";
    printf("   *\n");
    printf("  ***\n");
    printf(" *****\n");
    printf("*******");
    
    
}

void numsum(){
     int num1,num2,sum;
     printf("type your first number: ");
     scanf("%d", &num1);
     printf("type your second number: ");
     scanf("%d", &num2);

     sum = num1+num2;

     printf("SUM: %d", sum);
     printf("sdsd");

     
}

void sumxy(){
        int x = 23;
        int y = 25;



}

void postneg(){

    int num;
    printf("input a number: ");
    scanf("%d", &num);
    if (num>0){
        printf("A positive number");
    }

    if (num<0){
        printf("A negative number");

    }

    if(num==0){
        printf("It;s 0 LOL");
    }
}

void compare(){
    int num1,num2,num3,max;
    printf("type 3 numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);


    /*
    max = no1;
    if (no2>max)
        {max = no2;}
    if (no3>max){
        max = no3;

    }
    */

    if(num1>num2 && num1>num3){
        max=num1;
    }

    if(num2>num1 && num2>num3){
        max = num2;
    }

    if(num3>num1 && num3>num2){
        max=num3;
    }

    
    printf("maximum number is: %d", max);
}


void grade(){
    int admnum,marks;
    char grd;

    printf("enter your admission number & marks: ");
    scanf("%d %d", &admnum, &marks);

    if (marks>=75){
        grd = 'A';
    }
    if (marks>=65 && marks<75){
        grd = 'B';
    }
    if (marks>=55 && marks<65){
        grd = 'C';
    }
    if (marks>=45 && marks<55){
        grd = 'S';
    }
    if (marks<45){
        grd = 'F';
    }
    printf("%d your grade is: %c", admnum,grd);

}
        
void oddeven(){
    int num, rmnd;

    printf("enter your number: ");
    scanf("%d", &num);

    rmnd = num%2;
     if(rmnd == 1){
        printf("ODD NUMBER");
     }

     else{
        printf("EVEN NUMBER");
     }



}

void bintodec(){
    int dec, rmnd;
    char bin[100];
    rmnd = 10;

    printf("please enter decimal number please!!: ");
    scanf("%d", &dec);
    
    int binset[]={};
    int cnt;

    //while(rmnd >1){
    for(int i = 0; i<1000; i++){

        rmnd = dec%2;
        rmnd = binset[i];
        if(rmnd ==1){
            
            dec = (dec + 1)/2;
            if(dec == 1){
                rmnd = dec;
                //printf("%s", rmnd);
                cnt = i;
                break;
            }
        }
        else{
            dec/=2;
            if(dec == 1){
                rmnd = dec;
                //printf("%d", rmnd);
                cnt = i;
            
                break;
            }
        }
    }

    for (int i = cnt; i>0; i--){
        //char str[100];
        printf("%d", binset[i]);

    }
}


void testing(){
    int rmnd,dec;
    dec = 75;
    for(int i = 0; i<5; i++){

        rmnd = dec%2;
        printf("%d \n", rmnd); }
}


void markgrd(){
    int mrk1,mrk2;

    printf("enter your marks for module 1 & 2: ");
    scanf("%d %d", &mrk1,&mrk2);

    printf("Here Moving to Result Section");
    //AND

    if(mrk1>=50 && mrk2>=50){
        printf("Great Pass[AND]\n");
    }
    else{
        printf("You've Failed[AND]\n");
    }

    //OR

    if(mrk1>=50 || mrk2>=50){
        printf("Great Pass[OR]\n");
    }
    else{
        printf("You've Failed [OR]\n");
    }

    //NOT
    if(!(mrk1<50 && mrk2<50)){
        printf("Pass[not]\n");
    }
    else{
        printf("Failed[not]\n");
    }



    //if(condition){ .     }
}

void increDecre(){
    int x = 10;
    printf("x = %d \n ", x++);
    printf("x = %d \n ", ++x);
    printf("x = %d \n ", x--);
    printf("x = %d \n ", --x);

}

void switchcase(){
    int mon;
    printf("Enter month Number: ");
    scanf("%d", &mon);

    switch (mon)
    {
    case 1:
        printf("January");
        break;
    case 2:
        printf("february");break;

    case 3:
        printf("March");break;

    case 4:
        printf("April");break;

    case 5:
        printf("May");break;

    case 6:
        printf("June");break;

    case 7:
        printf("July");break;

    case 8:
        printf("August");break;

    case 9:
        printf("September");break;


    case 10:
        printf("October");break;

    case 11:
        printf("November");break;

    case 12:
        printf("December");break;

    default:
        printf("එහෙම මාසයක් නැ ");
        break;
    }
}

void vowel(){
    char ct;
    printf("enter a letter: ");
    scanf("%c", &ct);

    switch(ct){
        case 'a':
            printf("it's a vowel");
            break;

        case 'e':
            printf("it's a vowel");
            break;
        
        case 'i':
            printf("it's a vowel");
            break;

        case 'o':
            printf("it's a vowel");
            break;

        case 'u':
            printf("it's a vowel");
            break;

        default:
            printf("It's not a vowel");
            break;
    }
}


void loopz(){
    int x=1;
    while(x<=100){
        printf("%d \n",x);
        x=x+ 1;
    }


    int y=10;
    while(y<=1000){
        printf("%d \n",y);
        y+= 10;
    }

    int z=100;
    while(z>=2){

        printf("%d \n",z);
        z-=2;
    }


    int i = -2;
    int s = -100;
    while(i>=s){
        printf("%d \n",i);
        i-=2;
    }

}


void loopavrg(){

    int num[10];
    int total = 0;

    int x = 0;
    while(x < 10){
        printf("enter your %d number: ", x+1);
        scanf("%d", &num[x]);

        total += num[x];

        x+=1;
    }

    float avrg;
    avrg = (float) total/10.0;

    printf("Your average is: %f", avrg);








}

void posnegcounter(){

    int x=1;
    int cnt = 0;
    int num[100];

    while(x<=10) {
        printf("Enter Your %d number: ", x);
        scanf("%d", &num[cnt]);
        cnt++;
        x++;
    }

    int t=0;
    int negcnt =0;
    int poscnt = 0;
    int nullcnt = 0;

    while(t<10){

        if (num[t]<0){
            negcnt+=1;
        }
        else if(num[t]>0){
            poscnt+=1;
        }
        else {
            nullcnt +=1;
        }
        t++;
    }
    printf("You have %d positves \n", poscnt);
    printf("You have %d negatives \n", negcnt);
    printf("You have %d nulls \n", nullcnt);


}

void oddevencounter(){
    int num, odd, even,rmd;
    int x = 0;

    while(x<10){
        printf("enter number %d: ", x+1);
        scanf("%d", &num);
        rmd = num%2;
        x++;

        if(rmd == 1){
            odd++;
        }
        else{
            even++;
        }


    }

    printf("You have %d odds", odd);
    printf("you have %d evens", even);
}


void numbersetz(){

    //right indentation %5d
    printf("|----------------------|\n");
    printf("|%5d %5d %5d     |\n",2,4,8 );
    printf("|%5d %5d %5d     |\n",3,9,27 );
    printf("|%5d %5d %5d     |\n",4,16,64 );
    printf("|----------------------|");

    printf("\n\n\n"); // skipping 3 lines

    //left indentation  %-5d





}


void velocity(){
    //ms-1

    int dis,time,vel;
    float vel2;
    dis = 205;
    time= 45;

    vel = dis/time;
    printf("%d \n", vel);

// problem is vel always get an nearest rounded off integer value not the accurate

    vel2 = (float)dis/time;
    printf("CORRECTED: %f", vel2);




}

void tempconvt(){

    float tem, frnt;
    printf("Enter temperature in celcius: ");
    scanf("%f", &frnt);

    tem = (5.0/9.0)*(frnt - 32);

    printf("Faranheit tempertatre: %f", tem);
}


void testxz(){
    char name[10] = "name";


    printf("%s", name);
}


void stmrks(){
    int i=1;
    int mrk = 0;
    int acnt,bcnt,fcnt;

    while(i<=10) {
        printf("input marks of %d student: \n", i);
        scanf("%d", &mrk);
        if (mrk>=75){
            acnt+=1;
        }

        if(mrk>50 && mrk<75){
            bcnt+=1;
        }

        if(mrk<50){
            fcnt+=1;
        }
        i++;


    }

    printf("students with A pass: %d\n", acnt);
    printf("students with B pass: %d\n", bcnt);
    printf("students with F pass: %d", fcnt);


}

void dowhiletest(){
    int cnt=1;
    do{
        printf("%d ",cnt);
        cnt++;
    }while(cnt<=100);
    printf("\n \n");

    int x =100;
    do{
        printf("%d ",x);
        x-=2;
    }while(x>=2);

    printf("\n \n");

    int y = 10;
    do{
      printf("%d ",y);
      y+=10;
    }while(y<=1000);
}


void avghigh(){
    int x,mrk,high=0,total;
    float avg;
    x = 1;
    do{
        printf("enter marks of %d student: \n", x);
        scanf("%d", &mrk);

        if (high<mrk){
            high=mrk;
        }

        total+=mrk;
        x+=1;

    }while(x<=10);
    avg = (float)total/10.0;
    printf("average is: %.2f\n",avg );
    printf("highrst mark is: %d", high);

}


void testings(){
    int x,y;
    int t = 1111111;
    printf("enter 2 numbers: ");
    scanf("%d %d", &x, &y);
    printf("%d\n", t);
    printf("%05d %015d\n", x,y);


    int f[100];
    int i=1;
    while(i<=10){
    printf("Enter Numbers %d\n",i);
    scanf("%d\n", &f);
    i++;}

    while(i>=0){
        printf("%d\n", f[i]);
        i--;
    }













}








       



    
void fortest(){
   for (int i = 1; i<=10; i++){
       printf("%d ", i);
   }
   printf("\n");

    for (int i = 1; i<=100; i+=10){
        printf("%d ", i);

    }
    printf("\n");

    for (int i = 100; i>=0; i-=2){
        printf("%d ", i);

    }

    printf("\n");

    for (int i = 0; i<=1000; i+=10){

        printf("%d ", i);

    }



}


void toss(){

    int cnt,hcnt,tcnt;
    printf("Enter the number of rounds to TOSS? - ");
    scanf("%d", &cnt);
    srand(time(0));
    for(int i=1; i<=cnt;i++){

        int x = sqrt(rand());
        int rmnd = x%2;
        if(rmnd == 1){
            //printf("Head\n");
            hcnt++;
        }else{
            //printf("Tail\n");
            tcnt+=1;
        }
    }
    printf("hcnt -%d", hcnt);
    printf("Head Count - %d\nTail Count - %d",hcnt,tcnt);
}


void odevencnt(){
    int num,post,neg,zero;
    for(int i=1; i<=10; i++){
        printf("Enter the %d number: ",i);
        scanf("%d", &num);
        if(num>0){
            post++;

        }else if(num<0){
            neg++;
        }else{
            zero++;
        }


    }

    printf("Number of positves: %d\n",post);
    printf("Number of negatives: %d\n", neg);
    printf("Number of zeros: %d",zero);
}


void astriz5(){
    for(int i=1;i<=5;i++){
        for(int x=1;x<=5;x++){
            printf("*");
        }

        printf("\n");
    }
}

void astrizset(){
    for(int i=1;i<=5;i++){
        for(int x=1;x<=i;x++){


            printf("*");

        }

        printf("\n");
    }
}





void testx(){


//    int array[12];
//    for(int i=0; i<=10; i++){
//        array[i] = i;
//
//    }
//    int x=0;
//    while(x<=10){
//        printf("%d", array[x]);
//        x++;
//    }



}

//Practical Number 04


//     printf("total: %d", ttl2);
    void p4(){

        //Q3
//        int cnt;
//        int ttl = 1;
//        printf("enter the number you need the factorial: ");
//        scanf("%d", &cnt);
//        for(int i=1; i<=cnt;i++) {
//            ttl = ttl * i;
//
//
//        }
//
//        printf("Value is : %d\n", ttl);

        //Q6

//     int ttl2 = 1;
//     int num,pwr;
//     printf("enter the number and the power: ");
//     scanf("%d %d", &num, &pwr);
//
//
//     for (int i=1; i<=pwr;i++){
//         ttl2 =ttl2*num;
//
//     }
//

    //Q7(fibonacci sequence)

//    int lmt;
//    printf("enter the limit: ");
//    scanf("%d", &lmt);
//    int x1=0;
//    int x2=1;
//    int ttl3;
//    printf("%d %d",x1,x2);
//    for(int i=1; i<=lmt; i++){
//        ttl3=x1+x2;
//        printf(" %d,", ttl3);
//        x1=x2;
//        x2=ttl3;
//
//    }




    //Q9(letter ascii


//    char letset[] = {'A','B','C','D','E','F','G','H','I','J','K','L',
//                     'M','N','O','P','Q','R','S','T','U','V','W','X',
//                     'Y','Z'};
//    for (int i=0;i<=25;i++){
//        printf("%c - %d, ",letset[i], letset[i]);
//
//    }


    //Q11(CHECK WETHER PRIME)

    int num,dev=0;
    printf("enter the number: ");
    scanf("%d", &num);

    for(int i=num; i>=1; i--){
        int x = num%i;
        int ans = num/i;
        if(x==0 && ans==1) {
            dev++;
        }
    }
    if (dev==1){
        printf("It's a Prime Number");
    }else{
        printf("It's not a prime number");
    }










}

void testx3(){
    //pointer and Memory Address
    int x=9;
    int* x_pointer = &x;
    bool year=true;
    if(x<10) printf("%d",*x_pointer);
    if(x>5)
        printf("X is grater");
        printf("x is second");
        x = x + 1;
    if(x>6)
        printf("\nsecond option");

    //while(x<10) printf("x is good");
}

void tute5(){
    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }



}

void today(){

    int x[3][3];
    for(int i=0;i<3;i++){
        for(int s=0;s<3;s++){
            printf("Enter values for x[%d][%d]: ",i,s);
            scanf("%d",&x[i][s]);
        }
    }
    for(int j=0;j<3;j++){
        for(int l=0;l<3;l++){
            printf("%d ",x[j][l]);
        }
        printf("\n");
    }



}

void arrayshop(){
    float prices[10],ttl;

    for(int i=0;i<10;i++){
        printf("Enter the %d price: ",i);
        scanf("%f",&prices[i]);
        ttl+=prices[i];
    }

    printf("Average: %.2f",ttl/10);
    printf("\nPrice list: \n");
    for(int x =0;x<10;x++){
        printf("%.2f\n",prices[x]);
    }
}

void num10(){
    int num,min,max;
    printf("enter num 1: ");
    scanf("%d", &num);
    min=num;
    max=num;
    for (int i=2; i<=10;i++){
        printf("enter num %d: ",i);
        scanf("%d",&num);
        if(num<min){
            min=num;
        }
        if(num>max){
            max=num;
        }
    }

    printf("min is %d\n",min);
    printf("max is %d",max);

}


void prac05(){
    int arry[10];
    int min,max,sum=0;
    printf("Enter %d value: ",1);
    scanf("%d", &arry[0]);
    min=arry[0];
    max=arry[0];
    sum=arry[0];
    for(int i=1;i<10;i++){
        printf("Enter %d value: ",i+1);
        scanf("%d", &arry[i]);
        sum+=arry[i];
        if(arry[i]>max){
            max=arry[i];
        }
        if(arry[i]<min){
            min=arry[i];
        }
    }
    printf("Minimum is : %d\n",min);
    printf("maximum is: %d\n",max);
    printf("Average is: %.2f\n",(float)sum/10);
    printf("Reverse Order: \n");

    for(int j=9;j>=0;j--){
        printf("%d ",arry[j]);
    }


}

void multiarry(){

    int sz1,sz2,comp;
    printf("enter the 2 sizes of arrays: ");
    scanf("%d %d",&sz1,&sz2);
    if (sz1>sz2){
        comp=sz2;
    }else{
        comp=sz1;
    }
    int arr1[sz1],arr2[sz2];
    for(int i=0;i<sz1;i++){
        printf("enter %d value for array 1 : ",i+1);
        scanf("%d",&arr1[i]);
    }

    printf("\nmoving to second array>>\n\n");

    for(int j=0;j<sz2;j++){
        printf("enter %d value for array 2 : ",j+1);
        scanf("%d",&arr2[j]);
    }

    //deciding rounds

    int rnds;
    printf("\nHow many Rounds: ");
    scanf("%d",&rnds);

    for(int k=1;k<=rnds;k++){

        printf("Scalar Sum - 1\nVector Sum -2\nVector Product -3\nScalar Product -4\nWhich is the choice: ");
        int choice;
        scanf("%d",&choice);

    switch(choice) {
        case 1:
            for (int x = 0; x < comp; x++) {
                printf("Scalar Sum of arr1[%d] and arr2[%d]: %d\n", x, x, abs(arr1[x]) + abs(arr2[x]));
            }
            break;
        case 2:
            for (int x = 0; x < comp; x++) {
                printf("Vector Sum of arr1[%d] and arr2[%d]: %d\n", x, x, arr1[x] + arr2[x]);
            }
            break;
        case 3:
            for (int x = 0; x < comp; x++) {
                printf("Vector Product of arr1[%d] and arr2[%d]: %d\n", x, x, arr1[x] * arr2[x]);
            }
            break;
        case 4:
            for (int x = 0; x < comp; x++) {
                printf("Scalar product of arr1[%d] and arr2[%d]: %d\n", x, x, abs(arr1[x]) * abs(arr2[x]));
            }
            break;

    }

    }

}

void lab_sheet_07(){

    //1)
   int array[] ={1,2,2,4,5,6,6};
    printf("length of the array is: %d",sizeof(array)/4 );



    //2)
    //native logic
    int sz = sizeof(array)/4;
    int inpt;
    printf("Enter the element: ");
    scanf("%d", &inpt);
    for(int i=0;i<sz;i++){
        if(array[i]==inpt){
            printf("Index is: %d",i);
        }
    }

    //3)
    int duplicates[7]={0};
    for(int j=0;j<sz;j++){
        //duplicates[j]=0;
        for(int k=0;k<sz;k++){
            if(array[j]==array[k]){
                duplicates[j]+=1;
                //printf("%d", duplicates[j]);
            }
        }
    }
    printf("Duplicates: \n");
    for(int t=0;t<sz;t++){
        printf("%d - %d\n",array[t],duplicates[t]);
    }

    //4)
    int unq_cnt=0;
    for(int e=0;e<sz;e++){
        if(duplicates[e]==1){
            unq_cnt++;
        }
    }
    printf("Number of Unique Elements; %d",unq_cnt);


}

void multi_array_02() {
    //Declare a multi dimensional array with a size of 3 rows 4 colomns
    //input values into the array and display the values in the form of matrix
    int array[3][4];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("Enter value for Array[%d][%d] :", i, j);
            scanf("%d", &array[i][j]);
        }
    }

    printf("\nArray Form: \n");

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", array[i][j]);

        }
        printf("\n");
    }

    printf("\nArray Minors:\n\n");

    for (int y = 0; y < 3; y++) {
        switch (y) {
            case 0:
                for (int t = 0; t < 3; t++) {
                    switch (t) {
                        case 0:
                            printf("%d %d\n%d %d\n\n", array[y + 1][t + 1], array[y + 1][t + 2], array[y + 2][t + 1],
                                   array[y + 2][t + 2]);
                            break;
                        case 1:
                            printf("%d %d\n%d %d\n\n", array[y + 1][t - 1], array[y + 1][t + 1], array[y + 2][t - 1],
                                   array[y + 2][t + 1]);
                            break;
                        case 2:
                            printf("%d %d\n%d %d\n\n", array[y + 1][t - 2], array[y + 1][t - 1], array[y + 2][t - 2],
                                   array[y + 2][t - 1]);
                            break;
                    }
                }
                break;
            case 1:
                for (int t = 0; t < 3; t++) {
                    switch (t) {
                        case 0:
                            printf("%d %d\n%d %d\n\n", array[y - 1][t + 1], array[y - 1][t + 2], array[y + 1][t + 1],
                                   array[y + 1][t + 2]);
                            break;
                        case 1:
                            printf("%d %d\n%d %d\n\n", array[y - 1][t - 1], array[y - 1][t + 1], array[y + 1][t - 1],
                                   array[y + 1][t + 1]);
                            break;
                        case 2:
                            printf("%d %d\n%d %d\n\n", array[y - 1][t - 2], array[y - 1][t - 1], array[y + 1][t - 2],
                                   array[y + 1][t - 1]);
                            break;
                    }
                }
                break;
            case 2:
                for (int t = 0; t < 3; t++) {
                    switch (t) {
                        case 0:
                            printf("%d %d\n%d %d\n\n", array[y - 2][t + 1], array[y - 2][t + 2], array[y - 1][t + 1],
                                   array[y - 1][t + 2]);
                            break;
                        case 1:
                            printf("%d %d\n%d %d\n\n", array[y - 2][t - 1], array[y - 2][t + 1], array[y - 1][t - 1],
                                   array[y - 1][t + 1]);
                            break;
                        case 2:
                            printf("%d %d\n%d %d\n\n", array[y - 2][t - 2], array[y - 2][t - 1], array[y - 1][t - 2],
                                   array[y - 1][t - 1]);
                            break;
                    }
                }

                break;


        }

    }

}



void multi_arry_02(){

    int arry1[3][3],arry2[3][3],sum[3][3];
    for (int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("give 2 inputs for [%d][%d]: ",i,j);
            scanf("%d %d", &arry1[i][j],&arry2[i][j]);
            sum[i][j]=0;
            sum[i][j]=arry1[i][j]+arry2[i][j];
        }
    }
    printf("Sum: \n\n");

    for (int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%4d",sum[i][j]);
        }
        printf("\n");
    }
    
}








  


int main(){
    //star();
    //numsum();
    //sumxy();
    //compare();
    //postneg();
    //grade();
    //oddeven();
    //bintodec();
    //testing();
    //markgrd();
    //increDecre();
    //switchcase();
    //vowel();
    //loopz();
    //loopavrg();
    //posnegcounter();
    //oddevencounter();
    //numbersetz();
    //velocity();
    //tempconvt();
    //testxz();
    //stmrks();
    //dowhiletest();
    //avghigh();
    //fortest();
    //testings();
    //fortest();
    //testx();
    //toss();
    //odevencnt();
    //astriz5();
    //astrizset();
    //p4();
    //testx3();
    //tute5();
    //today();
    //arrayshop();
    //num10();
    //prac05();
    //multiarry();
    //lab_sheet_07();
    multi_arry_02();



    


    
    



   

    


    
}
