#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class LevelCharacterEntityData; }
namespace MX::Logic::Data { class SkillEntitySpawnerData; }

#define MX_LOGIC_DATA_LEVELNONTARGETDESTRUCTIBLEPROJECTILEENTITYDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11FBE40)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int LevelNontargetDestructibleProjectileEntityData_TypeDefinitionIndex = 13702;

	class LevelNontargetDestructibleProjectileEntityData : public Il2CppObject
	{
	public:
		::MX::Logic::Data::LevelCharacterEntityData* CharacterEntityForStat; // 0x200
		::MX::Logic::Data::SkillEntitySpawnerData* DestroyedSpawnEntity; // 0x208

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_LEVELNONTARGETDESTRUCTIBLEPROJECTILEENTITYDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

