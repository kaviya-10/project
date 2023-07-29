#include <stdio.h>

int main() {
  char converter;
  int tempChoice;
  int currencyChoice;
  int mass;
  int userinputFarenheit;
  int userinputCelcius;
  int userinputUSDtoEuro;
  int userinputUSDtoJPY;
  int userinputUSDtoRMB;
  int userinputOunce;
  int userinputGrams;
  int fahrenheitToCelcius;
  int celciusToFahrenheit;
  float UsdtoEuro ;
  float UsdtoJpy;
  float UsdtoRmb;
  float OunceToPounds;
  float GramsToPounds;

  printf("\t\t\t\t\tWelcome to Unit Converter!!!\n");
  printf("\t\t\t\tHere is a list of conversation to choose\n");
  printf("1.Temperature(T)\n2.Currency(C)\n3.Mass(M)\n");
  printf("Please enter the letter you want to convert.\n");
  scanf("%c",&converter);
 if(converter == 'T'||converter == 'C'||converter == 'M'){
  if(converter == 'T'){
      printf("Welcome to Temperature Converter! \n");
      printf("Here is a list of conversations to choose from: \n");
      printf("Enter 1 for Fahrenheit to Celsius. \n");
      printf("Enter 2 for Celsius to Fahrenheit. \n");
      scanf("%d",&tempChoice);
      if(tempChoice == 1){
          printf("Please enter the Fahrenheit degree: \n");
          scanf("%d",&userinputFarenheit);
          fahrenheitToCelcius =  ((userinputFarenheit-32) * (5.0/9.0));
          printf("Celcius: %d",fahrenheitToCelcius);
      }
      else if(tempChoice == 2){
        printf("Please enter the Celcius degree: \n");
        scanf("%d",&userinputCelcius);
        celciusToFahrenheit = ((9.0/5.0)*userinputCelcius + 32);
        printf("Fahrenheit: %d",celciusToFahrenheit);
      }
      else
        printf("Please enter the correct choice. \n");
  }

  else if(converter == 'C') {
      printf("Welcome to Currency Converter! \n");
      printf("Here is a list of conversations to choose from: \n");
      printf("Enter 1 for USD to Euro. \n");
      printf("Enter 2 for USD to JPY. \n");
      printf("Enter 3 for USD to RMB. \n");
      scanf("%d",&currencyChoice);
      if(currencyChoice == 1){
          printf("Please enter the USD amount: \n");
          scanf("%d",&userinputUSDtoEuro);
          UsdtoEuro = userinputUSDtoEuro * 0.87;
          printf("Euro: %.2f",UsdtoEuro); // %.2f = rounds the float to only 2 decimal places;
      }
      else if(currencyChoice == 2){
          printf("Please enter the USD amount: \n");
          scanf("%d",&userinputUSDtoJPY);
          UsdtoJpy = userinputUSDtoJPY * 111.09;
          printf("JPY: %.2f",UsdtoJpy);
      }
      else if(currencyChoice == 3) {
        printf("Please enter the USD amount: \n");
        scanf("%d",&userinputUSDtoRMB);
        UsdtoRmb = userinputUSDtoRMB * 6.82;
        printf("RMB: %.2f",UsdtoRmb);
      }
      else
        printf("Please enter correct choice. \n");
   }
  else if(converter == 'M'){
      printf("Welcome to Mass Converter! \n");
      printf("Here is a list of conversations to choose from: \n");
      printf("Enter 1 for ounces to pounds. \n");
      printf("Enter 2 for gram to pounds. \n");
      scanf("%d",&mass);
      if(mass == 1){
          printf("Please enter the ounce amount: \n");
          scanf("%d",&userinputOunce);
          OunceToPounds = userinputOunce * 0.0625;
          printf("Pounds: %.2f",OunceToPounds);
      }
      else if(mass == 2) {
          printf("Please enter the gram amount: \n");
          scanf("%d",&userinputGrams);
          GramsToPounds = userinputGrams * 0.00220462;
          printf("Pounds: %.2f",GramsToPounds);
      }
      else
        printf("Please enter the correct choice. \n");
   }
 }
   else{
        printf("Invalid Input.\nTry Again..\n");
   }
  return 0;
}
