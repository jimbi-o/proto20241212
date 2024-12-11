#include <windows.h>

// The entry point for a GUI application
int WINAPI WinMain(
    HINSTANCE hInstance,      // Handle to the current instance of the application
    HINSTANCE hPrevInstance,  // Handle to the previous instance of the application (always NULL in modern Windows)
    LPSTR lpCmdLine,          // Command-line arguments as a single string
    int nCmdShow              // Flag indicating how the window should be displayed
                   ) {
  // MessageBox example
  MessageBox(NULL, "Hello, Windows!", "WinMain Demo", MB_OK | MB_ICONINFORMATION);

  return 0; // Exit the application
}
