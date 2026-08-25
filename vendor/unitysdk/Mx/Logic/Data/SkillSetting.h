#pragma once
#include "../../../unitysdk.h"

#define MX_LOGIC_DATA_SKILLSETTING_.CTOR_OFFSET UNITYSDK_OFFSET(0x11E4F80)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int SkillSetting_TypeDefinitionIndex = 13449;

	class SkillSetting : public Il2CppObject
	{
	public:
		::System::String* SkillGroupId; // 0x10
		::System::Int32 SkillLevel; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SKILLSETTING_.CTOR_OFFSET))(nullptr);
		}

	};
}

