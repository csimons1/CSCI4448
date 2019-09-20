package Q4;

//Inherits from feline, which inherits from animal.
public class tiger extends feline {

	// Tiger's name
	private String name;

	// Default Constructor, don't use.
	public tiger() {
		super("None");
		this.name = "None";
	}
	
	// Overridden constructor for setting the tiger's name, along with all super-class' name.
	public tiger(String name) {
		super(name);
		this.name = name;
	}
}
