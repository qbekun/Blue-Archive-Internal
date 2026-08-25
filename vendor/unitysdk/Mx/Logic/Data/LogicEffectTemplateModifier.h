#pragma once
#include "../../../unitysdk.h"

namespace MX::Core::Services { class Hash64; }
namespace MX::Logic::Data { class IncludeType; }
namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::BattleEntities { class BattleEntity; }
namespace MX::GameData::DAO::Battle { class LogicEffectTemplateModifierDAO; }

#define MX_LOGIC_DATA_LOGICEFFECTTEMPLATEMODIFIER_ISSUCCESS_OFFSET UNITYSDK_OFFSET(0x122F250)
#define MX_LOGIC_DATA_LOGICEFFECTTEMPLATEMODIFIER_.CTOR_OFFSET UNITYSDK_OFFSET(0x122F380)
#define MX_LOGIC_DATA_LOGICEFFECTTEMPLATEMODIFIER__ISSUCCESS_B__7_1_OFFSET UNITYSDK_OFFSET(0x122F3E0)
#define MX_LOGIC_DATA_LOGICEFFECTTEMPLATEMODIFIER__ISSUCCESS_B__7_0_OFFSET UNITYSDK_OFFSET(0x122F420)
#define MX_LOGIC_DATA_LOGICEFFECTTEMPLATEMODIFIER_GET_TEMPLATEIDHASH_OFFSET UNITYSDK_OFFSET(0x122F460)
#define MX_LOGIC_DATA_LOGICEFFECTTEMPLATEMODIFIER_GET_INCLUDETYPE_OFFSET UNITYSDK_OFFSET(0x122F470)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int LogicEffectTemplateModifier_TypeDefinitionIndex = 13818;

	class LogicEffectTemplateModifier : public Il2CppObject
	{
	public:
		::MX::Core::Services::Hash64* _TemplateIdHash_k__BackingField; // 0x18
		::MX::Logic::Data::IncludeType* _IncludeType_k__BackingField; // 0x20

		::System::Boolean IsSuccess(::MX::Logic::Battles::Battle* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2, ::MX::Logic::BattleEntities::BattleEntity* arg3, Il2CppObject* arg4)
		{
			return ((::System::Boolean(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::BattleEntities::BattleEntity*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_LOGICEFFECTTEMPLATEMODIFIER_ISSUCCESS_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void .ctor(::MX::GameData::DAO::Battle::LogicEffectTemplateModifierDAO* arg)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::LogicEffectTemplateModifierDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_LOGICEFFECTTEMPLATEMODIFIER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean _IsSuccess_b__7_1(::MX::Logic::BattleEntities::BattleEntity* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_LOGICEFFECTTEMPLATEMODIFIER__ISSUCCESS_B__7_1_OFFSET))(arg, nullptr);
		}

		::System::Boolean _IsSuccess_b__7_0(::MX::Logic::BattleEntities::BattleEntity* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_LOGICEFFECTTEMPLATEMODIFIER__ISSUCCESS_B__7_0_OFFSET))(arg, nullptr);
		}

		::MX::Core::Services::Hash64* get_TemplateIdHash()
		{
			return ((::MX::Core::Services::Hash64*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_LOGICEFFECTTEMPLATEMODIFIER_GET_TEMPLATEIDHASH_OFFSET))(nullptr);
		}

		::MX::Logic::Data::IncludeType* get_IncludeType()
		{
			return ((::MX::Logic::Data::IncludeType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_LOGICEFFECTTEMPLATEMODIFIER_GET_INCLUDETYPE_OFFSET))(nullptr);
		}

	};
}

