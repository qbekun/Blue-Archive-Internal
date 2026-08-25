#pragma once
#include "../unitysdk.h"

#define SYSTEM_IFORMATTABLE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System
{
	inline static constexpr unsigned int IFormattable_TypeDefinitionIndex = 23775;

	class IFormattable : public Il2CppObject
	{
	public:
		::System::String* ToString(::System::String* str, ::System::IFormatProvider* arg)
		{
			return (return (::System::String*(*)(::System::String*, ::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IFORMATTABLE_TOSTRING_OFFSET))(str, arg, nullptr);
		}

	};
}

