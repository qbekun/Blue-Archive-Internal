#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4; }
namespace MX::Logic::BattleEntities { class SpawnPointBase; }
namespace MX::Logic::Battles { class BattleEntitySpawnedEventArgs; }
namespace MX::Logic::Battles { class KillEventArgs; }
namespace MX::Logic::BattleEntities { class EntityId; }

#define MX_LOGIC_BATTLES_GROUNDCONDITIONALIVECHARACTERCOUNTCHECK__CHECKALIVECOUNT_B__7_1_OFFSET UNITYSDK_OFFSET(0x1339170)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONALIVECHARACTERCOUNTCHECK_CHECKALIVECOUNT_OFFSET UNITYSDK_OFFSET(0x13391F0)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONALIVECHARACTERCOUNTCHECK_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x13393A0)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONALIVECHARACTERCOUNTCHECK__CHECKALIVECOUNT_B__7_0_OFFSET UNITYSDK_OFFSET(0x1339C80)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONALIVECHARACTERCOUNTCHECK_.CCTOR_OFFSET UNITYSDK_OFFSET(0x1339CF0)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONALIVECHARACTERCOUNTCHECK_BATTLE_BATTLEENTITYSPAWNED_OFFSET UNITYSDK_OFFSET(0x1339EC0)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONALIVECHARACTERCOUNTCHECK_START_OFFSET UNITYSDK_OFFSET(0x1339FC0)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONALIVECHARACTERCOUNTCHECK_BATTLE_HERODEAD_OFFSET UNITYSDK_OFFSET(0x133A0C0)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONALIVECHARACTERCOUNTCHECK_END_OFFSET UNITYSDK_OFFSET(0x133A0E0)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONALIVECHARACTERCOUNTCHECK_.CTOR_OFFSET UNITYSDK_OFFSET(0x133A260)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONALIVECHARACTERCOUNTCHECK_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x133A2B0)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONALIVECHARACTERCOUNTCHECK_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x1339D00)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONALIVECHARACTERCOUNTCHECK_CHECKALIVECOUNTONCHARACTEREVENT_OFFSET UNITYSDK_OFFSET(0x1339EE0)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int GroundConditionAliveCharacterCountCheck_TypeDefinitionIndex = 14281;

	class GroundConditionAliveCharacterCountCheck : public Il2CppObject
	{
	public:
		::System::Int32 AliveCharacterCount; // 0x28
		::System::Int32 TriggerMaxCount; // 0x2C
		::System::Int32 triggerCountCurrent; // 0x30

		::System::Boolean _CheckAliveCount_b__7_1(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONALIVECHARACTERCOUNTCHECK__CHECKALIVECOUNT_B__7_1_OFFSET))(arg, nullptr);
		}

		::System::Void CheckAliveCount()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONALIVECHARACTERCOUNTCHECK_CHECKALIVECOUNT_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::GroundConditionAliveCharacterCountCheck&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::GroundConditionAliveCharacterCountCheck&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONALIVECHARACTERCOUNTCHECK_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean _CheckAliveCount_b__7_0(::MX::Logic::BattleEntities::SpawnPointBase* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::SpawnPointBase*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONALIVECHARACTERCOUNTCHECK__CHECKALIVECOUNT_B__7_0_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONALIVECHARACTERCOUNTCHECK_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void Battle_BattleEntitySpawned(::System::Object* arg, ::MX::Logic::Battles::BattleEntitySpawnedEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::BattleEntitySpawnedEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONALIVECHARACTERCOUNTCHECK_BATTLE_BATTLEENTITYSPAWNED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONALIVECHARACTERCOUNTCHECK_START_OFFSET))(nullptr);
		}

		::System::Void Battle_HeroDead(::System::Object* arg, ::MX::Logic::Battles::KillEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::KillEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONALIVECHARACTERCOUNTCHECK_BATTLE_HERODEAD_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void End()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONALIVECHARACTERCOUNTCHECK_END_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONALIVECHARACTERCOUNTCHECK_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::GroundConditionAliveCharacterCountCheck&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::GroundConditionAliveCharacterCountCheck&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONALIVECHARACTERCOUNTCHECK_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONALIVECHARACTERCOUNTCHECK_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void CheckAliveCountOnCharacterEvent(::MX::Logic::BattleEntities::EntityId* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::EntityId*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONALIVECHARACTERCOUNTCHECK_CHECKALIVECOUNTONCHARACTEREVENT_OFFSET))(arg, nullptr);
		}

	};
}

