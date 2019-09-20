package Q4;
import java.util.LinkedList;
import java.util.List;

/* Zoo Class
 * Zoo should just be a list of the animals in the zoo. Handles population of the zoo.
 * if the need to add or remove animals should arise, it should be implemented here.
 */

public class zoo {
	
	private List<animal> animals;
	
	// Constructor creates empty list of animal type.
	public zoo() {
		this.animals = new LinkedList<animal>();	// Make an empty list.
		this.populate(); // Fill the zoo.
	}
	
	// Method to create the animals.
	public void populate() {
		this.animals.add(new cat("Carl"));
		this.animals.add(new cat("Cathy"));
		this.animals.add(new lion("Lilly"));
		this.animals.add(new lion("Liam"));
		this.animals.add(new tiger("Timothy"));
		this.animals.add(new tiger("Tina"));
		this.animals.add(new dog("Donny"));
		this.animals.add(new dog("Doug"));
		this.animals.add(new wolf("Wallace"));
		this.animals.add(new wolf("Willy"));
		this.animals.add(new rhino("Rhonda"));
		this.animals.add(new rhino("Ralph"));
		this.animals.add(new elephant("Evan"));
		this.animals.add(new elephant("Eric"));
		this.animals.add(new hippo("Harry"));
		this.animals.add(new hippo("Henry"));
		
	}
	
	public List<animal> getAnimals() {
		return this.animals;
	}
	

}
