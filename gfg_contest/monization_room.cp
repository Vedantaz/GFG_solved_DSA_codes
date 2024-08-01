int roomCount =0 ,i=0, j;
        for(i=0; i<n-1; i++){
            j = i+1;
            if(start[j] <= end[i]) {
                roomCount++;
            }
        }
        if (roomCount == 0){
                return 1;
        }
        return roomCount;