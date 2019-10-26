import java.util.ArrayList;
import java.util.List;

public class BusinessCustomer extends Customer {
	/* Business Customer Specs:
	 * Always 3 Tools for 7 Nights
	 */
	String name = "Null";
	List<Tool> rentedTools;
	RentBehavior rentBehavior;
	
	public BusinessCustomer(String name) {
		this.rentBehavior = new BusinessRentBehavior();
		this.name = name;
	}
	
	public void performRent(List<Tool> availableTools, String name, int numberOfTools){
		if(rentedTools.size() < 3) {
			rentedTools = rentBehavior.rent(availableTools, this.name, rentedTools.size());
		}
		else
			System.out.println(name + " attempted to rent more tools, but already has 3 tools!");
	}
}
