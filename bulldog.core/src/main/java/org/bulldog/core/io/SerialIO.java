package org.bulldog.core.io;

import org.bulldog.core.Parity;

public interface SerialIO extends IOPort {
	
	int getBaudRate();
	void setBaudRate(int baudRate);
	
	Parity getParity();
	void setParity(Parity parity);
}