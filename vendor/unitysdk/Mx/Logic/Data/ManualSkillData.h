#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Skills::Manual { class ManualSkillTypes; }

#define MX_LOGIC_DATA_MANUALSKILLDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11F6470)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int ManualSkillData_TypeDefinitionIndex = 13653;

	class ManualSkillData : public Il2CppObject
	{
	public:
		::MX::Logic::Skills::Manual::ManualSkillTypes* ManualSkillType; // 0x18
		Il2CppObject* Abilities; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_MANUALSKILLDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

