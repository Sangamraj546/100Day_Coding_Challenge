
class Solution
{
public:
    Node *ansNode(Node *node, unordered_map<Node *, Node *> &visited)
    {
        if (!node)
            return nullptr;
        if (visited.find(node) != visited.end())
            return visited[node];
        Node *cloneNode = new Node(node->val);
        visited[node] = cloneNode;
        for (Node *neighbor : node->neighbors)
        {
            cloneNode->neighbors.push_back(ansNode(neighbor, visited));
        }

        return cloneNode;
    }
    Node *cloneGraph(Node *node)
    {
        if (!node)
            return nullptr;
        unordered_map<Node *, Node *> visited;
        return ansNode(node, visited);
    }
};