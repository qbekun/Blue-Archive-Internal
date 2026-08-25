#pragma once
#include "unitysdk.h"

class BuffIcons;
class CrowdControlGauge;
class DebuffCountGauge;
class ExSkillCardRedrawGauge;
class BarrierObstacleHPGauge;
namespace UnityEngine { class Transform; }
class UIRect;
class BuffTargetIndicator;
class ChangeStatLogicApplicationGauge;
class UIHPBar;
class CharacterVisual;
namespace MX::Logic::Skills::LogicEffects { class CrowdControlGaugeEffect; }
namespace MX::Logic::Skills::LogicEffects { class ExSkillCardRedrawGaugeEffect; }
namespace MX::Logic::Skills::LogicEffects { class ForceAppliedStatChangeFromSingleTargetEffect; }
namespace UnityEngine { class Vector3; }
namespace MX::Core::Services { class Hash64; }
class InvisibleFlag;
namespace MX::Logic::BattleEntities { class BarrierObstacle; }
namespace MX::Logic::Skills::LogicEffects { class CountLogicEffectCategoryEffect; }
class UIStatusLevelIndicator;
namespace MX::Logic::Battles { class CharacterFormConvertedEventArgs; }
namespace MX::Logic::Battles { class LogicEffectHitEventArgs; }

