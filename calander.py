import calendar
def display_calendar(year, month):
    cal = calendar.TextCalendar(calendar.SUNDAY)
    cal_str = cal.formatmonth(year, month)
    print(cal_str)
year = int(input("Enter year: "))
month = int(input("Enter month (1-12): "))
display_calendar(year, month)