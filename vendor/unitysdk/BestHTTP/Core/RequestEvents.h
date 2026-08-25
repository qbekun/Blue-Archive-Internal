#pragma once
#include "../../unitysdk.h"

namespace BestHTTP::Core { class RequestEvents; }

namespace BestHTTP::Core
{
	inline static constexpr unsigned int RequestEvents_TypeDefinitionIndex = 23409;

	class RequestEvents : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::BestHTTP::Core::RequestEvents* Upgraded; // 0x0
		::BestHTTP::Core::RequestEvents* DownloadProgress; // 0x0
		::BestHTTP::Core::RequestEvents* UploadProgress; // 0x0
		::BestHTTP::Core::RequestEvents* StreamingData; // 0x0
		::BestHTTP::Core::RequestEvents* StateChange; // 0x0
		::BestHTTP::Core::RequestEvents* Resend; // 0x0
		::BestHTTP::Core::RequestEvents* Headers; // 0x0

	};
}

