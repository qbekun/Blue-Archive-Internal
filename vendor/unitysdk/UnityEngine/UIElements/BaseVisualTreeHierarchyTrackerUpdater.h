#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class VisualElement; }
namespace UnityEngine::UIElements { class HierarchyChangeType; }
namespace UnityEngine::UIElements { class VersionChangeType; }

#define UNITYENGINE_UIELEMENTS_BASEVISUALTREEHIERARCHYTRACKERUPDATER_ONHIERARCHYCHANGE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_BASEVISUALTREEHIERARCHYTRACKERUPDATER_ONVERSIONCHANGED_OFFSET UNITYSDK_OFFSET(0xA38A810)
#define UNITYENGINE_UIELEMENTS_BASEVISUALTREEHIERARCHYTRACKERUPDATER_UPDATE_OFFSET UNITYSDK_OFFSET(0xA38AAC0)
#define UNITYENGINE_UIELEMENTS_BASEVISUALTREEHIERARCHYTRACKERUPDATER_PROCESSNEWCHANGE_OFFSET UNITYSDK_OFFSET(0xA38A8E0)
#define UNITYENGINE_UIELEMENTS_BASEVISUALTREEHIERARCHYTRACKERUPDATER_PROCESSADDORMOVE_OFFSET UNITYSDK_OFFSET(0xA38AA20)
#define UNITYENGINE_UIELEMENTS_BASEVISUALTREEHIERARCHYTRACKERUPDATER_PROCESSREMOVE_OFFSET UNITYSDK_OFFSET(0xA38A990)
#define UNITYENGINE_UIELEMENTS_BASEVISUALTREEHIERARCHYTRACKERUPDATER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA38AB70)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int BaseVisualTreeHierarchyTrackerUpdater_TypeDefinitionIndex = 30265;

	class BaseVisualTreeHierarchyTrackerUpdater : public ::UnityEngine::AI::NavMeshLink
	{
	public:
		State* m_State; // 0x20
		::UnityEngine::UIElements::VisualElement* m_CurrentChangeElement; // 0x28
		::UnityEngine::UIElements::VisualElement* m_CurrentChangeParent; // 0x30

		::System::Void OnHierarchyChange(::UnityEngine::UIElements::VisualElement* arg, ::UnityEngine::UIElements::HierarchyChangeType* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::HierarchyChangeType*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVISUALTREEHIERARCHYTRACKERUPDATER_ONHIERARCHYCHANGE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void OnVersionChanged(::UnityEngine::UIElements::VisualElement* arg, ::UnityEngine::UIElements::VersionChangeType* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::VersionChangeType*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVISUALTREEHIERARCHYTRACKERUPDATER_ONVERSIONCHANGED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVISUALTREEHIERARCHYTRACKERUPDATER_UPDATE_OFFSET))(nullptr);
		}

		::System::Void ProcessNewChange(::UnityEngine::UIElements::VisualElement* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VisualElement*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVISUALTREEHIERARCHYTRACKERUPDATER_PROCESSNEWCHANGE_OFFSET))(arg, nullptr);
		}

		::System::Void ProcessAddOrMove(::UnityEngine::UIElements::VisualElement* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VisualElement*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVISUALTREEHIERARCHYTRACKERUPDATER_PROCESSADDORMOVE_OFFSET))(arg, nullptr);
		}

		::System::Void ProcessRemove(::UnityEngine::UIElements::VisualElement* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VisualElement*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVISUALTREEHIERARCHYTRACKERUPDATER_PROCESSREMOVE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEVISUALTREEHIERARCHYTRACKERUPDATER_.CTOR_OFFSET))(nullptr);
		}

	};
}

