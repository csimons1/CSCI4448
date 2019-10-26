
public class HardWareStoreSimulation {

	public static void main(String[] args) {
		/* Setup:
		 * Create inventory list, populate with tools from factories.
		 * Create active rental list, pass as parameter to customers trying to rent
		 */
		//Testing
		System.out.println("Running");
		
		ConcreteToolFactory concreteToolFactory = new ConcreteToolFactory();
		Tool testTool1 = concreteToolFactory.instantiateTool("1");
		Tool testTool2 = concreteToolFactory.instantiateTool("1");
		
		System.out.println("Objects Instantiated");
		System.out.println("testTool1: " + testTool1.getClass());
		System.out.println("testTool2: " + testTool2.getClass());
		
		if(testTool1.getClass() == testTool2.getClass())
			System.out.println("testTool1 == testTool2");
		else
			System.out.println("Not ==");
		if(testTool1.getClass().equals(testTool2.getClass()))
			System.out.println("testTool1 equals testTool2");
		else
			System.out.println("Not .equals()");
		
		
		System.out.println("Testing Decorator comparisons, testTool1 has an extension cord");
		testTool1 = new ExtensionCord(testTool1);
		System.out.println("testTool1 Post-Decoration: " + testTool1.getClass());
		
		if(testTool1.getClass() == testTool2.getClass())
			System.out.println("Deco: testTool1 == testTool2");
		else
			System.out.println("Deco: Not ==");
		if(testTool1.getClass().equals(testTool2.getClass()))
			System.out.println("Deco: testTool1 equals testTool2");
		else
			System.out.println("Deco: Not .equals()");
	
		System.out.println(testTool1.getStockName());
		
	}

}
