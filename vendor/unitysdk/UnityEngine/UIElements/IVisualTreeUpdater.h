#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class BaseVisualElementPanel; }
namespace Unity::Profiling { class ProfilerMarker; }
namespace UnityEngine::UIElements { class VisualElement; }
namespace UnityEngine::UIElements { class VersionChangeType; }

#define UNITYENGINE_UIELEMENTS_IVISUALTREEUPDATER_SET_PANEL_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_IVISUALTREEUPDATER_GET_PROFILERMARKER_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_IVISUALTREEUPDATER_UPDATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_IVISUALTREEUPDATER_ONVERSIONCHANGED_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int IVisualTreeUpdater_TypeDefinitionIndex = 30275;

	class IVisualTreeUpdater : public Il2CppObject
	{
	public:
		::System::Void set_panel(::UnityEngine::UIElements::BaseVisualElementPanel* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::BaseVisualElementPanel*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IVISUALTREEUPDATER_SET_PANEL_OFFSET))(arg, nullptr);
		}

		::Unity::Profiling::ProfilerMarker* get_profilerMarker()
		{
			return (return (::Unity::Profiling::ProfilerMarker*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IVISUALTREEUPDATER_GET_PROFILERMARKER_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IVISUALTREEUPDATER_UPDATE_OFFSET))(nullptr);
		}

		::System::Void OnVersionChanged(::UnityEngine::UIElements::VisualElement* arg, ::UnityEngine::UIElements::VersionChangeType* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::VersionChangeType*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IVISUALTREEUPDATER_ONVERSIONCHANGED_OFFSET))(arg, arg, nullptr);
		}

	};
}

