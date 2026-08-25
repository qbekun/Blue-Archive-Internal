#pragma once
#include "../unitysdk.h"

#define SYSTEM_TYPEIDENTIFIERS_FROMDISPLAY_OFFSET UNITYSDK_OFFSET(0x93C7E00)

namespace System
{
	inline static constexpr unsigned int TypeIdentifiers_TypeDefinitionIndex = 24004;

	class TypeIdentifiers : public Il2CppObject
	{
	public:
		::System::TypeIdentifier* FromDisplay(::System::String* str)
		{
			return (return (::System::TypeIdentifier*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPEIDENTIFIERS_FROMDISPLAY_OFFSET))(str, nullptr);
		}

	};
}

