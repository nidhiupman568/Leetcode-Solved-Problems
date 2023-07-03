/*class Solution {
    public List<List<Integer>> permute(int[] nums) {
      /*
        List<List<Integer>>res=new ArrayList<>();
        if(nums.length<1)return res;
        helper(res,new Array<>(),nums,new boolean[nums.length]);
        return res;
    }
    private void helper(List<List<Integer>res,List<Integer>cur,int[]nums,boolean[]visited){
        if(cur size()==nums.length){
    
            res.add(new ArrayList(cur));
            return;
        }
        for(int i=0;i<nums.length;i++){
            if(visited[i]) continue;
            cur.add(nums[i]);
            visited[i]=true;
            helper(res,cur,nums,visited);
            cur.remove(cur.size()-1);
            visited[i]=false;
        }

        }
    }
    *//*
public List<List<Integer>> subsets(int[] nums) {
    List<List<Integer>> list = new ArrayList<>();
    Arrays.sort(nums);
    backtrack(list, new ArrayList<>(), nums, 0);
    return list;
}

private void backtrack(List<List<Integer>> list , List<Integer> tempList, int [] nums, int start){
    list.add(new ArrayList<>(tempList));
    for(int i = start; i < nums.length; i++){
        tempList.add(nums[i]);
        backtrack(list, tempList, nums, i + 1);
        tempList.remove(tempList.size() - 1);
    }
}
*//*
class Solution:
    def permute(self, l: List[int]) -> List[List[int]]:
        def dfs(path, used, res):
            if len(path) == len(l):
                res.append(path[:]) # note [:] make a deep copy since otherwise we'd be append the same list over and over
                return

            for i, letter in enumerate(l):
                # skip used letters
                if used[i]:
                    continue
                # add letter to permutation, mark letter as used
                path.append(letter)
                used[i] = True
                dfs(path, used, res)
                # remove letter from permutation, mark letter as unused
                path.pop()
                used[i] = False
            
        res = []
        dfs([], [False] * len(l), res)
        return res



        */



        class Solution {
    public List<List<Integer>> permute(int[] letters) {
        List<List<Integer>> res = new ArrayList<>();
        dfs(new ArrayList<>(), new boolean[letters.length], res, letters);
        return res;
    }

    private static void dfs(List<Integer> path, boolean[] used, List<List<Integer>> res, int[] letters) {
        if (path.size() == used.length) {
            // make a deep copy since otherwise we'd be append the same list over and over
            res.add(new ArrayList<Integer>(path));
            return;
        }

        for (int i = 0; i < used.length; i++) {
            // skip used letters
            if (used[i]) continue;
            // add letter to permutation, mark letter as used
            path.add(letters[i]);
            used[i] = true;
            dfs(path, used, res, letters);
            // remove letter from permutation, mark letter as unused
            path.remove(path.size() - 1);
            used[i] = false;
        }
    }    
}
