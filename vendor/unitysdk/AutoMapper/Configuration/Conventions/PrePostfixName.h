#pragma once
#include "../../../unitysdk.h"

#define AUTOMAPPER_CONFIGURATION_CONVENTIONS_PREPOSTFIXNAME_.CTOR_OFFSET UNITYSDK_OFFSET(0x4D1070)

namespace AutoMapper::Configuration::Conventions
{
	inline static constexpr unsigned int PrePostfixName_TypeDefinitionIndex = 37658;

	class PrePostfixName : public Il2CppObject
	{
	public:
		Il2CppObject* _DestinationPrefixes_k__BackingField; // 0x10
		Il2CppObject* _DestinationPostfixes_k__BackingField; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AUTOMAPPER_CONFIGURATION_CONVENTIONS_PREPOSTFIXNAME_.CTOR_OFFSET))(nullptr);
		}

	};
}

