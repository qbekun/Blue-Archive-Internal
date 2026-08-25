#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class SkillSlot; }
namespace MX::Logic::Battles { class Battle; }

#define MX_LOGIC_BATTLES_GROUNDCOMMANDSETSYNCUSESKILLGROUP_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x13194D0)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDSETSYNCUSESKILLGROUP_.CCTOR_OFFSET UNITYSDK_OFFSET(0x131A250)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDSETSYNCUSESKILLGROUP_COADDTOSYNCUSESKILL_OFFSET UNITYSDK_OFFSET(0x131A4C0)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDSETSYNCUSESKILLGROUP_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x131A530)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDSETSYNCUSESKILLGROUP_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x131A260)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDSETSYNCUSESKILLGROUP_EXECUTE_OFFSET UNITYSDK_OFFSET(0x131AE40)
#define MX_LOGIC_BATTLES_GROUNDCOMMANDSETSYNCUSESKILLGROUP_.CTOR_OFFSET UNITYSDK_OFFSET(0x131A200)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int GroundCommandSetSyncUseSkillGroup_TypeDefinitionIndex = 14237;

	class GroundCommandSetSyncUseSkillGroup : public Il2CppObject
	{
	public:
		::System::Int32 SyncUseSkillGroupId; // 0x30
		::MX::Logic::BattleEntities::SkillSlot* SkillSlot; // 0x34
		::System::Boolean IsAdd; // 0x38
		::System::Boolean IsAllyGroup; // 0x39

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::GroundCommandSetSyncUseSkillGroup&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::GroundCommandSetSyncUseSkillGroup&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDSETSYNCUSESKILLGROUP_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDSETSYNCUSESKILLGROUP_.CCTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoAddToSyncUseSkill(::MX::Logic::Battles::Battle* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDSETSYNCUSESKILLGROUP_COADDTOSYNCUSESKILL_OFFSET))(arg, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::GroundCommandSetSyncUseSkillGroup&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::GroundCommandSetSyncUseSkillGroup&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDSETSYNCUSESKILLGROUP_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDSETSYNCUSESKILLGROUP_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Execute(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDSETSYNCUSESKILLGROUP_EXECUTE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDCOMMANDSETSYNCUSESKILLGROUP_.CTOR_OFFSET))(nullptr);
		}

	};
}

