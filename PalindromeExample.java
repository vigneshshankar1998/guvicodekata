class PalindromeExample{  
 public static void main(String args[]){  
  int r,sum=0,temp;    
  int q;//It is the number variable to be checked for palindrome  
  
   temp=n;    
  while(n>0){    
   r=n%10;  //getting remainder  
   sum=(sum*10)+r;    
   n=n/10;    
  }   
  if(temp==sum)    
   System.out.println("YES");    
  else    
   System.out.println("NO");    
}  
}  
