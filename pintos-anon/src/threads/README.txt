The following changes were made in src/tests/threads to add the alarm-mega test:

copied the contents of alarm-multiple.ck into a new file called alarm-mega.ck
	changed line 4 from 
		check_alarm (7);
	to
		check_alarm (70);
		
edited Rubric.alarm-mega
	added line 4
		4	alarm-mega

edited test.c
	added line 16
		    {"alarm-mega", test_alarm_mega},

edited test.h
	added line 10
		extern test_func test_alarm_mega;
		
edited Make.tests
	changed line 5 from 
		alarm-multiple alarm-simultaneous alarm-priority alarm-zero	\
	to
		alarm-multiple alarm-mega alarm-simultaneous alarm-priority alarm-zero	\

edited alarm-wait.c
	added lines 21-25
		void
		test_alarm_mega (void)
		{
		  test_sleep (5,70);
		}