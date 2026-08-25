#pragma once
#include "../../../unitysdk.h"

#define MX_LOGIC_DATA_LEVELTARGETSKILLENTITYDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11FBF30)
#define MX_LOGIC_DATA_LEVELTARGETSKILLENTITYDATA_SHOULDSERIALIZEABILITIES_OFFSET UNITYSDK_OFFSET(0x11FC120)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int LevelTargetSkillEntityData_TypeDefinitionIndex = 13723;

	class LevelTargetSkillEntityData : public Il2CppObject
	{
	public:
		Il2CppObject* Abilities; // 0x150

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_LEVELTARGETSKILLENTITYDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean ShouldSerializeAbilities()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_LEVELTARGETSKILLENTITYDATA_SHOULDSERIALIZEABILITIES_OFFSET))(nullptr);
		}

	};
}

