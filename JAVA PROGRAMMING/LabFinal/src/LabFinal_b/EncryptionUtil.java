package LabFinal_b;

import java.util.Scanner;

public class EncryptionUtil {
	public int encrypt;
	public String decrypt;

	void encryption(int encrypt) {
		this.encrypt = encrypt;
		Scanner sc = new Scanner(System.in);
		int x= sc.nextInt();
		encrypt >> x;
	}
	
	void decryption(String decrypt) {
		this.decrypt = decrypt;
		Scanner sc = new Scanner(System.in);
		int y= sc.nextInt();
		encrypt << y;
	}
	
	void display() {
		System.out.println("Encryption:"+encrypt);
		System.out.println("Decryption"+decrypt);
	}
}
