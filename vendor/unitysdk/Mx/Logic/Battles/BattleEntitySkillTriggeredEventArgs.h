#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class BattleEntity; }
namespace MX::Logic::BattleEntities { class SkillSlot; }

#define MX_LOGIC_BATTLES_BATTLEENTITYSKILLTRIGGEREDEVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x126E7E0)
#define MX_LOGIC_BATTLES_BATTLEENTITYSKILLTRIGGEREDEVENTARGS_GET_INVOKER_OFFSET UNITYSDK_OFFSET(0x126E860)
#define MX_LOGIC_BATTLES_BATTLEENTITYSKILLTRIGGEREDEVENTARGS_GET_SKILLSLOT_OFFSET UNITYSDK_OFFSET(0x126E870)
#define MX_LOGIC_BATTLES_BATTLEENTITYSKILLTRIGGEREDEVENTARGS_GET_SKILLGROUPID_OFFSET UNITYSDK_OFFSET(0x126E880)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int BattleEntitySkillTriggeredEventArgs_TypeDefinitionIndex = 14003;

	class BattleEntitySkillTriggeredEventArgs : public Il2CppObject
	{
	public:
		::MX::Logic::BattleEntities::BattleEntity* _Invoker_k__BackingField; // 0x10
		::System::String* _SkillGroupId_k__BackingField; // 0x18
		::MX::Logic::BattleEntities::SkillSlot* _SkillSlot_k__BackingField; // 0x20

		::System::Void .ctor(::MX::Logic::BattleEntities::BattleEntity* arg, ::System::String* str, ::MX::Logic::BattleEntities::SkillSlot* arg2)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::BattleEntity*, ::System::String*, ::MX::Logic::BattleEntities::SkillSlot*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_BATTLEENTITYSKILLTRIGGEREDEVENTARGS_.CTOR_OFFSET))(arg, str, arg2, nullptr);
		}

		::MX::Logic::BattleEntities::BattleEntity* get_Invoker()
		{
			return ((::MX::Logic::BattleEntities::BattleEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_BATTLEENTITYSKILLTRIGGEREDEVENTARGS_GET_INVOKER_OFFSET))(nullptr);
		}

		::MX::Logic::BattleEntities::SkillSlot* get_SkillSlot()
		{
			return ((::MX::Logic::BattleEntities::SkillSlot*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_BATTLEENTITYSKILLTRIGGEREDEVENTARGS_GET_SKILLSLOT_OFFSET))(nullptr);
		}

		::System::String* get_SkillGroupId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_BATTLEENTITYSKILLTRIGGEREDEVENTARGS_GET_SKILLGROUPID_OFFSET))(nullptr);
		}

	};
}

