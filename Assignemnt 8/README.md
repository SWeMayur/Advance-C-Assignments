# Assignment 8: Algorithms and Iterators Workshop #
# Standard Template Library (STL) Algorithmic Solutions #
## This repository contains solutions that adhere to the following constraints: ##
* Utilizes only Standard Template Library (STL) algorithms.
* Incorporates lambda functions where appropriate.
* Avoids explicit loops (for, while, do/while) or recursion.

## Implementation ##
```
 std::for_each(triangles.begin(), triangles.end(), [&](Triangle triangle) {
    std::vector<Point3D> points = {triangle.p1(), triangle.p2(), triangle.p3()};
    std::for_each(points.begin(), points.end(), [&](Point3D point) {
        compareAndUpdate(point, mMin, mMax);
    });
}); 
```

## Guidelines for Solutions ##
* Ensure that only STL algorithms are used in the implementations.
* Use lambda functions where necessary to achieve the desired functionality.
* Avoid explicit loops and recursion in the codebase.
