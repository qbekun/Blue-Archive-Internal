#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_RUNTIME_REMOTING_CHANNELS_ICHANNEL_GET_CHANNELNAME_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_RUNTIME_REMOTING_CHANNELS_ICHANNEL_GET_CHANNELPRIORITY_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Runtime::Remoting::Channels
{
	inline static constexpr unsigned int IChannel_TypeDefinitionIndex = 24496;

	class IChannel : public Il2CppObject
	{
	public:
		::System::String* get_ChannelName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CHANNELS_ICHANNEL_GET_CHANNELNAME_OFFSET))(nullptr);
		}

		::System::Int32 get_ChannelPriority()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CHANNELS_ICHANNEL_GET_CHANNELPRIORITY_OFFSET))(nullptr);
		}

	};
}

