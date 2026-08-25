#pragma once
#include "../../../unitysdk.h"

namespace MX::Core::Services { class Hash64; }
namespace MX::Logic::Data { class IncludeType; }
namespace MX::GameData::DAO::Battle { class CountLogicEffectTemplateModifierDAO; }
namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::BattleEntities { class BattleEntity; }

#define MX_LOGIC_DATA_COUNTLOGICEFFECTTEMPLATEMODIFIER_GET_COUNTMAX_OFFSET UNITYSDK_OFFSET(0x122CAA0)
#define MX_LOGIC_DATA_COUNTLOGICEFFECTTEMPLATEMODIFIER_GET_COUNTMIN_OFFSET UNITYSDK_OFFSET(0x122CAB0)
#define MX_LOGIC_DATA_COUNTLOGICEFFECTTEMPLATEMODIFIER_GET_TEMPLATEIDHASH_OFFSET UNITYSDK_OFFSET(0x122CAC0)
#define MX_LOGIC_DATA_COUNTLOGICEFFECTTEMPLATEMODIFIER_.CTOR_OFFSET UNITYSDK_OFFSET(0x122CAD0)
#define MX_LOGIC_DATA_COUNTLOGICEFFECTTEMPLATEMODIFIER_GET_INCLUDETYPE_OFFSET UNITYSDK_OFFSET(0x122CB30)
#define MX_LOGIC_DATA_COUNTLOGICEFFECTTEMPLATEMODIFIER_ISSUCCESS_OFFSET UNITYSDK_OFFSET(0x122CB40)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int CountLogicEffectTemplateModifier_TypeDefinitionIndex = 13803;

	class CountLogicEffectTemplateModifier : public Il2CppObject
	{
	public:
		::MX::Core::Services::Hash64* _TemplateIdHash_k__BackingField; // 0x18
		::System::Int32 _CountMin_k__BackingField; // 0x20
		::System::Int32 _CountMax_k__BackingField; // 0x24
		::MX::Logic::Data::IncludeType* _IncludeType_k__BackingField; // 0x28

		::System::Int32 get_CountMax()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_COUNTLOGICEFFECTTEMPLATEMODIFIER_GET_COUNTMAX_OFFSET))(nullptr);
		}

		::System::Int32 get_CountMin()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_COUNTLOGICEFFECTTEMPLATEMODIFIER_GET_COUNTMIN_OFFSET))(nullptr);
		}

		::MX::Core::Services::Hash64* get_TemplateIdHash()
		{
			return ((::MX::Core::Services::Hash64*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_COUNTLOGICEFFECTTEMPLATEMODIFIER_GET_TEMPLATEIDHASH_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::GameData::DAO::Battle::CountLogicEffectTemplateModifierDAO* arg)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::CountLogicEffectTemplateModifierDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_COUNTLOGICEFFECTTEMPLATEMODIFIER_.CTOR_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Data::IncludeType* get_IncludeType()
		{
			return ((::MX::Logic::Data::IncludeType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_COUNTLOGICEFFECTTEMPLATEMODIFIER_GET_INCLUDETYPE_OFFSET))(nullptr);
		}

		::System::Boolean IsSuccess(::MX::Logic::Battles::Battle* arg, ::MX::Logic::BattleEntities::BattleEntity* arg2, ::MX::Logic::BattleEntities::BattleEntity* arg3, Il2CppObject* arg4)
		{
			return ((::System::Boolean(*)(::MX::Logic::Battles::Battle*, ::MX::Logic::BattleEntities::BattleEntity*, ::MX::Logic::BattleEntities::BattleEntity*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_COUNTLOGICEFFECTTEMPLATEMODIFIER_ISSUCCESS_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

	};
}

