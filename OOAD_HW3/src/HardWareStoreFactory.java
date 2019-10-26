
public abstract class HardWareStoreFactory {
	
	// Factory super-class
	// type is a number represented as a string for which tool.
	public Tool createTool(String type) {
		Tool tool;
		
		tool = instantiateTool(type);
		
		return tool;
	}
	// Subclass will decide using their own implementation of this method.
	protected abstract Tool instantiateTool(String type);
}
