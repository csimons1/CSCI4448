package Q4;

public class hippo extends pachyderm {

	// Hippo's name
	private String name;
	
	// Default Constructor, don't use.
	public hippo() {
		super("None");
		this.name = "None";
	}
	
	// Constructor for setting the hippo's name, and it's super-class' name.
	public hippo(String name) {
		super(name);
		this.name = name;
	}
}
