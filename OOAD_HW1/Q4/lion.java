package Q4;

//Inherits from feline, which inherits from animal.
public class lion extends feline {
	
	// Lion's name
	private String name;
	
	// Default Constructor, don't use.
	public lion() {
		super("None");
		this.name = "None";
	}

	// Overridden constructor for setting the lion's name, along with all super-class' name.
	public lion(String name) {
		super(name);
		this.name = name;
	}
}
