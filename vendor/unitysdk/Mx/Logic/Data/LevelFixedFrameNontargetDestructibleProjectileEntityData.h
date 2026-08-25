#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class LevelCharacterEntityData; }
namespace MX::Logic::Data { class SkillEntitySpawnerData; }

#define MX_LOGIC_DATA_LEVELFIXEDFRAMENONTARGETDESTRUCTIBLEPROJECTILEENTITYDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11FBCD0)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int LevelFixedFrameNontargetDestructibleProjectileEntityData_TypeDefinitionIndex = 13694;

	class LevelFixedFrameNontargetDestructibleProjectileEntityData : public Il2CppObject
	{
	public:
		::MX::Logic::Data::LevelCharacterEntityData* CharacterEntityForStat; // 0x1F8
		::MX::Logic::Data::SkillEntitySpawnerData* DestroyedSpawnEntity; // 0x200

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_LEVELFIXEDFRAMENONTARGETDESTRUCTIBLEPROJECTILEENTITYDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

