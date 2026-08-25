#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_RUNTIME_REMOTING_CHANNELS_ICLIENTCHANNELSINKPROVIDER_SET_NEXT_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Runtime::Remoting::Channels
{
	inline static constexpr unsigned int IClientChannelSinkProvider_TypeDefinitionIndex = 24500;

	class IClientChannelSinkProvider : public Il2CppObject
	{
	public:
		::System::Void set_Next(::System::Runtime::Remoting::Channels::IClientChannelSinkProvider* arg)
		{
			((::System::Void(*)(::System::Runtime::Remoting::Channels::IClientChannelSinkProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CHANNELS_ICLIENTCHANNELSINKPROVIDER_SET_NEXT_OFFSET))(arg, nullptr);
		}

	};
}

