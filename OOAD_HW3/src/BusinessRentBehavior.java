import java.util.ArrayList;
import java.util.List;
import java.util.concurrent.ThreadLocalRandom;

public class BusinessRentBehavior implements RentBehavior {
	/* Business Customer Specs:
	 * Always 3 Tools for 7 Nights
	 */
	public List<Tool> rent(List<Tool> availableTools, String name, int numberOfTools) {
		
		//Number of tools doesnt matter here, because business customers always rent 3 at a time, and 3 is the global max
		List<Tool> rentedTools = new ArrayList<Tool>();
		
		for(int i = 0; i < 4; i++) { // pick 3 tools randomly
			int randInt = ThreadLocalRandom.current().nextInt();
			randInt = randInt % availableTools.size();
			
			rentedTools.add(availableTools.get(randInt));		
		}
		
		
			
			
	}
}
