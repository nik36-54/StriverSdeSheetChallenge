/***************************************************************************

	Class for graph node is as follows:

	class graphNode
	{
		public:
    		int data;
    	vector<graphNode *> neighbours;
    	graphNode()
    	{
        	data = 0;
        	neighbours = vector<graphNode *>();
    	}

    	graphNode(int val)
    	{
        	data = val;
        	neighbours = vector<graphNode *>();
    	}

    	graphNode(int val, vector<graphNode *> neighbours)
    	{
        	data = val;
        	this->neighbours = neighbours;
    	}
	};

******************************************************************************/
unordered_map<graphNode*,graphNode*> mp;
graphNode *cloneGraph(graphNode *node)
{
    if(node==NULL)return node;
    
    if(mp.find(node)==mp.end())
    {
        mp[node]=new graphNode(node->data,{});
        for(auto u:node->neighbours)
            mp[node]->neighbours.push_back(cloneGraph(u));
    }
    return mp[node];
}