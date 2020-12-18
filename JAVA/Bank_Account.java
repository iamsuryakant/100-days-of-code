public class Bank_Account {

    public	String Account_Holder_Name;
	private	String Account_Number;
	private	char Account_Type;
		
	public	Boolean withdraw_money(int money)
	{
		return true;
	}

	public Boolean deposit_money(int money)			
	{
		return true;
	}
	public Bank_Account(String name,String number,char type)
	{
		Account_Holder_Name = name;
		Account_Number = number;
		Account_Type = type;
	}
}
    
