public class SavingsAccounts {
	public double annualInterestRate= 0.02;
	public double savingsBalance;
	
	private double calculateMonthlyInterest(){
		return(savingsBalance*annualInterestRate)/12;
	}
	
	public void modifySavingsBalance() {
		
		savingsBalance+=calculateMonthlyInterest();
	}
	
	public void modifyInterestRate(double annualInterestRate) {
		this.annualInterestRate=annualInterestRate;
	}
	
}
