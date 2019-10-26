import java.util.List;

public interface RentBehavior {
	// Delegating renting habits to an interface
	public List<Tool> rent(List<Tool> availableTools, String name, int numberOfTools);

}
