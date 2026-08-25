#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class HeroStatus; }
namespace MX::Logic::BattleEntities { class O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4; }
namespace MX::Logic::Battles { class BattleEntitySpawnedEventArgs; }
namespace MX::Logic::BattleEntities { class StatusAddedEventArgs; }

#define MX_LOGIC_BATTLES_GROUNDCONDITIONSTATUSCHECK__START_B__4_0_OFFSET UNITYSDK_OFFSET(0x136A110)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONSTATUSCHECK_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x136A170)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONSTATUSCHECK_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x136AA50)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONSTATUSCHECK_.CCTOR_OFFSET UNITYSDK_OFFSET(0x136AD10)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONSTATUSCHECK_START_OFFSET UNITYSDK_OFFSET(0x136AD20)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONSTATUSCHECK_END_OFFSET UNITYSDK_OFFSET(0x136AF70)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONSTATUSCHECK_BATTLE_BATTLEENTITYSPAWNED_OFFSET UNITYSDK_OFFSET(0x136B110)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONSTATUSCHECK_GROUNDCONDITIONSTATUSCHECK_STATUSADDED_OFFSET UNITYSDK_OFFSET(0x136B2B0)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONSTATUSCHECK_REMOVESTATUSADDEDLISTENER_OFFSET UNITYSDK_OFFSET(0x136B000)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONSTATUSCHECK_.CTOR_OFFSET UNITYSDK_OFFSET(0x136B510)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONSTATUSCHECK_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x136B560)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int GroundConditionStatusCheck_TypeDefinitionIndex = 14351;

	class GroundConditionStatusCheck : public Il2CppObject
	{
	public:
		::MX::Logic::BattleEntities::HeroStatus* StatusToCheck; // 0x28
		::System::Int32 MaxTriggerCount; // 0x2C
		::System::Int32 currentTriggerCount; // 0x30
		Il2CppObject* CheckList; // 0x38

		::System::Boolean _Start_b__4_0(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONSTATUSCHECK__START_B__4_0_OFFSET))(arg, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::GroundConditionStatusCheck&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::GroundConditionStatusCheck&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONSTATUSCHECK_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONSTATUSCHECK_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONSTATUSCHECK_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONSTATUSCHECK_START_OFFSET))(nullptr);
		}

		::System::Void End()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONSTATUSCHECK_END_OFFSET))(nullptr);
		}

		::System::Void Battle_BattleEntitySpawned(::System::Object* arg, ::MX::Logic::Battles::BattleEntitySpawnedEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::BattleEntitySpawnedEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONSTATUSCHECK_BATTLE_BATTLEENTITYSPAWNED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void GroundConditionStatusCheck_StatusAdded(::System::Object* arg, ::MX::Logic::BattleEntities::StatusAddedEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::BattleEntities::StatusAddedEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONSTATUSCHECK_GROUNDCONDITIONSTATUSCHECK_STATUSADDED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void RemoveStatusAddedListener()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONSTATUSCHECK_REMOVESTATUSADDEDLISTENER_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONSTATUSCHECK_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::GroundConditionStatusCheck&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::GroundConditionStatusCheck&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONSTATUSCHECK_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};
}

