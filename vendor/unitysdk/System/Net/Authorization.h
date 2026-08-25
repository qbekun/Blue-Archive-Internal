#pragma once
#include "../../unitysdk.h"

#define SYSTEM_NET_AUTHORIZATION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BA66E0)
#define SYSTEM_NET_AUTHORIZATION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BA6760)
#define SYSTEM_NET_AUTHORIZATION_GET_MESSAGE_OFFSET UNITYSDK_OFFSET(0x9BA67E0)
#define SYSTEM_NET_AUTHORIZATION_GET_COMPLETE_OFFSET UNITYSDK_OFFSET(0x9BA67F0)

namespace System::Net
{
	inline static constexpr unsigned int Authorization_TypeDefinitionIndex = 29672;

	class Authorization : public Il2CppObject
	{
	public:
		::System::String* m_Message; // 0x10
		::System::Boolean m_Complete; // 0x18
		::System::String* ModuleAuthenticationType; // 0x20

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_AUTHORIZATION_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_AUTHORIZATION_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::String* get_Message()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_AUTHORIZATION_GET_MESSAGE_OFFSET))(nullptr);
		}

		::System::Boolean get_Complete()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_AUTHORIZATION_GET_COMPLETE_OFFSET))(nullptr);
		}

	};
}

