#pragma once
#include "../../unitysdk.h"

#define SYSTEM_NET_HEADERPARSER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A4DE20)
#define SYSTEM_NET_HEADERPARSER_INVOKE_OFFSET UNITYSDK_OFFSET(0x9A4DEF0)

namespace System::Net
{
	inline static constexpr unsigned int HeaderParser_TypeDefinitionIndex = 29709;

	class HeaderParser : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HEADERPARSER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* Invoke(::System::String* str)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HEADERPARSER_INVOKE_OFFSET))(str, nullptr);
		}

	};
}

