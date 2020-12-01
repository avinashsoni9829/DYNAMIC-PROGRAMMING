package avinash;
import java.math.*;


public class CatalanNumber {
	
	public static BigInteger findCatalan(int n)
	{
		BigInteger b= new BigInteger("1");
		
		for(int i=1;i<=n;++i)
		{
			b=b.multiply(BigInteger.valueOf(i));
			
		}
		
		b=b.multiply(b);
		BigInteger d=new BigInteger("1");
		for(int i=1;i<=2*n;++i)
		{
			d=d.multiply(BigInteger.valueOf(i));
		}
		
		BigInteger ans=d.divide(b);
		
		ans=ans.divide(BigInteger.valueOf(n+1));
		
		return ans;
		
	}

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int n=11;
		System.out.println(findCatalan(n));
		
		

	}

}
