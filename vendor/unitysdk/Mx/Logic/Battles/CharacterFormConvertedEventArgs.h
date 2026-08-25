#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class EntityId; }

#define MX_LOGIC_BATTLES_CHARACTERFORMCONVERTEDEVENTARGS_SET_FORMINDEX_OFFSET UNITYSDK_OFFSET(0x126F5C0)
#define MX_LOGIC_BATTLES_CHARACTERFORMCONVERTEDEVENTARGS_SET_ENTITYID_OFFSET UNITYSDK_OFFSET(0x126F5D0)
#define MX_LOGIC_BATTLES_CHARACTERFORMCONVERTEDEVENTARGS_GET_ENTITYID_OFFSET UNITYSDK_OFFSET(0x126F5E0)
#define MX_LOGIC_BATTLES_CHARACTERFORMCONVERTEDEVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x126F5F0)
#define MX_LOGIC_BATTLES_CHARACTERFORMCONVERTEDEVENTARGS_GET_AFFECTUIGAUGETYPE_OFFSET UNITYSDK_OFFSET(0x126F650)
#define MX_LOGIC_BATTLES_CHARACTERFORMCONVERTEDEVENTARGS_GET_FORMINDEX_OFFSET UNITYSDK_OFFSET(0x126F660)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int CharacterFormConvertedEventArgs_TypeDefinitionIndex = 14023;

	class CharacterFormConvertedEventArgs : public Il2CppObject
	{
	public:
		::MX::Logic::BattleEntities::EntityId* _EntityId_k__BackingField; // 0x10
		::System::Int32 _FormIndex_k__BackingField; // 0x14
		::System::Boolean _AffectUIGaugeType_k__BackingField; // 0x18

		::System::Void set_FormIndex(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERFORMCONVERTEDEVENTARGS_SET_FORMINDEX_OFFSET))(arg, nullptr);
		}

		::System::Void set_EntityId(::MX::Logic::BattleEntities::EntityId* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::EntityId*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERFORMCONVERTEDEVENTARGS_SET_ENTITYID_OFFSET))(arg, nullptr);
		}

		::MX::Logic::BattleEntities::EntityId* get_EntityId()
		{
			return ((::MX::Logic::BattleEntities::EntityId*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERFORMCONVERTEDEVENTARGS_GET_ENTITYID_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::BattleEntities::EntityId* arg, ::System::Int32 arg2, ::System::Boolean arg3)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::EntityId*, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERFORMCONVERTEDEVENTARGS_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean get_AffectUIGaugeType()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERFORMCONVERTEDEVENTARGS_GET_AFFECTUIGAUGETYPE_OFFSET))(nullptr);
		}

		::System::Int32 get_FormIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CHARACTERFORMCONVERTEDEVENTARGS_GET_FORMINDEX_OFFSET))(nullptr);
		}

	};
}

