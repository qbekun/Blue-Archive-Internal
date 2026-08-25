#pragma once
#include "../unitysdk.h"

#define SYSTEM_STRINGEXTENSIONS_SUBSTRINGTRIM_OFFSET UNITYSDK_OFFSET(0x9ACEA90)

namespace System
{
	inline static constexpr unsigned int StringExtensions_TypeDefinitionIndex = 29164;

	class StringExtensions : public Il2CppObject
	{
	public:
		::System::String* SubstringTrim(::System::String* str, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::String*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_STRINGEXTENSIONS_SUBSTRINGTRIM_OFFSET))(str, arg, arg, nullptr);
		}

	};
}

