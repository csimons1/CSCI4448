
public class ExtensionCord extends OptionsDecorator {
	
	// Tool to add options to
	Tool tool;
	
	// Constructor
	public ExtensionCord(Tool tool) {
		this.tool = tool;
	}
	// Add options to the tool's description
	public String getDescription() {
		return tool.getDescription() + " w/ Extension Cord";
	}
	
	public String getStockName() {
		return tool.getStockName();
	}
	
	// Price of the option
	public int price() {
		return tool.price() + 2;
	}
}