#define HPWIDGETBASE_GET_CHANGESTATLOGICAPPLICATIONGAUGE_OFFSET UNITYSDK_OFFSET(0x25EB380)
#define HPWIDGETBASE_SET_CHANGESTATLOGICAPPLICATIONGAUGE_OFFSET UNITYSDK_OFFSET(0x25EB390)
#define HPWIDGETBASE_GET_CURRENTSHOWINGCHANGESTATLOGICAPPLICATIONGAUGECOUNT_OFFSET UNITYSDK_OFFSET(0x25EB3A0)
#define HPWIDGETBASE_GET_CURRENTSHOWINGSTATUSLEVELINDICATORCOUNT_OFFSET UNITYSDK_OFFSET(0x25EB3E0)
#define HPWIDGETBASE_GET_NEEDTOUNLOAD_OFFSET UNITYSDK_OFFSET(0x25EB430)
#define HPWIDGETBASE_SET_NEEDTOUNLOAD_OFFSET UNITYSDK_OFFSET(0x25EB440)
#define HPWIDGETBASE_GET_VIEWZ_OFFSET UNITYSDK_OFFSET(0x25EB450)
#define HPWIDGETBASE_GET_PARENT_OFFSET UNITYSDK_OFFSET(0x25EB4D0)
#define HPWIDGETBASE_SET_PARENT_OFFSET UNITYSDK_OFFSET(0x25EB4E0)
#define HPWIDGETBASE_GET_FLOATERTRANSFORM_OFFSET UNITYSDK_OFFSET(0x25EB4F0)
#define HPWIDGETBASE_SET_FLOATERTRANSFORM_OFFSET UNITYSDK_OFFSET(0x25EB500)
#define HPWIDGETBASE_GET_CHARACTERVISUAL_OFFSET UNITYSDK_OFFSET(0x25EB510)
#define HPWIDGETBASE_SET_CHARACTERVISUAL_OFFSET UNITYSDK_OFFSET(0x25EB520)
#define HPWIDGETBASE_GET_CROWDCONTROLGAUGEEFFECT_OFFSET UNITYSDK_OFFSET(0x25EB530)
#define HPWIDGETBASE_SET_CROWDCONTROLGAUGEEFFECT_OFFSET UNITYSDK_OFFSET(0x25EB540)
#define HPWIDGETBASE_GET_EXSKILLCARDREDRAWGAUGEEFFECT_OFFSET UNITYSDK_OFFSET(0x25EB560)
#define HPWIDGETBASE_SET_EXSKILLCARDREDRAWGAUGEEFFECT_OFFSET UNITYSDK_OFFSET(0x25EB570)
#define HPWIDGETBASE_GET_FORCEAPPLIEDSTATCHANGEFROMSINGLETARGETEFFECT_OFFSET UNITYSDK_OFFSET(0x25EB590)
#define HPWIDGETBASE_SET_FORCEAPPLIEDSTATCHANGEFROMSINGLETARGETEFFECT_OFFSET UNITYSDK_OFFSET(0x25EB5A0)
#define HPWIDGETBASE_GET_CHARACTERVISUAL_OFFSET UNITYSDK_OFFSET(0x25EAA80)
#define HPWIDGETBASE_GET_UIPATH_OFFSET UNITYSDK_OFFSET(0x25EB5C0)
#define HPWIDGETBASE_SET_UIPATH_OFFSET UNITYSDK_OFFSET(0x25EB5D0)
#define HPWIDGETBASE_GET_EXCLUSIVELOGICEFFECTGROUPID_OFFSET UNITYSDK_OFFSET(0x25EB5E0)
#define HPWIDGETBASE_SET_EXCLUSIVELOGICEFFECTGROUPID_OFFSET UNITYSDK_OFFSET(0x25EB5F0)
#define HPWIDGETBASE_AWAKE_OFFSET UNITYSDK_OFFSET(0x25EB600)
#define HPWIDGETBASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x25EB920)
#define HPWIDGETBASE_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x25EBD20)
#define HPWIDGETBASE_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x25EBD50)
#define HPWIDGETBASE_INITSCALE_OFFSET UNITYSDK_OFFSET(0x25EC610)
#define HPWIDGETBASE_INITBUFFICON_OFFSET UNITYSDK_OFFSET(0x25EC520)
#define HPWIDGETBASE_ONCROWDCONTROLGAUGEEFFECTHIT_OFFSET UNITYSDK_OFFSET(0x25EC7C0)
#define HPWIDGETBASE_ONEXSKILLCARDREDRAWGAUGEEFFECTHIT_OFFSET UNITYSDK_OFFSET(0x25ECA40)
#define HPWIDGETBASE_ONFORCEAPPLIEDSTATCHANGEFROMSINGLETARGETEFFECTHIT_OFFSET UNITYSDK_OFFSET(0x25ECD40)
#define HPWIDGETBASE_ONBARRIEROBSTACLECOVERCHANGED_OFFSET UNITYSDK_OFFSET(0x25ECF50)
#define HPWIDGETBASE_ONEXSKILLCARDREDRAWGAUGEEFFECTEXPIRED_OFFSET UNITYSDK_OFFSET(0x25ECFB0)
#define HPWIDGETBASE_ONCROWDCONTROLGAUGEEFFECTEXPIRED_OFFSET UNITYSDK_OFFSET(0x25ED1C0)
#define HPWIDGETBASE_ONFORCEAPPLIEDSTATCHANGEFROMSINGLETARGETEFFECTEXPIRED_OFFSET UNITYSDK_OFFSET(0x25ED390)
#define HPWIDGETBASE_SHOWCOUNTLOGICEFFECTCATEGORY_OFFSET UNITYSDK_OFFSET(0x25ED4F0)
#define HPWIDGETBASE_SETCOUNTLOGICEFFECTCATEGORYCOUNT_OFFSET UNITYSDK_OFFSET(0x25ED610)
#define HPWIDGETBASE_HIDECOUNTLOGICEFFECTCATEGORY_OFFSET UNITYSDK_OFFSET(0x25ED740)
#define HPWIDGETBASE_GETSTATLOGICAPPLICATIONGAUGETRANSFORM_OFFSET UNITYSDK_OFFSET(0x25ED860)
#define HPWIDGETBASE_SETSTATLOGICAPPLICATIONGAUGE_OFFSET UNITYSDK_OFFSET(0x25ED870)
#define HPWIDGETBASE_SETSTATUSLEVELINDICATOR_OFFSET UNITYSDK_OFFSET(0x25ED9D0)
#define HPWIDGETBASE_HIDECHANGESTATLOGICAPPLICATIONGAUGE_OFFSET UNITYSDK_OFFSET(0x25EDBB0)
#define HPWIDGETBASE_HIDEALLSTATUSLEVELINDICATORS_OFFSET UNITYSDK_OFFSET(0x25EDD50)
#define HPWIDGETBASE_HIDESTATUSLEVELINDICATOR_OFFSET UNITYSDK_OFFSET(0x25EE1B0)
#define HPWIDGETBASE_CHANGELOGICAPPLICATIONGAUGETYPE_OFFSET UNITYSDK_OFFSET(0x25EE420)
#define HPWIDGETBASE_ONOWNERFORMCHANGE_OFFSET UNITYSDK_OFFSET(0x25EE490)
#define HPWIDGETBASE_ONOWNERFORMCHANGESTATUSLEVEL_OFFSET UNITYSDK_OFFSET(0x25EE530)
#define HPWIDGETBASE_ONOWNERLOGICEFFECTHIT_OFFSET UNITYSDK_OFFSET(0x25EE880)
#define HPWIDGETBASE_ONOWNERLOGICEFFECTHITSTATUSLEVEL_OFFSET UNITYSDK_OFFSET(0x25EE950)
#define HPWIDGETBASE_CURRENTSHOWINGSTATLOGICAPPLICATIONGAUGEGROUPID_OFFSET UNITYSDK_OFFSET(0x25EED20)
#define HPWIDGETBASE_CURRENTSHOWINGEXCLUSIVEHPBARINVOKERGROUPID_OFFSET UNITYSDK_OFFSET(0x25EEDA0)
#define HPWIDGETBASE_ADDINVISIBLEFLAG_OFFSET UNITYSDK_OFFSET(0x25EEDE0)
#define HPWIDGETBASE_REMOVEINVISIBLEFLAG_OFFSET UNITYSDK_OFFSET(0x25EC5D0)
#define HPWIDGETBASE_GETDEPTH_OFFSET UNITYSDK_OFFSET(0x25EEE20)
#define HPWIDGETBASE_UPDATEDEPTH_OFFSET UNITYSDK_OFFSET(0x25EEE90)
#define HPWIDGETBASE_ADDTOWIDGETLIST_OFFSET UNITYSDK_OFFSET(0x25EF020)
#define HPWIDGETBASE_REMOVEFROMWIDGETLIST_OFFSET UNITYSDK_OFFSET(0x25EF330)
#define HPWIDGETBASE_SETPOSITION_OFFSET UNITYSDK_OFFSET(0x25EF620)
#define HPWIDGETBASE_INITPOSITIONSYSTEM_OFFSET UNITYSDK_OFFSET(0x25EF640)
#define HPWIDGETBASE_CHECKFORUNLOADING_OFFSET UNITYSDK_OFFSET(0x25EF650)
#define HPWIDGETBASE_UNLOAD_OFFSET UNITYSDK_OFFSET(0x25EF6E0)
#define HPWIDGETBASE_ATTACHBUFF_OFFSET UNITYSDK_OFFSET(0x25EFBF0)
#define HPWIDGETBASE_ATTACHBUFF_OFFSET UNITYSDK_OFFSET(0x25EFC90)
#define HPWIDGETBASE_ATTACHBUFF_OFFSET UNITYSDK_OFFSET(0x25EFD30)
#define HPWIDGETBASE_DETACHBUFF_OFFSET UNITYSDK_OFFSET(0x25EFDD0)
#define HPWIDGETBASE_DETACHBUFF_OFFSET UNITYSDK_OFFSET(0x25EFE70)
#define HPWIDGETBASE_DETACHBUFF_OFFSET UNITYSDK_OFFSET(0x25EFF10)
#define HPWIDGETBASE_SETHIGHLIGHTMARKER_OFFSET UNITYSDK_OFFSET(0x25EFFB0)
#define HPWIDGETBASE_REFRESHHIGHLIGHTMARKERSETTING_OFFSET UNITYSDK_OFFSET(0x25EFFC0)
#define HPWIDGETBASE_.CTOR_OFFSET UNITYSDK_OFFSET(0x25EFFD0)

	inline static constexpr unsigned int HPWidgetBase_TypeDefinitionIndex = 6418;

	class HPWidgetBase : public Il2CppObject
	{
	public:
		BuffIcons* BuffIcons; // 0x18
		CrowdControlGauge* CrowdControlGauge; // 0x20
		DebuffCountGauge* DebuffCountGauge; // 0x28
		ExSkillCardRedrawGauge* ExSkillCardRedrawGauge; // 0x30
		BarrierObstacleHPGauge* BarrierObstacleHPGauge; // 0x38
		::UnityEngine::Transform* ChangeStatLogicApplicationGaugeParent; // 0x40
		UIRect* invisibleRoot; // 0x48
		BuffTargetIndicator* buffTarget; // 0x50
		ChangeStatLogicApplicationGauge* _ChangeStatLogicApplicationGauge_k__BackingField; // 0x58
		Il2CppObject* UIStatusLevelIndicators; // 0x60
		::System::Boolean _NeedToUnload_k__BackingField; // 0x68
		UIHPBar* _parent_k__BackingField; // 0x70
		::UnityEngine::Transform* _floaterTransform_k__BackingField; // 0x78
		CharacterVisual* _characterVisual_k__BackingField; // 0x80
		::MX::Logic::Skills::LogicEffects::CrowdControlGaugeEffect* _crowdControlGaugeEffect_k__BackingField; // 0x88
		::MX::Logic::Skills::LogicEffects::ExSkillCardRedrawGaugeEffect* _exSkillCardRedrawGaugeEffect_k__BackingField; // 0x90
		::MX::Logic::Skills::LogicEffects::ForceAppliedStatChangeFromSingleTargetEffect* _forceAppliedStatChangeFromSingleTargetEffect_k__BackingField; // 0x98
		::System::Int32 depthBias; // 0xA0
		::System::Single unloadDelay; // 0xA4
		::UnityEngine::Vector3* worldPositionOffset; // 0xA8
		::System::Single waitTime; // 0xB4
		Il2CppObject* widgets; // 0xB8
		::MX::Core::Services::Hash64* _UIPath_k__BackingField; // 0xC0
		::MX::Core::Services::Hash64* _ExclusiveLogicEffectGroupId_k__BackingField; // 0xC8
		InvisibleFlag* Invisible; // 0xD0
		Il2CppObject* FormChanged; // 0xD8

		ChangeStatLogicApplicationGauge* get_ChangeStatLogicApplicationGauge()
		{
			return ((ChangeStatLogicApplicationGauge*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPWIDGETBASE_GET_CHANGESTATLOGICAPPLICATIONGAUGE_OFFSET))(nullptr);
		}

		::System::Void set_ChangeStatLogicApplicationGauge(ChangeStatLogicApplicationGauge* arg)
		{
			((::System::Void(*)(ChangeStatLogicApplicationGauge*, ::PVOID))((::PBYTE)hIl2Cpp + HPWIDGETBASE_SET_CHANGESTATLOGICAPPLICATIONGAUGE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_CurrentShowingChangeStatLogicApplicationGaugeCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HPWIDGETBASE_GET_CURRENTSHOWINGCHANGESTATLOGICAPPLICATIONGAUGECOUNT_OFFSET))(nullptr);
		}

		::System::Int32 get_CurrentShowingStatusLevelIndicatorCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HPWIDGETBASE_GET_CURRENTSHOWINGSTATUSLEVELINDICATORCOUNT_OFFSET))(nullptr);
		}

		::System::Boolean get_NeedToUnload()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HPWIDGETBASE_GET_NEEDTOUNLOAD_OFFSET))(nullptr);
		}

		::System::Void set_NeedToUnload(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + HPWIDGETBASE_SET_NEEDTOUNLOAD_OFFSET))(arg, nullptr);
		}

		::System::Single get_ViewZ()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HPWIDGETBASE_GET_VIEWZ_OFFSET))(nullptr);
		}

		UIHPBar* get_parent()
		{
			return ((UIHPBar*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPWIDGETBASE_GET_PARENT_OFFSET))(nullptr);
		}

		::System::Void set_parent(UIHPBar* arg)
		{
			((::System::Void(*)(UIHPBar*, ::PVOID))((::PBYTE)hIl2Cpp + HPWIDGETBASE_SET_PARENT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Transform* get_floaterTransform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPWIDGETBASE_GET_FLOATERTRANSFORM_OFFSET))(nullptr);
		}

		::System::Void set_floaterTransform(::UnityEngine::Transform* arg)
		{
			((::System::Void(*)(::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + HPWIDGETBASE_SET_FLOATERTRANSFORM_OFFSET))(arg, nullptr);
		}

		CharacterVisual* get_characterVisual()
		{
			return ((CharacterVisual*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPWIDGETBASE_GET_CHARACTERVISUAL_OFFSET))(nullptr);
		}

		::System::Void set_characterVisual(CharacterVisual* arg)
		{
			((::System::Void(*)(CharacterVisual*, ::PVOID))((::PBYTE)hIl2Cpp + HPWIDGETBASE_SET_CHARACTERVISUAL_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Skills::LogicEffects::CrowdControlGaugeEffect* get_crowdControlGaugeEffect()
		{
			return ((::MX::Logic::Skills::LogicEffects::CrowdControlGaugeEffect*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPWIDGETBASE_GET_CROWDCONTROLGAUGEEFFECT_OFFSET))(nullptr);
		}

		::System::Void set_crowdControlGaugeEffect(::MX::Logic::Skills::LogicEffects::CrowdControlGaugeEffect* arg)
		{
			((::System::Void(*)(::MX::Logic::Skills::LogicEffects::CrowdControlGaugeEffect*, ::PVOID))((::PBYTE)hIl2Cpp + HPWIDGETBASE_SET_CROWDCONTROLGAUGEEFFECT_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Skills::LogicEffects::ExSkillCardRedrawGaugeEffect* get_exSkillCardRedrawGaugeEffect()
		{
			return ((::MX::Logic::Skills::LogicEffects::ExSkillCardRedrawGaugeEffect*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPWIDGETBASE_GET_EXSKILLCARDREDRAWGAUGEEFFECT_OFFSET))(nullptr);
		}

		::System::Void set_exSkillCardRedrawGaugeEffect(::MX::Logic::Skills::LogicEffects::ExSkillCardRedrawGaugeEffect* arg)
		{
			((::System::Void(*)(::MX::Logic::Skills::LogicEffects::ExSkillCardRedrawGaugeEffect*, ::PVOID))((::PBYTE)hIl2Cpp + HPWIDGETBASE_SET_EXSKILLCARDREDRAWGAUGEEFFECT_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Skills::LogicEffects::ForceAppliedStatChangeFromSingleTargetEffect* get_forceAppliedStatChangeFromSingleTargetEffect()
		{
			return ((::MX::Logic::Skills::LogicEffects::ForceAppliedStatChangeFromSingleTargetEffect*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPWIDGETBASE_GET_FORCEAPPLIEDSTATCHANGEFROMSINGLETARGETEFFECT_OFFSET))(nullptr);
		}

		::System::Void set_forceAppliedStatChangeFromSingleTargetEffect(::MX::Logic::Skills::LogicEffects::ForceAppliedStatChangeFromSingleTargetEffect* arg)
		{
			((::System::Void(*)(::MX::Logic::Skills::LogicEffects::ForceAppliedStatChangeFromSingleTargetEffect*, ::PVOID))((::PBYTE)hIl2Cpp + HPWIDGETBASE_SET_FORCEAPPLIEDSTATCHANGEFROMSINGLETARGETEFFECT_OFFSET))(arg, nullptr);
		}

		CharacterVisual* get_CharacterVisual()
		{
			return ((CharacterVisual*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPWIDGETBASE_GET_CHARACTERVISUAL_OFFSET))(nullptr);
		}

		::MX::Core::Services::Hash64* get_UIPath()
		{
			return ((::MX::Core::Services::Hash64*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPWIDGETBASE_GET_UIPATH_OFFSET))(nullptr);
		}

		::System::Void set_UIPath(::MX::Core::Services::Hash64* arg)
		{
			((::System::Void(*)(::MX::Core::Services::Hash64*, ::PVOID))((::PBYTE)hIl2Cpp + HPWIDGETBASE_SET_UIPATH_OFFSET))(arg, nullptr);
		}

		::MX::Core::Services::Hash64* get_ExclusiveLogicEffectGroupId()
		{
			return ((::MX::Core::Services::Hash64*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPWIDGETBASE_GET_EXCLUSIVELOGICEFFECTGROUPID_OFFSET))(nullptr);
		}

		::System::Void set_ExclusiveLogicEffectGroupId(::MX::Core::Services::Hash64* arg)
		{
			((::System::Void(*)(::MX::Core::Services::Hash64*, ::PVOID))((::PBYTE)hIl2Cpp + HPWIDGETBASE_SET_EXCLUSIVELOGICEFFECTGROUPID_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPWIDGETBASE_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPWIDGETBASE_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Void Initialize(CharacterVisual* arg, UIHPBar* arg2, ::MX::Core::Services::Hash64* arg3, ::MX::Core::Services::Hash64* arg4)
		{
			((::System::Void(*)(CharacterVisual*, UIHPBar*, ::MX::Core::Services::Hash64*, ::MX::Core::Services::Hash64*, ::PVOID))((::PBYTE)hIl2Cpp + HPWIDGETBASE_INITIALIZE_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void Initialize(CharacterVisual* arg, UIHPBar* arg2)
		{
			((::System::Void(*)(CharacterVisual*, UIHPBar*, ::PVOID))((::PBYTE)hIl2Cpp + HPWIDGETBASE_INITIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void InitScale()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPWIDGETBASE_INITSCALE_OFFSET))(nullptr);
		}

		::System::Void InitBuffIcon(CharacterVisual* arg)
		{
			((::System::Void(*)(CharacterVisual*, ::PVOID))((::PBYTE)hIl2Cpp + HPWIDGETBASE_INITBUFFICON_OFFSET))(arg, nullptr);
		}

		::System::Void OnCrowdControlGaugeEffectHit(::MX::Logic::Skills::LogicEffects::CrowdControlGaugeEffect* arg)
		{
			((::System::Void(*)(::MX::Logic::Skills::LogicEffects::CrowdControlGaugeEffect*, ::PVOID))((::PBYTE)hIl2Cpp + HPWIDGETBASE_ONCROWDCONTROLGAUGEEFFECTHIT_OFFSET))(arg, nullptr);
		}

		::System::Void OnExSkillCardRedrawGaugeEffectHit(::MX::Logic::Skills::LogicEffects::ExSkillCardRedrawGaugeEffect* arg)
		{
			((::System::Void(*)(::MX::Logic::Skills::LogicEffects::ExSkillCardRedrawGaugeEffect*, ::PVOID))((::PBYTE)hIl2Cpp + HPWIDGETBASE_ONEXSKILLCARDREDRAWGAUGEEFFECTHIT_OFFSET))(arg, nullptr);
		}

		::System::Void OnForceAppliedStatChangeFromSingleTargetEffectHit(::MX::Logic::Skills::LogicEffects::ForceAppliedStatChangeFromSingleTargetEffect* arg)
		{
			((::System::Void(*)(::MX::Logic::Skills::LogicEffects::ForceAppliedStatChangeFromSingleTargetEffect*, ::PVOID))((::PBYTE)hIl2Cpp + HPWIDGETBASE_ONFORCEAPPLIEDSTATCHANGEFROMSINGLETARGETEFFECTHIT_OFFSET))(arg, nullptr);
		}

		::System::Void OnBarrierObstacleCoverChanged(::MX::Logic::BattleEntities::BarrierObstacle* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::BarrierObstacle*, ::PVOID))((::PBYTE)hIl2Cpp + HPWIDGETBASE_ONBARRIEROBSTACLECOVERCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void OnExSkillCardRedrawGaugeEffectExpired()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPWIDGETBASE_ONEXSKILLCARDREDRAWGAUGEEFFECTEXPIRED_OFFSET))(nullptr);
		}

		::System::Void OnCrowdControlGaugeEffectExpired()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPWIDGETBASE_ONCROWDCONTROLGAUGEEFFECTEXPIRED_OFFSET))(nullptr);
		}

		::System::Void OnForceAppliedStatChangeFromSingleTargetEffectExpired()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPWIDGETBASE_ONFORCEAPPLIEDSTATCHANGEFROMSINGLETARGETEFFECTEXPIRED_OFFSET))(nullptr);
		}

		::System::Void ShowCountLogicEffectCategory(::MX::Logic::Skills::LogicEffects::CountLogicEffectCategoryEffect* arg)
		{
			((::System::Void(*)(::MX::Logic::Skills::LogicEffects::CountLogicEffectCategoryEffect*, ::PVOID))((::PBYTE)hIl2Cpp + HPWIDGETBASE_SHOWCOUNTLOGICEFFECTCATEGORY_OFFSET))(arg, nullptr);
		}

		::System::Void SetCountLogicEffectCategoryCount(::System::Int32 arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + HPWIDGETBASE_SETCOUNTLOGICEFFECTCATEGORYCOUNT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void HideCountLogicEffectCategory()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPWIDGETBASE_HIDECOUNTLOGICEFFECTCATEGORY_OFFSET))(nullptr);
		}

		::UnityEngine::Transform* GetStatLogicApplicationGaugeTransform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPWIDGETBASE_GETSTATLOGICAPPLICATIONGAUGETRANSFORM_OFFSET))(nullptr);
		}

		::System::Void SetStatLogicApplicationGauge(ChangeStatLogicApplicationGauge* arg)
		{
			((::System::Void(*)(ChangeStatLogicApplicationGauge*, ::PVOID))((::PBYTE)hIl2Cpp + HPWIDGETBASE_SETSTATLOGICAPPLICATIONGAUGE_OFFSET))(arg, nullptr);
		}

		::System::Void SetStatusLevelIndicator(UIStatusLevelIndicator* arg)
		{
			((::System::Void(*)(UIStatusLevelIndicator*, ::PVOID))((::PBYTE)hIl2Cpp + HPWIDGETBASE_SETSTATUSLEVELINDICATOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean HideChangeStatLogicApplicationGauge()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HPWIDGETBASE_HIDECHANGESTATLOGICAPPLICATIONGAUGE_OFFSET))(nullptr);
		}

		::System::Void HideAllStatusLevelIndicators()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPWIDGETBASE_HIDEALLSTATUSLEVELINDICATORS_OFFSET))(nullptr);
		}

		::System::Boolean HideStatusLevelIndicator(::System::String* str)
		{
			return ((::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + HPWIDGETBASE_HIDESTATUSLEVELINDICATOR_OFFSET))(str, nullptr);
		}

		::System::Void ChangeLogicApplicationGaugeType(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + HPWIDGETBASE_CHANGELOGICAPPLICATIONGAUGETYPE_OFFSET))(arg, nullptr);
		}

		::System::Void OnOwnerFormChange(::System::Object* arg, ::MX::Logic::Battles::CharacterFormConvertedEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::CharacterFormConvertedEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + HPWIDGETBASE_ONOWNERFORMCHANGE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnOwnerFormChangeStatusLevel(::System::Object* arg, ::MX::Logic::Battles::CharacterFormConvertedEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::CharacterFormConvertedEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + HPWIDGETBASE_ONOWNERFORMCHANGESTATUSLEVEL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnOwnerLogicEffectHit(::System::Object* arg, ::MX::Logic::Battles::LogicEffectHitEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::LogicEffectHitEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + HPWIDGETBASE_ONOWNERLOGICEFFECTHIT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnOwnerLogicEffectHitStatusLevel(::System::Object* arg, ::MX::Logic::Battles::LogicEffectHitEventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MX::Logic::Battles::LogicEffectHitEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + HPWIDGETBASE_ONOWNERLOGICEFFECTHITSTATUSLEVEL_OFFSET))(arg, arg2, nullptr);
		}

		::System::String* CurrentShowingStatLogicApplicationGaugeGroupId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPWIDGETBASE_CURRENTSHOWINGSTATLOGICAPPLICATIONGAUGEGROUPID_OFFSET))(nullptr);
		}

		::System::String* CurrentShowingExclusiveHPBarInvokerGroupId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPWIDGETBASE_CURRENTSHOWINGEXCLUSIVEHPBARINVOKERGROUPID_OFFSET))(nullptr);
		}

		::System::Void AddInvisibleFlag(InvisibleFlag* arg)
		{
			((::System::Void(*)(InvisibleFlag*, ::PVOID))((::PBYTE)hIl2Cpp + HPWIDGETBASE_ADDINVISIBLEFLAG_OFFSET))(arg, nullptr);
		}

		::System::Void RemoveInvisibleFlag(InvisibleFlag* arg)
		{
			((::System::Void(*)(InvisibleFlag*, ::PVOID))((::PBYTE)hIl2Cpp + HPWIDGETBASE_REMOVEINVISIBLEFLAG_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetDepth()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HPWIDGETBASE_GETDEPTH_OFFSET))(nullptr);
		}

		::System::Void UpdateDepth(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + HPWIDGETBASE_UPDATEDEPTH_OFFSET))(arg, nullptr);
		}

		::System::Void AddToWidgetList(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + HPWIDGETBASE_ADDTOWIDGETLIST_OFFSET))(arg, nullptr);
		}

		::System::Void RemoveFromWidgetList(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + HPWIDGETBASE_REMOVEFROMWIDGETLIST_OFFSET))(arg, nullptr);
		}

		::System::Void SetPosition()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPWIDGETBASE_SETPOSITION_OFFSET))(nullptr);
		}

		::System::Void InitPositionSystem(::UnityEngine::Transform* arg)
		{
			((::System::Void(*)(::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + HPWIDGETBASE_INITPOSITIONSYSTEM_OFFSET))(arg, nullptr);
		}

		::System::Void CheckForUnloading()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPWIDGETBASE_CHECKFORUNLOADING_OFFSET))(nullptr);
		}

		::System::Void Unload()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPWIDGETBASE_UNLOAD_OFFSET))(nullptr);
		}

		::System::Void AttachBuff(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + HPWIDGETBASE_ATTACHBUFF_OFFSET))(arg, nullptr);
		}

		::System::Void AttachBuff(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + HPWIDGETBASE_ATTACHBUFF_OFFSET))(arg, nullptr);
		}

		::System::Void AttachBuff(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + HPWIDGETBASE_ATTACHBUFF_OFFSET))(arg, nullptr);
		}

		::System::Void DetachBuff(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + HPWIDGETBASE_DETACHBUFF_OFFSET))(arg, nullptr);
		}

		::System::Void DetachBuff(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + HPWIDGETBASE_DETACHBUFF_OFFSET))(arg, nullptr);
		}

		::System::Void DetachBuff(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + HPWIDGETBASE_DETACHBUFF_OFFSET))(arg, nullptr);
		}

		::System::Void SetHighlightMarker(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + HPWIDGETBASE_SETHIGHLIGHTMARKER_OFFSET))(arg, nullptr);
		}

		::System::Void RefreshHighlightMarkerSetting(CharacterVisual* arg)
		{
			((::System::Void(*)(CharacterVisual*, ::PVOID))((::PBYTE)hIl2Cpp + HPWIDGETBASE_REFRESHHIGHLIGHTMARKERSETTING_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPWIDGETBASE_.CTOR_OFFSET))(nullptr);
		}

	};

