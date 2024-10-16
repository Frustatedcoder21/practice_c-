// https://www.youtube.com/redirect?event=video_description&redir_token=QUFFLUhqbDk4dEVIWU56bVBpdUR0WnE3WHhWWWpSM1g1QXxBQ3Jtc0ttUDZXb1VYY1ZxRXYwdG1wOTd5bDZ1TXp3b2ZyMFZtRnZvRXkzX29sdmNPTWhXZjJsU1pSQkRsLXplWVh2dllzTUt6eXZiVnRSNzV6VXc5YkpPMHJpWWVwcEc4ZjREeTdlQk4tRjlycEVneEdyM0xoZw&q=https%3A%2F%2Fwww.geeksforgeeks.org%2Fproblems%2Fstring-manipulation3706%2F1%3Fpage%3D1%26difficulty%255B%255D%3D0%26category%255B%255D%3DStack%26sortBy%3Dsubmissions&v=abQZotIl70g

int removeConsecutiveSame(vector<string>& arr) {
        // Your code goes here
        stack<string>st;
        for(int i=0;i<arr.size();i++){
            if(st.empty()){
                st.push(arr[i]);
            }else if(st.top()==arr[i]){
                st.pop();
            }else{
                st.push(arr[i]);
            }
        }
        return st.size();
    }