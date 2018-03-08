all: labmakes

labmakes:
	#$(MAKE) -C lab_02
	#$(MAKE) -C lab_03
	$(MAKE) -C lab_04
	$(MAKE) -C lab_05

labruns:
	$(MAKE) -C lab_04 run
	$(MAKE) -C lab_05 run

labclean:
	$(MAKE) -C lab_04 clean
	$(MAKE) -C lab_05 clean
