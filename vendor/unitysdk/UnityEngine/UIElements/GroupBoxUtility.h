#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class AttachToPanelEvent; }
namespace UnityEngine::UIElements { class DetachFromPanelEvent; }
namespace UnityEngine::UIElements { class IGroupManager; }
namespace UnityEngine::UIElements { class IGroupBox; }
namespace UnityEngine::UIElements { class BaseVisualElementPanel; }

#define UNITYENGINE_UIELEMENTS_GROUPBOXUTILITY_REGISTERGROUPBOXOPTIONCALLBACKS_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_GROUPBOXUTILITY_ONOPTIONSELECTED_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_GROUPBOXUTILITY_ONOPTIONATTACHTOPANEL_OFFSET UNITYSDK_OFFSET(0xA3191C0)
#define UNITYENGINE_UIELEMENTS_GROUPBOXUTILITY_ONOPTIONDETACHFROMPANEL_OFFSET UNITYSDK_OFFSET(0xA3198C0)
#define UNITYENGINE_UIELEMENTS_GROUPBOXUTILITY_FINDORCREATEGROUPMANAGER_OFFSET UNITYSDK_OFFSET(0xA319420)
#define UNITYENGINE_UIELEMENTS_GROUPBOXUTILITY_ONGROUPBOXDETACHEDFROMPANEL_OFFSET UNITYSDK_OFFSET(0xA319BB0)
#define UNITYENGINE_UIELEMENTS_GROUPBOXUTILITY_ONPANELDESTROYED_OFFSET UNITYSDK_OFFSET(0xA319C80)
#define UNITYENGINE_UIELEMENTS_GROUPBOXUTILITY_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA319EA0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int GroupBoxUtility_TypeDefinitionIndex = 30101;

	class GroupBoxUtility : public Il2CppObject
	{
	public:
		Il2CppObject* s_GroupManagers; // 0x0
		Il2CppObject* s_GroupOptionManagerCache; // 0x8
		::System::Type* k_GenericGroupBoxType; // 0x10

		::System::Void RegisterGroupBoxOptionCallbacks(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_GROUPBOXUTILITY_REGISTERGROUPBOXOPTIONCALLBACKS_OFFSET))(arg, nullptr);
		}

		::System::Void OnOptionSelected(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_GROUPBOXUTILITY_ONOPTIONSELECTED_OFFSET))(arg, nullptr);
		}

		::System::Void OnOptionAttachToPanel(::UnityEngine::UIElements::AttachToPanelEvent* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::AttachToPanelEvent*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_GROUPBOXUTILITY_ONOPTIONATTACHTOPANEL_OFFSET))(arg, nullptr);
		}

		::System::Void OnOptionDetachFromPanel(::UnityEngine::UIElements::DetachFromPanelEvent* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::DetachFromPanelEvent*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_GROUPBOXUTILITY_ONOPTIONDETACHFROMPANEL_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UIElements::IGroupManager* FindOrCreateGroupManager(::UnityEngine::UIElements::IGroupBox* arg)
		{
			return (return (::UnityEngine::UIElements::IGroupManager*(*)(::UnityEngine::UIElements::IGroupBox*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_GROUPBOXUTILITY_FINDORCREATEGROUPMANAGER_OFFSET))(arg, nullptr);
		}

		::System::Void OnGroupBoxDetachedFromPanel(::UnityEngine::UIElements::DetachFromPanelEvent* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::DetachFromPanelEvent*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_GROUPBOXUTILITY_ONGROUPBOXDETACHEDFROMPANEL_OFFSET))(arg, nullptr);
		}

		::System::Void OnPanelDestroyed(::UnityEngine::UIElements::BaseVisualElementPanel* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::BaseVisualElementPanel*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_GROUPBOXUTILITY_ONPANELDESTROYED_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_GROUPBOXUTILITY_.CCTOR_OFFSET))(nullptr);
		}

	};
}

