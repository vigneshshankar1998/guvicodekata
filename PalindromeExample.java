class PalindromeExample{  
 public static void main(String args[]){  
  int r,sum=0,temp;    
  int q;//It is the number variable to be checked for palindrome  
  
  temp=q;    
  while(q>0){    
   r=q%10;  //getting remainder  
   sum=(sum*10)+r;    
   q=q/10;    
  }    
  if(temp==sum)    
   System.out.println("YES");    
  else    
   System.out.println("NO");    
}  
}  
