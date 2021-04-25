import java.util.Scanner;

//import javax.lang.model.util.ElementScanner14; 
public class spc {
    public static int digit(int n)
{
    int sum1;
    sum1=0;
    while(n>0)
    {
        sum1+=n%10;
        n/=10;
    }
    return sum1;
}

    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        String s=sc.nextLine();
        String s1=s;
        String s2="";
        for(int i=0;i<s.length();i++)
        {int sum=0;
            //if(s.charAt(i)=='a'|| s.charAt(i) == 'e'|| s.charAt(i) == 'i'||s.charAt(i)=='o'||s.charAt(i)=='u'||s.charAt(i)=='A'||s.charAt(i)=='E'||s.charAt(i)=='I'||s.charAt(i)=='O'||s.charAt(i)=='U')
            if(s.substring(i,i+1).matches("[a,e,i,o,u,A,E,I,O,U]+"))
         {         //s1+=s.substring(i,i+1);
                  int j=5*i;
                  int n;
                   if(j%2==0)
                    n=(j*j)/4;
                     else 
                     n=((j+1)/2)*((j+1)/2);
                while(n>=10)
                {
                   n= digit(n);
                }
                       
        
                    
                /* x  
                }*/
               // s1+=sum;



        
       // System.out.println(n);
      //  s=s.replace(s.substring(i,i+1),String.valueOf(n));
      s=s.substring(0,i)+String.valueOf(n)+s.substring(i+1);
            }
            
        }
        
            if(s1.equals(s))
            System.out.println("-1");
        else 
           System.out.println(s);

    }
}
