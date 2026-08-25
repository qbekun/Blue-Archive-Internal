#pragma once
#include "../unitysdk.h"

#define SYSTEM_MODIFIERSPEC_RESOLVE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_MODIFIERSPEC_APPEND_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System
{
	inline static constexpr unsigned int ModifierSpec_TypeDefinitionIndex = 24005;

	class ModifierSpec : public Il2CppObject
	{
	public:
		::System::Type* Resolve(::System::Type* arg)
		{
			return (return (::System::Type*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MODIFIERSPEC_RESOLVE_OFFSET))(arg, nullptr);
		}

		::System::Text::StringBuilder* Append(::System::Text::StringBuilder* arg)
		{
			return (return (::System::Text::StringBuilder*(*)(::System::Text::StringBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MODIFIERSPEC_APPEND_OFFSET))(arg, nullptr);
		}

	};
}

