import java.util.*;

public class paritycheck {

    static void codegenarator(String s){
        int[][] a= new int[11][11];
        int n = s.length();
        int ln=0;
        for (int i = 0; i < n; i++){
            int val = Integer.valueOf(s.charAt(i));
            int b[]=new int[8];
            int x=0;
            while (val > 0){
                if (val % 2 == 1){
                    b[x]=1;
                }
                else
                    b[x]=0;
                val /= 2;
                x++;
            }
            reverse(b);
            ln=b.length;
            for(int j=0;j<ln;j++){
                a[i][j]=b[j];
            }
        }
        for(int i=0;i<n;i++){
            int c=0;
            for(int j=0;j<ln;j++){
                if(a[i][j]==1)
                c++;
            }
            if((c%2)==0)
            a[i][ln]=0;
            else
            a[i][ln]=1;
        }
        for(int j=0;j<ln;j++){
            int c=0;
            for(int i=0;i<n;i++){
                if(a[i][j]==1)
                c++;
            }
            if((c%2)==0)
            a[n][j]=0;
            else
            a[n][j]=1;
        }
        System.out.println();
        for(int i=0;i<n;i++){
            for(int j=0;j<ln;j++){
                System.out.print(a[i][j]);
            }
            System.out.print("  ");
            System.out.println(a[i][ln]);
        }
        System.out.println();
        for(int j=0;j<ln;j++){
            System.out.print(a[n][j]);
        }
        System.out.print("  ");
        System.out.println(a[n][ln]);
        System.out.println(); 
        System.out.println("The code is: ");  
        for(int i=0;i<=n;i++){
            for(int j=0;j<=ln;j++)
            System.out.print(a[i][j]);
        }
    }
    static void reverse(int in[]){
        int l, r = 0;
        r = in.length - 1;
        for (l = 0; l < r; l++, r--){
            int temp = in[l];
            in[l] = in[r];
            in[r] = temp;
        }
    }
    public static void main(String args[]){
        Scanner in = new Scanner(System.in);
        String s;
        System.out.print("Enter word: ");
        s=in.next();
        codegenarator(s);
    }

}
