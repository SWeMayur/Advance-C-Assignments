# Assignment 8: Algorithms and iterator workshop
In this algorithms, it is to demonstrate the implementation of algorithms and iterators to avoid for/while loop.

## Implementation
* In the bounding box function i.e. in BBox.cpp file, we need to traverse through all the triangles and find the maximum and minimum point from the geometry.
* To do so, I have defined one lambda function which does the task and calls comopareAndUpate function which is used to find minimum and maximum point

## code snippet
```
std::for_each(triangles.begin(), triangles.end(), [&](Triangle triangle) {
        std::vector<Point3D> points = {triangle.p1(), triangle.p2(), triangle.p3()};
        std::for_each(points.begin(), points.end(), [&](Point3D point) {
            compareAndUpdate(point, mMin, mMax);
        });
    });
```
