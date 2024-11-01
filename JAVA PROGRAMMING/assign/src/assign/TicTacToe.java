package assign;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import java.util.Random;
import java.util.Scanner;

public class TicTacToe {
	
	static ArrayList<Integer> PlayerPosition = new ArrayList<Integer>();
	static ArrayList<Integer> ComputerPosition = new ArrayList<Integer>();
		
		char[][] gameBoard = {{' ', '|', ' ', '|', ' '},
							  {'-', '+', '-', '+', '-'},
				              {' ', '|', ' ', '|', ' '},
				              {'-', '+', '-', '+', '-'},
				              {' ', '|', ' ', '|', ' '}};
		void method1() {
		while(true) {
			Scanner sc = new Scanner(System.in);
			System.out.println("Enter Ur placement(1-9)");
			int playerPos = sc.nextInt();
			while(PlayerPosition.contains(playerPos)|| ComputerPosition.contains(playerPos)) {
				System.out.println("Position taken! Enter a correct position");
				playerPos = sc.nextInt();
			}
				
			
			placePiece(gameBoard, playerPos, "player");
			
			String result = checkWinner();
			if(result.length() > 0) {
				System.out.println(result);
				
			}
			
			Random rand = new Random();
			int ComPos = rand.nextInt(9) + 1;
			while(PlayerPosition.contains(ComPos)|| ComputerPosition.contains(ComPos)) {
				ComPos = rand.nextInt(9) + 1;
			}
			placePiece(gameBoard, ComPos, "Computer");
			
			printGameBoard(gameBoard);
			
			result = checkWinner();
			
			if(result.length() > 0) {
				System.out.println(result);
				
			}
			
		}
		
	}
	private static void printGameBoard(char[][] gameBoard) {
		for(int i = 0; i < 5; i++) {
			for(int j = 0; j < 5; j++) {
				System.out.print(gameBoard[i][j]);
			}
			System.out.println();
		}
	}
	
	private static void placePiece(char[][] gameBoard, int pos, String user) {
		
		char symbol = ' ';
		if(user.equals("player")) {
			symbol = 'X';
			PlayerPosition.add(pos);
		}else if(user.equals("Computer")) {
			symbol = '0';
			ComputerPosition.add(pos);
		}
		
		switch(pos) {
		case 1:
			gameBoard[0][0] = symbol;
			break;
		case 2:
			gameBoard[0][2] = symbol;
			break;
		case 3:
			gameBoard[0][4] = symbol;
			break;
		case 4:
			gameBoard[2][0] = symbol;
			break;
		case 5:
			gameBoard[2][2] = symbol;
			break;
		case 6:
			gameBoard[2][4] = symbol;
			break;
		case 7:
			gameBoard[4][0] = symbol;
			break;
		case 8:
			gameBoard[4][2] = symbol;
			break;
		case 9:
			gameBoard[4][4] = symbol;
			break;
		default:
				break;
		}
	}
	private static String checkWinner() {
		
		List topRow = Arrays.asList(1, 2, 3);
		List midRow = Arrays.asList(4, 5, 6);
		List botRow = Arrays.asList(7, 8, 9);
		List lefcol = Arrays.asList(1, 4, 7);
		List midcol = Arrays.asList(2, 5, 8);
		List rigcol = Arrays.asList(3, 6, 9);
		List cross1 = Arrays.asList(1, 5, 9);
		List cross2 = Arrays.asList(3, 5, 7);
		
		ArrayList<List>winning = new ArrayList<List>();
		winning.add(topRow);
		winning.add(midRow);
		winning.add(botRow);
		winning.add(lefcol);
		winning.add(midcol);
		winning.add(rigcol);	
		winning.add(cross1);
		winning.add(cross2);
		
		for(List l : winning) {
			if(PlayerPosition.containsAll(l)) {
				return "Congratulations u won!!!";
			}
			else if(ComputerPosition.containsAll(l)) {
				return "Computer win!!!";
			}else if(PlayerPosition.size() + ComputerPosition.size() == 9) {
				return "None won! Play again!!!";
			}
		}
		return " ";
	}

}

