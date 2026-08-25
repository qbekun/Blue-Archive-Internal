#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class IncludeType; }
namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::BattleEntities { class BattleEntity; }
namespace MX::GameData::DAO::Battle { class CountLogicEffectTypeModifierDAO; }

#define MX_LOGIC_DATA_COUNTLOGICEFFECTTYPEMODIFIER_GET_COUNTMIN_OFFSET UNITYSDK_OFFSET(0x122CD10)
#define MX_LOGIC_DATA_COUNTLOGICEFFECTTYPEMODIFIER_GET_COUNTMAX_OFFSET UNITYSDK_OFFSET(0x122CD20)
#define MX_LOGIC_DATA_COUNTLOGICEFFECTTYPEMODIFIER_ISSUCCESS_OFFSET UNITYSDK_OFFSET(0x122CD30)
#define MX_LOGIC_DATA_COUNTLOGICEFFECTTYPEMODIFIER_GET_INCLUDETYPE_OFFSET UNITYSDK_OFFSET(0x122CEB0)
#define MX_LOGIC_DATA_COUNTLOGICEFFECTTYPEMODIFIER_.CTOR_OFFSET UNITYSDK_OFFSET(0x122CEC0)
#define MX_LOGIC_DATA_COUNTLOGICEFFECTTYPEMODIFIER_GET_LOGICEFFECTTYPE_OFFSET UNITYSDK_OFFSET(0x122CF80)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int CountLogicEffectTypeModifier_TypeDefinitionIndex = 13805;

	class CountLogicEffectTypeModifier : public Il2CppObject
	{
	public:
		::System::Type* _LogicEffectType_k__BackingField; // 0x18
		::System::Int32 _CountMin_k__BackingField; // 0x20
		::System::Int32 _CountMax_k__BackingField; // 0x24
		::MX::Logic::Data::IncludeType* _IncludeType_k__BackingField; // 0x28

		::System::Int32 get_CountMin()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_COUNTLOGICEFFECTTYPEMODIFIER_GET_COUNTMIN_OFFSET))(nullptr);
		}

		::System::Int32 get_CountMax()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_COUNTLOGICEFFECTTYPEMODIFIER_GET_COUNTMAX_OFFSET))(nullptr);
		}

		::System::Boolean IsSuccess(::MX::Logic::Battles::Battle* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2, ::MX::Logic::BattleEntities::BattleEntity* arg3, Il2CppObject* arg4)
		{
			return ((::System::Boolean(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::BattleEntities::BattleEntity*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_COUNTLOGICEFFECTTYPEMODIFIER_ISSUCCESS_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::MX::Logic::Data::IncludeType* get_IncludeType()
		{
			return ((::MX::Logic::Data::IncludeType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_COUNTLOGICEFFECTTYPEMODIFIER_GET_INCLUDETYPE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::GameData::DAO::Battle::CountLogicEffectTypeModifierDAO* arg)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::CountLogicEffectTypeModifierDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_COUNTLOGICEFFECTTYPEMODIFIER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Type* get_LogicEffectType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_COUNTLOGICEFFECTTYPEMODIFIER_GET_LOGICEFFECTTYPE_OFFSET))(nullptr);
		}

	};
}

