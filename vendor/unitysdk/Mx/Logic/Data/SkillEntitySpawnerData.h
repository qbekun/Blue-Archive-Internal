#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Skills { class EntitySpawnRule; }
namespace MX::Logic::Skills { class SkillToTargetDistributeType; }

#define MX_LOGIC_DATA_SKILLENTITYSPAWNERDATA_SHOULDSERIALIZEENTITYTIMELINE_OFFSET UNITYSDK_OFFSET(0x11FC230)
#define MX_LOGIC_DATA_SKILLENTITYSPAWNERDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11FC280)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int SkillEntitySpawnerData_TypeDefinitionIndex = 13726;

	class SkillEntitySpawnerData : public Il2CppObject
	{
	public:
		::System::Int32 Duration; // 0x150
		::MX::Logic::Skills::EntitySpawnRule* SpawnRule; // 0x154
		::System::Boolean RemoveEntityIfSkillCancel; // 0x158
		::MX::Logic::Skills::SkillToTargetDistributeType* DistributeType; // 0x15C
		::System::Boolean FireToNextTargetWhenEachToEach; // 0x160
		::System::Boolean OverrideSkillStartTimingWithSpawnerSpawn; // 0x161
		Il2CppObject* EntityTimeline; // 0x168

		::System::Boolean ShouldSerializeEntityTimeline()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SKILLENTITYSPAWNERDATA_SHOULDSERIALIZEENTITYTIMELINE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SKILLENTITYSPAWNERDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

