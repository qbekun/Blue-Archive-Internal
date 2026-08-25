#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class VisualElement; }

#define UNITYENGINE_UIELEMENTS_REUSABLELISTVIEWITEM_GET_ROOTELEMENT_OFFSET UNITYSDK_OFFSET(0xA397450)
#define UNITYENGINE_UIELEMENTS_REUSABLELISTVIEWITEM_INIT_OFFSET UNITYSDK_OFFSET(0xA397460)
#define UNITYENGINE_UIELEMENTS_REUSABLELISTVIEWITEM_UPDATEHIERARCHY_OFFSET UNITYSDK_OFFSET(0xA397490)
#define UNITYENGINE_UIELEMENTS_REUSABLELISTVIEWITEM_UPDATEDRAGHANDLE_OFFSET UNITYSDK_OFFSET(0xA3977E0)
#define UNITYENGINE_UIELEMENTS_REUSABLELISTVIEWITEM_PREATTACHELEMENT_OFFSET UNITYSDK_OFFSET(0xA397940)
#define UNITYENGINE_UIELEMENTS_REUSABLELISTVIEWITEM_DETACHELEMENT_OFFSET UNITYSDK_OFFSET(0xA3979D0)
#define UNITYENGINE_UIELEMENTS_REUSABLELISTVIEWITEM_SETDRAGGHOST_OFFSET UNITYSDK_OFFSET(0xA397A60)
#define UNITYENGINE_UIELEMENTS_REUSABLELISTVIEWITEM_.CTOR_OFFSET UNITYSDK_OFFSET(0xA397B60)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int ReusableListViewItem_TypeDefinitionIndex = 30290;

	class ReusableListViewItem : public Il2CppObject
	{
	public:
		::UnityEngine::UIElements::VisualElement* m_Container; // 0x40
		::UnityEngine::UIElements::VisualElement* m_DragHandle; // 0x48
		::UnityEngine::UIElements::VisualElement* m_ItemContainer; // 0x50

		::UnityEngine::UIElements::VisualElement* get_rootElement()
		{
			return (return (::UnityEngine::UIElements::VisualElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_REUSABLELISTVIEWITEM_GET_ROOTELEMENT_OFFSET))(nullptr);
		}

		::System::Void Init(::UnityEngine::UIElements::VisualElement* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VisualElement*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_REUSABLELISTVIEWITEM_INIT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void UpdateHierarchy(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_REUSABLELISTVIEWITEM_UPDATEHIERARCHY_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateDragHandle(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_REUSABLELISTVIEWITEM_UPDATEDRAGHANDLE_OFFSET))(arg, nullptr);
		}

		::System::Void PreAttachElement()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_REUSABLELISTVIEWITEM_PREATTACHELEMENT_OFFSET))(nullptr);
		}

		::System::Void DetachElement()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_REUSABLELISTVIEWITEM_DETACHELEMENT_OFFSET))(nullptr);
		}

		::System::Void SetDragGhost(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_REUSABLELISTVIEWITEM_SETDRAGGHOST_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_REUSABLELISTVIEWITEM_.CTOR_OFFSET))(nullptr);
		}

	};
}

