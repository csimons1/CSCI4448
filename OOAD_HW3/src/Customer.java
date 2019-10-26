import java.util.List;

public abstract class Customer {
	RentBehavior rentBehavior;
	String name = "";

	public void rentTool(List<Tool> availableTools){
		rentBehavior.rent(availableTools, name);
	}
}
