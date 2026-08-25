#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Battles { class GroupTag; }
namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::BattleEntities { class SkillActor; }

#define MX_LOGIC_BATTLES_GROUNDCOMMANDUSESKILL_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1327510)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDUSESKILL_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1328560)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDUSESKILL_COACTORUPDATE_OFFSET UNITYSDK_OFFSET(0x1328E20)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDUSESKILL_.CCTOR_OFFSET UNITYSDK_OFFSET(0x1328ED0)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDUSESKILL_.CTOR_OFFSET UNITYSDK_OFFSET(0x1329210)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDUSESKILL_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x1328EE0)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDUSESKILL_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x13292B0)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDUSESKILL__EXECUTE_B__10_1_OFFSET UNITYSDK_OFFSET(0x132AB40)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int GroundCommandUseSkill_TypeDefinitionIndex = 14256;

	class GroundCommandUseSkill : public Il2CppObject
	{
	public:
		Il2CppObject* TargetCharacterCommandId; // 0x30
		::System::Boolean CreateCharacterStat; // 0x38
		::System::Int64 CharacterId; // 0x40
		::System::Int64 CharacterLevel; // 0x48
		::System::Int32 CharacterGrade; // 0x50
		::System::Int64 Interval; // 0x58
		::System::String* SkillGroupId; // 0x60
		::System::Int32 SkillLevel; // 0x68
		::System::Int32 ExecuterLevel; // 0x6C
		::MX::Logic::Battles::GroupTag* CharacterGroup; // 0x70

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::GroundCommandUseSkill&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::GroundCommandUseSkill&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDUSESKILL_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Execute(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDUSESKILL_EXECUTE_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* CoActorUpdate(::MX::Logic::BattleEntities::SkillActor* arg, ::MX::Logic::Battles::Battle* arg2)
		{
			return ((::System::Collections::IEnumerator*(*)(::MX::Logic::BattleEntities::SkillActor*, ::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDUSESKILL_COACTORUPDATE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDUSESKILL_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDUSESKILL_.CTOR_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDUSESKILL_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::GroundCommandUseSkill&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::GroundCommandUseSkill&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDUSESKILL_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean _Execute_b__10_1(::System::String* str)
		{
			return ((::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDUSESKILL__EXECUTE_B__10_1_OFFSET))(str, nullptr);
		}

	};
}

