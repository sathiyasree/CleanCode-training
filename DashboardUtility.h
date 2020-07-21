#pragma once
#ifndef _DASHBOARDUTILITY__

#include <fstream>
#include <string>
#include <vector>
#include <memory>
/*
1. Input file: .csv
	order: ID, Name, location, status
2. Operations: Parsing, validation, errorLogging, WritetoJson
3. Possible changes:
	i.   Input file format
	ii.  Order/List of inputs in the input file
	iii. Output file format
	iv.  Validaton rules
	v.   Error logging file format
*/

class DeviceDetails
{
private:
	struct DeviceData
	{
		bool isValid;
		std::string deviceName;
		std::string deviceID;
		std::string DeviceLocation;
		std::string DeviceStatus;

		DeviceData(bool isValid, std::string deviceName, std::string deviceID, std::string DeviceLocation, std::string DeviceStatus)
			: isValid(isValid), deviceName(deviceName), deviceID(deviceID), DeviceLocation(DeviceLocation), DeviceStatus(DeviceStatus)
		{		}
	};
	
public:
	std::vector<DeviceData> remoteDeviceDetails;
	void setDeviceData(bool isValid, std::string deviceData)
	{
		// Read space separated string 
		// Convert to string stream
		// write indiviual details into vector
	}
	
};

class Logger
{
public:
	void writetoLog(std::string log)
	{
		// Write to log file
	}
};

class DataValidator
{

private:	
	Logger logFile;
public:
	void dataValidation(std::string data)
	{
		// validate comma separated string with validation results
		// If error write to log
		std::string errorString;
		logFile.writetoLog(errorString);
		bool valid;
		std::string data;
		// convert comma separated to space separated string if valid
		// write to vector
		ptr_devicedata->setDeviceData(valid, data);

	}
};

class DataReader
{
private:
	DataValidator validateData;
public:
	bool readCsvData(std::string fileName, DeviceDetails* ptr_devicedata)
	{
		std::string readData;
		// Reads every line of input file 
		//validate read data
		validateData.dataValidation(readData);
	}
};

class OutputWrite
{
public:

	void writeJson(std::string fileWritePath)
	{
		//Iterate the vector 
		// write individual details to JSON
	}

};

class Utility
{
	public:
		void CSVtoJson(std::string inputFilePath, std::string outputFilePath)
		{
			std::unique_ptr<DataReader> ptrDataReader(new DataReader);
			std::unique_ptr<OutputWrite> ptrOutputWrite(new OutputWrite);

			ptrDataReader->readCsvData(inputFilePath);
			ptrOutputWrite->writeJson(outputFilePath);
		}
};

#endif // !_DASHBOARDUTILITY__
