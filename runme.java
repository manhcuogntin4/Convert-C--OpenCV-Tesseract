import java.util.Vector;
public class runme {

  static {
    try {
	System.loadLibrary("ocr");
    } catch (UnsatisfiedLinkError e) {
      System.err.println("Native code library failed to load. See the chapter on Dynamic Linking Problems in the SWIG Java documentation for help.\n" + e);
      System.exit(1);
    }
  }

  public static void main(String argv[]) {
    // Call our gcd() function
   String tt[]={"test.png", "test1.png"};
   ocr.ocr(tt, 2, "out.txt");
  }
}
