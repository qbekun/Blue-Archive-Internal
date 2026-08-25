#pragma once
#include "../../unitysdk.h"

namespace Unity::Profiling { class ProfilerMarker; }
namespace UnityEngine::UIElements { class VisualElement; }
namespace UnityEngine::UIElements { class VersionChangeType; }

#define UNITYENGINE_UIELEMENTS_VISUALTREETRANSFORMCLIPUPDATER_GET_PROFILERMARKER_OFFSET UNITYSDK_OFFSET(0xA38E1B0)
#define UNITYENGINE_UIELEMENTS_VISUALTREETRANSFORMCLIPUPDATER_ONVERSIONCHANGED_OFFSET UNITYSDK_OFFSET(0xA38E200)
#define UNITYENGINE_UIELEMENTS_VISUALTREETRANSFORMCLIPUPDATER_DIRTYHIERARCHY_OFFSET UNITYSDK_OFFSET(0xA38E2F0)
#define UNITYENGINE_UIELEMENTS_VISUALTREETRANSFORMCLIPUPDATER_DIRTYBOUNDINGBOXHIERARCHY_OFFSET UNITYSDK_OFFSET(0xA38E550)
#define UNITYENGINE_UIELEMENTS_VISUALTREETRANSFORMCLIPUPDATER_UPDATE_OFFSET UNITYSDK_OFFSET(0xA38E600)
#define UNITYENGINE_UIELEMENTS_VISUALTREETRANSFORMCLIPUPDATER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA38E670)
#define UNITYENGINE_UIELEMENTS_VISUALTREETRANSFORMCLIPUPDATER_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA38E680)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int VisualTreeTransformClipUpdater_TypeDefinitionIndex = 30271;

	class VisualTreeTransformClipUpdater : public ::UnityEngine::AI::NavMeshLink
	{
	public:
		::System::UInt32 m_Version; // 0x20
		::System::UInt32 m_LastVersion; // 0x24
		::System::String* s_Description; // 0x0
		::Unity::Profiling::ProfilerMarker* s_ProfilerMarker; // 0x8

		::Unity::Profiling::ProfilerMarker* get_profilerMarker()
		{
			return (return (::Unity::Profiling::ProfilerMarker*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALTREETRANSFORMCLIPUPDATER_GET_PROFILERMARKER_OFFSET))(nullptr);
		}

		::System::Void OnVersionChanged(::UnityEngine::UIElements::VisualElement* arg, ::UnityEngine::UIElements::VersionChangeType* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::VersionChangeType*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALTREETRANSFORMCLIPUPDATER_ONVERSIONCHANGED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void DirtyHierarchy(::UnityEngine::UIElements::VisualElement* arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VisualElement*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALTREETRANSFORMCLIPUPDATER_DIRTYHIERARCHY_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void DirtyBoundingBoxHierarchy(::UnityEngine::UIElements::VisualElement* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VisualElement*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALTREETRANSFORMCLIPUPDATER_DIRTYBOUNDINGBOXHIERARCHY_OFFSET))(arg, nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALTREETRANSFORMCLIPUPDATER_UPDATE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALTREETRANSFORMCLIPUPDATER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALTREETRANSFORMCLIPUPDATER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

