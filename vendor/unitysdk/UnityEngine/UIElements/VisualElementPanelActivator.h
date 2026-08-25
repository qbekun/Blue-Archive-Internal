#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class IVisualElementPanelActivatable; }
namespace UnityEngine::UIElements { class AttachToPanelEvent; }
namespace UnityEngine::UIElements { class DetachFromPanelEvent; }

#define UNITYENGINE_UIELEMENTS_VISUALELEMENTPANELACTIVATOR_GET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0xA388DA0)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENTPANELACTIVATOR_SET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0xA388DB0)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENTPANELACTIVATOR_GET_ISDETACHING_OFFSET UNITYSDK_OFFSET(0xA388DC0)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENTPANELACTIVATOR_SET_ISDETACHING_OFFSET UNITYSDK_OFFSET(0xA388DD0)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENTPANELACTIVATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0xA388DE0)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENTPANELACTIVATOR_SETACTIVE_OFFSET UNITYSDK_OFFSET(0xA388E10)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENTPANELACTIVATOR_SENDACTIVATION_OFFSET UNITYSDK_OFFSET(0xA3891C0)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENTPANELACTIVATOR_SENDDEACTIVATION_OFFSET UNITYSDK_OFFSET(0xA3892E0)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENTPANELACTIVATOR_ONENTER_OFFSET UNITYSDK_OFFSET(0xA389400)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENTPANELACTIVATOR_ONLEAVE_OFFSET UNITYSDK_OFFSET(0xA389410)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int VisualElementPanelActivator_TypeDefinitionIndex = 30259;

	class VisualElementPanelActivator : public Il2CppObject
	{
	public:
		::UnityEngine::UIElements::IVisualElementPanelActivatable* m_Activatable; // 0x10
		::System::Boolean _isActive_k__BackingField; // 0x18
		::System::Boolean _isDetaching_k__BackingField; // 0x19

		::System::Boolean get_isActive()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENTPANELACTIVATOR_GET_ISACTIVE_OFFSET))(nullptr);
		}

		::System::Void set_isActive(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENTPANELACTIVATOR_SET_ISACTIVE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_isDetaching()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENTPANELACTIVATOR_GET_ISDETACHING_OFFSET))(nullptr);
		}

		::System::Void set_isDetaching(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENTPANELACTIVATOR_SET_ISDETACHING_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::UnityEngine::UIElements::IVisualElementPanelActivatable* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::IVisualElementPanelActivatable*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENTPANELACTIVATOR_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void SetActive(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENTPANELACTIVATOR_SETACTIVE_OFFSET))(arg, nullptr);
		}

		::System::Void SendActivation()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENTPANELACTIVATOR_SENDACTIVATION_OFFSET))(nullptr);
		}

		::System::Void SendDeactivation()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENTPANELACTIVATOR_SENDDEACTIVATION_OFFSET))(nullptr);
		}

		::System::Void OnEnter(::UnityEngine::UIElements::AttachToPanelEvent* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::AttachToPanelEvent*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENTPANELACTIVATOR_ONENTER_OFFSET))(arg, nullptr);
		}

		::System::Void OnLeave(::UnityEngine::UIElements::DetachFromPanelEvent* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::DetachFromPanelEvent*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENTPANELACTIVATOR_ONLEAVE_OFFSET))(arg, nullptr);
		}

	};
}

