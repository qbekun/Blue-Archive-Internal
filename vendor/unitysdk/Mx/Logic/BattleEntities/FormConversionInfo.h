#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class BattleEntity; }
namespace MX::Logic::BattleEntities { class LogicEffectEndCondition; }

#define MX_LOGIC_BATTLEENTITIES_FORMCONVERSIONINFO_GET_EXSKILLCARDREDRAWINHAND_OFFSET UNITYSDK_OFFSET(0x1138B60)
#define MX_LOGIC_BATTLEENTITIES_FORMCONVERSIONINFO_SET_RELEASEFORMCONVERSIONREQUIRED_OFFSET UNITYSDK_OFFSET(0x1138B70)
#define MX_LOGIC_BATTLEENTITIES_FORMCONVERSIONINFO_ONDISPELLED_OFFSET UNITYSDK_OFFSET(0x1138B80)
#define MX_LOGIC_BATTLEENTITIES_FORMCONVERSIONINFO_SET_RELEASEFORMCONVERSIONFINISHED_OFFSET UNITYSDK_OFFSET(0x1138E60)
#define MX_LOGIC_BATTLEENTITIES_FORMCONVERSIONINFO_GET_RELEASEFORMCONVERSIONDURATION_OFFSET UNITYSDK_OFFSET(0x1138E70)
#define MX_LOGIC_BATTLEENTITIES_FORMCONVERSIONINFO_GET_RELEASEFORMCONVERSIONREQUIRED_OFFSET UNITYSDK_OFFSET(0x1138E80)
#define MX_LOGIC_BATTLEENTITIES_FORMCONVERSIONINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1138E90)
#define MX_LOGIC_BATTLEENTITIES_FORMCONVERSIONINFO_GET_CHANNEL_OFFSET UNITYSDK_OFFSET(0x11390A0)
#define MX_LOGIC_BATTLEENTITIES_FORMCONVERSIONINFO_GET_FORMINDEX_OFFSET UNITYSDK_OFFSET(0x11390B0)
#define MX_LOGIC_BATTLEENTITIES_FORMCONVERSIONINFO_ONEXPIRED_OFFSET UNITYSDK_OFFSET(0x11390C0)
#define MX_LOGIC_BATTLEENTITIES_FORMCONVERSIONINFO_GET_EFFECT_OFFSET UNITYSDK_OFFSET(0x1139190)
#define MX_LOGIC_BATTLEENTITIES_FORMCONVERSIONINFO_PROCESSEXPIREBEFOREEXECUTE_OFFSET UNITYSDK_OFFSET(0x11391A0)
#define MX_LOGIC_BATTLEENTITIES_FORMCONVERSIONINFO_TRYREMOVECARDINHAND_OFFSET UNITYSDK_OFFSET(0x1138D00)
#define MX_LOGIC_BATTLEENTITIES_FORMCONVERSIONINFO_GET_RELEASEFORMCONVERSIONFINISHED_OFFSET UNITYSDK_OFFSET(0x11391C0)
#define MX_LOGIC_BATTLEENTITIES_FORMCONVERSIONINFO_GET_USEIMMEDIATEFORMRELEASEONDISPEL_OFFSET UNITYSDK_OFFSET(0x11391D0)
#define MX_LOGIC_BATTLEENTITIES_FORMCONVERSIONINFO_GET_AFFECTUIGAUGETYPE_OFFSET UNITYSDK_OFFSET(0x11391E0)
#define MX_LOGIC_BATTLEENTITIES_FORMCONVERSIONINFO_GET_DISABLEUSESKILL_OFFSET UNITYSDK_OFFSET(0x11391F0)
#define MX_LOGIC_BATTLEENTITIES_FORMCONVERSIONINFO_EFFECT_ONEXPIRED_OFFSET UNITYSDK_OFFSET(0x1139200)

namespace MX::Logic::BattleEntities
{
	inline static constexpr unsigned int FormConversionInfo_TypeDefinitionIndex = 13091;

