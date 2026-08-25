#pragma once
#include "../../unitysdk.h"

namespace Unity::Profiling { class ProfilerMarker; }
namespace UnityEngine::UIElements { class VisualElement; }
namespace UnityEngine::UIElements { class VersionChangeType; }

#define UNITYENGINE_UIELEMENTS_VISUALTREEVIEWDATAUPDATER_GET_PROFILERMARKER_OFFSET UNITYSDK_OFFSET(0xA38F400)
#define UNITYENGINE_UIELEMENTS_VISUALTREEVIEWDATAUPDATER_ONVERSIONCHANGED_OFFSET UNITYSDK_OFFSET(0xA38F450)
#define UNITYENGINE_UIELEMENTS_VISUALTREEVIEWDATAUPDATER_UPDATE_OFFSET UNITYSDK_OFFSET(0xA38F570)
#define UNITYENGINE_UIELEMENTS_VISUALTREEVIEWDATAUPDATER_VALIDATEVIEWDATAONSUBTREE_OFFSET UNITYSDK_OFFSET(0xA38F7E0)
#define UNITYENGINE_UIELEMENTS_VISUALTREEVIEWDATAUPDATER_PROPAGATETOPARENTS_OFFSET UNITYSDK_OFFSET(0xA38F4C0)
#define UNITYENGINE_UIELEMENTS_VISUALTREEVIEWDATAUPDATER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA38F930)
#define UNITYENGINE_UIELEMENTS_VISUALTREEVIEWDATAUPDATER_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA38F9F0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int VisualTreeViewDataUpdater_TypeDefinitionIndex = 30277;

	class VisualTreeViewDataUpdater : public ::UnityEngine::AI::NavMeshLink
	{
	public:
		Il2CppObject* m_UpdateList; // 0x20
		Il2CppObject* m_ParentList; // 0x28
		::System::UInt32 m_Version; // 0x30
		::System::UInt32 m_LastVersion; // 0x34
		::System::String* s_Description; // 0x0
		::Unity::Profiling::ProfilerMarker* s_ProfilerMarker; // 0x8

		::Unity::Profiling::ProfilerMarker* get_profilerMarker()
		{
			return (return (::Unity::Profiling::ProfilerMarker*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALTREEVIEWDATAUPDATER_GET_PROFILERMARKER_OFFSET))(nullptr);
		}

		::System::Void OnVersionChanged(::UnityEngine::UIElements::VisualElement* arg, ::UnityEngine::UIElements::VersionChangeType* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::VersionChangeType*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALTREEVIEWDATAUPDATER_ONVERSIONCHANGED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALTREEVIEWDATAUPDATER_UPDATE_OFFSET))(nullptr);
		}

		::System::Void ValidateViewDataOnSubTree(::UnityEngine::UIElements::VisualElement* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VisualElement*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALTREEVIEWDATAUPDATER_VALIDATEVIEWDATAONSUBTREE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void PropagateToParents(::UnityEngine::UIElements::VisualElement* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VisualElement*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALTREEVIEWDATAUPDATER_PROPAGATETOPARENTS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALTREEVIEWDATAUPDATER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALTREEVIEWDATAUPDATER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

