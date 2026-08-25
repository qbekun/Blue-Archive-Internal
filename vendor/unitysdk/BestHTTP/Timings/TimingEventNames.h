#pragma once
#include "../../unitysdk.h"

namespace BestHTTP::Timings
{
	inline static constexpr unsigned int TimingEventNames_TypeDefinitionIndex = 21341;

	class TimingEventNames : public Il2CppObject
	{
	public:
		::System::String* Queued; // 0x0
		::System::String* Queued_For_Redirection; // 0x0
		::System::String* DNS_Lookup; // 0x0
		::System::String* TCP_Connection; // 0x0
		::System::String* Proxy_Negotiation; // 0x0
		::System::String* TLS_Negotiation; // 0x0
		::System::String* Request_Sent; // 0x0
		::System::String* Waiting_TTFB; // 0x0
		::System::String* Headers; // 0x0
		::System::String* Loading_From_Cache; // 0x0
		::System::String* Writing_To_Cache; // 0x0
		::System::String* Response_Received; // 0x0
		::System::String* Queued_For_Disptach; // 0x0
		::System::String* Finished; // 0x0
		::System::String* Callback; // 0x0

	};
}

