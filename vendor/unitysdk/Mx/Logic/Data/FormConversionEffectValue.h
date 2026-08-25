#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class LogicEffectEndCondition; }
namespace MX::GameData::DAO::Battle { class FormConversionEffectDAO; }

#define MX_LOGIC_DATA_FORMCONVERSIONEFFECTVALUE_GET_FORMINDEX_OFFSET UNITYSDK_OFFSET(0x123A9E0)
#define MX_LOGIC_DATA_FORMCONVERSIONEFFECTVALUE_GET_FORMCONVERSIONENDCONDITION_OFFSET UNITYSDK_OFFSET(0x123A9F0)
#define MX_LOGIC_DATA_FORMCONVERSIONEFFECTVALUE_GET_DISPELLABLE_OFFSET UNITYSDK_OFFSET(0x123AA00)
#define MX_LOGIC_DATA_FORMCONVERSIONEFFECTVALUE_GET_AFFECTUIGAUGETYPE_OFFSET UNITYSDK_OFFSET(0x123AA10)
#define MX_LOGIC_DATA_FORMCONVERSIONEFFECTVALUE_GET_EXSKILLCARDREDRAWINHAND_OFFSET UNITYSDK_OFFSET(0x123AA20)
#define MX_LOGIC_DATA_FORMCONVERSIONEFFECTVALUE_GET_RELEASEFORMCONVERSIONDURATION_OFFSET UNITYSDK_OFFSET(0x123AA30)
#define MX_LOGIC_DATA_FORMCONVERSIONEFFECTVALUE_GET_RELEASEFORMCONVERSIONREQUIRED_OFFSET UNITYSDK_OFFSET(0x123AA40)
#define MX_LOGIC_DATA_FORMCONVERSIONEFFECTVALUE_GET_USEIMMEDIATEFORMRELEASEONDISPEL_OFFSET UNITYSDK_OFFSET(0x123AA50)
#define MX_LOGIC_DATA_FORMCONVERSIONEFFECTVALUE_GET_DISABLEUSESKILL_OFFSET UNITYSDK_OFFSET(0x123AA60)
#define MX_LOGIC_DATA_FORMCONVERSIONEFFECTVALUE_GET_ENDCONDITIONARGUMENT_OFFSET UNITYSDK_OFFSET(0x123AA70)
#define MX_LOGIC_DATA_FORMCONVERSIONEFFECTVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x123AA80)
#define MX_LOGIC_DATA_FORMCONVERSIONEFFECTVALUE_GET_PUBLICSKILLINDEX_OFFSET UNITYSDK_OFFSET(0x123ABC0)
#define MX_LOGIC_DATA_FORMCONVERSIONEFFECTVALUE_GET_NORMALATTACKINDEX_OFFSET UNITYSDK_OFFSET(0x123ABD0)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int FormConversionEffectValue_TypeDefinitionIndex = 13891;

	class FormConversionEffectValue : public Il2CppObject
	{
	public:
		::MX::Logic::BattleEntities::LogicEffectEndCondition* _FormConversionEndCondition_k__BackingField; // 0x48
		::System::Int32 _EndConditionArgument_k__BackingField; // 0x4C
		::System::Int32 _FormIndex_k__BackingField; // 0x50
		::System::Int32 _NormalAttackIndex_k__BackingField; // 0x54
		::System::Int32 _PublicSkillIndex_k__BackingField; // 0x58
		::System::Boolean _Dispellable_k__BackingField; // 0x5C
		::System::Boolean _ReleaseFormConversionRequired_k__BackingField; // 0x5D
		::System::Int32 _ReleaseFormConversionDuration_k__BackingField; // 0x60
		::System::Boolean _DisableUseSkill_k__BackingField; // 0x64
		::System::Boolean _ExSkillCardRedrawInHand_k__BackingField; // 0x65
		::System::Boolean _AffectUIGaugeType_k__BackingField; // 0x66
		::System::Boolean _UseImmediateFormReleaseOnDispel_k__BackingField; // 0x67

		::System::Int32 get_FormIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_FORMCONVERSIONEFFECTVALUE_GET_FORMINDEX_OFFSET))(nullptr);
		}

		::MX::Logic::BattleEntities::LogicEffectEndCondition* get_FormConversionEndCondition()
		{
			return ((::MX::Logic::BattleEntities::LogicEffectEndCondition*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_FORMCONVERSIONEFFECTVALUE_GET_FORMCONVERSIONENDCONDITION_OFFSET))(nullptr);
		}

		::System::Boolean get_Dispellable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_FORMCONVERSIONEFFECTVALUE_GET_DISPELLABLE_OFFSET))(nullptr);
		}

		::System::Boolean get_AffectUIGaugeType()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_FORMCONVERSIONEFFECTVALUE_GET_AFFECTUIGAUGETYPE_OFFSET))(nullptr);
		}

		::System::Boolean get_ExSkillCardRedrawInHand()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_FORMCONVERSIONEFFECTVALUE_GET_EXSKILLCARDREDRAWINHAND_OFFSET))(nullptr);
		}

		::System::Int32 get_ReleaseFormConversionDuration()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_FORMCONVERSIONEFFECTVALUE_GET_RELEASEFORMCONVERSIONDURATION_OFFSET))(nullptr);
		}

		::System::Boolean get_ReleaseFormConversionRequired()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_FORMCONVERSIONEFFECTVALUE_GET_RELEASEFORMCONVERSIONREQUIRED_OFFSET))(nullptr);
		}

		::System::Boolean get_UseImmediateFormReleaseOnDispel()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_FORMCONVERSIONEFFECTVALUE_GET_USEIMMEDIATEFORMRELEASEONDISPEL_OFFSET))(nullptr);
		}

		::System::Boolean get_DisableUseSkill()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_FORMCONVERSIONEFFECTVALUE_GET_DISABLEUSESKILL_OFFSET))(nullptr);
		}

		::System::Int32 get_EndConditionArgument()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_FORMCONVERSIONEFFECTVALUE_GET_ENDCONDITIONARGUMENT_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::GameData::DAO::Battle::FormConversionEffectDAO* arg)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::FormConversionEffectDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_FORMCONVERSIONEFFECTVALUE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_PublicSkillIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_FORMCONVERSIONEFFECTVALUE_GET_PUBLICSKILLINDEX_OFFSET))(nullptr);
		}

		::System::Int32 get_NormalAttackIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_FORMCONVERSIONEFFECTVALUE_GET_NORMALATTACKINDEX_OFFSET))(nullptr);
		}

	};
}

