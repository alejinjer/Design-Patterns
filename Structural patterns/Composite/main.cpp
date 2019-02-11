#include <composite.h>
#include <dot.h>
#include <line.h>

int main()
{
    Composite *globalComposite = new Composite();
    Composite *composite2 = new Composite();
    Graphic *dot1 = new Dot(0, 0);
    Graphic *dot2 = new Dot(2, 3);
    Graphic *line1 = new Line(3, 3, 6, 5);

    composite2->add(dot1);
    composite2->add(dot2);
    composite2->add(line1);

    globalComposite->add(composite2);
    globalComposite->draw();

    delete(line1);
    delete(dot2);
    delete(dot1);
    delete(composite2);
    delete(globalComposite);
}
