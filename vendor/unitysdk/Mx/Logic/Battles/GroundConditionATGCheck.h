#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class RaidBossCharacter; }
namespace MX::Logic::Battles { class BattleEntitySpawnedEventArgs; }

#define MX_LOGIC_BATTLES_GROUNDCONDITIONATGCHECK_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x1348A70)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONATGCHECK_START_OFFSET UNITYSDK_OFFSET(0x1348C70)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONATGCHECK_END_OFFSET UNITYSDK_OFFSET(0x1349050)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONATGCHECK_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1349190)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONATGCHECK_BATTLE_BATTLEENTITYSPAWNED_OFFSET UNITYSDK_OFFSET(0x1349E30)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONATGCHECK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1349DE0)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONATGCHECK_.CCTOR_OFFSET UNITYSDK_OFFSET(0x1349EC0)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONATGCHECK_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1349ED0)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONATGCHECK_COCHECK_OFFSET UNITYSDK_OFFSET(0x1348FE0)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int GroundConditionATGCheck_TypeDefinitionIndex = 14317;

	class GroundConditionATGCheck : public Il2CppObject
	{
	public:
		::System::Int64 Min; // 0x28
		::System::Int64 Max; // 0x30
		::System::Int32 MaxTriggerCount; // 0x38
		::MX::Logic::BattleEntities::RaidBossCharacter* raidBossCharacter; // 0x40
		::System::Collections::IEnumerator* coCheck; // 0x48
		::System::Int32 currentTriggerCount; // 0x50

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONATGCHECK_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONATGCHECK_START_OFFSET))(nullptr);
		}

		::System::Void End()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONATGCHECK_END_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::GroundConditionATGCheck&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::GroundConditionATGCheck&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONATGCHECK_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Battle_BattleEntitySpawned(::System::Object* arg, ::MX::Logic::Battles::BattleEntitySpawnedEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::BattleEntitySpawnedEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONATGCHECK_BATTLE_BATTLEENTITYSPAWNED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONATGCHECK_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONATGCHECK_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::GroundConditionATGCheck&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::GroundConditionATGCheck&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONATGCHECK_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Collections::IEnumerator* CoCheck()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONATGCHECK_COCHECK_OFFSET))(nullptr);
		}

	};
}

