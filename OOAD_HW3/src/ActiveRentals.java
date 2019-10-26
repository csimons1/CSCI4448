import java.util.List;

public class ActiveRentals {
	String name;
	List<Tool> rentedTools;
	int lengthOfRental;
	int dayOfRental;
	int cost;
	
	public ActiveRentals(String name, List<Tool> rentedTools, int lengthOfRental, int dayOfRental, int cost) {
		this.name = name;
		this.rentedTools = rentedTools;
		this.lengthOfRental = lengthOfRental;
		this.dayOfRental = dayOfRental;
		this.cost = cost;
	}
	public List<Tool> getRentedTools() {
		return this.rentedTools;
	}
}
