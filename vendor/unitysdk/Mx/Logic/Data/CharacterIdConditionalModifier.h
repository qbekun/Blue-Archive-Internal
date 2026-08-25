#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class IncludeType; }
namespace MX::Logic::Skills { class TargetSideId; }
namespace MX::GameData::DAO::Battle { class CharacterIdConditionalModifierDAO; }
namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::BattleEntities { class BattleEntity; }

#define MX_LOGIC_DATA_CHARACTERIDCONDITIONALMODIFIER_GET_TARGETSIDE_OFFSET UNITYSDK_OFFSET(0x1221F30)
#define MX_LOGIC_DATA_CHARACTERIDCONDITIONALMODIFIER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1221F40)
#define MX_LOGIC_DATA_CHARACTERIDCONDITIONALMODIFIER_GET_CHARACTERIDLIST_OFFSET UNITYSDK_OFFSET(0x1221F90)
#define MX_LOGIC_DATA_CHARACTERIDCONDITIONALMODIFIER_GET_INCLUDETYPE_OFFSET UNITYSDK_OFFSET(0x1221FA0)
#define MX_LOGIC_DATA_CHARACTERIDCONDITIONALMODIFIER_ISSUCCESS_OFFSET UNITYSDK_OFFSET(0x1221FB0)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int CharacterIdConditionalModifier_TypeDefinitionIndex = 13747;

	class CharacterIdConditionalModifier : public Il2CppObject
	{
	public:
		Il2CppObject* _CharacterIdList_k__BackingField; // 0x18
		::MX::Logic::Data::IncludeType* _IncludeType_k__BackingField; // 0x20
		::MX::Logic::Skills::TargetSideId* _TargetSide_k__BackingField; // 0x24

		::MX::Logic::Skills::TargetSideId* get_TargetSide()
		{
			return ((::MX::Logic::Skills::TargetSideId*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_CHARACTERIDCONDITIONALMODIFIER_GET_TARGETSIDE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::GameData::DAO::Battle::CharacterIdConditionalModifierDAO* arg)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::CharacterIdConditionalModifierDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_CHARACTERIDCONDITIONALMODIFIER_.CTOR_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_CharacterIdList()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_CHARACTERIDCONDITIONALMODIFIER_GET_CHARACTERIDLIST_OFFSET))(nullptr);
		}

		::MX::Logic::Data::IncludeType* get_IncludeType()
		{
			return ((::MX::Logic::Data::IncludeType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_CHARACTERIDCONDITIONALMODIFIER_GET_INCLUDETYPE_OFFSET))(nullptr);
		}

		::System::Boolean IsSuccess(::MX::Logic::Battles::Battle* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2, ::MX::Logic::BattleEntities::BattleEntity* arg3, Il2CppObject* arg4)
		{
			return ((::System::Boolean(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::BattleEntities::BattleEntity*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_CHARACTERIDCONDITIONALMODIFIER_ISSUCCESS_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

	};
}

