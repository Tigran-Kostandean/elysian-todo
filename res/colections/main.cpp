#include <gtkmm.h>

class HelloWorld : public Gtk::Window {
public:
    HelloWorld() {
        set_title("Hello World");
        set_default_size(200, 200);

        // Create a label
        Gtk::Label label("Hello, GTKmm!");

        // Add the label to the window
        add(label);

        // Show all children of the window
        show_all();
    }
};

int main(int argc, char *argv[]) {
    // Initialize GTKmm
    auto app = Gtk::Application::create(argc, argv, "org.example.helloworld");

    // Create the main window
    HelloWorld hello;

    // Run the application
    return app->run(hello);
}

