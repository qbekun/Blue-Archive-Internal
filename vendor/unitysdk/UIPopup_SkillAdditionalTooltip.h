#pragma once
#include "unitysdk.h"

class MXButton;
class UISkillInfoTooltip;
class SkillInfoTooltipInfo;
class TooltipTransformSetter;
class UIPanel;
class UIPopup_Tooltip;
namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Vector2; }
namespace UnityEngine { class Transform; }

#define UIPOPUP_SKILLADDITIONALTOOLTIP_GET_SKILLINFOTOOLTIP_OFFSET UNITYSDK_OFFSET(0x2773580)
#define UIPOPUP_SKILLADDITIONALTOOLTIP_ONSCREENRESOLUTIONCHANGED_OFFSET UNITYSDK_OFFSET(0x27735F0)
#define UIPOPUP_SKILLADDITIONALTOOLTIP_GET_TRANSFORMSETTER_OFFSET UNITYSDK_OFFSET(0x2773710)
#define UIPOPUP_SKILLADDITIONALTOOLTIP_ONCLICKCLOSE_OFFSET UNITYSDK_OFFSET(0x2773780)
#define UIPOPUP_SKILLADDITIONALTOOLTIP_.CTOR_OFFSET UNITYSDK_OFFSET(0x27738B0)
#define UIPOPUP_SKILLADDITIONALTOOLTIP_ONENABLE_OFFSET UNITYSDK_OFFSET(0x27738C0)
#define UIPOPUP_SKILLADDITIONALTOOLTIP_AWAKE_OFFSET UNITYSDK_OFFSET(0x2773C70)
#define UIPOPUP_SKILLADDITIONALTOOLTIP_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x2773EB0)
#define UIPOPUP_SKILLADDITIONALTOOLTIP_SETDATAANDOPEN_OFFSET UNITYSDK_OFFSET(0x2774010)

	inline static constexpr unsigned int UIPopup_SkillAdditionalTooltip_TypeDefinitionIndex = 7352;

	class UIPopup_SkillAdditionalTooltip : public Il2CppObject
	{
	public:
		MXButton* closeButton; // 0x18
		UISkillInfoTooltip* skillInfoTooltip; // 0x20
		SkillInfoTooltipInfo* tooltipInfo; // 0x28
		TooltipTransformSetter* transformSetter; // 0x30
		UIPanel* thisPanel; // 0x38
		UIPopup_Tooltip* tooltip; // 0x40
		::System::Int32 previousPanelDepth; // 0x48

		UISkillInfoTooltip* get_SkillInfoTooltip()
		{
			return ((UISkillInfoTooltip*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SKILLADDITIONALTOOLTIP_GET_SKILLINFOTOOLTIP_OFFSET))(nullptr);
		}

		::System::Void OnScreenResolutionChanged()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SKILLADDITIONALTOOLTIP_ONSCREENRESOLUTIONCHANGED_OFFSET))(nullptr);
		}

		TooltipTransformSetter* get_TransformSetter()
		{
			return ((TooltipTransformSetter*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SKILLADDITIONALTOOLTIP_GET_TRANSFORMSETTER_OFFSET))(nullptr);
		}

		::System::Void OnClickClose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SKILLADDITIONALTOOLTIP_ONCLICKCLOSE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SKILLADDITIONALTOOLTIP_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SKILLADDITIONALTOOLTIP_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SKILLADDITIONALTOOLTIP_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SKILLADDITIONALTOOLTIP_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Void SetDataAndOpen(SkillInfoTooltipInfo* arg, ::UnityEngine::Vector3* arg2, ::UnityEngine::Vector2* arg3, ::System::Int32 arg4, ::UnityEngine::Transform* arg5)
		{
			((::System::Void(*)(SkillInfoTooltipInfo*, ::UnityEngine::Vector3*, ::UnityEngine::Vector2*, ::System::Int32, ::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SKILLADDITIONALTOOLTIP_SETDATAANDOPEN_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

	};

