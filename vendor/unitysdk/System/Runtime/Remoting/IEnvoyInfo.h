#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_RUNTIME_REMOTING_IENVOYINFO_GET_ENVOYSINKS_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Runtime::Remoting
{
	inline static constexpr unsigned int IEnvoyInfo_TypeDefinitionIndex = 24433;

	class IEnvoyInfo : public Il2CppObject
	{
	public:
		::System::Runtime::Remoting::Messaging::IMessageSink* get_EnvoySinks()
		{
			return (return (::System::Runtime::Remoting::Messaging::IMessageSink*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_IENVOYINFO_GET_ENVOYSINKS_OFFSET))(nullptr);
		}

	};
}

