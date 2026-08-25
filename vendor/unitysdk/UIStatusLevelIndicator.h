#pragma once
#include "unitysdk.h"

namespace MX::UI::UIHPWidgets { class GaugeAttachType; }
class UILabel;
namespace MX::Logic::BattleEntities { class StatusLevelEffectInfo; }
namespace MX::Logic::BattleEntities { class BattleEntity; }
namespace MX::Core::Services { class Hash64; }
class TriggerType;
namespace UnityEngine { class Animation; }

#define UISTATUSLEVELINDICATOR_GET_ISSTATUSLEVELTRIGGERINGEVENT_OFFSET UNITYSDK_OFFSET(0x2600C60)
#define UISTATUSLEVELINDICATOR_SET_ISSTATUSLEVELTRIGGERINGEVENT_OFFSET UNITYSDK_OFFSET(0x2600C70)
#define UISTATUSLEVELINDICATOR_GET_ISTRIGGERINGEVENT_OFFSET UNITYSDK_OFFSET(0x2600C80)
#define UISTATUSLEVELINDICATOR_SET_ISTRIGGERINGEVENT_OFFSET UNITYSDK_OFFSET(0x2600C90)
#define UISTATUSLEVELINDICATOR_ADD_ONBOOLVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x2600CA0)
#define UISTATUSLEVELINDICATOR_REMOVE_ONBOOLVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x2600D40)
#define UISTATUSLEVELINDICATOR_ADD_ONDESTROYED_OFFSET UNITYSDK_OFFSET(0x2600DE0)
#define UISTATUSLEVELINDICATOR_REMOVE_ONDESTROYED_OFFSET UNITYSDK_OFFSET(0x2600E80)
#define UISTATUSLEVELINDICATOR_GET_OWNER_OFFSET UNITYSDK_OFFSET(0x25EDB90)
#define UISTATUSLEVELINDICATOR_GET_STATUSLEVELEFFECTINFO_OFFSET UNITYSDK_OFFSET(0x2600F20)
#define UISTATUSLEVELINDICATOR_SET_STATUSLEVELEFFECTINFO_OFFSET UNITYSDK_OFFSET(0x2600F30)
#define UISTATUSLEVELINDICATOR_GET_CURRENTUITYPE_OFFSET UNITYSDK_OFFSET(0x2600F40)
#define UISTATUSLEVELINDICATOR_SET_CURRENTUITYPE_OFFSET UNITYSDK_OFFSET(0x2600F50)
#define UISTATUSLEVELINDICATOR_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x2600F60)
#define UISTATUSLEVELINDICATOR_SETTRIGGEREVENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UISTATUSLEVELINDICATOR_CHANGEUITYPE_OFFSET UNITYSDK_OFFSET(0x2601510)
#define UISTATUSLEVELINDICATOR_ONCHANGEFORMCHANGE_OFFSET UNITYSDK_OFFSET(0x25EE7E0)
#define UISTATUSLEVELINDICATOR_ADDLOGICEFFECTTEMPLATE_OFFSET UNITYSDK_OFFSET(0x25EEC70)
#define UISTATUSLEVELINDICATOR_UPDATE_OFFSET UNITYSDK_OFFSET(0x26015C0)
#define UISTATUSLEVELINDICATOR_STATUSLEVELEFFECT_STATUSLEVELVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x2601670)
#define UISTATUSLEVELINDICATOR_SETSTATUSLEVEL_OFFSET UNITYSDK_OFFSET(0x26011B0)
#define UISTATUSLEVELINDICATOR_UPDATESTATUSLEVELVALUELABEL_OFFSET UNITYSDK_OFFSET(0x26015D0)
#define UISTATUSLEVELINDICATOR_TRIGGEREVENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UISTATUSLEVELINDICATOR_TRIGGEREVENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UISTATUSLEVELINDICATOR_RESETBOOLVALUE_OFFSET UNITYSDK_OFFSET(0x2601690)
#define UISTATUSLEVELINDICATOR_SETBOOLVALUE_OFFSET UNITYSDK_OFFSET(0x26016E0)
#define UISTATUSLEVELINDICATOR_GETBOOLVALUE_OFFSET UNITYSDK_OFFSET(0x26017A0)
#define UISTATUSLEVELINDICATOR_GETALLBOOLVALUES_OFFSET UNITYSDK_OFFSET(0x2601800)
#define UISTATUSLEVELINDICATOR_RESETPREVANIMATIONCLIP_OFFSET UNITYSDK_OFFSET(0x2601810)
#define UISTATUSLEVELINDICATOR_SETPREVANIMATIONCLIP_OFFSET UNITYSDK_OFFSET(0x2601860)
#define UISTATUSLEVELINDICATOR_GETPREVANIMATIONCLIP_OFFSET UNITYSDK_OFFSET(0x2601910)
#define UISTATUSLEVELINDICATOR_HIDE_OFFSET UNITYSDK_OFFSET(0x25EE070)
#define UISTATUSLEVELINDICATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x26019A0)
#define UISTATUSLEVELINDICATOR_MX.UI.UIHPWIDGETS.ICUSTOMGAUGEUI.TRIGGEREVENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UISTATUSLEVELINDICATOR_MX.UI.UIHPWIDGETS.ICUSTOMGAUGEUI.SETTRIGGEREVENT_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int UIStatusLevelIndicator_TypeDefinitionIndex = 6463;

	class UIStatusLevelIndicator : public Il2CppObject
	{
	public:
		::MX::UI::UIHPWidgets::GaugeAttachType* AttachType; // 0x18
		::System::Int32 currentValue; // 0x1C
		UILabel* statusLevelValueLabel; // 0x20
		::Il2CppArray<::System::Object*>* sliders; // 0x28
		::Il2CppArray<::System::Object*>* gaugeControllers; // 0x30
		Il2CppObject* statusLevelUIEventTriggers; // 0x38
		Il2CppObject* uiEventTriggers; // 0x40
		Il2CppObject* customBoolValues; // 0x48
		Il2CppObject* prevAnimationClip; // 0x50
		::Il2CppArray<::System::Object*>* _IsStatusLevelTriggeringEvent_k__BackingField; // 0x58
		::Il2CppArray<::System::Object*>* _IsTriggeringEvent_k__BackingField; // 0x60
		Il2CppObject* OnBoolValueChanged; // 0x68
		Il2CppObject* OnDestroyed; // 0x70
		::System::Int32 prevStatusLevelValue; // 0x78
		::MX::Logic::BattleEntities::StatusLevelEffectInfo* _StatusLevelEffectInfo_k__BackingField; // 0x80
		::System::Int32 _currentUiType_k__BackingField; // 0x88

		::Il2CppArray<::System::Object*>* get_IsStatusLevelTriggeringEvent()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISTATUSLEVELINDICATOR_GET_ISSTATUSLEVELTRIGGERINGEVENT_OFFSET))(nullptr);
		}

		::System::Void set_IsStatusLevelTriggeringEvent(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UISTATUSLEVELINDICATOR_SET_ISSTATUSLEVELTRIGGERINGEVENT_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_IsTriggeringEvent()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISTATUSLEVELINDICATOR_GET_ISTRIGGERINGEVENT_OFFSET))(nullptr);
		}

		::System::Void set_IsTriggeringEvent(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UISTATUSLEVELINDICATOR_SET_ISTRIGGERINGEVENT_OFFSET))(arg, nullptr);
		}

		::System::Void add_OnBoolValueChanged(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UISTATUSLEVELINDICATOR_ADD_ONBOOLVALUECHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_OnBoolValueChanged(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UISTATUSLEVELINDICATOR_REMOVE_ONBOOLVALUECHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void add_OnDestroyed(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UISTATUSLEVELINDICATOR_ADD_ONDESTROYED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_OnDestroyed(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UISTATUSLEVELINDICATOR_REMOVE_ONDESTROYED_OFFSET))(arg, nullptr);
		}

		::MX::Logic::BattleEntities::BattleEntity* get_Owner()
		{
			return ((::MX::Logic::BattleEntities::BattleEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISTATUSLEVELINDICATOR_GET_OWNER_OFFSET))(nullptr);
		}

		::MX::Logic::BattleEntities::StatusLevelEffectInfo* get_StatusLevelEffectInfo()
		{
			return ((::MX::Logic::BattleEntities::StatusLevelEffectInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISTATUSLEVELINDICATOR_GET_STATUSLEVELEFFECTINFO_OFFSET))(nullptr);
		}

		::System::Void set_StatusLevelEffectInfo(::MX::Logic::BattleEntities::StatusLevelEffectInfo* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::StatusLevelEffectInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UISTATUSLEVELINDICATOR_SET_STATUSLEVELEFFECTINFO_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_currentUiType()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UISTATUSLEVELINDICATOR_GET_CURRENTUITYPE_OFFSET))(nullptr);
		}

		::System::Void set_currentUiType(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UISTATUSLEVELINDICATOR_SET_CURRENTUITYPE_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize(::MX::Logic::BattleEntities::StatusLevelEffectInfo* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::StatusLevelEffectInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UISTATUSLEVELINDICATOR_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void SetTriggerEvent(Il2CppObject&* arg, ::System::Object[]&* arg2, ::System::Int32 arg3, ::System::Boolean arg4)
		{
			((::System::Void(*)(Il2CppObject&*, ::System::Object[]&*, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISTATUSLEVELINDICATOR_SETTRIGGEREVENT_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void ChangeUIType(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UISTATUSLEVELINDICATOR_CHANGEUITYPE_OFFSET))(arg, nullptr);
		}

		::System::Void OnChangeFormChange(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UISTATUSLEVELINDICATOR_ONCHANGEFORMCHANGE_OFFSET))(arg, nullptr);
		}

		::System::Void AddLogicEffectTemplate(::MX::Core::Services::Hash64* arg)
		{
			((::System::Void(*)(::MX::Core::Services::Hash64*, ::PVOID))((::PBYTE)hIl2Cpp + UISTATUSLEVELINDICATOR_ADDLOGICEFFECTTEMPLATE_OFFSET))(arg, nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISTATUSLEVELINDICATOR_UPDATE_OFFSET))(nullptr);
		}

		::System::Void StatusLevelEffect_StatusLevelValueChanged(::System::Object* arg, ::System::EventArgs* arg2)
		{
			((::System::Void(*)(::System::Object*, ::System::EventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + UISTATUSLEVELINDICATOR_STATUSLEVELEFFECT_STATUSLEVELVALUECHANGED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetStatusLevel(::System::Int32 arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISTATUSLEVELINDICATOR_SETSTATUSLEVEL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void UpdateStatusLevelValueLabel()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISTATUSLEVELINDICATOR_UPDATESTATUSLEVELVALUELABEL_OFFSET))(nullptr);
		}

		::System::Void TriggerEvent(Il2CppObject&* arg, ::System::Object[]&* arg2, TriggerType* arg3, ::System::Int32 arg4)
		{
			((::System::Void(*)(Il2CppObject&*, ::System::Object[]&*, TriggerType*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UISTATUSLEVELINDICATOR_TRIGGEREVENT_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void TriggerEvent(Il2CppObject&* arg, ::System::Object[]&* arg2, TriggerType* arg3, ::MX::Core::Services::Hash64* arg4)
		{
			((::System::Void(*)(Il2CppObject&*, ::System::Object[]&*, TriggerType*, ::MX::Core::Services::Hash64*, ::PVOID))((::PBYTE)hIl2Cpp + UISTATUSLEVELINDICATOR_TRIGGEREVENT_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void ResetBoolValue()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISTATUSLEVELINDICATOR_RESETBOOLVALUE_OFFSET))(nullptr);
		}

		::System::Void SetBoolValue(::System::String* str, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISTATUSLEVELINDICATOR_SETBOOLVALUE_OFFSET))(str, arg, nullptr);
		}

		::System::Boolean GetBoolValue(::System::String* str)
		{
			return ((::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UISTATUSLEVELINDICATOR_GETBOOLVALUE_OFFSET))(str, nullptr);
		}

		Il2CppObject* GetAllBoolValues()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISTATUSLEVELINDICATOR_GETALLBOOLVALUES_OFFSET))(nullptr);
		}

		::System::Void ResetPrevAnimationClip()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISTATUSLEVELINDICATOR_RESETPREVANIMATIONCLIP_OFFSET))(nullptr);
		}

		::System::Void SetPrevAnimationClip(::UnityEngine::Animation* arg, ::System::String* str)
		{
			((::System::Void(*)(::UnityEngine::Animation*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UISTATUSLEVELINDICATOR_SETPREVANIMATIONCLIP_OFFSET))(arg, str, nullptr);
		}

		::System::String* GetPrevAnimationClip(::UnityEngine::Animation* arg)
		{
			return ((::System::String*(*)(::UnityEngine::Animation*, ::PVOID))((::PBYTE)hIl2Cpp + UISTATUSLEVELINDICATOR_GETPREVANIMATIONCLIP_OFFSET))(arg, nullptr);
		}

		::System::Void Hide()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISTATUSLEVELINDICATOR_HIDE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISTATUSLEVELINDICATOR_.CTOR_OFFSET))(nullptr);
		}

		::System::Void MX.UI.UIHPWidgets.ICustomGaugeUI.TriggerEvent(Il2CppObject&* arg, ::System::Object[]&* arg2, TriggerType* arg3, ::System::Int32 arg4)
		{
			((::System::Void(*)(Il2CppObject&*, ::System::Object[]&*, TriggerType*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UISTATUSLEVELINDICATOR_MX.UI.UIHPWIDGETS.ICUSTOMGAUGEUI.TRIGGEREVENT_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void MX.UI.UIHPWidgets.ICustomGaugeUI.SetTriggerEvent(Il2CppObject&* arg, ::System::Object[]&* arg2, ::System::Int32 arg3, ::System::Boolean arg4)
		{
			((::System::Void(*)(Il2CppObject&*, ::System::Object[]&*, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISTATUSLEVELINDICATOR_MX.UI.UIHPWIDGETS.ICUSTOMGAUGEUI.SETTRIGGEREVENT_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

	};

