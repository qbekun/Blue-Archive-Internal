#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class SkillEntitySpawnerData; }

#define MX_LOGIC_DATA_LEVELOBSTACLEENTITYDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11FBF70)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int LevelObstacleEntityData_TypeDefinitionIndex = 13708;

	class LevelObstacleEntityData : public Il2CppObject
	{
	public:
		Il2CppObject* InitialAbilities; // 0x180
		::MX::Logic::Data::SkillEntitySpawnerData* InitialSkillEntitySpawnerData; // 0x188

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_LEVELOBSTACLEENTITYDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

