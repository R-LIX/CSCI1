#include <QWidget>
#include <QGridLayout>
#include <QPushButton>
#include <QVector>

// Inside your custom QWidget or QMainWindow constructor:
QWidget* centralWidget = new QWidget(this);
QGridLayout* gridLayout = new QGridLayout(centralWidget);

// Store pointers to buttons if you need to access them globally later
QVector<QPushButton*> buttons;

for (int row = 0; row < 3; ++row) {
    for (int col = 0; col < 3; ++col) {
        QPushButton* button = new QPushButton("", this);

        // Make buttons large and square
        button->setMinimumSize(100, 100);
        button->setStyleSheet("font-size: 24px; font-weight: bold;");

        // Add to layout: (widget, row, column)
        gridLayout->addWidget(button, row, col);
        buttons.append(button);

        // Connect button to your turn logic function
        connect(button, &QPushButton::clicked, this, [=]() {
            // Your function here: e.g., makeMove(row, col, button);
        });
    }
}
centralWidget->setLayout(gridLayout);
