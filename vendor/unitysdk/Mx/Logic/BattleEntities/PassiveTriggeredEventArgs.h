#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::BattleEntities { class SkillSlot; }
namespace MX::Logic::BattleEntities { class EntityId; }
namespace MX::Logic::Data { class PassiveTriggerEvent; }
namespace MX::Logic::Skills::Passive { class PassiveExecution; }

#define MX_LOGIC_BATTLEENTITIES_PASSIVETRIGGEREDEVENTARGS_GET_TRIGGERSOURCEID_OFFSET UNITYSDK_OFFSET(0x112E460)
#define MX_LOGIC_BATTLEENTITIES_PASSIVETRIGGEREDEVENTARGS_GET_SLOT_OFFSET UNITYSDK_OFFSET(0x112E470)
#define MX_LOGIC_BATTLEENTITIES_PASSIVETRIGGEREDEVENTARGS_TOSTRING_OFFSET UNITYSDK_OFFSET(0x112E480)
#define MX_LOGIC_BATTLEENTITIES_PASSIVETRIGGEREDEVENTARGS_GET_SKILLSPECIFICATION_OFFSET UNITYSDK_OFFSET(0x112E6C0)
#define MX_LOGIC_BATTLEENTITIES_PASSIVETRIGGEREDEVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x112E6D0)
#define MX_LOGIC_BATTLEENTITIES_PASSIVETRIGGEREDEVENTARGS_GET_OWNERID_OFFSET UNITYSDK_OFFSET(0x112E820)
#define MX_LOGIC_BATTLEENTITIES_PASSIVETRIGGEREDEVENTARGS_GET_TRIGGEREVENT_OFFSET UNITYSDK_OFFSET(0x112E830)

namespace MX::Logic::BattleEntities
{
	inline static constexpr unsigned int PassiveTriggeredEventArgs_TypeDefinitionIndex = 13059;

	class PassiveTriggeredEventArgs : public Il2CppObject
	{
	public:
		::MX::Logic::Skills::SkillSpecification* _SkillSpecification_k__BackingField; // 0x10
		::MX::Logic::BattleEntities::SkillSlot* _Slot_k__BackingField; // 0x18
		::MX::Logic::BattleEntities::EntityId* _OwnerId_k__BackingField; // 0x1C
		::MX::Logic::BattleEntities::EntityId* _TriggerSourceId_k__BackingField; // 0x20
		::MX::Logic::Data::PassiveTriggerEvent* _TriggerEvent_k__BackingField; // 0x24

		::MX::Logic::BattleEntities::EntityId* get_TriggerSourceId()
		{
			return ((::MX::Logic::BattleEntities::EntityId*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_PASSIVETRIGGEREDEVENTARGS_GET_TRIGGERSOURCEID_OFFSET))(nullptr);
		}

		::MX::Logic::BattleEntities::SkillSlot* get_Slot()
		{
			return ((::MX::Logic::BattleEntities::SkillSlot*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_PASSIVETRIGGEREDEVENTARGS_GET_SLOT_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_PASSIVETRIGGEREDEVENTARGS_TOSTRING_OFFSET))(nullptr);
		}

		::MX::Logic::Skills::SkillSpecification* get_SkillSpecification()
		{
			return ((::MX::Logic::Skills::SkillSpecification*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_PASSIVETRIGGEREDEVENTARGS_GET_SKILLSPECIFICATION_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::Skills::Passive::PassiveExecution* arg)
		{
			((::System::Void(*)(::MX::Logic::Skills::Passive::PassiveExecution*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_PASSIVETRIGGEREDEVENTARGS_.CTOR_OFFSET))(arg, nullptr);
		}

		::MX::Logic::BattleEntities::EntityId* get_OwnerId()
		{
			return ((::MX::Logic::BattleEntities::EntityId*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_PASSIVETRIGGEREDEVENTARGS_GET_OWNERID_OFFSET))(nullptr);
		}

		::MX::Logic::Data::PassiveTriggerEvent* get_TriggerEvent()
		{
			return ((::MX::Logic::Data::PassiveTriggerEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_PASSIVETRIGGEREDEVENTARGS_GET_TRIGGEREVENT_OFFSET))(nullptr);
		}

	};
}

