#pragma once
#include "../unitysdk.h"

#define SYSTEM_ICUSTOMFORMATTER_FORMAT_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System
{
	inline static constexpr unsigned int ICustomFormatter_TypeDefinitionIndex = 23771;

	class ICustomFormatter : public Il2CppObject
	{
	public:
		::System::String* Format(::System::String* str, ::System::Object* arg, ::System::IFormatProvider* arg)
		{
			return (return (::System::String*(*)(::System::String*, ::System::Object*, ::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_ICUSTOMFORMATTER_FORMAT_OFFSET))(str, arg, arg, nullptr);
		}

	};
}

