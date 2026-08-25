#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_RUNTIME_REMOTING_CHANNELS_ISERVERCHANNELSINKPROVIDER_SET_NEXT_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Runtime::Remoting::Channels
{
	inline static constexpr unsigned int IServerChannelSinkProvider_TypeDefinitionIndex = 24502;

	class IServerChannelSinkProvider : public Il2CppObject
	{
	public:
		::System::Void set_Next(::System::Runtime::Remoting::Channels::IServerChannelSinkProvider* arg)
		{
			((::System::Void(*)(::System::Runtime::Remoting::Channels::IServerChannelSinkProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CHANNELS_ISERVERCHANNELSINKPROVIDER_SET_NEXT_OFFSET))(arg, nullptr);
		}

	};
}

