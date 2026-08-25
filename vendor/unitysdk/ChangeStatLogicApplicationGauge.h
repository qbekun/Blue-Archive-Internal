#pragma once
#include "unitysdk.h"

namespace MX::UI::UIHPWidgets { class GaugeAttachType; }
class GaugeType;
namespace UnityEngine { class Transform; }
class UILabel;
class UIWidget;
class Pivot;
namespace MX::Logic::BattleEntities { class GaugeEffectInfo; }
namespace MX::Logic::BattleEntities { class BattleEntity; }
namespace MX::Core::Services { class Hash64; }
class TriggerType;
namespace UnityEngine { class Animation; }

#define CHANGESTATLOGICAPPLICATIONGAUGE_GET_ISTRIGGERINGEVENT_OFFSET UNITYSDK_OFFSET(0x25DB560)
#define CHANGESTATLOGICAPPLICATIONGAUGE_SET_ISTRIGGERINGEVENT_OFFSET UNITYSDK_OFFSET(0x25DB570)
#define CHANGESTATLOGICAPPLICATIONGAUGE_ADD_ONBOOLVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x25DB590)
#define CHANGESTATLOGICAPPLICATIONGAUGE_REMOVE_ONBOOLVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x25DB630)
#define CHANGESTATLOGICAPPLICATIONGAUGE_ADD_ONDESTROYED_OFFSET UNITYSDK_OFFSET(0x25DB6D0)
#define CHANGESTATLOGICAPPLICATIONGAUGE_REMOVE_ONDESTROYED_OFFSET UNITYSDK_OFFSET(0x25DB770)
#define CHANGESTATLOGICAPPLICATIONGAUGE_GET_OWNER_OFFSET UNITYSDK_OFFSET(0x25DB810)
#define CHANGESTATLOGICAPPLICATIONGAUGE_GET_GAUGEEFFECTINFO_OFFSET UNITYSDK_OFFSET(0x25DB830)
#define CHANGESTATLOGICAPPLICATIONGAUGE_SET_GAUGEEFFECTINFO_OFFSET UNITYSDK_OFFSET(0x25DB840)
#define CHANGESTATLOGICAPPLICATIONGAUGE_GET_CURRENTUITYPE_OFFSET UNITYSDK_OFFSET(0x25DB860)
#define CHANGESTATLOGICAPPLICATIONGAUGE_SET_CURRENTUITYPE_OFFSET UNITYSDK_OFFSET(0x25DB870)
#define CHANGESTATLOGICAPPLICATIONGAUGE_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x25DB880)
#define CHANGESTATLOGICAPPLICATIONGAUGE_UPDATETHERMOMETERRANGE_OFFSET UNITYSDK_OFFSET(0x25DB890)
#define CHANGESTATLOGICAPPLICATIONGAUGE_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x25DC710)
#define CHANGESTATLOGICAPPLICATIONGAUGE_SETTRIGGEREVENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define CHANGESTATLOGICAPPLICATIONGAUGE_CHANGEUITYPE_OFFSET UNITYSDK_OFFSET(0x25DCC70)
#define CHANGESTATLOGICAPPLICATIONGAUGE_ONCHANGEFORMCHANGE_OFFSET UNITYSDK_OFFSET(0x25DCCF0)
#define CHANGESTATLOGICAPPLICATIONGAUGE_ADDLOGICEFFECTTEMPLATE_OFFSET UNITYSDK_OFFSET(0x25DCD60)
#define CHANGESTATLOGICAPPLICATIONGAUGE_UPDATE_OFFSET UNITYSDK_OFFSET(0x25DCDD0)
#define CHANGESTATLOGICAPPLICATIONGAUGE_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x25DD0E0)
#define CHANGESTATLOGICAPPLICATIONGAUGE_UPDATEGAUGEVALUELABEL_OFFSET UNITYSDK_OFFSET(0x25DCF80)
#define CHANGESTATLOGICAPPLICATIONGAUGE_SETGAUGE_OFFSET UNITYSDK_OFFSET(0x25DC850)
#define CHANGESTATLOGICAPPLICATIONGAUGE_TRIGGEREVENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define CHANGESTATLOGICAPPLICATIONGAUGE_TRIGGEREVENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define CHANGESTATLOGICAPPLICATIONGAUGE_RESETBOOLVALUE_OFFSET UNITYSDK_OFFSET(0x25DD120)
#define CHANGESTATLOGICAPPLICATIONGAUGE_SETBOOLVALUE_OFFSET UNITYSDK_OFFSET(0x25DD170)
#define CHANGESTATLOGICAPPLICATIONGAUGE_GETBOOLVALUE_OFFSET UNITYSDK_OFFSET(0x25DD240)
#define CHANGESTATLOGICAPPLICATIONGAUGE_GETALLBOOLVALUES_OFFSET UNITYSDK_OFFSET(0x25DD2A0)
#define CHANGESTATLOGICAPPLICATIONGAUGE_RESETPREVANIMATIONCLIP_OFFSET UNITYSDK_OFFSET(0x25DD2B0)
#define CHANGESTATLOGICAPPLICATIONGAUGE_SETPREVANIMATIONCLIP_OFFSET UNITYSDK_OFFSET(0x25DD300)
#define CHANGESTATLOGICAPPLICATIONGAUGE_GETPREVANIMATIONCLIP_OFFSET UNITYSDK_OFFSET(0x25DD3B0)
#define CHANGESTATLOGICAPPLICATIONGAUGE_HIDE_OFFSET UNITYSDK_OFFSET(0x25DD440)
#define CHANGESTATLOGICAPPLICATIONGAUGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x25DD520)
#define CHANGESTATLOGICAPPLICATIONGAUGE_MX.UI.UIHPWIDGETS.ICUSTOMGAUGEUI.TRIGGEREVENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define CHANGESTATLOGICAPPLICATIONGAUGE_MX.UI.UIHPWIDGETS.ICUSTOMGAUGEUI.SETTRIGGEREVENT_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int ChangeStatLogicApplicationGauge_TypeDefinitionIndex = 6374;

	class ChangeStatLogicApplicationGauge : public Il2CppObject
	{
	public:
		::MX::UI::UIHPWidgets::GaugeAttachType* AttachType; // 0x18
		GaugeType* GaugeBarType; // 0x1C
		::UnityEngine::Transform* progressBarTransform; // 0x20
		::System::Single DialRangeMin; // 0x28
		::System::Single DialRangeMax; // 0x2C
		::System::Single DialSpeed; // 0x30
		::System::Single DialElastic; // 0x34
		::System::Single dialElasticAcceleration; // 0x38
		::System::Single elasticCurrentValue; // 0x3C
		::System::Single currentValue; // 0x40
		::System::Single dialElasticGoalValue; // 0x44
		::UnityEngine::Transform* dialTransform; // 0x48
		::System::Boolean includePercentSign; // 0x50
		UILabel* percentValueLabel; // 0x58
		UILabel* percentLabel; // 0x60
		::System::Boolean isPercentValueUsingElastic; // 0x68
		::Il2CppArray<::System::Object*>* sliders; // 0x70
		::Il2CppArray<::System::Object*>* gaugeControllers; // 0x78
		Il2CppObject* uiEventTriggers; // 0x80
		UIWidget* anchorObject; // 0x88
		Pivot* anchorPivot; // 0x90
		Il2CppObject* thermometerUIRange; // 0x98
		Il2CppObject* customBoolValues; // 0xA0
		Il2CppObject* prevAnimationClip; // 0xA8
		::Il2CppArray<::System::Object*>* _IsTriggeringEvent_k__BackingField; // 0xB0
		Il2CppObject* OnBoolValueChanged; // 0xB8
		Il2CppObject* OnDestroyed; // 0xC0
		::System::Int32 prevGaugePercent; // 0xC8
		::MX::Logic::BattleEntities::GaugeEffectInfo* _GaugeEffectInfo_k__BackingField; // 0xD0
		::System::Int32 _currentUiType_k__BackingField; // 0xD8

		::Il2CppArray<::System::Object*>* get_IsTriggeringEvent()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHANGESTATLOGICAPPLICATIONGAUGE_GET_ISTRIGGERINGEVENT_OFFSET))(nullptr);
		}

		::System::Void set_IsTriggeringEvent(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + CHANGESTATLOGICAPPLICATIONGAUGE_SET_ISTRIGGERINGEVENT_OFFSET))(arg, nullptr);
		}

		::System::Void add_OnBoolValueChanged(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CHANGESTATLOGICAPPLICATIONGAUGE_ADD_ONBOOLVALUECHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_OnBoolValueChanged(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CHANGESTATLOGICAPPLICATIONGAUGE_REMOVE_ONBOOLVALUECHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void add_OnDestroyed(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CHANGESTATLOGICAPPLICATIONGAUGE_ADD_ONDESTROYED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_OnDestroyed(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CHANGESTATLOGICAPPLICATIONGAUGE_REMOVE_ONDESTROYED_OFFSET))(arg, nullptr);
		}

		::MX::Logic::BattleEntities::BattleEntity* get_Owner()
		{
			return ((::MX::Logic::BattleEntities::BattleEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHANGESTATLOGICAPPLICATIONGAUGE_GET_OWNER_OFFSET))(nullptr);
		}

		::MX::Logic::BattleEntities::GaugeEffectInfo* get_GaugeEffectInfo()
		{
			return ((::MX::Logic::BattleEntities::GaugeEffectInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHANGESTATLOGICAPPLICATIONGAUGE_GET_GAUGEEFFECTINFO_OFFSET))(nullptr);
		}

		::System::Void set_GaugeEffectInfo(::MX::Logic::BattleEntities::GaugeEffectInfo* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::GaugeEffectInfo*, ::PVOID))((::PBYTE)hIl2Cpp + CHANGESTATLOGICAPPLICATIONGAUGE_SET_GAUGEEFFECTINFO_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_currentUiType()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CHANGESTATLOGICAPPLICATIONGAUGE_GET_CURRENTUITYPE_OFFSET))(nullptr);
		}

		::System::Void set_currentUiType(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CHANGESTATLOGICAPPLICATIONGAUGE_SET_CURRENTUITYPE_OFFSET))(arg, nullptr);
		}

		::System::Void OnValidate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHANGESTATLOGICAPPLICATIONGAUGE_ONVALIDATE_OFFSET))(nullptr);
		}

		::System::Void UpdateThermometerRange()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHANGESTATLOGICAPPLICATIONGAUGE_UPDATETHERMOMETERRANGE_OFFSET))(nullptr);
		}

		::System::Void Initialize(::MX::Logic::BattleEntities::GaugeEffectInfo* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::GaugeEffectInfo*, ::PVOID))((::PBYTE)hIl2Cpp + CHANGESTATLOGICAPPLICATIONGAUGE_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void SetTriggerEvent(Il2CppObject&* arg, ::System::Object[]&* arg2, ::System::Int32 arg3, ::System::Boolean arg4)
		{
			((::System::Void(*)(Il2CppObject&*, ::System::Object[]&*, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CHANGESTATLOGICAPPLICATIONGAUGE_SETTRIGGEREVENT_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void ChangeUIType(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CHANGESTATLOGICAPPLICATIONGAUGE_CHANGEUITYPE_OFFSET))(arg, nullptr);
		}

		::System::Void OnChangeFormChange(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CHANGESTATLOGICAPPLICATIONGAUGE_ONCHANGEFORMCHANGE_OFFSET))(arg, nullptr);
		}

		::System::Void AddLogicEffectTemplate(::MX::Core::Services::Hash64* arg)
		{
			((::System::Void(*)(::MX::Core::Services::Hash64*, ::PVOID))((::PBYTE)hIl2Cpp + CHANGESTATLOGICAPPLICATIONGAUGE_ADDLOGICEFFECTTEMPLATE_OFFSET))(arg, nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHANGESTATLOGICAPPLICATIONGAUGE_UPDATE_OFFSET))(nullptr);
		}

		::System::Void LateUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHANGESTATLOGICAPPLICATIONGAUGE_LATEUPDATE_OFFSET))(nullptr);
		}

		::System::Void UpdateGaugeValueLabel()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHANGESTATLOGICAPPLICATIONGAUGE_UPDATEGAUGEVALUELABEL_OFFSET))(nullptr);
		}

		::System::Void SetGauge(::System::Single arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::System::Single, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CHANGESTATLOGICAPPLICATIONGAUGE_SETGAUGE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void TriggerEvent(Il2CppObject&* arg, ::System::Object[]&* arg2, TriggerType* arg3, ::System::Int32 arg4)
		{
			((::System::Void(*)(Il2CppObject&*, ::System::Object[]&*, TriggerType*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CHANGESTATLOGICAPPLICATIONGAUGE_TRIGGEREVENT_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void TriggerEvent(Il2CppObject&* arg, ::System::Object[]&* arg2, TriggerType* arg3, ::MX::Core::Services::Hash64* arg4)
		{
			((::System::Void(*)(Il2CppObject&*, ::System::Object[]&*, TriggerType*, ::MX::Core::Services::Hash64*, ::PVOID))((::PBYTE)hIl2Cpp + CHANGESTATLOGICAPPLICATIONGAUGE_TRIGGEREVENT_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void ResetBoolValue()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHANGESTATLOGICAPPLICATIONGAUGE_RESETBOOLVALUE_OFFSET))(nullptr);
		}

		::System::Void SetBoolValue(::System::String* str, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CHANGESTATLOGICAPPLICATIONGAUGE_SETBOOLVALUE_OFFSET))(str, arg, nullptr);
		}

		::System::Boolean GetBoolValue(::System::String* str)
		{
			return ((::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + CHANGESTATLOGICAPPLICATIONGAUGE_GETBOOLVALUE_OFFSET))(str, nullptr);
		}

		Il2CppObject* GetAllBoolValues()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHANGESTATLOGICAPPLICATIONGAUGE_GETALLBOOLVALUES_OFFSET))(nullptr);
		}

		::System::Void ResetPrevAnimationClip()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHANGESTATLOGICAPPLICATIONGAUGE_RESETPREVANIMATIONCLIP_OFFSET))(nullptr);
		}

		::System::Void SetPrevAnimationClip(::UnityEngine::Animation* arg, ::System::String* str)
		{
			((::System::Void(*)(::UnityEngine::Animation*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + CHANGESTATLOGICAPPLICATIONGAUGE_SETPREVANIMATIONCLIP_OFFSET))(arg, str, nullptr);
		}

		::System::String* GetPrevAnimationClip(::UnityEngine::Animation* arg)
		{
			return ((::System::String*(*)(::UnityEngine::Animation*, ::PVOID))((::PBYTE)hIl2Cpp + CHANGESTATLOGICAPPLICATIONGAUGE_GETPREVANIMATIONCLIP_OFFSET))(arg, nullptr);
		}

		::System::Void Hide()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHANGESTATLOGICAPPLICATIONGAUGE_HIDE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHANGESTATLOGICAPPLICATIONGAUGE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void MX.UI.UIHPWidgets.ICustomGaugeUI.TriggerEvent(Il2CppObject&* arg, ::System::Object[]&* arg2, TriggerType* arg3, ::System::Int32 arg4)
		{
			((::System::Void(*)(Il2CppObject&*, ::System::Object[]&*, TriggerType*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CHANGESTATLOGICAPPLICATIONGAUGE_MX.UI.UIHPWIDGETS.ICUSTOMGAUGEUI.TRIGGEREVENT_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void MX.UI.UIHPWidgets.ICustomGaugeUI.SetTriggerEvent(Il2CppObject&* arg, ::System::Object[]&* arg2, ::System::Int32 arg3, ::System::Boolean arg4)
		{
			((::System::Void(*)(Il2CppObject&*, ::System::Object[]&*, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CHANGESTATLOGICAPPLICATIONGAUGE_MX.UI.UIHPWIDGETS.ICUSTOMGAUGEUI.SETTRIGGEREVENT_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

	};

