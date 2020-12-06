int f(int n)
{
	int i, x = 0, y = 1, z = 1;
	
	if(n == 0)
	{
		return 0;
	}else{
		if(n == 1)
		{
			return 1;
		}else{
			for(i=2;i<n;i++)
			{
				x = y;		//Entspricht dem Wert f(i-2)
				y = z;		//Entspricht dem Wert f(i-1)
				z = x + y;
			}
			return z;			
		}
	}
}
