	i = 0;
	start = clock::now();
		ROS_INFO_STREAM("ROS_INFO_STREAM " << i);	i++;
	stop = clock::now();
	duration = (stop - start) / i;	//nsec allways int
	std::cout << "Itterations: " << i << " Duration per itteration: " << duration.count()/1000 << " usec" << std::endl;

	i = 0;
	start = clock::now();
		ROS_INFO_STREAM("ROS_INFO_STREAM " << i);	i++;
	stop = clock::now();
	duration = (stop - start) / i;	//nsec allways int
	std::cout << "Itterations: " << i << " Duration per itteration: " << duration.count()/1000 << " usec" << std::endl;

	i = 0;
	start = clock::now();
		ROS_INFO_STREAM("ROS_INFO_STREAM " << i);	i++;
		ROS_INFO_STREAM("ROS_INFO_STREAM " << i);	i++;
		ROS_INFO_STREAM("ROS_INFO_STREAM " << i);	i++;
		ROS_INFO_STREAM("ROS_INFO_STREAM " << i);	i++;
		ROS_INFO_STREAM("ROS_INFO_STREAM " << i);	i++;
		ROS_INFO_STREAM("ROS_INFO_STREAM " << i);	i++;
		ROS_INFO_STREAM("ROS_INFO_STREAM " << i);	i++;
		ROS_INFO_STREAM("ROS_INFO_STREAM " << i);	i++;
		ROS_INFO_STREAM("ROS_INFO_STREAM " << i);	i++;
		ROS_INFO_STREAM("ROS_INFO_STREAM " << i);	i++;
	stop = clock::now();
	duration = (stop - start) / i;	//nsec allways int
	std::cout << "Itterations: " << i << " Duration per itteration: " << duration.count()/1000 << " usec" << std::endl;


	i = 0;
	start = clock::now();
		ROS_INFO_STREAM("ROS_INFO_STREAM " << i);	i++;
	stop = clock::now();
	duration = (stop - start) / i;	//nsec allways int
	std::cout << "After 0sec sleep. Duration for one itteration: " << duration.count()/1000 << " usec" << std::endl;

	i = 0;
	start = clock::now();
		ROS_INFO_STREAM("ROS_INFO_STREAM " << i);	i++;
	stop = clock::now();
	duration = (stop - start) / i;	//nsec allways int
	std::cout << "After 0sec sleep. Duration for one itteration: " << duration.count()/1000 << " usec" << std::endl;

	i = 0;
	start = clock::now();
		ROS_INFO_STREAM("ROS_INFO_STREAM " << i);	i++;
	stop = clock::now();
	duration = (stop - start) / i;	//nsec allways int
	std::cout << "After 0sec sleep. Duration for one itteration: " << duration.count()/1000 << " usec" << std::endl;


	// fill cache with garbage
	sleep(1);

	i = 0;
	start = clock::now();
		ROS_INFO_STREAM("ROS_INFO_STREAM " << i);	i++;
	stop = clock::now();
	duration = (stop - start) / i;	//nsec allways int
	std::cout << "After 1sec sleep. Duration for one itteration: " << duration.count()/1000 << " usec" << std::endl;

	// fill cache with garbage
	sleep(1);

	i = 0;
	start = clock::now();
		ROS_INFO_STREAM("ROS_INFO_STREAM " << i);	i++;
	stop = clock::now();
	duration = (stop - start) / i;	//nsec allways int
	std::cout << "After 1sec sleep. Duration for one itteration: " << duration.count()/1000 << " usec" << std::endl;

	// fill cache with garbage
	sleep(1);

	i = 0;
	start = clock::now();
		ROS_INFO_STREAM("ROS_INFO_STREAM " << i);	i++;
	stop = clock::now();
	duration = (stop - start) / i;	//nsec allways int
	std::cout << "After 1sec sleep. Duration for one itteration: " << duration.count()/1000 << " usec" << std::endl;

	// fill cache with garbage
	sleep(1);

	i = 0;
	start = clock::now();
		ROS_INFO_STREAM("ROS_INFO_STREAM " << i);	i++;
	stop = clock::now();
	duration = (stop - start) / i;	//nsec allways int
	std::cout << "After 1sec sleep. Duration for one itteration: " << duration.count()/1000 << " usec" << std::endl;

	// fill cache with garbage
	sleep(1);

	i = 0;
	start = clock::now();
		ROS_INFO_STREAM("ROS_INFO_STREAM " << i);	i++;
	stop = clock::now();
	duration = (stop - start) / i;	//nsec allways int
	std::cout << "After 1sec sleep. Duration for one itteration: " << duration.count()/1000 << " usec" << std::endl;

	// fill cache with garbage
	sleep(1);

	std::cout << std::endl;