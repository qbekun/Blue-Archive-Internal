#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class BaseVisualElementPanel; }
namespace UnityEngine::UIElements::UIR { class RenderChain; }
namespace Unity::Profiling { class ProfilerMarker; }
namespace UnityEngine::UIElements { class VisualElement; }
namespace UnityEngine::UIElements { class VersionChangeType; }
namespace UnityEngine::UIElements { class HierarchyChangeType; }

#define UNITYENGINE_UIELEMENTS_UIRREPAINTUPDATER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA40BD40)
#define UNITYENGINE_UIELEMENTS_UIRREPAINTUPDATER_GET_PROFILERMARKER_OFFSET UNITYSDK_OFFSET(0xA40BDC0)
#define UNITYENGINE_UIELEMENTS_UIRREPAINTUPDATER_GET_DRAWSTATS_OFFSET UNITYSDK_OFFSET(0xA40BE10)
#define UNITYENGINE_UIELEMENTS_UIRREPAINTUPDATER_GET_BREAKBATCHES_OFFSET UNITYSDK_OFFSET(0xA40BE20)
#define UNITYENGINE_UIELEMENTS_UIRREPAINTUPDATER_ONVERSIONCHANGED_OFFSET UNITYSDK_OFFSET(0xA40BE30)
#define UNITYENGINE_UIELEMENTS_UIRREPAINTUPDATER_UPDATE_OFFSET UNITYSDK_OFFSET(0xA40BF60)
#define UNITYENGINE_UIELEMENTS_UIRREPAINTUPDATER_CREATERENDERCHAIN_OFFSET UNITYSDK_OFFSET(0xA40C130)
#define UNITYENGINE_UIELEMENTS_UIRREPAINTUPDATER_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA40C1A0)
#define UNITYENGINE_UIELEMENTS_UIRREPAINTUPDATER_ONGRAPHICSRESOURCESRECREATE_OFFSET UNITYSDK_OFFSET(0xA40C2B0)
#define UNITYENGINE_UIELEMENTS_UIRREPAINTUPDATER_ONPANELCHANGED_OFFSET UNITYSDK_OFFSET(0xA40C5C0)
#define UNITYENGINE_UIELEMENTS_UIRREPAINTUPDATER_ATTACHTOPANEL_OFFSET UNITYSDK_OFFSET(0xA40C800)
#define UNITYENGINE_UIELEMENTS_UIRREPAINTUPDATER_DETACHFROMPANEL_OFFSET UNITYSDK_OFFSET(0xA40C5E0)
#define UNITYENGINE_UIELEMENTS_UIRREPAINTUPDATER_INITRENDERCHAIN_OFFSET UNITYSDK_OFFSET(0xA40C060)
#define UNITYENGINE_UIELEMENTS_UIRREPAINTUPDATER_DESTROYRENDERCHAIN_OFFSET UNITYSDK_OFFSET(0xA40C540)
#define UNITYENGINE_UIELEMENTS_UIRREPAINTUPDATER_ONPANELATLASCHANGED_OFFSET UNITYSDK_OFFSET(0xA40CDB0)
#define UNITYENGINE_UIELEMENTS_UIRREPAINTUPDATER_ONPANELHIERARCHYCHANGED_OFFSET UNITYSDK_OFFSET(0xA40CE30)
#define UNITYENGINE_UIELEMENTS_UIRREPAINTUPDATER_ONPANELSTANDARDSHADERCHANGED_OFFSET UNITYSDK_OFFSET(0xA40CA00)
#define UNITYENGINE_UIELEMENTS_UIRREPAINTUPDATER_ONPANELSTANDARDWORLDSPACESHADERCHANGED_OFFSET UNITYSDK_OFFSET(0xA40CB90)
#define UNITYENGINE_UIELEMENTS_UIRREPAINTUPDATER_RESETALLELEMENTSDATARECURSIVE_OFFSET UNITYSDK_OFFSET(0xA40CD20)
#define UNITYENGINE_UIELEMENTS_UIRREPAINTUPDATER_GET_DISPOSED_OFFSET UNITYSDK_OFFSET(0xA40CEA0)
#define UNITYENGINE_UIELEMENTS_UIRREPAINTUPDATER_SET_DISPOSED_OFFSET UNITYSDK_OFFSET(0xA40CEB0)
#define UNITYENGINE_UIELEMENTS_UIRREPAINTUPDATER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA40CEC0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int UIRRepaintUpdater_TypeDefinitionIndex = 30584;

	class UIRRepaintUpdater : public ::UnityEngine::AI::NavMeshLink
	{
	public:
		::UnityEngine::UIElements::BaseVisualElementPanel* attachedPanel; // 0x20
		::UnityEngine::UIElements::UIR::RenderChain* renderChain; // 0x28
		::System::String* s_Description; // 0x0
		::Unity::Profiling::ProfilerMarker* s_ProfilerMarker; // 0x8
		::System::Boolean _drawStats_k__BackingField; // 0x30
		::System::Boolean _breakBatches_k__BackingField; // 0x31
		::System::Boolean _disposed_k__BackingField; // 0x32

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIRREPAINTUPDATER_.CTOR_OFFSET))(nullptr);
		}

		::Unity::Profiling::ProfilerMarker* get_profilerMarker()
		{
			return (return (::Unity::Profiling::ProfilerMarker*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIRREPAINTUPDATER_GET_PROFILERMARKER_OFFSET))(nullptr);
		}

		::System::Boolean get_drawStats()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIRREPAINTUPDATER_GET_DRAWSTATS_OFFSET))(nullptr);
		}

		::System::Boolean get_breakBatches()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIRREPAINTUPDATER_GET_BREAKBATCHES_OFFSET))(nullptr);
		}

		::System::Void OnVersionChanged(::UnityEngine::UIElements::VisualElement* arg, ::UnityEngine::UIElements::VersionChangeType* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::VersionChangeType*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIRREPAINTUPDATER_ONVERSIONCHANGED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIRREPAINTUPDATER_UPDATE_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::UIR::RenderChain* CreateRenderChain()
		{
			return (return (::UnityEngine::UIElements::UIR::RenderChain*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIRREPAINTUPDATER_CREATERENDERCHAIN_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIRREPAINTUPDATER_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void OnGraphicsResourcesRecreate(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIRREPAINTUPDATER_ONGRAPHICSRESOURCESRECREATE_OFFSET))(arg, nullptr);
		}

		::System::Void OnPanelChanged(::UnityEngine::UIElements::BaseVisualElementPanel* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::BaseVisualElementPanel*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIRREPAINTUPDATER_ONPANELCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void AttachToPanel()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIRREPAINTUPDATER_ATTACHTOPANEL_OFFSET))(nullptr);
		}

		::System::Void DetachFromPanel()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIRREPAINTUPDATER_DETACHFROMPANEL_OFFSET))(nullptr);
		}

		::System::Void InitRenderChain()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIRREPAINTUPDATER_INITRENDERCHAIN_OFFSET))(nullptr);
		}

		::System::Void DestroyRenderChain()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIRREPAINTUPDATER_DESTROYRENDERCHAIN_OFFSET))(nullptr);
		}

		::System::Void OnPanelAtlasChanged()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIRREPAINTUPDATER_ONPANELATLASCHANGED_OFFSET))(nullptr);
		}

		::System::Void OnPanelHierarchyChanged(::UnityEngine::UIElements::VisualElement* arg, ::UnityEngine::UIElements::HierarchyChangeType* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::HierarchyChangeType*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIRREPAINTUPDATER_ONPANELHIERARCHYCHANGED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void OnPanelStandardShaderChanged()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIRREPAINTUPDATER_ONPANELSTANDARDSHADERCHANGED_OFFSET))(nullptr);
		}

		::System::Void OnPanelStandardWorldSpaceShaderChanged()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIRREPAINTUPDATER_ONPANELSTANDARDWORLDSPACESHADERCHANGED_OFFSET))(nullptr);
		}

		::System::Void ResetAllElementsDataRecursive(::UnityEngine::UIElements::VisualElement* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VisualElement*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIRREPAINTUPDATER_RESETALLELEMENTSDATARECURSIVE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_disposed()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIRREPAINTUPDATER_GET_DISPOSED_OFFSET))(nullptr);
		}

		::System::Void set_disposed(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIRREPAINTUPDATER_SET_DISPOSED_OFFSET))(arg, nullptr);
		}

		::System::Void Dispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIRREPAINTUPDATER_DISPOSE_OFFSET))(arg, nullptr);
		}

	};
}

