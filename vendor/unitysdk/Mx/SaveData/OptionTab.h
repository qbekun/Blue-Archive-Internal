#pragma once
#include "../../unitysdk.h"

namespace MX::SaveData { class OptionTab; }

namespace MX::SaveData
{
	inline static constexpr unsigned int OptionTab_TypeDefinitionIndex = 20038;

	class OptionTab : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::SaveData::OptionTab* None; // 0x0
		::MX::SaveData::OptionTab* Game; // 0x0
		::MX::SaveData::OptionTab* Graphic; // 0x0
		::MX::SaveData::OptionTab* Sound; // 0x0
		::MX::SaveData::OptionTab* Notice; // 0x0
		::MX::SaveData::OptionTab* Title; // 0x0
		::MX::SaveData::OptionTab* Story; // 0x0
		::MX::SaveData::OptionTab* Control; // 0x0
		::MX::SaveData::OptionTab* Language; // 0x0

	};
}

