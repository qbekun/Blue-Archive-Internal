#pragma once
#include "../../unitysdk.h"

namespace System::Net
{
	inline static constexpr unsigned int FtpMethodFlags_TypeDefinitionIndex = 29661;

	class FtpMethodFlags : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::System::Net::FtpMethodFlags* None; // 0x0
		::System::Net::FtpMethodFlags* IsDownload; // 0x0
		::System::Net::FtpMethodFlags* IsUpload; // 0x0
		::System::Net::FtpMethodFlags* TakesParameter; // 0x0
		::System::Net::FtpMethodFlags* MayTakeParameter; // 0x0
		::System::Net::FtpMethodFlags* DoesNotTakeParameter; // 0x0
		::System::Net::FtpMethodFlags* ParameterIsDirectory; // 0x0
		::System::Net::FtpMethodFlags* ShouldParseForResponseUri; // 0x0
		::System::Net::FtpMethodFlags* HasHttpCommand; // 0x0
		::System::Net::FtpMethodFlags* MustChangeWorkingDirectoryToPath; // 0x0

	};
}

