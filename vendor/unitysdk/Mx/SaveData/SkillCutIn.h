#pragma once
#include "../../unitysdk.h"

namespace MX::SaveData { class SkillCutIn; }

namespace MX::SaveData
{
	inline static constexpr unsigned int SkillCutIn_TypeDefinitionIndex = 20021;

	class SkillCutIn : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MX::SaveData::SkillCutIn* Always; // 0x0
		::MX::SaveData::SkillCutIn* OnceADay; // 0x0
		::MX::SaveData::SkillCutIn* Never; // 0x0

	};
}

