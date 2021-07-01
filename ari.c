#include <stdio.h>
#include <assert.h>
#include <string.h>
#include <cs50.h>
#include<ctype.h>

string ari(string s){
 int letters=0;
  for(int i=0; s[i]!='\0';i++)
  {
     if(isalpha(s[i])!=0)
        letters++;
     }
     printf("Letters %d\n", letters);
     
 int words=0;
 for(int i=0; s[i]!='\0';i++){
  if(s[i]==' ')
     words++;
  else{
     if(s[i]=='.' || s[i]=='!' || s[i]=='?' || s[i]==','){
     words++;
     i++;
     
  }
  }
 }
  printf("Words %d\n", words);
  
  

  int sentence=0;
  for(int i=0; s[i]!='\0';i++){
     if((s[i]=='.' ||s[i]=='?' || s[i]=='!') && s[i+1]==' ')
     sentence++;
     if(s[i]=='.' && s[i+1]=='\0')
     sentence++;
     }
     printf("sentence %d\n", sentence);
     
     
float index=(4.71*((float)letters/words))+(0.5*((float)words/sentence))-21.43;
   int ind=index/1;
      ind++;
    printf("%d\n", ind);
   if(ind<0 || ind==1)
      return "Kindergarden";
   if(ind==2)
      return "First/Second Grade";
   if(ind==3)
      return "Third Grade";
   if(ind==4)
      return "Fourth Grade";
   if(ind==5)
      return "Fifth Grade";
   if(ind==6)
      return "Sixth grade";
   if(ind==7)
      return "Seventh Grade";
   if(ind==8)
      return "Eight Grade";
   if(ind==9)
      return "Ninth Grade";
   if(ind==10)
      return "Tenth Grade";
   if(ind==11)
      return "Eleventh Grade";
   if(ind==12)
      return "Twelfth Grade";
   if(ind==13)
      return "College student";
   if(ind==14 || ind>14)
      return "Professor";
     
   
 /* return Index %f\n", index);
  return Ind %d", ind);*/
}



void test1() {
  string s1="The town was large enough to support three inns, and all their common rooms were rife with rumors. Arianne sent her men into each of them, to hear what they might hear. In the Broken Shield, Daemon Sand was told that the great septry on the Holf of Men had been burned and looted by raiders from the sea, and a hundred young novices from the motherhouse on Maiden Isle carried off into slavery.";
  assert(strcmp(ari(s1), "Eleventh Grade") == 0);
}

void test2() { 
 string s2="A mouse took a stroll through the deep dark wood. A fox saw the mouse, and the mouse looked good. Where are you going to, little brown mouse? Come and have lunch in my underground house.";
  assert(strcmp(ari(s2), "Third Grade") == 0);
}

void test3() {
  string s3="Exhaled respiratory particles can build-up within enclosed spaces with inadequate ventilation. The risk of COVID-19 infection increases especially in spaces where people engage in physical exertion or raise their voice (e.g., exercising, shouting, singing) as this increases exhalation of respiratory droplets. Prolonged exposure to these conditions, typically more than 15 minutes, leads to higher risk of infection.";
  assert(strcmp(ari(s3), "Professor") == 0);
 }

int main(void) {
  test1();
  test2();
  test3();
}
