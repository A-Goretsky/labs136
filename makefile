all: labmakes

labmakes:
	#$(MAKE) -C lab_02
	#$(MAKE) -C lab_03
	$(MAKE) -C lab_04
	$(MAKE) -C lab_05
	$(MAKE) -C lab_07
	$(MAKE) -C lab_09
	$(MAKE) -C lab_10
	$(MAKE) -C lab_11
	$(MAKE) -C lab_12
	$(MAKE) -C lab_13

labruns:
	$(MAKE) -C lab_04 run
	$(MAKE) -C lab_05 run
	$(MAKE) -C lab_07 run
	$(MAKE) -C lab_09 run
	$(MAKE) -C lab_10 run
	$(MAKE) -C lab_11 run
	$(MAKE) -C lab_12 run
	$(MAKE) -C lab_13 run

labclean:
	$(MAKE) -C lab_04 clean
	$(MAKE) -C lab_05 clean
	$(MAKE) -C lab_07 clean
	$(MAKE) -C lab_09 clean
	$(MAKE) -C lab_10 clean
	$(MAKE) -C lab_11 clean
	$(MAKE) -C lab_12 clean
	$(MAKE) -C lab_13 clean
