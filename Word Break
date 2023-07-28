class Solution {
    private class TrieNode {
        TrieNode[] children;
        boolean endOfWord;

        public TrieNode() {
            this.children = new TrieNode[26];
            this.endOfWord = false;
        }
    }

    private TrieNode root;

    public boolean wordBreak(String s, List<String> wordDict) {
        root = new TrieNode();
        for (String word : wordDict) {
            insert(word);
        }

        int n = s.length();
        boolean[] dp = new boolean[n];

        for (int j = 0; j < n; j++) {
            for (int i = 0; i <= j; i++) {
                if (isPresent(s, i, j)) {
                    dp[j] = (i - 1 >= 0) ? dp[i - 1] : true;
                    if (dp[j]) break;
                }
            }
        }
        
        return dp[n - 1];
    }

    private void insert(String word) {
        TrieNode node = root;
        for (char ch : word.toCharArray()) {
            int i = ch - 'a';
            if (node.children[i] == null) {
                node.children[i] = new TrieNode();
            }
            node = node.children[i];
        }
        node.endOfWord = true;
    }

    private boolean isPresent(String word, int start, int end) {
        TrieNode node = root;
        for (int i = start; i <= end; i++) {
            int ch = word.charAt(i) - 'a';
            if (node.children[ch] == null) {
                return false;
            }
            node = node.children[ch];
        }
        return node.endOfWord;
    }
}
