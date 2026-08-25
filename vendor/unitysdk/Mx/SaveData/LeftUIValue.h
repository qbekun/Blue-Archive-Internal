#pragma once
#include "../../unitysdk.h"

namespace MX::SaveData { class LeftUIValue; }

namespace MX::SaveData
{
	inline static constexpr unsigned int LeftUIValue_TypeDefinitionIndex = 20028;

	class LeftUIValue : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::SaveData::LeftUIValue* Right; // 0x0
		::MX::SaveData::LeftUIValue* Left; // 0x0

	};
}

