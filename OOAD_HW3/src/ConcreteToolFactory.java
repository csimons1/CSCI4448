
public class ConcreteToolFactory extends HardWareStoreFactory {
	
	// Instantiate which tool based on string input
	public Tool instantiateTool(String type) {
		if(type.equals("1")) {
			return new ConcreteTool1();
		}
		else if(type.equals("2")) {
			return new ConcreteTool2();
		}
		else if(type.equals("3")) {
			return new ConcreteTool3();
		}
		else if(type.equals("4")) {
			return new ConcreteTool4();
		}
		else {
			return new ConcreteTool5();
		}
	}

}
