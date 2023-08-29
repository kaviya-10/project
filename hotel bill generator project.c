#include <stdio.h>
#include<string.h>

int orderNum = 0;
int count = 0;
int ordcount = 0;
int total = 0;
int z = 0 , j = 0 , k = 0, l = 0 , m = 0 , n = 0 ;
int biriyani_count = 0 , noodles_count = 0 , fishcurry_count = 0 , pulav_count = 0 , whiterice_count =0 , varietyrice_count = 0;
int biriyani_count2 = 0 , noodles_count2 = 0 , fishcurry_count2 = 0 , pulav_count2 = 0 , whiterice_count2 =0 , varietyrice_count2 = 0;
int biriyani_price = 150;
int Noodles_price = 120;
int fishcurry_price = 100;
int Pulav_price = 130;
int whiterice_price = 80;
int Varietyrice_price = 90;
char one[20] = "Biriyani";
char two[20] = "Noodles";
char three[20] = "Fish Curyy";
char four[20] = "Pulav";
char five[20] = "White rice";
char six[20] = "Variety rice";
int price = 0;
int quantity = 0;
char Feedbackqn[10];
char Feedback[100];

void menu ()
{
  printf ("\nThis is our menu : \n");
  printf ("1.%s\n", one);
  printf ("2.%s\n", two);
  printf ("3.%s\n", three);
  printf ("4.%s\n", four);
  printf ("5.%s\n", five);
  printf ("6.%s\n", six);
}


void order ()
{
  printf("\nHow many food items would you like to order : ");
  scanf("%d",&ordcount);

  printf("\nPress 1 -> Biriyani\n");
  printf("Press 2 -> Noodles\n");
  printf("Press 3 -> Fish Curry\n");
  printf("Press 4 -> Pulav\n");
  printf("Press 5 -> White rice\n");
  printf("Press 6 -> Variety rice\n");

  for(int i = 1 ; i <= ordcount ; i++)
  {
  if(i == 1)
  {
        printf ("\nWhat would you like to order :  ");
        scanf("%d" , &orderNum);

    switch (orderNum)
    {
    case 1:
      printf ("Thank you for ordering %s", one);
      printf ("\nHow many plates of %s do you need : ", one);
      scanf("%d",&biriyani_count);
      biriyani_count2 += biriyani_count;
      price += (biriyani_count * biriyani_price);
      quantity += biriyani_count;
      z++;
      break;
    case 2:
      printf ("Thank you for ordering %s", two);
      printf ("\nHow many plates of %s do you need : ", two);
      scanf("%d",&noodles_count);
      noodles_count2 += noodles_count;
      price += (noodles_count * Noodles_price);
      quantity += noodles_count;
      j++;
      break;
    case 3:
      printf ("Thank you for ordering %s", three);
      printf ("\nHow many bowls of %s do you need : ", three);
      scanf ("%d", &fishcurry_count);
      fishcurry_count2 += fishcurry_count;
      price += (fishcurry_count * fishcurry_price);
      quantity += fishcurry_count;
      k++;
      break;
    case 4:
      printf ("Thank you for ordering %s", four);
      printf ("\nHow many plates of %s do you need : ", four);
      scanf ("%d", &pulav_count);
      pulav_count2 += pulav_count;
      price += (pulav_count * Pulav_price);
      quantity += pulav_count;
      l++;
      break;
    case 5:
      printf ("Thank you for ordering %s", five);
      printf ("\nHow many plates of %s do you need : ", five);
      scanf ("%d", &whiterice_count);
      whiterice_count2 += whiterice_count;
      price += (whiterice_count * whiterice_price);
      quantity += whiterice_count;
      m++;
      break;
    case 6:
      printf ("Thank you for ordering %s", six);
      printf ("\nHow many plates of %s do you need : ", six);
      scanf ("%d", &varietyrice_count);
      varietyrice_count2 += varietyrice_count;
      price += (varietyrice_count * Varietyrice_price);
      quantity += varietyrice_count;
      n++;
      break;
    default:
        printf("Item number %d is not available in our menu\n",orderNum);
    }
  }
  else
  {
      printf ("\nWhat else would you like to order :  ");
        scanf ("%d", &orderNum);

  switch (orderNum)
    {
    case 1:
      printf ("Thank you for ordering %s", one);
      printf ("\nHow many plates of %s do you need : ", one);
      scanf("%d",&biriyani_count);
      biriyani_count2 += biriyani_count;
      price += (biriyani_count * biriyani_price);
      quantity += biriyani_count;
      z++;
      break;
    case 2:
      printf ("Thank you for ordering %s", two);
      printf ("\nHow many plates of %s do you need : ", two);
      scanf("%d",&noodles_count);
      noodles_count2 += noodles_count;
      price += (noodles_count * Noodles_price);
      quantity += noodles_count;
      j++;
      break;
    case 3:
      printf ("Thank you for ordering %s", three);
      printf ("\nHow many bowls of %s do you need : ", three);
      scanf ("%d", &fishcurry_count);
      fishcurry_count2 += fishcurry_count;
      price += (fishcurry_count * fishcurry_price);
      quantity += fishcurry_count;
      k++;
      break;
    case 4:
      printf ("Thank you for ordering %s", four);
      printf ("\nHow many plates of %s do you need : ", four);
      scanf ("%d", &pulav_count);
      pulav_count2 += pulav_count;
      price += (pulav_count * Pulav_price);
      quantity += pulav_count;
      l++;
      break;
    case 5:
      printf ("Thank you for ordering %s", five);
      printf ("\nHow many plates of %s do you need : ", five);
      scanf ("%d", &whiterice_count);
      whiterice_count2 += whiterice_count;
      price += (whiterice_count * whiterice_price);
      quantity += whiterice_count;
      m++;
      break;
    case 6:
      printf ("Thank you for ordering %s", six);
      printf ("\nHow many plates of %s do you need : ", six);
      scanf ("%d", &varietyrice_count);
      varietyrice_count2 += varietyrice_count;
      price += (varietyrice_count * Varietyrice_price);
      quantity += varietyrice_count;
      n++;
      break;
    default:
        printf("Item number %d is not available in our menu\n",orderNum);

    }
  }
  }
}

