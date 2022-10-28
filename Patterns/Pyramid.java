public class Program
{//A pyramid of ; for java,c,c++ and any other languages that uses semicolon KEEP TAKING ;FROM HERE
    public static void main(String[] args) {
        int j;
        
       char ch=';';
       
        for(j=0;j<=20;j++)
        {
            for(int k=0;k<=19-j;k++)
            System.out.print(" ");
            
           for(int k1=0;k1<j;k1++)
             System.out.print(ch+" ");
          System.out.println ();
        }
        System.out.println ();
        //System.out.println ("While coding this i kept forgetting semicolon(since i learnt python and coded in java after a long time.)So here's a pyramid of ; Don't forget them");
    }
    
}