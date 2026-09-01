}

        class State {
            int r, c, mask, e, moves;

            State(int r, int c, int mask, int e, int moves) {
                this.r = r;
                } else if (classroom[r].charAt(c) == 'L') {
                    id[r][c] = k++;
                }
            }
        }

        if (k == 0) return 0;

        int totalMask = (1 << k) - 1;

        int[][][] best = new int[m][n][1 << k];

        for (int r = 0; r < m; r++) {
            for (int c = 0; c < n; c++) {
                java.util.Arrays.fill(best[r][c], -1);
            }
        int k = 0;
        int sr = 0, sc = 0;

        for (int r = 0; r < m; r++) {
            for (int c = 0; c < n; c++) {
                if (classroom[r].charAt(c) == 'S') {
                    sr = r;
                    sc = c;
        int m = classroom.length;
        int n = classroom[0].length();

        int[][] id = new int[m][n];

        for (int r = 0; r < m; r++) {
            java.util.Arrays.fill(id[r], -1);
        }

class Solution {
    public int minMoves(String[] classroom, int energy) {