int bill()
{
    if(quantity > 0)
    {
    printf("\n------------------BILL------------------\n\n");
    printf("------------------------------------------------\n");
    printf("  Items                Price          Quantity");
    printf("\n------------------------------------------------\n");
    if(z>0)
    {
    printf("BIRIYANI                150              %d\n",biriyani_count2);
    }
    if(j>0)
    {
    printf("NOODLES                 120              %d\n",noodles_count2);
    }
    if(k>0)
    {
    printf("FISH CURRY              100              %d\n",fishcurry_count2);
    }
    if(l>0)
    {
    printf("PULAV                   130              %d\n",pulav_count2);
    }
    if(m>0)
    {
    printf("WHITE RICE              80               %d\n",whiterice_count2);
    }
    if(n>0)
    {
    printf("VARIETY RICE            90               %d\n",varietyrice_count2);
    }
    printf("------------------------------------------------\n");
    printf("TOTAL :                 %d              %d\n",price,quantity);
    printf("------------------------------------------------\n");
    }
}


int main ()
{
  printf("WELCOME TO OUR RESTAURANT\n");
  menu();
  printf("\n\n------------------ORDER------------------\n");
  order();
  bill();
  printf("Would you like to give any feedback ? ");
  scanf("%s",&Feedbackqn);
  printf("\n");
  if(strcmp(Feedbackqn,"yes") == 0 || strcmp(Feedbackqn,"YES") == 0)
  {
    scanf("%s",&Feedback);
   printf("\nThank you for your valuable feedback");
   printf("\n");
  }
  printf("\n\tTHANK YOU FOR VISITING US\n\t    HAVE A NICE DAY");

}
