#pragma once
#include "../../unitysdk.h"

namespace MX::SaveData { class ToggleValue; }

namespace MX::SaveData
{
	inline static constexpr unsigned int ToggleValue_TypeDefinitionIndex = 20026;

	class ToggleValue : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::SaveData::ToggleValue* On; // 0x0
		::MX::SaveData::ToggleValue* Off; // 0x0

	};
}

