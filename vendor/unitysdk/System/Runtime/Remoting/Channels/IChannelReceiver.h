#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_RUNTIME_REMOTING_CHANNELS_ICHANNELRECEIVER_GET_CHANNELDATA_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_RUNTIME_REMOTING_CHANNELS_ICHANNELRECEIVER_STARTLISTENING_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Runtime::Remoting::Channels
{
	inline static constexpr unsigned int IChannelReceiver_TypeDefinitionIndex = 24498;

	class IChannelReceiver : public Il2CppObject
	{
	public:
		::System::Object* get_ChannelData()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CHANNELS_ICHANNELRECEIVER_GET_CHANNELDATA_OFFSET))(nullptr);
		}

		::System::Void StartListening(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CHANNELS_ICHANNELRECEIVER_STARTLISTENING_OFFSET))(arg, nullptr);
		}

	};
}

