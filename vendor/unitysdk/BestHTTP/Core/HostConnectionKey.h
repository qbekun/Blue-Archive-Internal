#pragma once
#include "../../unitysdk.h"

#define BESTHTTP_CORE_HOSTCONNECTIONKEY_.CTOR_OFFSET UNITYSDK_OFFSET(0x8F1350)
#define BESTHTTP_CORE_HOSTCONNECTIONKEY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x8F1380)

namespace BestHTTP::Core
{
	inline static constexpr unsigned int HostConnectionKey_TypeDefinitionIndex = 23400;

	class HostConnectionKey : public Il2CppObject
	{
	public:
		::System::String* Host; // 0x10
		::System::String* Connection; // 0x18

		::System::Void .ctor(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CORE_HOSTCONNECTIONKEY_.CTOR_OFFSET))(str, str, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CORE_HOSTCONNECTIONKEY_TOSTRING_OFFSET))(nullptr);
		}

	};
}

