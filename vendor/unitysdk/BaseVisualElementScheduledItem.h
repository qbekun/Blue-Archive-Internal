#pragma once
#include "unitysdk.h"

namespace UnityEngine::UIElements { class VisualElement; }
namespace UnityEngine::UIElements { class VisualElementPanelActivator; }
namespace UnityEngine::UIElements { class IVisualElementScheduledItem; }

#define BASEVISUALELEMENTSCHEDULEDITEM_GET_ELEMENT_OFFSET UNITYSDK_OFFSET(0xA33BF20)
#define BASEVISUALELEMENTSCHEDULEDITEM_SET_ELEMENT_OFFSET UNITYSDK_OFFSET(0xA33BF30)
#define BASEVISUALELEMENTSCHEDULEDITEM_.CTOR_OFFSET UNITYSDK_OFFSET(0xA33BF40)
#define BASEVISUALELEMENTSCHEDULEDITEM_STARTINGIN_OFFSET UNITYSDK_OFFSET(0xA33BFF0)
#define BASEVISUALELEMENTSCHEDULEDITEM_EVERY_OFFSET UNITYSDK_OFFSET(0xA33C000)
#define BASEVISUALELEMENTSCHEDULEDITEM_ONITEMUNSCHEDULED_OFFSET UNITYSDK_OFFSET(0xA33C0B0)
#define BASEVISUALELEMENTSCHEDULEDITEM_RESUME_OFFSET UNITYSDK_OFFSET(0xA3398B0)
#define BASEVISUALELEMENTSCHEDULEDITEM_PAUSE_OFFSET UNITYSDK_OFFSET(0xA33C0F0)
#define BASEVISUALELEMENTSCHEDULEDITEM_EXECUTELATER_OFFSET UNITYSDK_OFFSET(0xA33C120)
#define BASEVISUALELEMENTSCHEDULEDITEM_ONPANELACTIVATE_OFFSET UNITYSDK_OFFSET(0xA33C160)
#define BASEVISUALELEMENTSCHEDULEDITEM_ONPANELDEACTIVATE_OFFSET UNITYSDK_OFFSET(0xA33C250)
#define BASEVISUALELEMENTSCHEDULEDITEM_CANBEACTIVATED_OFFSET UNITYSDK_OFFSET(0xA33C330)

	inline static constexpr unsigned int BaseVisualElementScheduledItem_TypeDefinitionIndex = 30174;

	class BaseVisualElementScheduledItem : public Il2CppObject
	{
	public:
		::UnityEngine::UIElements::VisualElement* _element_k__BackingField; // 0x38
		::System::Boolean isScheduled; // 0x40
		::UnityEngine::UIElements::VisualElementPanelActivator* m_Activator; // 0x48

		::UnityEngine::UIElements::VisualElement* get_element()
		{
			return (return (::UnityEngine::UIElements::VisualElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + BASEVISUALELEMENTSCHEDULEDITEM_GET_ELEMENT_OFFSET))(nullptr);
		}

		::System::Void set_element(::UnityEngine::UIElements::VisualElement* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VisualElement*, ::PVOID))((::PBYTE)hIl2Cpp + BASEVISUALELEMENTSCHEDULEDITEM_SET_ELEMENT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::UnityEngine::UIElements::VisualElement* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VisualElement*, ::PVOID))((::PBYTE)hIl2Cpp + BASEVISUALELEMENTSCHEDULEDITEM_.CTOR_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UIElements::IVisualElementScheduledItem* StartingIn(::System::Int64 arg)
		{
			return (return (::UnityEngine::UIElements::IVisualElementScheduledItem*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + BASEVISUALELEMENTSCHEDULEDITEM_STARTINGIN_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UIElements::IVisualElementScheduledItem* Every(::System::Int64 arg)
		{
			return (return (::UnityEngine::UIElements::IVisualElementScheduledItem*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + BASEVISUALELEMENTSCHEDULEDITEM_EVERY_OFFSET))(arg, nullptr);
		}

		::System::Void OnItemUnscheduled()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BASEVISUALELEMENTSCHEDULEDITEM_ONITEMUNSCHEDULED_OFFSET))(nullptr);
		}

		::System::Void Resume()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BASEVISUALELEMENTSCHEDULEDITEM_RESUME_OFFSET))(nullptr);
		}

		::System::Void Pause()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BASEVISUALELEMENTSCHEDULEDITEM_PAUSE_OFFSET))(nullptr);
		}

		::System::Void ExecuteLater(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + BASEVISUALELEMENTSCHEDULEDITEM_EXECUTELATER_OFFSET))(arg, nullptr);
		}

		::System::Void OnPanelActivate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BASEVISUALELEMENTSCHEDULEDITEM_ONPANELACTIVATE_OFFSET))(nullptr);
		}

		::System::Void OnPanelDeactivate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BASEVISUALELEMENTSCHEDULEDITEM_ONPANELDEACTIVATE_OFFSET))(nullptr);
		}

		::System::Boolean CanBeActivated()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BASEVISUALELEMENTSCHEDULEDITEM_CANBEACTIVATED_OFFSET))(nullptr);
		}

	};

