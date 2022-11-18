#include <iostream>
#include "pugixml.hpp"

using namespace std;
using namespace pugi;

int main()
{
    cout << "\n Read and Pursing author data (books.xml).....\n\n";
    xml_document doc;
    // load the XML file
    if (!doc.load_file("books.xml")) return -1;
    xml_key = doc.child("book").child("author");
    for (xml_node_iterator it = tools.begin(); it != tools.end(); ++it)
    {
        cout << "author:";
        for (xml_attribute_iterator ait = it->attributes_begin(); ait != it->attributes_end(); ++ait)
        {
            cout << " " << ait->name() << "=" << ait->value();
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}
