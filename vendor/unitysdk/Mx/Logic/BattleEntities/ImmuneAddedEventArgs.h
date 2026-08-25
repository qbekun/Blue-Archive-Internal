#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class EntityId; }

#define MX_LOGIC_BATTLEENTITIES_IMMUNEADDEDEVENTARGS_GET_IMMUNTEMPLATEID_OFFSET UNITYSDK_OFFSET(0x112DFB0)
#define MX_LOGIC_BATTLEENTITIES_IMMUNEADDEDEVENTARGS_GET_ENTITYID_OFFSET UNITYSDK_OFFSET(0x112DFC0)
#define MX_LOGIC_BATTLEENTITIES_IMMUNEADDEDEVENTARGS_GET_INVOKERID_OFFSET UNITYSDK_OFFSET(0x112DFD0)
#define MX_LOGIC_BATTLEENTITIES_IMMUNEADDEDEVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x112DFE0)

namespace MX::Logic::BattleEntities
{
	inline static constexpr unsigned int ImmuneAddedEventArgs_TypeDefinitionIndex = 13053;

	class ImmuneAddedEventArgs : public Il2CppObject
	{
	public:
		::MX::Logic::BattleEntities::EntityId* _EntityId_k__BackingField; // 0x10
		::MX::Logic::BattleEntities::EntityId* _InvokerId_k__BackingField; // 0x14
		::System::String* _ImmunTemplateId_k__BackingField; // 0x18

		::System::String* get_ImmunTemplateId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_IMMUNEADDEDEVENTARGS_GET_IMMUNTEMPLATEID_OFFSET))(nullptr);
		}

		::MX::Logic::BattleEntities::EntityId* get_EntityId()
		{
			return ((::MX::Logic::BattleEntities::EntityId*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_IMMUNEADDEDEVENTARGS_GET_ENTITYID_OFFSET))(nullptr);
		}

		::MX::Logic::BattleEntities::EntityId* get_InvokerId()
		{
			return ((::MX::Logic::BattleEntities::EntityId*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_IMMUNEADDEDEVENTARGS_GET_INVOKERID_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::BattleEntities::EntityId* arg, ::MX::Logic::BattleEntities::EntityId* arg2, ::System::String* str)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::EntityId*, ::MX::Logic::BattleEntities::EntityId*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_IMMUNEADDEDEVENTARGS_.CTOR_OFFSET))(arg, arg2, str, nullptr);
		}

	};
}

