
public class YardWorkToolFactory extends HardWareStoreFactory {
	// Instantiate which tool based on string input
	public Tool instantiateTool(String type) {
		if(type.equals("1")) {
			return new YardWorkTool1();
		}
		else if(type.equals("2")) {
			return new YardWorkTool2();
		}
		else if(type.equals("3")) {
			return new YardWorkTool3();
		}
		else if(type.equals("4")) {
			return new YardWorkTool4();
		}
		else {
			return new YardWorkTool5();
		}
	}
}
