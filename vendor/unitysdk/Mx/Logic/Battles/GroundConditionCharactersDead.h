#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Battles { class CharacterDeadCheckType; }
namespace MX::Logic::BattleEntities { class SpawnPoint; }
namespace MX::Logic::BattleEntities { class SpawnPointBase; }
namespace MX::Logic::Battles { class KillEventArgs; }

#define MX_LOGIC_BATTLES_GROUNDCONDITIONCHARACTERSDEAD_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x134F8A0)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONCHARACTERSDEAD__COCHECKDEAD_G__ISSUPPORTCHARACTER|6_0_OFFSET UNITYSDK_OFFSET(0x134FB60)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONCHARACTERSDEAD__COCHECKDEAD_B__6_1_OFFSET UNITYSDK_OFFSET(0x134FC20)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONCHARACTERSDEAD_START_OFFSET UNITYSDK_OFFSET(0x134FCF0)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONCHARACTERSDEAD_.CCTOR_OFFSET UNITYSDK_OFFSET(0x134FD90)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONCHARACTERSDEAD_.CTOR_OFFSET UNITYSDK_OFFSET(0x134FDA0)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONCHARACTERSDEAD_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x134FDF0)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONCHARACTERSDEAD_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1350A40)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONCHARACTERSDEAD_COCHECKDEAD_OFFSET UNITYSDK_OFFSET(0x1351330)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONCHARACTERSDEAD_END_OFFSET UNITYSDK_OFFSET(0x13513E0)
#define MX_LOGIC_BATTLES_GROUNDCONDITIONCHARACTERSDEAD_BATTLE_HERODEAD_OFFSET UNITYSDK_OFFSET(0x1351470)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int GroundConditionCharactersDead_TypeDefinitionIndex = 14326;

	class GroundConditionCharactersDead : public Il2CppObject
	{
	public:
		::MX::Logic::Battles::CharacterDeadCheckType* DeadCheck; // 0x28
		::System::Boolean CheckSummonedCharacterDead; // 0x2C
		::System::Int32 CheckDelayMilliSecond; // 0x30
		::System::Collections::IEnumerator* currentCheck; // 0x38

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONCHARACTERSDEAD_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Boolean _CoCheckDead_g__IsSupportCharacter|6_0(::MX::Logic::BattleEntities::SpawnPoint* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::SpawnPoint*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONCHARACTERSDEAD__COCHECKDEAD_G__ISSUPPORTCHARACTER|6_0_OFFSET))(arg, nullptr);
		}

		::System::Boolean _CoCheckDead_b__6_1(::MX::Logic::BattleEntities::SpawnPointBase* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::SpawnPointBase*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONCHARACTERSDEAD__COCHECKDEAD_B__6_1_OFFSET))(arg, nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONCHARACTERSDEAD_START_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONCHARACTERSDEAD_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONCHARACTERSDEAD_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::GroundConditionCharactersDead&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::GroundConditionCharactersDead&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONCHARACTERSDEAD_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::GroundConditionCharactersDead&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::GroundConditionCharactersDead&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONCHARACTERSDEAD_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Collections::IEnumerator* CoCheckDead(::MX::Logic::Battles::KillEventArgs* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::MX::Logic::Battles::KillEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONCHARACTERSDEAD_COCHECKDEAD_OFFSET))(arg, nullptr);
		}

		::System::Void End()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONCHARACTERSDEAD_END_OFFSET))(nullptr);
		}

		::System::Void Battle_HeroDead(::System::Object* arg, ::MX::Logic::Battles::KillEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::KillEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCONDITIONCHARACTERSDEAD_BATTLE_HERODEAD_OFFSET))(arg, arg2, nullptr);
		}

	};
}

