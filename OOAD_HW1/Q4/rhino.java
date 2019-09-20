package Q4;

public class rhino extends pachyderm {

	// Rhino's name
	private String name;
	
	// Default Constructor, don't use.
	public rhino() {
		super("None");
		this.name = "None";
	}
	
	// Constructor for setting the Rhino's name, and it's super-class' name.
	public rhino(String name) {
		super(name);
		this.name = name;
	}
}
