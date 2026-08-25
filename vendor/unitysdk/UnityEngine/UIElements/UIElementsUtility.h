#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Event; }
namespace UnityEngine { class Color; }
namespace UnityEngine::UIElements { class UIElementsUtility; }
namespace Unity::Profiling { class ProfilerMarker; }
namespace UnityEngine::UIElements { class Panel; }
namespace UnityEngine::UIElements { class Panel&; }
namespace UnityEngine::UIElements { class IMGUIContainer; }
namespace UnityEngine { class Rect; }
namespace UnityEngine::UIElements { class EventBase; }
namespace UnityEngine { class EventType; }
namespace UnityEngine::UIElements { class BaseVisualElementPanel; }
namespace UnityEngine::UIElements { class ContextType; }
namespace UnityEngine::UIElements { class VisualElement; }
namespace UnityEngine { class Sprite; }

#define UNITYENGINE_UIELEMENTS_UIELEMENTSUTILITY_.CTOR_OFFSET UNITYSDK_OFFSET(0xA3837C0)
#define UNITYENGINE_UIELEMENTS_UIELEMENTSUTILITY_UNITYENGINE.UIELEMENTS.IUIELEMENTSUTILITY.MAKECURRENTIMGUICONTAINERDIRTY_OFFSET UNITYSDK_OFFSET(0xA3838A0)
#define UNITYENGINE_UIELEMENTS_UIELEMENTSUTILITY_UNITYENGINE.UIELEMENTS.IUIELEMENTSUTILITY.TAKECAPTURE_OFFSET UNITYSDK_OFFSET(0xA383990)
#define UNITYENGINE_UIELEMENTS_UIELEMENTSUTILITY_UNITYENGINE.UIELEMENTS.IUIELEMENTSUTILITY.RELEASECAPTURE_OFFSET UNITYSDK_OFFSET(0xA383B30)
#define UNITYENGINE_UIELEMENTS_UIELEMENTSUTILITY_UNITYENGINE.UIELEMENTS.IUIELEMENTSUTILITY.PROCESSEVENT_OFFSET UNITYSDK_OFFSET(0xA383B40)
#define UNITYENGINE_UIELEMENTS_UIELEMENTSUTILITY_UNITYENGINE.UIELEMENTS.IUIELEMENTSUTILITY.CLEANUPROOTS_OFFSET UNITYSDK_OFFSET(0xA384480)
#define UNITYENGINE_UIELEMENTS_UIELEMENTSUTILITY_UNITYENGINE.UIELEMENTS.IUIELEMENTSUTILITY.ENDCONTAINERGUIFROMEXCEPTION_OFFSET UNITYSDK_OFFSET(0xA384540)
#define UNITYENGINE_UIELEMENTS_UIELEMENTSUTILITY_REGISTERCACHEDPANEL_OFFSET UNITYSDK_OFFSET(0xA37FC60)
#define UNITYENGINE_UIELEMENTS_UIELEMENTSUTILITY_REMOVECACHEDPANEL_OFFSET UNITYSDK_OFFSET(0xA37FDA0)
#define UNITYENGINE_UIELEMENTS_UIELEMENTSUTILITY_TRYGETPANEL_OFFSET UNITYSDK_OFFSET(0xA37F680)
#define UNITYENGINE_UIELEMENTS_UIELEMENTSUTILITY_BEGINCONTAINERGUI_OFFSET UNITYSDK_OFFSET(0xA384620)
#define UNITYENGINE_UIELEMENTS_UIELEMENTSUTILITY_ENDCONTAINERGUI_OFFSET UNITYSDK_OFFSET(0xA384810)
#define UNITYENGINE_UIELEMENTS_UIELEMENTSUTILITY_CREATEEVENT_OFFSET UNITYSDK_OFFSET(0xA384A40)
#define UNITYENGINE_UIELEMENTS_UIELEMENTSUTILITY_CREATEEVENT_OFFSET UNITYSDK_OFFSET(0xA37F200)
#define UNITYENGINE_UIELEMENTS_UIELEMENTSUTILITY_DODISPATCH_OFFSET UNITYSDK_OFFSET(0xA383C80)
#define UNITYENGINE_UIELEMENTS_UIELEMENTSUTILITY_GETALLPANELS_OFFSET UNITYSDK_OFFSET(0xA37FE40)
#define UNITYENGINE_UIELEMENTS_UIELEMENTSUTILITY_GETPANELSITERATOR_OFFSET UNITYSDK_OFFSET(0xA384AB0)
#define UNITYENGINE_UIELEMENTS_UIELEMENTSUTILITY_PIXELSPERUNITSCALEFORELEMENT_OFFSET UNITYSDK_OFFSET(0xA384B60)
#define UNITYENGINE_UIELEMENTS_UIELEMENTSUTILITY_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA384C00)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int UIElementsUtility_TypeDefinitionIndex = 30224;

	class UIElementsUtility : public Il2CppObject
	{
	public:
		Il2CppObject* s_ContainerStack; // 0x0
		Il2CppObject* s_UIElementsCache; // 0x8
		::UnityEngine::Event* s_EventInstance; // 0x10
		::UnityEngine::Color* editorPlayModeTintColor; // 0x18
		::System::Single singleLineHeight; // 0x28
		::UnityEngine::UIElements::UIElementsUtility* s_Instance; // 0x30
		Il2CppObject* s_PanelsIterationList; // 0x38
		::System::String* s_RepaintProfilerMarkerName; // 0x40
		::System::String* s_EventProfilerMarkerName; // 0x48
		::Unity::Profiling::ProfilerMarker* s_RepaintProfilerMarker; // 0x50
		::Unity::Profiling::ProfilerMarker* s_EventProfilerMarker; // 0x58
		::Il2CppArray<::System::Object*>* s_Modifiers; // 0x60

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIELEMENTSUTILITY_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean UnityEngine.UIElements.IUIElementsUtility.MakeCurrentIMGUIContainerDirty()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIELEMENTSUTILITY_UNITYENGINE.UIELEMENTS.IUIELEMENTSUTILITY.MAKECURRENTIMGUICONTAINERDIRTY_OFFSET))(nullptr);
		}

		::System::Boolean UnityEngine.UIElements.IUIElementsUtility.TakeCapture()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIELEMENTSUTILITY_UNITYENGINE.UIELEMENTS.IUIELEMENTSUTILITY.TAKECAPTURE_OFFSET))(nullptr);
		}

		::System::Boolean UnityEngine.UIElements.IUIElementsUtility.ReleaseCapture()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIELEMENTSUTILITY_UNITYENGINE.UIELEMENTS.IUIELEMENTSUTILITY.RELEASECAPTURE_OFFSET))(nullptr);
		}

		::System::Boolean UnityEngine.UIElements.IUIElementsUtility.ProcessEvent(::System::Int32 arg, ::System::Int32 arg, bool&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::System::Int32, bool&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIELEMENTSUTILITY_UNITYENGINE.UIELEMENTS.IUIELEMENTSUTILITY.PROCESSEVENT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean UnityEngine.UIElements.IUIElementsUtility.CleanupRoots()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIELEMENTSUTILITY_UNITYENGINE.UIELEMENTS.IUIELEMENTSUTILITY.CLEANUPROOTS_OFFSET))(nullptr);
		}

		::System::Boolean UnityEngine.UIElements.IUIElementsUtility.EndContainerGUIFromException(::System::Exception* arg)
		{
			return (return (::System::Boolean(*)(::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIELEMENTSUTILITY_UNITYENGINE.UIELEMENTS.IUIELEMENTSUTILITY.ENDCONTAINERGUIFROMEXCEPTION_OFFSET))(arg, nullptr);
		}

		::System::Void RegisterCachedPanel(::System::Int32 arg, ::UnityEngine::UIElements::Panel* arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::UIElements::Panel*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIELEMENTSUTILITY_REGISTERCACHEDPANEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void RemoveCachedPanel(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIELEMENTSUTILITY_REMOVECACHEDPANEL_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetPanel(::System::Int32 arg, ::UnityEngine::UIElements::Panel&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::UnityEngine::UIElements::Panel&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIELEMENTSUTILITY_TRYGETPANEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void BeginContainerGUI(LayoutCache* arg, ::UnityEngine::Event* arg, ::UnityEngine::UIElements::IMGUIContainer* arg)
		{
			((::System::Void(*)(LayoutCache*, ::UnityEngine::Event*, ::UnityEngine::UIElements::IMGUIContainer*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIELEMENTSUTILITY_BEGINCONTAINERGUI_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void EndContainerGUI(::UnityEngine::Event* arg, ::UnityEngine::Rect* arg)
		{
			((::System::Void(*)(::UnityEngine::Event*, ::UnityEngine::Rect*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIELEMENTSUTILITY_ENDCONTAINERGUI_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::UIElements::EventBase* CreateEvent(::UnityEngine::Event* arg)
		{
			return (return (::UnityEngine::UIElements::EventBase*(*)(::UnityEngine::Event*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIELEMENTSUTILITY_CREATEEVENT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UIElements::EventBase* CreateEvent(::UnityEngine::Event* arg, ::UnityEngine::EventType* arg)
		{
			return (return (::UnityEngine::UIElements::EventBase*(*)(::UnityEngine::Event*, ::UnityEngine::EventType*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIELEMENTSUTILITY_CREATEEVENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean DoDispatch(::UnityEngine::UIElements::BaseVisualElementPanel* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::BaseVisualElementPanel*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIELEMENTSUTILITY_DODISPATCH_OFFSET))(arg, nullptr);
		}

		::System::Void GetAllPanels(Il2CppObject* arg, ::UnityEngine::UIElements::ContextType* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::UnityEngine::UIElements::ContextType*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIELEMENTSUTILITY_GETALLPANELS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* GetPanelsIterator()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIELEMENTSUTILITY_GETPANELSITERATOR_OFFSET))(nullptr);
		}

		::System::Single PixelsPerUnitScaleForElement(::UnityEngine::UIElements::VisualElement* arg, ::UnityEngine::Sprite* arg)
		{
			return (return (::System::Single(*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::Sprite*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIELEMENTSUTILITY_PIXELSPERUNITSCALEFORELEMENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIELEMENTSUTILITY_.CCTOR_OFFSET))(nullptr);
		}

	};
}

