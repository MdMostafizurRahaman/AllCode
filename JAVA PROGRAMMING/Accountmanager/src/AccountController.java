public class AccountController {
	public static void main(String[] args) {
		SavingsAccounts savingsAccounts1 = new SavingsAccounts();
		SavingsAccounts savingsAccounts2 = new SavingsAccounts();
		savingsAccounts1.savingsBalance=2000;
		savingsAccounts2.savingsBalance=3000;
		savingsAccounts1.modifyInterestRate(0.04);
		savingsAccounts2.modifyInterestRate(0.05);
		for(int i=0;i<12;i++) {
			savingsAccounts1.modifySavingsBalance();
			savingsAccounts2.modifySavingsBalance();
			System.out.println("Savingsaccount1(for month"+(i+1)+":"+savingsAccounts1.savingsBalance);
			System.out.println("Savingsaccount1(for month"+(i+1)+":"+savingsAccounts1.savingsBalance);
		}
	}
}
