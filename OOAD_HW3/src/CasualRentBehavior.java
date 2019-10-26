import java.util.ArrayList;
import java.util.List;
import java.util.concurrent.ThreadLocalRandom;

public class CasualRentBehavior {
	List<Tool> rentedTools = new ArrayList<Tool>();
	
	public List<Tool> rent(List<Tool> availableTools) {
		// Tools will be chosen randomly from list of available tools
		// Can only rent if there are at least X tools in the inventory, 
		// where X is the number of tools randomly chosen to be rented, 
		//and the customer does not currently have 3 tools rented.
		int howManyTools = (ThreadLocalRandom.current().nextInt() % 24);
		
		if(availableTools.size() >= 3 && rentedTools.size() < 3) {
			int randomInt;
			
			// Choose 3 tools at random
			for(int i = 3; i < 4; i++) {
				randomInt = (ThreadLocalRandom.current().nextInt() % 24); // %24 since theres only 24 tools
				rentedTools.add(availableTools.get(randomInt));	// Give to customer
				availableTools.remove(randomInt);	// Remove from inventory
			}	
		}
		
		return availableTools;	// Return the updated inventory to the store
	}
}
