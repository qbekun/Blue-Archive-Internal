#pragma once
#include "unitysdk.h"

namespace MX::Logic::Skills { class EntitySpawnCondition; }
namespace MX::Logic::Skills { class EntitySpawnConditionCheckTarget; }
namespace MX::Core::Services { class Hash64; }
namespace MX::Logic::Data { class SkillEntitySpawnerTimelineData; }
namespace MX::GameData::DAO::Battle { class SkillEntitySpawnerTimelineDAO; }

#define SPAWNCONDITION_.CTOR_OFFSET UNITYSDK_OFFSET(0x124B730)
#define SPAWNCONDITION_.CTOR_OFFSET UNITYSDK_OFFSET(0x124B570)

	inline static constexpr unsigned int SpawnCondition_TypeDefinitionIndex = 13976;

	class SpawnCondition : public Il2CppObject
	{
	public:
		::MX::Logic::Skills::EntitySpawnCondition* Condition; // 0x10
		::System::String* ConditionParameter; // 0x18
		::MX::Logic::Skills::EntitySpawnConditionCheckTarget* ConditionCheckTarget; // 0x20
		::MX::Core::Services::Hash64* ConditionParameterHash; // 0x28
		::Il2CppArray<::System::Object*>* PlayTrackGroupName; // 0x30
		::Il2CppArray<::System::Object*>* MuteTrackGroupName; // 0x38
		::System::Boolean InterruptSkillAction; // 0x40
		::System::Int32 InterruptSkillActionFrame; // 0x44

		::System::Void .ctor(::MX::Logic::Data::SkillEntitySpawnerTimelineData* arg)
		{
			((::System::Void(*)(::MX::Logic::Data::SkillEntitySpawnerTimelineData*, ::PVOID))((::PBYTE)hIl2Cpp + SPAWNCONDITION_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::GameData::DAO::Battle::SkillEntitySpawnerTimelineDAO* arg)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::SkillEntitySpawnerTimelineDAO*, ::PVOID))((::PBYTE)hIl2Cpp + SPAWNCONDITION_.CTOR_OFFSET))(arg, nullptr);
		}

	};

