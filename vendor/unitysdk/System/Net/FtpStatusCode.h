#pragma once
#include "../../unitysdk.h"

namespace System::Net
{
	inline static constexpr unsigned int FtpStatusCode_TypeDefinitionIndex = 29676;

	class FtpStatusCode : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::System::Net::FtpStatusCode* Undefined; // 0x0
		::System::Net::FtpStatusCode* RestartMarker; // 0x0
		::System::Net::FtpStatusCode* ServiceTemporarilyNotAvailable; // 0x0
		::System::Net::FtpStatusCode* DataAlreadyOpen; // 0x0
		::System::Net::FtpStatusCode* OpeningData; // 0x0
		::System::Net::FtpStatusCode* CommandOK; // 0x0
		::System::Net::FtpStatusCode* CommandExtraneous; // 0x0
		::System::Net::FtpStatusCode* DirectoryStatus; // 0x0
		::System::Net::FtpStatusCode* FileStatus; // 0x0
		::System::Net::FtpStatusCode* SystemType; // 0x0
		::System::Net::FtpStatusCode* SendUserCommand; // 0x0
		::System::Net::FtpStatusCode* ClosingControl; // 0x0
		::System::Net::FtpStatusCode* ClosingData; // 0x0
		::System::Net::FtpStatusCode* EnteringPassive; // 0x0
		::System::Net::FtpStatusCode* LoggedInProceed; // 0x0
		::System::Net::FtpStatusCode* ServerWantsSecureSession; // 0x0
		::System::Net::FtpStatusCode* FileActionOK; // 0x0
		::System::Net::FtpStatusCode* PathnameCreated; // 0x0
		::System::Net::FtpStatusCode* SendPasswordCommand; // 0x0
		::System::Net::FtpStatusCode* NeedLoginAccount; // 0x0
		::System::Net::FtpStatusCode* FileCommandPending; // 0x0
		::System::Net::FtpStatusCode* ServiceNotAvailable; // 0x0
		::System::Net::FtpStatusCode* CantOpenData; // 0x0
		::System::Net::FtpStatusCode* ConnectionClosed; // 0x0
		::System::Net::FtpStatusCode* ActionNotTakenFileUnavailableOrBusy; // 0x0
		::System::Net::FtpStatusCode* ActionAbortedLocalProcessingError; // 0x0
		::System::Net::FtpStatusCode* ActionNotTakenInsufficientSpace; // 0x0
		::System::Net::FtpStatusCode* CommandSyntaxError; // 0x0
		::System::Net::FtpStatusCode* ArgumentSyntaxError; // 0x0
		::System::Net::FtpStatusCode* CommandNotImplemented; // 0x0
		::System::Net::FtpStatusCode* BadCommandSequence; // 0x0
		::System::Net::FtpStatusCode* NotLoggedIn; // 0x0
		::System::Net::FtpStatusCode* AccountNeeded; // 0x0
		::System::Net::FtpStatusCode* ActionNotTakenFileUnavailable; // 0x0
		::System::Net::FtpStatusCode* ActionAbortedUnknownPageType; // 0x0
		::System::Net::FtpStatusCode* FileActionAborted; // 0x0
		::System::Net::FtpStatusCode* ActionNotTakenFilenameNotAllowed; // 0x0

	};
}

