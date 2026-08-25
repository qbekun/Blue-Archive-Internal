#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class EntityId; }

#define MX_LOGIC_BATTLEENTITIES_IMMUNEREMOVEDEVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x112E050)
#define MX_LOGIC_BATTLEENTITIES_IMMUNEREMOVEDEVENTARGS_GET_ENTITYID_OFFSET UNITYSDK_OFFSET(0x112E0C0)
#define MX_LOGIC_BATTLEENTITIES_IMMUNEREMOVEDEVENTARGS_SET_ENTITYID_OFFSET UNITYSDK_OFFSET(0x112E0D0)
#define MX_LOGIC_BATTLEENTITIES_IMMUNEREMOVEDEVENTARGS_GET_IMMUNETEMPLATEID_OFFSET UNITYSDK_OFFSET(0x112E0E0)
#define MX_LOGIC_BATTLEENTITIES_IMMUNEREMOVEDEVENTARGS_SET_IMMUNETEMPLATEID_OFFSET UNITYSDK_OFFSET(0x112E0F0)

namespace MX::Logic::BattleEntities
{
	inline static constexpr unsigned int ImmuneRemovedEventArgs_TypeDefinitionIndex = 13054;

	class ImmuneRemovedEventArgs : public Il2CppObject
	{
	public:
		::System::String* _ImmuneTemplateId_k__BackingField; // 0x10
		::MX::Logic::BattleEntities::EntityId* _EntityId_k__BackingField; // 0x18

		::System::Void .ctor(::MX::Logic::BattleEntities::EntityId* arg, ::System::String* str)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::EntityId*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_IMMUNEREMOVEDEVENTARGS_.CTOR_OFFSET))(arg, str, nullptr);
		}

		::MX::Logic::BattleEntities::EntityId* get_EntityId()
		{
			return ((::MX::Logic::BattleEntities::EntityId*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_IMMUNEREMOVEDEVENTARGS_GET_ENTITYID_OFFSET))(nullptr);
		}

		::System::Void set_EntityId(::MX::Logic::BattleEntities::EntityId* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::EntityId*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_IMMUNEREMOVEDEVENTARGS_SET_ENTITYID_OFFSET))(arg, nullptr);
		}

		::System::String* get_ImmuneTemplateId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_IMMUNEREMOVEDEVENTARGS_GET_IMMUNETEMPLATEID_OFFSET))(nullptr);
		}

		::System::Void set_ImmuneTemplateId(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_IMMUNEREMOVEDEVENTARGS_SET_IMMUNETEMPLATEID_OFFSET))(str, nullptr);
		}

	};
}

