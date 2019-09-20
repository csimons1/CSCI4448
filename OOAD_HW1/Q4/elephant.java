package Q4;

public class elephant extends pachyderm {
	
	// Elephant's name
	private String name;
	
	// Default Constructor, don't use.
	public elephant() {
		super("None");
		this.name = "None";
	}
	
	// Constructor for setting the hippo's name, and it's super-class' name.
	public elephant(String name) {
		super(name);
		this.name = name;
	}
}
