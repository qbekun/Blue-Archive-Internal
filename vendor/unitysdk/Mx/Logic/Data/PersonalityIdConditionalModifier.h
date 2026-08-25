#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class IncludeType; }
namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::BattleEntities { class BattleEntity; }
namespace MX::GameData::DAO::Battle { class PersonalityIdConditionalModifierDAO; }

#define MX_LOGIC_DATA_PERSONALITYIDCONDITIONALMODIFIER_ISSUCCESS_OFFSET UNITYSDK_OFFSET(0x122F990)
#define MX_LOGIC_DATA_PERSONALITYIDCONDITIONALMODIFIER_.CTOR_OFFSET UNITYSDK_OFFSET(0x122FAD0)
#define MX_LOGIC_DATA_PERSONALITYIDCONDITIONALMODIFIER__ISSUCCESS_B__7_1_OFFSET UNITYSDK_OFFSET(0x122FB20)
#define MX_LOGIC_DATA_PERSONALITYIDCONDITIONALMODIFIER_GET_INCLUDETYPE_OFFSET UNITYSDK_OFFSET(0x122FC00)
#define MX_LOGIC_DATA_PERSONALITYIDCONDITIONALMODIFIER__ISSUCCESS_B__7_0_OFFSET UNITYSDK_OFFSET(0x122FC10)
#define MX_LOGIC_DATA_PERSONALITYIDCONDITIONALMODIFIER_GET_PERSONALITYIDLIST_OFFSET UNITYSDK_OFFSET(0x122FD30)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int PersonalityIdConditionalModifier_TypeDefinitionIndex = 13822;

	class PersonalityIdConditionalModifier : public Il2CppObject
	{
	public:
		Il2CppObject* _PersonalityIdList_k__BackingField; // 0x18
		::MX::Logic::Data::IncludeType* _IncludeType_k__BackingField; // 0x20

		::System::Boolean IsSuccess(::MX::Logic::Battles::Battle* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2, ::MX::Logic::BattleEntities::BattleEntity* arg3, Il2CppObject* arg4)
		{
			return ((::System::Boolean(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::BattleEntities::BattleEntity*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_PERSONALITYIDCONDITIONALMODIFIER_ISSUCCESS_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void .ctor(::MX::GameData::DAO::Battle::PersonalityIdConditionalModifierDAO* arg)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::PersonalityIdConditionalModifierDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_PERSONALITYIDCONDITIONALMODIFIER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean _IsSuccess_b__7_1(::MX::Logic::BattleEntities::BattleEntity* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_PERSONALITYIDCONDITIONALMODIFIER__ISSUCCESS_B__7_1_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Data::IncludeType* get_IncludeType()
		{
			return ((::MX::Logic::Data::IncludeType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_PERSONALITYIDCONDITIONALMODIFIER_GET_INCLUDETYPE_OFFSET))(nullptr);
		}

		::System::Boolean _IsSuccess_b__7_0(::MX::Logic::BattleEntities::BattleEntity* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_PERSONALITYIDCONDITIONALMODIFIER__ISSUCCESS_B__7_0_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_PersonalityIdList()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_PERSONALITYIDCONDITIONALMODIFIER_GET_PERSONALITYIDLIST_OFFSET))(nullptr);
		}

	};
}

