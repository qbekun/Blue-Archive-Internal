#pragma once
#include "../../unitysdk.h"

namespace System::Configuration
{
	inline static constexpr unsigned int SpecialSetting_TypeDefinitionIndex = 30050;

	class SpecialSetting : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::System::Configuration::SpecialSetting* ConnectionString; // 0x0
		::System::Configuration::SpecialSetting* WebServiceUrl; // 0x0

	};
}

