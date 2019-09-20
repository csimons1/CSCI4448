package Q4;

/* Pachyderm Super-class
 * I actually have no idea what word is used to describe the vocalizations of
 * a rhino, elephant, or hippo. Either way, I would say they roar, and that's all
 * handled here.
 */

public abstract class pachyderm extends animal {

	// Name of the pachyderm
	protected String name;
	
	// Default Constructor (Don't use it.)
	public pachyderm() {
		super("None");
		this.name = "None";
	}
	
	// Overridden Constructor, takes the pachyderm's name in, sets the super-class name and this
	// object's name.
	public pachyderm(String name) {
		super(name);
		this.name = name;
	}
	
	// getSimpleName pro-tip from:
	// https://stackoverflow.com/questions/15770469/print-the-type-of-a-java-variable/15770503
	// Making all the pachyderms make the same approximation of a sound.
	public void makeNoise() {
		System.out.println(this.name + ", the " + this.getClass().getSimpleName() + " makes a vocalization that sounds like 'roar'.");
	}

}
