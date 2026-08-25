#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Battles { class BattleEntitySpawnedEventArgs; }
namespace MX::Logic::BattleEntities { class EntityId; }
namespace MX::Logic::Battles { class KillEventArgs; }

#define MX_LOGIC_BATTLES_GROUNDCONDITIONALIVECHARACTERCOUNTCHECKBYSPAWNTEMPLATEID_END_OFFSET UNITYSDK_OFFSET(0x133AFA0)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONALIVECHARACTERCOUNTCHECKBYSPAWNTEMPLATEID_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x133B120)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONALIVECHARACTERCOUNTCHECKBYSPAWNTEMPLATEID_BATTLE_BATTLEENTITYSPAWNED_OFFSET UNITYSDK_OFFSET(0x133BA40)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONALIVECHARACTERCOUNTCHECKBYSPAWNTEMPLATEID_CHECKALIVECOUNT_OFFSET UNITYSDK_OFFSET(0x133BBD0)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONALIVECHARACTERCOUNTCHECKBYSPAWNTEMPLATEID_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x133BE60)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONALIVECHARACTERCOUNTCHECKBYSPAWNTEMPLATEID_CHECKALIVECOUNTONCHARACTEREVENT_OFFSET UNITYSDK_OFFSET(0x133BA60)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONALIVECHARACTERCOUNTCHECKBYSPAWNTEMPLATEID_.CCTOR_OFFSET UNITYSDK_OFFSET(0x133C120)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONALIVECHARACTERCOUNTCHECKBYSPAWNTEMPLATEID_START_OFFSET UNITYSDK_OFFSET(0x133C130)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONALIVECHARACTERCOUNTCHECKBYSPAWNTEMPLATEID_BATTLE_HERODEAD_OFFSET UNITYSDK_OFFSET(0x133C480)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONALIVECHARACTERCOUNTCHECKBYSPAWNTEMPLATEID_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x133C4A0)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONALIVECHARACTERCOUNTCHECKBYSPAWNTEMPLATEID_.CTOR_OFFSET UNITYSDK_OFFSET(0x133D180)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int GroundConditionAliveCharacterCountCheckBySpawnTemplateId_TypeDefinitionIndex = 14283;

	class GroundConditionAliveCharacterCountCheckBySpawnTemplateId : public Il2CppObject
	{
	public:
		Il2CppObject* SpawnTemplateIds; // 0x28
		::System::Int32 AliveCharacterCount; // 0x30
		::System::Int32 TriggerMaxCount; // 0x34
		::System::Int32 StartCharacterCountBeforeCheck; // 0x38
		::System::Int32 triggerCountCurrent; // 0x3C
		::System::Int32 spawnedCharacterCount; // 0x40
		Il2CppObject* spawnTemplateIdHashes; // 0x48

		::System::Void End()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONALIVECHARACTERCOUNTCHECKBYSPAWNTEMPLATEID_END_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::GroundConditionAliveCharacterCountCheckBySpawnTemplateId&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::GroundConditionAliveCharacterCountCheckBySpawnTemplateId&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONALIVECHARACTERCOUNTCHECKBYSPAWNTEMPLATEID_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Battle_BattleEntitySpawned(::System::Object* arg, ::MX::Logic::Battles::BattleEntitySpawnedEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::BattleEntitySpawnedEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONALIVECHARACTERCOUNTCHECKBYSPAWNTEMPLATEID_BATTLE_BATTLEENTITYSPAWNED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void CheckAliveCount()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONALIVECHARACTERCOUNTCHECKBYSPAWNTEMPLATEID_CHECKALIVECOUNT_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONALIVECHARACTERCOUNTCHECKBYSPAWNTEMPLATEID_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void CheckAliveCountOnCharacterEvent(::MX::Logic::BattleEntities::EntityId* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::EntityId*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONALIVECHARACTERCOUNTCHECKBYSPAWNTEMPLATEID_CHECKALIVECOUNTONCHARACTEREVENT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONALIVECHARACTERCOUNTCHECKBYSPAWNTEMPLATEID_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONALIVECHARACTERCOUNTCHECKBYSPAWNTEMPLATEID_START_OFFSET))(nullptr);
		}

		::System::Void Battle_HeroDead(::System::Object* arg, ::MX::Logic::Battles::KillEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::KillEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONALIVECHARACTERCOUNTCHECKBYSPAWNTEMPLATEID_BATTLE_HERODEAD_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::GroundConditionAliveCharacterCountCheckBySpawnTemplateId&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::GroundConditionAliveCharacterCountCheckBySpawnTemplateId&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONALIVECHARACTERCOUNTCHECKBYSPAWNTEMPLATEID_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONALIVECHARACTERCOUNTCHECKBYSPAWNTEMPLATEID_.CTOR_OFFSET))(nullptr);
		}

	};
}

