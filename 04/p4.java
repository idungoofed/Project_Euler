import java.io.*;
import java.util.*;

public class p4 {
    private int[] nums;

    public p4() {
	nums = new int[999*999];
	int ins = 0;
	for (int i = 1; i <= 999; i++) {
	    for (int j = 1; j <= 999; j++) {
		nums[ins] = i*j;
		ins++;
	    }
	}
	Arrays.sort(nums);
    }

    private int reverse(int num) {
	int ans = 0;
	while (num != 0) {
	    ans = ans * 10 + num % 10;
	    num = num / 10;
	}
	return ans;
    }

    public static void main(String[] args) {
	p4 ans = new p4();
	for (int i = ans.nums.length - 1; i >= 0; i--) {
	    if ((String.valueOf(ans.nums[i])).equals(String.valueOf(ans.reverse(ans.nums[i])))) {
		System.out.println("Answer = " + ans.nums[i]);
		return;
	    }
	}
    }
}
