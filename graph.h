#pragma once
#include<vector>
#include<map>
namespace IceCola {

//V == vector, W == weight, bool Direction, false == single, true == double
template<class V, class W, class Direction>
class Graph
{
public:
    Graph(const V& vertex, size_t size):_vertex(vertex)
    {
        _matrix.reserve(size);
        for(int i = 0; i < size; i++)
        {
            _matrix[i].reserve(size);
        }
    }
    
    size_t GetIndexOfV(const V& v) {
        
    }
    
    void AddEdge(const V& v1, const V& v2, const W& weight)
    {
        
    }
    
private:
    std::vector<V> _vertex;
    std::map<V, int> _indexMap;
    std::vector<std::vector<W>> _matrix;
};

}
