class Solution {
public:
    int hardestWorker(int n, vector<vector<int>>& logs) 
    {
          int start_time = 0;
        int res_id = 0;
        int size = logs.size() - 1;
        int longest_time = 0;

        for (int i = 0; i <= size; i++)
        {
            int id = logs[i][0];
            int end_time = logs[i][1];
            
            // total time taken in performing each task.
            int curr = end_time - start_time;
            
            // if the curr task takes more time than previous task.
            if (longest_time < curr)
            {
                longest_time = curr;
                res_id = id;
            }
            
            // If the both tasks takes the same amount of time , return the min id.
            if (longest_time == curr)
            {
                res_id = min(res_id, id);
            }
            
            // the end_time of the previous task will be the start of the next task.
            start_time = end_time;
        }
        return res_id;
    }
};
