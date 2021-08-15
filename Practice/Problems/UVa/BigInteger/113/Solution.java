// Using Binary Search
// AC : 26686503
import java.util.Scanner;
import java.math.BigInteger;

class Main{
    private static Scanner scn =  new Scanner(System.in);
    public static void main(String args[]){
        while(scn.hasNext()){
            int n = Integer.parseInt(scn.next());
            BigInteger p = new BigInteger(scn.next());
            BigInteger ans = nthRoot(p,n);
            System.out.println(ans.toString());
        }
    }
    private static BigInteger nthRoot(BigInteger p, int n){
        BigInteger max = new BigInteger("10000000000");
        BigInteger min = new BigInteger("1");
        BigInteger mid; 
        int res;

        mid = max.add(min).divide(new BigInteger("2"));
        res = mid.pow(n).compareTo(p);
        int flag =1;

        while( res != 0 ){
            switch (res){
                case  1: 
                    max = mid.min(max);
//                    System.out.println("mid in greater than P");
                    break;
                case -1: 
                    min = mid.max(min);
//                    System.out.println(mid.pow(n).toString() + " in less than "+p.toString());
                    break;
                default: 
                    flag =0;
            }
            if(flag ==0){
                break;
            }
            else{
                mid = max.add(min).divide(new BigInteger("2"));
                res = mid.pow(n).compareTo(p);

            }
        }
        return mid;
    }
}
