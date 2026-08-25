#pragma once
#include "../../unitysdk.h"

namespace System::Net
{
	inline static constexpr unsigned int WebExceptionStatus_TypeDefinitionIndex = 29697;

	class WebExceptionStatus : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::System::Net::WebExceptionStatus* Success; // 0x0
		::System::Net::WebExceptionStatus* NameResolutionFailure; // 0x0
		::System::Net::WebExceptionStatus* ConnectFailure; // 0x0
		::System::Net::WebExceptionStatus* ReceiveFailure; // 0x0
		::System::Net::WebExceptionStatus* SendFailure; // 0x0
		::System::Net::WebExceptionStatus* PipelineFailure; // 0x0
		::System::Net::WebExceptionStatus* RequestCanceled; // 0x0
		::System::Net::WebExceptionStatus* ProtocolError; // 0x0
		::System::Net::WebExceptionStatus* ConnectionClosed; // 0x0
		::System::Net::WebExceptionStatus* TrustFailure; // 0x0
		::System::Net::WebExceptionStatus* SecureChannelFailure; // 0x0
		::System::Net::WebExceptionStatus* ServerProtocolViolation; // 0x0
		::System::Net::WebExceptionStatus* KeepAliveFailure; // 0x0
		::System::Net::WebExceptionStatus* Pending; // 0x0
		::System::Net::WebExceptionStatus* Timeout; // 0x0
		::System::Net::WebExceptionStatus* ProxyNameResolutionFailure; // 0x0
		::System::Net::WebExceptionStatus* UnknownError; // 0x0
		::System::Net::WebExceptionStatus* MessageLengthLimitExceeded; // 0x0
		::System::Net::WebExceptionStatus* CacheEntryNotFound; // 0x0
		::System::Net::WebExceptionStatus* RequestProhibitedByCachePolicy; // 0x0
		::System::Net::WebExceptionStatus* RequestProhibitedByProxy; // 0x0

	};
}

