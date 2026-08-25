#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Skills { class EntitySpawnCondition; }
namespace MX::Logic::Skills { class EntitySpawnConditionCheckTarget; }
namespace MX::Logic::Data { class PlayTrackBranchData; }

#define MX_LOGIC_DATA_SKILLENTITYSPAWNERTIMELINEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11FC290)
#define MX_LOGIC_DATA_SKILLENTITYSPAWNERTIMELINEDATA_SHOULDSERIALIZEPLAYTRACKBRANCH_OFFSET UNITYSDK_OFFSET(0x11FC2A0)
#define MX_LOGIC_DATA_SKILLENTITYSPAWNERTIMELINEDATA_SHOULDSERIALIZESPAWNCHECKLOGICEFFETTEMPLATEID_OFFSET UNITYSDK_OFFSET(0x11FC2C0)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int SkillEntitySpawnerTimelineData_TypeDefinitionIndex = 13727;

	class SkillEntitySpawnerTimelineData : public Il2CppObject
	{
	public:
		::MX::Logic::Skills::EntitySpawnCondition* SpawnCondition; // 0x28
		::System::String* SpawnConditionParameter; // 0x30
		::System::String* SpawnConditionParameterForTag; // 0x38
		::MX::Logic::Skills::EntitySpawnConditionCheckTarget* SpawnConditionCheckTarget; // 0x40
		::System::Boolean UsePlayTrackBranch; // 0x44
		::MX::Logic::Data::PlayTrackBranchData* PlayTrackBranch; // 0x48

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SKILLENTITYSPAWNERTIMELINEDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean ShouldSerializePlayTrackBranch()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SKILLENTITYSPAWNERTIMELINEDATA_SHOULDSERIALIZEPLAYTRACKBRANCH_OFFSET))(nullptr);
		}

		::System::Boolean ShouldSerializeSpawnCheckLogicEffetTemplateId()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SKILLENTITYSPAWNERTIMELINEDATA_SHOULDSERIALIZESPAWNCHECKLOGICEFFETTEMPLATEID_OFFSET))(nullptr);
		}

	};
}

