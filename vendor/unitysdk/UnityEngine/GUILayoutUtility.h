#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Rect; }
namespace UnityEngine { class GUIStyle; }
namespace UnityEngine { class GUILayoutGroup; }
namespace UnityEngine { class Rect&; }

#define UNITYENGINE_GUILAYOUTUTILITY_INTERNAL_GETWINDOWRECT_OFFSET UNITYSDK_OFFSET(0xA27D310)
#define UNITYENGINE_GUILAYOUTUTILITY_INTERNAL_MOVEWINDOW_OFFSET UNITYSDK_OFFSET(0xA27D3E0)
#define UNITYENGINE_GUILAYOUTUTILITY_GETLAYOUTCACHE_OFFSET UNITYSDK_OFFSET(0xA27D4B0)
#define UNITYENGINE_GUILAYOUTUTILITY_SELECTIDLIST_OFFSET UNITYSDK_OFFSET(0xA27BDA0)
#define UNITYENGINE_GUILAYOUTUTILITY_REMOVESELECTEDIDLIST_OFFSET UNITYSDK_OFFSET(0xA27D660)
#define UNITYENGINE_GUILAYOUTUTILITY_BEGIN_OFFSET UNITYSDK_OFFSET(0xA27D730)
#define UNITYENGINE_GUILAYOUTUTILITY_BEGINCONTAINER_OFFSET UNITYSDK_OFFSET(0xA27DAD0)
#define UNITYENGINE_GUILAYOUTUTILITY_BEGINWINDOW_OFFSET UNITYSDK_OFFSET(0xA27C0A0)
#define UNITYENGINE_GUILAYOUTUTILITY_LAYOUT_OFFSET UNITYSDK_OFFSET(0xA27C580)
#define UNITYENGINE_GUILAYOUTUTILITY_LAYOUTFROMEDITORWINDOW_OFFSET UNITYSDK_OFFSET(0xA27E2D0)
#define UNITYENGINE_GUILAYOUTUTILITY_LAYOUTFROMCONTAINER_OFFSET UNITYSDK_OFFSET(0xA27E520)
#define UNITYENGINE_GUILAYOUTUTILITY_LAYOUTFREEGROUP_OFFSET UNITYSDK_OFFSET(0xA27DD60)
#define UNITYENGINE_GUILAYOUTUTILITY_LAYOUTSINGLEGROUP_OFFSET UNITYSDK_OFFSET(0xA27DF70)
#define UNITYENGINE_GUILAYOUTUTILITY_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA27E730)
#define UNITYENGINE_GUILAYOUTUTILITY_INTERNAL_GETWINDOWRECT_INJECTED_OFFSET UNITYSDK_OFFSET(0xA27D3A0)
#define UNITYENGINE_GUILAYOUTUTILITY_INTERNAL_MOVEWINDOW_INJECTED_OFFSET UNITYSDK_OFFSET(0xA27D470)

namespace UnityEngine
{
	inline static constexpr unsigned int GUILayoutUtility_TypeDefinitionIndex = 36542;

	class GUILayoutUtility : public Il2CppObject
	{
	public:
		Il2CppObject* s_StoredLayouts; // 0x0
		Il2CppObject* s_StoredWindows; // 0x8
		LayoutCache* current; // 0x10
		::UnityEngine::Rect* kDummyRect; // 0x18

		::UnityEngine::Rect* Internal_GetWindowRect(::System::Int32 arg)
		{
			return (return (::UnityEngine::Rect*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUTUTILITY_INTERNAL_GETWINDOWRECT_OFFSET))(arg, nullptr);
		}

		::System::Void Internal_MoveWindow(::System::Int32 arg, ::UnityEngine::Rect* arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::Rect*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUTUTILITY_INTERNAL_MOVEWINDOW_OFFSET))(arg, arg, nullptr);
		}

		LayoutCache* GetLayoutCache(::System::Int32 arg, ::System::Boolean arg)
		{
			return (return (LayoutCache*(*)(::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUTUTILITY_GETLAYOUTCACHE_OFFSET))(arg, arg, nullptr);
		}

		LayoutCache* SelectIDList(::System::Int32 arg, ::System::Boolean arg)
		{
			return (return (LayoutCache*(*)(::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUTUTILITY_SELECTIDLIST_OFFSET))(arg, arg, nullptr);
		}

		::System::Void RemoveSelectedIdList(::System::Int32 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUTUTILITY_REMOVESELECTEDIDLIST_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Begin(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUTUTILITY_BEGIN_OFFSET))(arg, nullptr);
		}

		::System::Void BeginContainer(LayoutCache* arg)
		{
			((::System::Void(*)(LayoutCache*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUTUTILITY_BEGINCONTAINER_OFFSET))(arg, nullptr);
		}

		::System::Void BeginWindow(::System::Int32 arg, ::UnityEngine::GUIStyle* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::GUIStyle*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUTUTILITY_BEGINWINDOW_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Layout()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUTUTILITY_LAYOUT_OFFSET))(nullptr);
		}

		::System::Void LayoutFromEditorWindow()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUTUTILITY_LAYOUTFROMEDITORWINDOW_OFFSET))(nullptr);
		}

		::System::Void LayoutFromContainer(::System::Single arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUTUTILITY_LAYOUTFROMCONTAINER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void LayoutFreeGroup(::UnityEngine::GUILayoutGroup* arg)
		{
			((::System::Void(*)(::UnityEngine::GUILayoutGroup*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUTUTILITY_LAYOUTFREEGROUP_OFFSET))(arg, nullptr);
		}

		::System::Void LayoutSingleGroup(::UnityEngine::GUILayoutGroup* arg)
		{
			((::System::Void(*)(::UnityEngine::GUILayoutGroup*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUTUTILITY_LAYOUTSINGLEGROUP_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUTUTILITY_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void Internal_GetWindowRect_Injected(::System::Int32 arg, ::UnityEngine::Rect&* arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::Rect&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUTUTILITY_INTERNAL_GETWINDOWRECT_INJECTED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Internal_MoveWindow_Injected(::System::Int32 arg, ::UnityEngine::Rect&* arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::Rect&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUTUTILITY_INTERNAL_MOVEWINDOW_INJECTED_OFFSET))(arg, arg, nullptr);
		}

	};
}

