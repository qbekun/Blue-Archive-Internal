#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4; }
namespace MX::Logic::BattleEntities { class SkillSlot; }
namespace MX::Logic::BattleEntities { class SupportActor; }

#define MX_LOGIC_BATTLES_SYNCUSESKILLMANAGER_ADDCHARACTERTOSYNCUSESKILL_OFFSET UNITYSDK_OFFSET(0x138A120)
#define MX_LOGIC_BATTLES_SYNCUSESKILLMANAGER_ADDSUPPORTERTOSYNCUSESKILL_OFFSET UNITYSDK_OFFSET(0x138A310)
#define MX_LOGIC_BATTLES_SYNCUSESKILLMANAGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x138A500)
#define MX_LOGIC_BATTLES_SYNCUSESKILLMANAGER_REMOVECHARACTERFROMSYNCUSESKILL_OFFSET UNITYSDK_OFFSET(0x138A580)
#define MX_LOGIC_BATTLES_SYNCUSESKILLMANAGER_UPDATE_OFFSET UNITYSDK_OFFSET(0x138AA00)
#define MX_LOGIC_BATTLES_SYNCUSESKILLMANAGER_REMOVESUPPORTERFROMSYNCUSESKILL_OFFSET UNITYSDK_OFFSET(0x138AB20)
#define MX_LOGIC_BATTLES_SYNCUSESKILLMANAGER_CREATESYNCUSESKILLGROUP_OFFSET UNITYSDK_OFFSET(0x138AFA0)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int SyncUseSkillManager_TypeDefinitionIndex = 14418;

	class SyncUseSkillManager : public Il2CppObject
	{
	public:
		Il2CppObject* syncUseSkillGroupList; // 0x10

		::System::Void AddCharacterToSyncUseSkill(::System::Int32 arg, ::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* arg2, ::MX::Logic::BattleEntities::SkillSlot* arg3)
		{
			((::System::Void(*)(::System::Int32, ::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*, ::MX::Logic::BattleEntities::SkillSlot*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SYNCUSESKILLMANAGER_ADDCHARACTERTOSYNCUSESKILL_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void AddSupporterToSyncUseSkill(::System::Int32 arg, ::MX::Logic::BattleEntities::SupportActor* arg2, ::MX::Logic::BattleEntities::SkillSlot* arg3)
		{
			((::System::Void(*)(::System::Int32, ::MX::Logic::BattleEntities::SupportActor*, ::MX::Logic::BattleEntities::SkillSlot*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SYNCUSESKILLMANAGER_ADDSUPPORTERTOSYNCUSESKILL_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SYNCUSESKILLMANAGER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void RemoveCharacterFromSyncUseSkill(::System::Int32 arg, ::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4* arg2)
		{
			((::System::Void(*)(::System::Int32, ::MX::Logic::BattleEntities::O03ccca9f46b384c23e0abfba55145c96487463f8629c3d5b7b133893bf70f8e4*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SYNCUSESKILLMANAGER_REMOVECHARACTERFROMSYNCUSESKILL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SYNCUSESKILLMANAGER_UPDATE_OFFSET))(nullptr);
		}

		::System::Void RemoveSupporterFromSyncUseSkill(::System::Int32 arg, ::MX::Logic::BattleEntities::SupportActor* arg2)
		{
			((::System::Void(*)(::System::Int32, ::MX::Logic::BattleEntities::SupportActor*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SYNCUSESKILLMANAGER_REMOVESUPPORTERFROMSYNCUSESKILL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void CreateSyncUseSkillGroup(::System::Int32 arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_SYNCUSESKILLMANAGER_CREATESYNCUSESKILLGROUP_OFFSET))(arg, arg2, nullptr);
		}

	};
}

