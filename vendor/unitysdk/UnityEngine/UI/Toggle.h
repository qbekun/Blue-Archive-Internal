#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UI { class Graphic; }
namespace UnityEngine::UI { class ToggleGroup; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::EventSystems { class BaseEventData; }
namespace UnityEngine::EventSystems { class PointerEventData; }
namespace UnityEngine::UI { class CanvasUpdate; }

#define UNITYENGINE_UI_TOGGLE_SET_OFFSET UNITYSDK_OFFSET(0xA484960)
#define UNITYENGINE_UI_TOGGLE_GRAPHICUPDATECOMPLETE_OFFSET UNITYSDK_OFFSET(0xA484EB0)
#define UNITYENGINE_UI_TOGGLE_START_OFFSET UNITYSDK_OFFSET(0xA484EC0)
#define UNITYENGINE_UI_TOGGLE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xA484F70)
#define UNITYENGINE_UI_TOGGLE_UNITYENGINE.UI.ICANVASELEMENT.GET_TRANSFORM_OFFSET UNITYSDK_OFFSET(0xA485430)
#define UNITYENGINE_UI_TOGGLE_GET_GROUP_OFFSET UNITYSDK_OFFSET(0xA485440)
#define UNITYENGINE_UI_TOGGLE_LAYOUTCOMPLETE_OFFSET UNITYSDK_OFFSET(0xA485450)
#define UNITYENGINE_UI_TOGGLE_ONSUBMIT_OFFSET UNITYSDK_OFFSET(0xA485460)
#define UNITYENGINE_UI_TOGGLE_SET_GROUP_OFFSET UNITYSDK_OFFSET(0xA485520)
#define UNITYENGINE_UI_TOGGLE_ONPOINTERCLICK_OFFSET UNITYSDK_OFFSET(0xA485790)
#define UNITYENGINE_UI_TOGGLE_SET_ISON_OFFSET UNITYSDK_OFFSET(0xA485800)
#define UNITYENGINE_UI_TOGGLE_SETISONWITHOUTNOTIFY_OFFSET UNITYSDK_OFFSET(0xA485810)
#define UNITYENGINE_UI_TOGGLE_GET_ISON_OFFSET UNITYSDK_OFFSET(0xA485820)
#define UNITYENGINE_UI_TOGGLE_INTERNALTOGGLE_OFFSET UNITYSDK_OFFSET(0xA4854C0)
#define UNITYENGINE_UI_TOGGLE_SETTOGGLEGROUP_OFFSET UNITYSDK_OFFSET(0xA4855E0)
#define UNITYENGINE_UI_TOGGLE_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET UNITYSDK_OFFSET(0xA485990)
#define UNITYENGINE_UI_TOGGLE_REBUILD_OFFSET UNITYSDK_OFFSET(0xA485B10)
#define UNITYENGINE_UI_TOGGLE_ONENABLE_OFFSET UNITYSDK_OFFSET(0xA485B20)
#define UNITYENGINE_UI_TOGGLE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA485BF0)
#define UNITYENGINE_UI_TOGGLE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xA485CF0)
#define UNITYENGINE_UI_TOGGLE_PLAYEFFECT_OFFSET UNITYSDK_OFFSET(0xA484DC0)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int Toggle_TypeDefinitionIndex = 34856;

	class Toggle : public Il2CppObject
	{
	public:
		ToggleTransition* toggleTransition; // 0xF8
		::UnityEngine::UI::Graphic* graphic; // 0x100
		::UnityEngine::UI::ToggleGroup* m_Group; // 0x108
		ToggleEvent* onValueChanged; // 0x110
		::System::Boolean m_IsOn; // 0x118

		::System::Void Set(::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TOGGLE_SET_OFFSET))(arg, arg, nullptr);
		}

		::System::Void GraphicUpdateComplete()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TOGGLE_GRAPHICUPDATECOMPLETE_OFFSET))(nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TOGGLE_START_OFFSET))(nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TOGGLE_ONDESTROY_OFFSET))(nullptr);
		}

		::UnityEngine::Transform* UnityEngine.UI.ICanvasElement.get_transform()
		{
			return (return (::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TOGGLE_UNITYENGINE.UI.ICANVASELEMENT.GET_TRANSFORM_OFFSET))(nullptr);
		}

		::UnityEngine::UI::ToggleGroup* get_group()
		{
			return (return (::UnityEngine::UI::ToggleGroup*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TOGGLE_GET_GROUP_OFFSET))(nullptr);
		}

		::System::Void LayoutComplete()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TOGGLE_LAYOUTCOMPLETE_OFFSET))(nullptr);
		}

		::System::Void OnSubmit(::UnityEngine::EventSystems::BaseEventData* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::BaseEventData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TOGGLE_ONSUBMIT_OFFSET))(arg, nullptr);
		}

		::System::Void set_group(::UnityEngine::UI::ToggleGroup* arg)
		{
			((::System::Void(*)(::UnityEngine::UI::ToggleGroup*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TOGGLE_SET_GROUP_OFFSET))(arg, nullptr);
		}

		::System::Void OnPointerClick(::UnityEngine::EventSystems::PointerEventData* arg)
		{
			((::System::Void(*)(::UnityEngine::EventSystems::PointerEventData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TOGGLE_ONPOINTERCLICK_OFFSET))(arg, nullptr);
		}

		::System::Void set_isOn(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TOGGLE_SET_ISON_OFFSET))(arg, nullptr);
		}

		::System::Void SetIsOnWithoutNotify(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TOGGLE_SETISONWITHOUTNOTIFY_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_isOn()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TOGGLE_GET_ISON_OFFSET))(nullptr);
		}

		::System::Void InternalToggle()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TOGGLE_INTERNALTOGGLE_OFFSET))(nullptr);
		}

		::System::Void SetToggleGroup(::UnityEngine::UI::ToggleGroup* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::UI::ToggleGroup*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TOGGLE_SETTOGGLEGROUP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void OnDidApplyAnimationProperties()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TOGGLE_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET))(nullptr);
		}

		::System::Void Rebuild(::UnityEngine::UI::CanvasUpdate* arg)
		{
			((::System::Void(*)(::UnityEngine::UI::CanvasUpdate*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TOGGLE_REBUILD_OFFSET))(arg, nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TOGGLE_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TOGGLE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TOGGLE_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void PlayEffect(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TOGGLE_PLAYEFFECT_OFFSET))(arg, nullptr);
		}

	};
}

