#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class EntityId; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::BattleEntities { class HeroStatus; }
namespace MX::Logic::BattleEntities { class ForceMoveParams; }
namespace MX::Logic::BattleEntities { class StatusParams; }

#define MX_LOGIC_BATTLEENTITIES_STATUSADDEDEVENTARGS_GET_DURATION_OFFSET UNITYSDK_OFFSET(0x112DDF0)
#define MX_LOGIC_BATTLEENTITIES_STATUSADDEDEVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x112DE00)
#define MX_LOGIC_BATTLEENTITIES_STATUSADDEDEVENTARGS_GET_ENTITYID_OFFSET UNITYSDK_OFFSET(0x112DEB0)
#define MX_LOGIC_BATTLEENTITIES_STATUSADDEDEVENTARGS_GET_STATUS_OFFSET UNITYSDK_OFFSET(0x112DEC0)
#define MX_LOGIC_BATTLEENTITIES_STATUSADDEDEVENTARGS_GET_FORCEMOVE_OFFSET UNITYSDK_OFFSET(0x112DED0)
#define MX_LOGIC_BATTLEENTITIES_STATUSADDEDEVENTARGS_GET_INVOKERID_OFFSET UNITYSDK_OFFSET(0x112DEE0)
#define MX_LOGIC_BATTLEENTITIES_STATUSADDEDEVENTARGS_GET_ISCROWDCONTROL_OFFSET UNITYSDK_OFFSET(0x112DEF0)
#define MX_LOGIC_BATTLEENTITIES_STATUSADDEDEVENTARGS_GET_SKILLSPECIFICATION_OFFSET UNITYSDK_OFFSET(0x112DF00)

namespace MX::Logic::BattleEntities
{
	inline static constexpr unsigned int StatusAddedEventArgs_TypeDefinitionIndex = 13051;

	class StatusAddedEventArgs : public Il2CppObject
	{
	public:
		::MX::Logic::BattleEntities::EntityId* _EntityId_k__BackingField; // 0x10
		::MX::Logic::BattleEntities::EntityId* _InvokerId_k__BackingField; // 0x14
		::MX::Logic::Skills::SkillSpecification* _SkillSpecification_k__BackingField; // 0x18
		::MX::Logic::BattleEntities::HeroStatus* _Status_k__BackingField; // 0x20
		::System::Int32 _Duration_k__BackingField; // 0x24
		::System::Boolean _IsCrowdControl_k__BackingField; // 0x28
		::MX::Logic::BattleEntities::ForceMoveParams* _ForceMove_k__BackingField; // 0x2C

		::System::Int32 get_Duration()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STATUSADDEDEVENTARGS_GET_DURATION_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::BattleEntities::EntityId* arg, ::MX::Logic::BattleEntities::StatusParams* arg2)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::EntityId*, ::MX::Logic::BattleEntities::StatusParams*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STATUSADDEDEVENTARGS_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Logic::BattleEntities::EntityId* get_EntityId()
		{
			return ((::MX::Logic::BattleEntities::EntityId*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STATUSADDEDEVENTARGS_GET_ENTITYID_OFFSET))(nullptr);
		}

		::MX::Logic::BattleEntities::HeroStatus* get_Status()
		{
			return ((::MX::Logic::BattleEntities::HeroStatus*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STATUSADDEDEVENTARGS_GET_STATUS_OFFSET))(nullptr);
		}

		::MX::Logic::BattleEntities::ForceMoveParams* get_ForceMove()
		{
			return ((::MX::Logic::BattleEntities::ForceMoveParams*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STATUSADDEDEVENTARGS_GET_FORCEMOVE_OFFSET))(nullptr);
		}

		::MX::Logic::BattleEntities::EntityId* get_InvokerId()
		{
			return ((::MX::Logic::BattleEntities::EntityId*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STATUSADDEDEVENTARGS_GET_INVOKERID_OFFSET))(nullptr);
		}

		::System::Boolean get_IsCrowdControl()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STATUSADDEDEVENTARGS_GET_ISCROWDCONTROL_OFFSET))(nullptr);
		}

		::MX::Logic::Skills::SkillSpecification* get_SkillSpecification()
		{
			return ((::MX::Logic::Skills::SkillSpecification*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STATUSADDEDEVENTARGS_GET_SKILLSPECIFICATION_OFFSET))(nullptr);
		}

	};
}

