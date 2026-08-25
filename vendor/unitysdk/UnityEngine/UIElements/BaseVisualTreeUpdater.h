#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class BaseVisualElementPanel; }
namespace UnityEngine::UIElements { class VisualElement; }
namespace Unity::Profiling { class ProfilerMarker; }
namespace UnityEngine::UIElements { class VersionChangeType; }

#define UNITYENGINE_UIELEMENTS_BASEVISUALTREEUPDATER_ADD_PANELCHANGED_OFFSET UNITYSDK_OFFSET(0xA38F200)
#define UNITYENGINE_UIELEMENTS_BASEVISUALTREEUPDATER_REMOVE_PANELCHANGED_OFFSET UNITYSDK_OFFSET(0xA38F2A0)
#define UNITYENGINE_UIELEMENTS_BASEVISUALTREEUPDATER_GET_PANEL_OFFSET UNITYSDK_OFFSET(0xA38A600)
#define UNITYENGINE_UIELEMENTS_BASEVISUALTREEUPDATER_SET_PANEL_OFFSET UNITYSDK_OFFSET(0xA38F340)
#define UNITYENGINE_UIELEMENTS_BASEVISUALTREEUPDATER_GET_VISUALTREE_OFFSET UNITYSDK_OFFSET(0xA38BB30)
#define UNITYENGINE_UIELEMENTS_BASEVISUALTREEUPDATER_GET_PROFILERMARKER_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_BASEVISUALTREEUPDATER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA38F390)
#define UNITYENGINE_UIELEMENTS_BASEVISUALTREEUPDATER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA38F3F0)
#define UNITYENGINE_UIELEMENTS_BASEVISUALTREEUPDATER_UPDATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_BASEVISUALTREEUPDATER_ONVERSIONCHANGED_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_BASEVISUALTREEUPDATER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA38A6F0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int BaseVisualTreeUpdater_TypeDefinitionIndex = 30276;

	class BaseVisualTreeUpdater : public Il2CppObject
	{
	public:
		Il2CppObject* panelChanged; // 0x10
		::UnityEngine::UIElements::BaseVisualElementPanel* m_Panel; // 0x18

		::System::Void add_panelChanged(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVISUALTREEUPDATER_ADD_PANELCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_panelChanged(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVISUALTREEUPDATER_REMOVE_PANELCHANGED_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UIElements::BaseVisualElementPanel* get_panel()
		{
			return (return (::UnityEngine::UIElements::BaseVisualElementPanel*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVISUALTREEUPDATER_GET_PANEL_OFFSET))(nullptr);
		}

		::System::Void set_panel(::UnityEngine::UIElements::BaseVisualElementPanel* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::BaseVisualElementPanel*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVISUALTREEUPDATER_SET_PANEL_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UIElements::VisualElement* get_visualTree()
		{
			return (return (::UnityEngine::UIElements::VisualElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVISUALTREEUPDATER_GET_VISUALTREE_OFFSET))(nullptr);
		}

		::Unity::Profiling::ProfilerMarker* get_profilerMarker()
		{
			return (return (::Unity::Profiling::ProfilerMarker*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVISUALTREEUPDATER_GET_PROFILERMARKER_OFFSET))(nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVISUALTREEUPDATER_DISPOSE_OFFSET))(nullptr);
		}

		::System::Void Dispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVISUALTREEUPDATER_DISPOSE_OFFSET))(arg, nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVISUALTREEUPDATER_UPDATE_OFFSET))(nullptr);
		}

		::System::Void OnVersionChanged(::UnityEngine::UIElements::VisualElement* arg, ::UnityEngine::UIElements::VersionChangeType* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::VersionChangeType*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVISUALTREEUPDATER_ONVERSIONCHANGED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVISUALTREEUPDATER_.CTOR_OFFSET))(nullptr);
		}

	};
}

