class Leap {

    boolean isLeapYear(int year) {
        return year % 4 == 0;
        // return ( ( (year % 400 == 0) || !(year % 100 == 0) )  && (year % 4 == 0));
    }

}
