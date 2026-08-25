#pragma once
#include "../../unitysdk.h"

namespace Unity::Profiling { class ProfilerMarker; }
namespace UnityEngine::UIElements::Experimental { class IValueAnimationUpdate; }
namespace UnityEngine::UIElements { class VisualElement; }
namespace UnityEngine::UIElements { class VersionChangeType; }

#define UNITYENGINE_UIELEMENTS_VISUALELEMENTANIMATIONSYSTEM_GET_PROFILERMARKER_OFFSET UNITYSDK_OFFSET(0xA389CB0)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENTANIMATIONSYSTEM_GET_STYLEPROPERTYANIMATIONPROFILERMARKER_OFFSET UNITYSDK_OFFSET(0xA389D00)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENTANIMATIONSYSTEM_UNREGISTERANIMATION_OFFSET UNITYSDK_OFFSET(0xA389D50)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENTANIMATIONSYSTEM_UNREGISTERANIMATIONS_OFFSET UNITYSDK_OFFSET(0xA389DB0)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENTANIMATIONSYSTEM_REGISTERANIMATION_OFFSET UNITYSDK_OFFSET(0xA389F30)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENTANIMATIONSYSTEM_REGISTERANIMATIONS_OFFSET UNITYSDK_OFFSET(0xA389F90)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENTANIMATIONSYSTEM_UPDATE_OFFSET UNITYSDK_OFFSET(0xA38A110)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENTANIMATIONSYSTEM_ONVERSIONCHANGED_OFFSET UNITYSDK_OFFSET(0xA38A610)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENTANIMATIONSYSTEM_.CTOR_OFFSET UNITYSDK_OFFSET(0xA38A620)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENTANIMATIONSYSTEM_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA38A700)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int VisualElementAnimationSystem_TypeDefinitionIndex = 30262;

	class VisualElementAnimationSystem : public ::UnityEngine::AI::NavMeshLink
	{
	public:
		Il2CppObject* m_Animations; // 0x20
		Il2CppObject* m_IterationList; // 0x28
		::System::Boolean m_HasNewAnimations; // 0x30
		::System::Boolean m_IterationListDirty; // 0x31
		::System::String* s_Description; // 0x0
		::Unity::Profiling::ProfilerMarker* s_ProfilerMarker; // 0x8
		::System::String* s_StylePropertyAnimationDescription; // 0x10
		::Unity::Profiling::ProfilerMarker* s_StylePropertyAnimationProfilerMarker; // 0x18
		::System::Int64 lastUpdate; // 0x38

		::Unity::Profiling::ProfilerMarker* get_profilerMarker()
		{
			return (return (::Unity::Profiling::ProfilerMarker*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENTANIMATIONSYSTEM_GET_PROFILERMARKER_OFFSET))(nullptr);
		}

		::Unity::Profiling::ProfilerMarker* get_stylePropertyAnimationProfilerMarker()
		{
			return (return (::Unity::Profiling::ProfilerMarker*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENTANIMATIONSYSTEM_GET_STYLEPROPERTYANIMATIONPROFILERMARKER_OFFSET))(nullptr);
		}

		::System::Void UnregisterAnimation(::UnityEngine::UIElements::Experimental::IValueAnimationUpdate* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::Experimental::IValueAnimationUpdate*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENTANIMATIONSYSTEM_UNREGISTERANIMATION_OFFSET))(arg, nullptr);
		}

		::System::Void UnregisterAnimations(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENTANIMATIONSYSTEM_UNREGISTERANIMATIONS_OFFSET))(arg, nullptr);
		}

		::System::Void RegisterAnimation(::UnityEngine::UIElements::Experimental::IValueAnimationUpdate* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::Experimental::IValueAnimationUpdate*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENTANIMATIONSYSTEM_REGISTERANIMATION_OFFSET))(arg, nullptr);
		}

		::System::Void RegisterAnimations(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENTANIMATIONSYSTEM_REGISTERANIMATIONS_OFFSET))(arg, nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENTANIMATIONSYSTEM_UPDATE_OFFSET))(nullptr);
		}

		::System::Void OnVersionChanged(::UnityEngine::UIElements::VisualElement* arg, ::UnityEngine::UIElements::VersionChangeType* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::VersionChangeType*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENTANIMATIONSYSTEM_ONVERSIONCHANGED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENTANIMATIONSYSTEM_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENTANIMATIONSYSTEM_.CCTOR_OFFSET))(nullptr);
		}

	};
}

