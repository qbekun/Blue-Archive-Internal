#pragma once
#include "../../unitysdk.h"

namespace MX::SaveData { class ToggleValueReverse; }

namespace MX::SaveData
{
	inline static constexpr unsigned int ToggleValueReverse_TypeDefinitionIndex = 20027;

	class ToggleValueReverse : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::SaveData::ToggleValueReverse* Off; // 0x0
		::MX::SaveData::ToggleValueReverse* On; // 0x0

	};
}

