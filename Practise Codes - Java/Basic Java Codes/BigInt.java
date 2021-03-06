package my;

import java.io.*;
import java.math.BigInteger;

public class BigInt
{
    public static void main(String[] args) throws IOException
    {
        InputStreamReader isr = new InputStreamReader(System.in);
        BufferedReader br = new BufferedReader(isr);

        while (true)
        {
            String str1 = br.readLine();
            String str2 = br.readLine();

            BigInteger x = new BigInteger(str1);
            BigInteger y = new BigInteger(str2);

            if(x.compareTo(BigInteger.ZERO)==0 && y.compareTo(BigInteger.ZERO)==0)  break;

            System.out.println(x.add(y));
            System.out.println(x.subtract(y));
            System.out.println(x.multiply(y));
            System.out.println(x.divide(y));
        }
    }
}

