int length = nums.size();
vector<int> result(length);

for (int idx = 0; idx < length; idx++) {
    int curr = nums[idx];
    int mn = INT_MAX;
    bool isFound = false;

    for (int bitPos = 0; bitPos <= 30; bitPos++) {
        if (((curr >> bitPos) & 1) == 1) {
            int newCandidate = curr & ~(1 << bitPos);

            if (newCandidate < 0) continue;

            if ((newCandidate | (newCandidate + 1)) == curr) {
                if (newCandidate < mn) {
                    mn = newCandidate;
                    isFound = true;
                }
            }
        }
    }

    result[idx] = isFound ? mn : -1;
}

return result;