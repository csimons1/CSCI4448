
public class PlumbingToolFactory extends HardWareStoreFactory {
	
	// Instantiate which tool based on string input
	public Tool instantiateTool(String type) {
		if(type.equals("1")) {
			return new PlumbingTool1();
		}
		else if(type.equals("2")) {
			return new PlumbingTool2();
		}
		else if(type.equals("3")) {
			return new PlumbingTool3();
		}
		else if(type.equals("4")) {
			return new PlumbingTool4();
		}
		else {
			return new PlumbingTool5();
		}
	}
}
