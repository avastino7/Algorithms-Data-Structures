/*
You are given an array of non-overlapping intervals intervals where intervals[i] = [starti, endi] represent the start and the end of the ith interval and intervals is sorted in ascending order by starti. You are also given an interval newInterval = [start, end] that represents the start and end of another interval.

Insert newInterval into intervals such that intervals is still sorted in ascending order by starti and intervals still does not have any overlapping intervals (merge overlapping intervals if necessary).

Return intervals after the insertion.
*/

class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        intervals.push_back(newInterval);

        // Logic of Merge Intervals Question
        sort(intervals.begin(), intervals.end());
        int start=intervals[0][0], end=intervals[0][1], n=intervals.size();
        vector<vector<int>> merged;

        for(int i=1; i<n; i++) {
            if(end >= intervals[i][0])
                end = max(end, intervals[i][1]);
            else {
                merged.push_back({start, end});
                start = intervals[i][0];
                end = intervals[i][1];
            }
        }
        merged.push_back({start, end});
        return merged;
    }
};
