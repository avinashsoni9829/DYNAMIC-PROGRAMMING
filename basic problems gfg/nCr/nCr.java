package avinash;

import java.math.BigInteger;

public class nCr {
	
	public static BigInteger factorial(int n)
	{
		BigInteger f=new BigInteger("1");
		
		for(int i=2;i<=n;++i)
		{
			f=f.multiply(BigInteger.valueOf(i));
		}
		
		return f;
		
	}
	
	public static BigInteger nCr(int n,int r)
	{
		BigInteger v1=factorial(n);
		BigInteger v2=factorial(n-r);
		BigInteger v3=factorial(r);
		
		BigInteger ans=new BigInteger("1");
		
		ans= ans.multiply(v1);
		ans=ans.divide(v2);
		ans=ans.divide(v3);
		
		return ans;
		
	}

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		int n=522,r=30;
		System.out.println(""+nCr(n,r));
		

	}

}
