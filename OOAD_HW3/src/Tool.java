
public abstract class Tool {
	String description = "null";
	String stock = "null";	// Thought this may be needed for decorator and active rental compatability
	// should not need it due to the decorator implementations return the description + new string, it does not
	// modify the class's description.
	Tool stockTool;
	
	public String getDescription() {
		return description;
	}
	
	public String getStockName() {
		return stock;
	}

	//public String getFullDescription() {
	//	return fullDescription;
	//}
	public abstract int price();
}
