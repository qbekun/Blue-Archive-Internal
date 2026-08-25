#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class SkillEntitySpawnerData; }
namespace MX::Logic::Data { class BarrierShape; }
namespace FlatData { class ArmorType; }
namespace FlatData { class EntityMaterialType; }

#define MX_LOGIC_DATA_LEVELBARRIEROBSTACLEENTITYDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11FAF10)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int LevelBarrierObstacleEntityData_TypeDefinitionIndex = 13677;

	class LevelBarrierObstacleEntityData : public Il2CppObject
	{
	public:
		Il2CppObject* InitialAbilities; // 0x180
		::MX::Logic::Data::SkillEntitySpawnerData* InitialSkillEntitySpawnerData; // 0x188
		::MX::Logic::Data::BarrierShape* BarrierShape; // 0x190
		::Il2CppArray<::System::Object*>* ShapeParameters; // 0x198
		::FlatData::ArmorType* ArmorType; // 0x1A0
		::FlatData::EntityMaterialType* MaterialType; // 0x1A4
		Il2CppObject* ApplyLogicEffectToTarget; // 0x1A8
		::System::Boolean FixDirection; // 0x1B0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_LEVELBARRIEROBSTACLEENTITYDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

