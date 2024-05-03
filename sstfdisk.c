#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

int abs_diff(int a,int b)
{
	return abs(a-b);
}

findreq(int reqno,int req[],int head1)
{
	int min_diff = INT_MAX;
	int index = -1;
	
	for(i=0;i<reqno;i++)
	{
		if(req[i]!=-1)
		{
			int d = abs_diff(req[i],head1);
		}
		if(d<min_diff)
		mindiff=d;
		index = i;
	}
}

int sstf(int reqno,int req[],int head)
{
	int seekt=0;
	int head1 = head;
	
	for(i=0;i<reqno;i++)
	{
		int near_req_index = findreq(reqno,req,head1);
		int near_req = req[near_req_index];
		seekt+=abs_diff(head1,near_req);
		head1=near_req;
		req[near_req_index]=-1;
	}
	return seekt;
}

int main()
{
	int cyl =0,reqno=0,head=0,thm=0;
	printf("Enter no. of cylinders : ");
	scanf("%d",&cyl);
	printf("Enter no. of requests : ");
	scanf("%d",&reqno);
	int req[reqno];
	printf("Enter requests : ");
	for(i=0;i<reqno;i++)
	{
		scanf("%d",&req[i]);
	}
	
	printf("Enter current r/w head position : ");
	scanf("%d",&head);
	
	thm = sstf(reqno,req,head);
	printf("Toatl seek time/head movement  : %d",thm);
	
	return 0;
}















/*
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define MAX_REQUESTS 1000

// Function to calculate absolute difference
int abs_diff(int a, int b) {
    return abs(a - b);
}

// Function to find the closest request to the current head position
int find_closest_request(int requests[], int n, int current_head) {
    int min_diff = INT_MAX;
    int index = -1;

    for (int i = 0; i < n; i++) {
        if (requests[i] != -1) {
            int diff = abs_diff(requests[i], current_head);
            if (diff < min_diff) {
                min_diff = diff;
                index = i;
            }
        }
    }

    return index;
}

// Function to perform SSTF disk scheduling
int sstf_disk_scheduling(int requests[], int n, int initial_head) {
    int total_seek_time = 0;
    int current_head = initial_head;

    for (int i = 0; i < n; i++) {
        int closest_request_index = find_closest_request(requests, n, current_head);
        int closest_request = requests[closest_request_index];
        total_seek_time += abs_diff(current_head, closest_request);
        current_head = closest_request;
        requests[closest_request_index] = -1; // Mark as serviced
    }

    return total_seek_time;
}

int main() {
    int requests[MAX_REQUESTS];
    int n, initial_head;

    printf("Enter the number of disk requests: ");
    scanf("%d", &n);

    printf("Enter the disk requests: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &requests[i]);
    }

    printf("Enter the initial head position: ");
    scanf("%d", &initial_head);

    int total_seek_time = sstf_disk_scheduling(requests, n, initial_head);
    printf("Total seek time using SSTF: %d\n", total_seek_time);

    return 0;
}
*/
