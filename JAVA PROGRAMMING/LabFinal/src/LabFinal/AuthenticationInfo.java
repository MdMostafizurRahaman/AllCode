package LabFinal;

import javax.management.loading.PrivateClassLoader;

@SuppressWarnings("unused")
public class AuthenticationInfo {
	private String URL;
	private String Username;
	private String Password;
	
	AuthenticationInfo(String URL,String Username,String Password){
		this.URL = URL;
		this.Username = Username;
		this.Password = Password;
	}
	
	
	public String getURL() {
		return URL;
	}
	public void setURL(String uRL) {
		URL = uRL;
	}
	public String getUsername() {
		return Username;
	}
	public void setUsername(String username) {
		this.Username = username;
	}
	public String getPassword() {
		return Password;
	}
	public void setPassword(String password) {
		this.Password = password;
	}
	
	
	
	void display() {
		System.out.println("URL:"+URL);
		System.out.println("UserName:"+Username);
		System.out.println("Password:"+Password);
	}
	
	
}
