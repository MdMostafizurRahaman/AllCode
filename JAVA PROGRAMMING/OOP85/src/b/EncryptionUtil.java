package b;

import java.util.Scanner;

public class EncryptionUtil {
	public String encrypt;
	public String decrypt;
	
	void Encryption(String encrypt) {
		this.encrypt = encrypt;
		Scanner sc = new Scanner(System.in);
		int x = sc.nextInt();
		encrypt >> x;
		
	}
	
	void decryption(String decrypt) {
		this.decrypt = decrypt;
		int y = sc.nextInt();
		encrypt << y;
		
	}
	
}