	class FormConversionInfo : public Il2CppObject
	{
	public:
		::System::Int32 _FormIndex_k__BackingField; // 0x40
		::System::Int32 _Channel_k__BackingField; // 0x44
		::System::Boolean _ReleaseFormConversionRequired_k__BackingField; // 0x48
		::System::Boolean _ReleaseFormConversionFinished_k__BackingField; // 0x49
		::System::Int32 _ReleaseFormConversionDuration_k__BackingField; // 0x4C
		::System::Boolean _DisableUseSkill_k__BackingField; // 0x50
		::System::Boolean _ExSkillCardRedrawInHand_k__BackingField; // 0x51
		::System::Boolean _AffectUIGaugeType_k__BackingField; // 0x52
		::System::Boolean _UseImmediateFormReleaseOnDispel_k__BackingField; // 0x53
		Il2CppObject* _Effect_k__BackingField; // 0x58

		::System::Boolean get_ExSkillCardRedrawInHand()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_FORMCONVERSIONINFO_GET_EXSKILLCARDREDRAWINHAND_OFFSET))(nullptr);
		}

		::System::Void set_ReleaseFormConversionRequired(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_FORMCONVERSIONINFO_SET_RELEASEFORMCONVERSIONREQUIRED_OFFSET))(arg, nullptr);
		}

		::System::Void OnDispelled()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_FORMCONVERSIONINFO_ONDISPELLED_OFFSET))(nullptr);
		}

		::System::Void set_ReleaseFormConversionFinished(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_FORMCONVERSIONINFO_SET_RELEASEFORMCONVERSIONFINISHED_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ReleaseFormConversionDuration()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_FORMCONVERSIONINFO_GET_RELEASEFORMCONVERSIONDURATION_OFFSET))(nullptr);
		}

		::System::Boolean get_ReleaseFormConversionRequired()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_FORMCONVERSIONINFO_GET_RELEASEFORMCONVERSIONREQUIRED_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Logic::BattleEntities::BattleEntity* arg, Il2CppObject* arg2, ::System::Int32 arg3, ::MX::Logic::BattleEntities::LogicEffectEndCondition* arg4, ::System::Int32 arg5, ::System::Int32 arg6, ::System::Boolean arg7, ::System::Int32 arg8, ::System::Boolean arg9, ::System::Boolean arg10, ::System::Boolean arg11, ::System::Boolean arg12)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::BattleEntity*, Il2CppObject*, ::System::Int32, ::MX::Logic::BattleEntities::LogicEffectEndCondition*, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_FORMCONVERSIONINFO_.CTOR_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, nullptr);
		}

		::System::Int32 get_Channel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_FORMCONVERSIONINFO_GET_CHANNEL_OFFSET))(nullptr);
		}

		::System::Int32 get_FormIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_FORMCONVERSIONINFO_GET_FORMINDEX_OFFSET))(nullptr);
		}

		::System::Void OnExpired()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_FORMCONVERSIONINFO_ONEXPIRED_OFFSET))(nullptr);
		}

		Il2CppObject* get_Effect()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_FORMCONVERSIONINFO_GET_EFFECT_OFFSET))(nullptr);
		}

		::System::Void ProcessExpireBeforeExecute()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_FORMCONVERSIONINFO_PROCESSEXPIREBEFOREEXECUTE_OFFSET))(nullptr);
		}

		::System::Void TryRemoveCardInHand()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_FORMCONVERSIONINFO_TRYREMOVECARDINHAND_OFFSET))(nullptr);
		}

		::System::Boolean get_ReleaseFormConversionFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_FORMCONVERSIONINFO_GET_RELEASEFORMCONVERSIONFINISHED_OFFSET))(nullptr);
		}

		::System::Boolean get_UseImmediateFormReleaseOnDispel()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_FORMCONVERSIONINFO_GET_USEIMMEDIATEFORMRELEASEONDISPEL_OFFSET))(nullptr);
		}

		::System::Boolean get_AffectUIGaugeType()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_FORMCONVERSIONINFO_GET_AFFECTUIGAUGETYPE_OFFSET))(nullptr);
		}

		::System::Boolean get_DisableUseSkill()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_FORMCONVERSIONINFO_GET_DISABLEUSESKILL_OFFSET))(nullptr);
		}

		::System::Void Effect_OnExpired(::System::Object* arg, ::System::EventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::System::EventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLEENTITIES_FORMCONVERSIONINFO_EFFECT_ONEXPIRED_OFFSET))(arg, arg2, nullptr);
		}

	};
}

