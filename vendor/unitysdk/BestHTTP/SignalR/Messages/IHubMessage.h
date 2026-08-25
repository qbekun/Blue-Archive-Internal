#pragma once
#include "../../../unitysdk.h"

#define BESTHTTP_SIGNALR_MESSAGES_IHUBMESSAGE_GET_INVOCATIONID_OFFSET UNITYSDK_OFFSET(0x000000)

namespace BestHTTP::SignalR::Messages
{
	inline static constexpr unsigned int IHubMessage_TypeDefinitionIndex = 21497;

	class IHubMessage : public Il2CppObject
	{
	public:
		::System::UInt64 get_InvocationId()
		{
			return (return (::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALR_MESSAGES_IHUBMESSAGE_GET_INVOCATIONID_OFFSET))(nullptr);
		}

	};
}

