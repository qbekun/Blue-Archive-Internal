#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class EntityId; }
namespace MX::Logic::BattleEntities { class HeroStatus; }

#define MX_LOGIC_BATTLEENTITIES_STATUSREMOVEDEVENTARGS_GET_STATUS_OFFSET UNITYSDK_OFFSET(0x112DF10)
#define MX_LOGIC_BATTLEENTITIES_STATUSREMOVEDEVENTARGS_SET_STATUS_OFFSET UNITYSDK_OFFSET(0x112DF20)
#define MX_LOGIC_BATTLEENTITIES_STATUSREMOVEDEVENTARGS_GET_ENTITYID_OFFSET UNITYSDK_OFFSET(0x112DF30)
#define MX_LOGIC_BATTLEENTITIES_STATUSREMOVEDEVENTARGS_SET_ENTITYID_OFFSET UNITYSDK_OFFSET(0x112DF40)
#define MX_LOGIC_BATTLEENTITIES_STATUSREMOVEDEVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x112DF50)

namespace MX::Logic::BattleEntities
{
	inline static constexpr unsigned int StatusRemovedEventArgs_TypeDefinitionIndex = 13052;

	class StatusRemovedEventArgs : public Il2CppObject
	{
	public:
		::MX::Logic::BattleEntities::EntityId* _EntityId_k__BackingField; // 0x10
		::MX::Logic::BattleEntities::HeroStatus* _Status_k__BackingField; // 0x14

		::MX::Logic::BattleEntities::HeroStatus* get_Status()
		{
			return ((::MX::Logic::BattleEntities::HeroStatus*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STATUSREMOVEDEVENTARGS_GET_STATUS_OFFSET))(nullptr);
		}

		::System::Void set_Status(::MX::Logic::BattleEntities::HeroStatus* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::HeroStatus*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STATUSREMOVEDEVENTARGS_SET_STATUS_OFFSET))(arg, nullptr);
		}

		::MX::Logic::BattleEntities::EntityId* get_EntityId()
		{
			return ((::MX::Logic::BattleEntities::EntityId*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STATUSREMOVEDEVENTARGS_GET_ENTITYID_OFFSET))(nullptr);
		}

		::System::Void set_EntityId(::MX::Logic::BattleEntities::EntityId* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::EntityId*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STATUSREMOVEDEVENTARGS_SET_ENTITYID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Logic::BattleEntities::EntityId* arg, ::MX::Logic::BattleEntities::HeroStatus* arg2)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::EntityId*, ::MX::Logic::BattleEntities::HeroStatus*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_STATUSREMOVEDEVENTARGS_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

	};
}

