#pragma once
#include "../../unitysdk.h"

namespace Unity::Profiling { class ProfilerMarker; }
namespace UnityEngine::UIElements { class VisualElement; }
namespace UnityEngine::UIElements { class VersionChangeType; }

#define UNITYENGINE_UIELEMENTS_UIRLAYOUTUPDATER_GET_PROFILERMARKER_OFFSET UNITYSDK_OFFSET(0xA407580)
#define UNITYENGINE_UIELEMENTS_UIRLAYOUTUPDATER_ONVERSIONCHANGED_OFFSET UNITYSDK_OFFSET(0xA4075D0)
#define UNITYENGINE_UIELEMENTS_UIRLAYOUTUPDATER_UPDATE_OFFSET UNITYSDK_OFFSET(0xA407630)
#define UNITYENGINE_UIELEMENTS_UIRLAYOUTUPDATER_UPDATESUBTREE_OFFSET UNITYSDK_OFFSET(0xA407960)
#define UNITYENGINE_UIELEMENTS_UIRLAYOUTUPDATER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA408420)
#define UNITYENGINE_UIELEMENTS_UIRLAYOUTUPDATER_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA408430)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int UIRLayoutUpdater_TypeDefinitionIndex = 30574;

	class UIRLayoutUpdater : public ::UnityEngine::AI::NavMeshLink
	{
	public:
		::System::String* s_Description; // 0x0
		::Unity::Profiling::ProfilerMarker* s_ProfilerMarker; // 0x8

		::Unity::Profiling::ProfilerMarker* get_profilerMarker()
		{
			return (return (::Unity::Profiling::ProfilerMarker*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIRLAYOUTUPDATER_GET_PROFILERMARKER_OFFSET))(nullptr);
		}

		::System::Void OnVersionChanged(::UnityEngine::UIElements::VisualElement* arg, ::UnityEngine::UIElements::VersionChangeType* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::VersionChangeType*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIRLAYOUTUPDATER_ONVERSIONCHANGED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIRLAYOUTUPDATER_UPDATE_OFFSET))(nullptr);
		}

		::System::Void UpdateSubTree(::UnityEngine::UIElements::VisualElement* arg, ::System::Int32 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VisualElement*, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIRLAYOUTUPDATER_UPDATESUBTREE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIRLAYOUTUPDATER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIRLAYOUTUPDATER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

