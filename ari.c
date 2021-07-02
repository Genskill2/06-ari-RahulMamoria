#include <stdio.h>
#include <assert.h>
#include <string.h>
#include <cs50.h>
#include <ctype.h>

string ari(string s){
 int letters=0;
  for(int i=0; i<strlen(s);i++)
  {
     if(isalpha(s[i])!=0)
        letters++;
     }

     
 int words=0;
 for(int i=0; i<strlen(s);i++){
  if(s[i]==' ')
     words++;
  else{
     if(s[i]=='.' || s[i]=='!' || s[i]=='?' || s[i]==','){
     words++;
     i++;
     
  }}}

  
  int sentence=0;
  for(int i=0; i<strlen(s);i++){
     if((s[i]=='.' ||s[i]=='?' || s[i]=='!') && s[i+1]==' ')
     sentence++;
     if(s[i]=='.' && s[i+1]=='\0')
     sentence++;
     }
    
     
   float index=(4.71*((float)letters/words))+(0.5*((float)words/sentence))-21.43;
   int ind=index/1;
      ind++;
 if(ind<0 || ind==1)
      return "Kindergarden";
      else{
          if(ind==2)
             return "First/Second Grade";
          else {
             if(ind==3) 
                 return "Third Grade";
             else{
               if(ind==4)
                   return "Fourth Grade";
               else{
                   if(ind==5)
                      return "Fifth Grade";
                   else{
                    if(ind==6)
                       return "Sixth grade";
                    else{
                        if(ind==7)
                           return "Seventh Grade";
                        else{
                              if(ind==8)
                                 return "Eight Grade";
                              else{
                                if(ind==9)
                                   return "Ninth Grade";
                                else{
                                   if(ind==10)
                                     return "Tenth Grade";
                                     else{
                                       if(ind==11)
                                           return "Eleventh Grade";
                                       else{
                                             if(ind==12)
                                               return "Twelfth Grade";
                                             else{
                                                     if(ind==13)
                                                       return "College student";
                                                       else{
                                                            if(ind==14 || ind>14)
                                                                return "Professor";
                                                                      else
                                                                         return "error"; }}}}}}}}}}}}}
     

     }
