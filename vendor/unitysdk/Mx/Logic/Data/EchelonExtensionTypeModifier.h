#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class IncludeType; }
namespace FlatData { class EchelonExtensionType; }
namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::BattleEntities { class BattleEntity; }
namespace MX::GameData::DAO::Battle { class EchelonExtensionTypeModifierDAO; }
namespace MX::Logic::Battles { class CharacterGroup; }

#define MX_LOGIC_DATA_ECHELONEXTENSIONTYPEMODIFIER_ISSUCCESS_OFFSET UNITYSDK_OFFSET(0x122D580)
#define MX_LOGIC_DATA_ECHELONEXTENSIONTYPEMODIFIER_.CTOR_OFFSET UNITYSDK_OFFSET(0x122D620)
#define MX_LOGIC_DATA_ECHELONEXTENSIONTYPEMODIFIER_ISGROUPMATCH_OFFSET UNITYSDK_OFFSET(0x122D600)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int EchelonExtensionTypeModifier_TypeDefinitionIndex = 13810;

	class EchelonExtensionTypeModifier : public Il2CppObject
	{
	public:
		::MX::Logic::Data::IncludeType* IncludeType; // 0x18
		::FlatData::EchelonExtensionType* EchelonExtensionType; // 0x1C

		::System::Boolean IsSuccess(::MX::Logic::Battles::Battle* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2, ::MX::Logic::BattleEntities::BattleEntity* arg3, Il2CppObject* arg4)
		{
			return ((::System::Boolean(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::BattleEntities::BattleEntity*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_ECHELONEXTENSIONTYPEMODIFIER_ISSUCCESS_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void .ctor(::MX::GameData::DAO::Battle::EchelonExtensionTypeModifierDAO* arg)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::EchelonExtensionTypeModifierDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_ECHELONEXTENSIONTYPEMODIFIER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsGroupMatch(::MX::Logic::Battles::CharacterGroup* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::Battles::CharacterGroup*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_ECHELONEXTENSIONTYPEMODIFIER_ISGROUPMATCH_OFFSET))(arg, nullptr);
		}

	};
}

