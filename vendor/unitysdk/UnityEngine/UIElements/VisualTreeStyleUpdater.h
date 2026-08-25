#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class VisualTreeStyleUpdaterTraversal; }
namespace Unity::Profiling { class ProfilerMarker; }
namespace UnityEngine::UIElements { class VisualElement; }
namespace UnityEngine::UIElements { class VersionChangeType; }

#define UNITYENGINE_UIELEMENTS_VISUALTREESTYLEUPDATER_GET_PROFILERMARKER_OFFSET UNITYSDK_OFFSET(0xA38B0F0)
#define UNITYENGINE_UIELEMENTS_VISUALTREESTYLEUPDATER_ONVERSIONCHANGED_OFFSET UNITYSDK_OFFSET(0xA38B140)
#define UNITYENGINE_UIELEMENTS_VISUALTREESTYLEUPDATER_UPDATE_OFFSET UNITYSDK_OFFSET(0xA38B2D0)
#define UNITYENGINE_UIELEMENTS_VISUALTREESTYLEUPDATER_APPLYSTYLES_OFFSET UNITYSDK_OFFSET(0xA38B6C0)
#define UNITYENGINE_UIELEMENTS_VISUALTREESTYLEUPDATER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA38BB70)
#define UNITYENGINE_UIELEMENTS_VISUALTREESTYLEUPDATER_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA38BED0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int VisualTreeStyleUpdater_TypeDefinitionIndex = 30267;

	class VisualTreeStyleUpdater : public ::UnityEngine::AI::NavMeshLink
	{
	public:
		Il2CppObject* m_ApplyStyleUpdateList; // 0x20
		Il2CppObject* m_TransitionPropertyUpdateList; // 0x28
		::System::Boolean m_IsApplyingStyles; // 0x30
		::System::UInt32 m_Version; // 0x34
		::System::UInt32 m_LastVersion; // 0x38
		::UnityEngine::UIElements::VisualTreeStyleUpdaterTraversal* m_StyleContextHierarchyTraversal; // 0x40
		::System::String* s_Description; // 0x0
		::Unity::Profiling::ProfilerMarker* s_ProfilerMarker; // 0x8

		::Unity::Profiling::ProfilerMarker* get_profilerMarker()
		{
			return (return (::Unity::Profiling::ProfilerMarker*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALTREESTYLEUPDATER_GET_PROFILERMARKER_OFFSET))(nullptr);
		}

		::System::Void OnVersionChanged(::UnityEngine::UIElements::VisualElement* arg, ::UnityEngine::UIElements::VersionChangeType* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::VersionChangeType*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALTREESTYLEUPDATER_ONVERSIONCHANGED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALTREESTYLEUPDATER_UPDATE_OFFSET))(nullptr);
		}

		::System::Void ApplyStyles()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALTREESTYLEUPDATER_APPLYSTYLES_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALTREESTYLEUPDATER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALTREESTYLEUPDATER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

