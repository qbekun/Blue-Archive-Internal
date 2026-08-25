#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_RUNTIME_REMOTING_ENVOYINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x91C2E90)
#define SYSTEM_RUNTIME_REMOTING_ENVOYINFO_GET_ENVOYSINKS_OFFSET UNITYSDK_OFFSET(0x91C2EC0)

namespace System::Runtime::Remoting
{
	inline static constexpr unsigned int EnvoyInfo_TypeDefinitionIndex = 24431;

	class EnvoyInfo : public Il2CppObject
	{
	public:
		::System::Runtime::Remoting::Messaging::IMessageSink* envoySinks; // 0x10

		::System::Void .ctor(::System::Runtime::Remoting::Messaging::IMessageSink* arg)
		{
			((::System::Void(*)(::System::Runtime::Remoting::Messaging::IMessageSink*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_ENVOYINFO_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Runtime::Remoting::Messaging::IMessageSink* get_EnvoySinks()
		{
			return (return (::System::Runtime::Remoting::Messaging::IMessageSink*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_ENVOYINFO_GET_ENVOYSINKS_OFFSET))(nullptr);
		}

	};
}

