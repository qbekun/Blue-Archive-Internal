#pragma once
#include "../../unitysdk.h"

namespace System::Net
{
	inline static constexpr unsigned int FtpOperation_TypeDefinitionIndex = 29660;

	class FtpOperation : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::System::Net::FtpOperation* DownloadFile; // 0x0
		::System::Net::FtpOperation* ListDirectory; // 0x0
		::System::Net::FtpOperation* ListDirectoryDetails; // 0x0
		::System::Net::FtpOperation* UploadFile; // 0x0
		::System::Net::FtpOperation* UploadFileUnique; // 0x0
		::System::Net::FtpOperation* AppendFile; // 0x0
		::System::Net::FtpOperation* DeleteFile; // 0x0
		::System::Net::FtpOperation* GetDateTimestamp; // 0x0
		::System::Net::FtpOperation* GetFileSize; // 0x0
		::System::Net::FtpOperation* Rename; // 0x0
		::System::Net::FtpOperation* MakeDirectory; // 0x0
		::System::Net::FtpOperation* RemoveDirectory; // 0x0
		::System::Net::FtpOperation* PrintWorkingDirectory; // 0x0
		::System::Net::FtpOperation* Other; // 0x0

	};
}

