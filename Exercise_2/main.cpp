#include "Utils.hpp"
#include "PolygonalMesh.hpp"
#include <cmath>

using namespace std;
using namespace MeshLibrary;
using namespace calc;

int main()
{
    PolygonalMesh mesh;
    string path = "PolygonalMesh";

    if (!importmesh(path, mesh))
    {
        return 1;
    }

    const double epsilon = numeric_limits<double>::epsilon();

    checkedges(mesh, epsilon);
    checkareas(mesh, epsilon);
    checkMarkers0d(mesh, epsilon);
    checkMarkers1d(mesh);

    return 0;
}
