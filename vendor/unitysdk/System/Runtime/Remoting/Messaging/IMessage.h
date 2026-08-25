#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_RUNTIME_REMOTING_MESSAGING_IMESSAGE_GET_PROPERTIES_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Runtime::Remoting::Messaging
{
	inline static constexpr unsigned int IMessage_TypeDefinitionIndex = 24543;

	class IMessage : public Il2CppObject
	{
	public:
		::System::Collections::IDictionary* get_Properties()
		{
			return (return (::System::Collections::IDictionary*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_IMESSAGE_GET_PROPERTIES_OFFSET))(nullptr);
		}

	};
}

