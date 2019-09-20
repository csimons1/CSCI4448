package Q4;

public class wolf extends canine {

	// Wolf's Name
	private String name;
	
	// Default Constructor, don't use.
	public wolf() {
		super("None");
		this.name = "None";
	}
	
	// Constructor for setting the wolf's name, and it's super-class' name.
	public wolf(String name) {
		super(name);
		this.name = name;
	}
}
