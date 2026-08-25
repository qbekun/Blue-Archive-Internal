#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_RUNTIME_REMOTING_CHANNELS_ISECURABLECHANNEL_SET_ISSECURED_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Runtime::Remoting::Channels
{
	inline static constexpr unsigned int ISecurableChannel_TypeDefinitionIndex = 24501;

	class ISecurableChannel : public Il2CppObject
	{
	public:
		::System::Void set_IsSecured(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CHANNELS_ISECURABLECHANNEL_SET_ISSECURED_OFFSET))(arg, nullptr);
		}

	};
}

