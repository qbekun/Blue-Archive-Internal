#pragma once
#include "../../unitysdk.h"

namespace System::Configuration
{
	inline static constexpr unsigned int ConfigurationSaveMode_TypeDefinitionIndex = 38066;

	class ConfigurationSaveMode : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::System::Configuration::ConfigurationSaveMode* Full; // 0x0
		::System::Configuration::ConfigurationSaveMode* Minimal; // 0x0
		::System::Configuration::ConfigurationSaveMode* Modified; // 0x0

	};
}

