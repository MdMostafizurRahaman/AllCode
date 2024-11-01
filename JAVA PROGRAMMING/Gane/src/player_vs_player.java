import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import java.util.Scanner;
	
	public class player_vs_player {
			
		static ArrayList<Integer> PlayerPosition1 = new ArrayList<Integer>();
		static ArrayList<Integer> PlayerPosition2 = new ArrayList<Integer>();
			
		public static void main(String[] args) {
				
			char[][] gameBoard = {{' ', '|', ' ', '|', ' '},
								  {'-', '+', '-', '+', '-'},
					              {' ', '|', ' ', '|', ' '},
					              {'-', '+', '-', '+', '-'},
					              {' ', '|', ' ', '|', ' '}};
				
			System.out.println("TicTacToe\n");					
			printGameBoard(gameBoard);
			System.out.println("Player1:X");
			System.out.println("Player2:0");
			
			while(true) {

				System.out.println("Enter placement(1-9)");
				Scanner sc = new Scanner(System.in);
				int playerPos1 = sc.nextInt();
				while(PlayerPosition1.contains(playerPos1)|| PlayerPosition2.contains(playerPos1)) {
					System.out.println("Position taken! Enter a correct position");
					playerPos1 = sc.nextInt();
				}
						
				placePiece(gameBoard, playerPos1, "Player1");
				printGameBoard(gameBoard);
				String result = checkWinner();
				if(result.length() > 0) {
					System.out.println(result);
				}
					
				System.out.println("Player 2");
				int playerPos2 = sc.nextInt();
				while(PlayerPosition1.contains(playerPos2)|| PlayerPosition2.contains(playerPos2)) {
					System.out.println("Position taken! Enter a correct position");
					playerPos2 = sc.nextInt();
				}
					
					
				placePiece(gameBoard, playerPos2, "Player2");
					
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
			if(user.equals("Player1")) {
				symbol = 'X';
				PlayerPosition1.add(pos);
			}else if(user.equals("Player2")) {
				symbol = '0';
				PlayerPosition2.add(pos);
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
				if(PlayerPosition1.containsAll(l)) {
					return "Congratulations Player1 Won!!!";
				}
				else if(PlayerPosition2.containsAll(l)) {
					return "Congratualtions Player2 Won!!!";
				}else if(PlayerPosition1.size() + PlayerPosition2.size() == 9) {
					return "None won!!!Play again!!!";
				}
			}
			return " ";
		}
	
	}
