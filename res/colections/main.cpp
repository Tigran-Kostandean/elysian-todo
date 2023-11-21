#include <gtkmm.h>

class MainWindow : public Gtk::Window {
public:
    MainWindow() {
        set_title("Elysian ToDo");
        set_default_size(400, 500);

        Gtk::Label label("Hello, GTKmm!");

        // Add the label to the window
        add(label);

        // Show all children of the window
        show_all();
    }
};

int main(int argc, char *argv[]) {
    auto app = Gtk::Application::create(argc, argv, "org.example.helloworld");

    MainWindow main;

    return app->run(main);
}

