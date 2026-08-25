#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class LogicEffectCategory; }
namespace MX::Logic::Data { class IncludeType; }
namespace MX::GameData::DAO::Battle { class LogicEffectCategoryModifierDAO; }
namespace MX::Logic::BattleEntities { class BattleEntity; }
namespace MX::Logic::Battles { class Battle; }

#define MX_LOGIC_DATA_LOGICEFFECTCATEGORYMODIFIER_.CTOR_OFFSET UNITYSDK_OFFSET(0x122F040)
#define MX_LOGIC_DATA_LOGICEFFECTCATEGORYMODIFIER_GET_LOGICEFFECTCATEGORY_OFFSET UNITYSDK_OFFSET(0x122F080)
#define MX_LOGIC_DATA_LOGICEFFECTCATEGORYMODIFIER__ISSUCCESS_B__7_1_OFFSET UNITYSDK_OFFSET(0x122F090)
#define MX_LOGIC_DATA_LOGICEFFECTCATEGORYMODIFIER_ISSUCCESS_OFFSET UNITYSDK_OFFSET(0x122F0D0)
#define MX_LOGIC_DATA_LOGICEFFECTCATEGORYMODIFIER__ISSUCCESS_B__7_0_OFFSET UNITYSDK_OFFSET(0x122F200)
#define MX_LOGIC_DATA_LOGICEFFECTCATEGORYMODIFIER_GET_INCLUDETYPE_OFFSET UNITYSDK_OFFSET(0x122F240)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int LogicEffectCategoryModifier_TypeDefinitionIndex = 13817;

	class LogicEffectCategoryModifier : public Il2CppObject
	{
	public:
		::FlatData::LogicEffectCategory* _LogicEffectCategory_k__BackingField; // 0x18
		::MX::Logic::Data::IncludeType* _IncludeType_k__BackingField; // 0x1C

		::System::Void .ctor(::MX::GameData::DAO::Battle::LogicEffectCategoryModifierDAO* arg)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::LogicEffectCategoryModifierDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_LOGICEFFECTCATEGORYMODIFIER_.CTOR_OFFSET))(arg, nullptr);
		}

		::FlatData::LogicEffectCategory* get_LogicEffectCategory()
		{
			return ((::FlatData::LogicEffectCategory*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_LOGICEFFECTCATEGORYMODIFIER_GET_LOGICEFFECTCATEGORY_OFFSET))(nullptr);
		}

		::System::Boolean _IsSuccess_b__7_1(::MX::Logic::BattleEntities::BattleEntity* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_LOGICEFFECTCATEGORYMODIFIER__ISSUCCESS_B__7_1_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsSuccess(::MX::Logic::Battles::Battle* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2, ::MX::Logic::BattleEntities::BattleEntity* arg3, Il2CppObject* arg4)
		{
			return ((::System::Boolean(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::BattleEntities::BattleEntity*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_LOGICEFFECTCATEGORYMODIFIER_ISSUCCESS_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Boolean _IsSuccess_b__7_0(::MX::Logic::BattleEntities::BattleEntity* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_LOGICEFFECTCATEGORYMODIFIER__ISSUCCESS_B__7_0_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Data::IncludeType* get_IncludeType()
		{
			return ((::MX::Logic::Data::IncludeType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_LOGICEFFECTCATEGORYMODIFIER_GET_INCLUDETYPE_OFFSET))(nullptr);
		}

	};
}

