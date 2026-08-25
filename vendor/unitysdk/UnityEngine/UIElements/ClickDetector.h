#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class EventBase; }
namespace UnityEngine::UIElements { class VisualElement; }
namespace UnityEngine { class Vector2; }

#define UNITYENGINE_UIELEMENTS_CLICKDETECTOR_GET_S_DOUBLECLICKTIME_OFFSET UNITYSDK_OFFSET(0xA310650)
#define UNITYENGINE_UIELEMENTS_CLICKDETECTOR_SET_S_DOUBLECLICKTIME_OFFSET UNITYSDK_OFFSET(0xA3106A0)
#define UNITYENGINE_UIELEMENTS_CLICKDETECTOR_.CTOR_OFFSET UNITYSDK_OFFSET(0xA3106F0)
#define UNITYENGINE_UIELEMENTS_CLICKDETECTOR_STARTCLICKTRACKING_OFFSET UNITYSDK_OFFSET(0xA3109C0)
#define UNITYENGINE_UIELEMENTS_CLICKDETECTOR_SENDCLICKEVENT_OFFSET UNITYSDK_OFFSET(0xA310D40)
#define UNITYENGINE_UIELEMENTS_CLICKDETECTOR_CANCELCLICKTRACKING_OFFSET UNITYSDK_OFFSET(0xA311270)
#define UNITYENGINE_UIELEMENTS_CLICKDETECTOR_PROCESSEVENT_OFFSET UNITYSDK_OFFSET(0xA3113D0)
#define UNITYENGINE_UIELEMENTS_CLICKDETECTOR_CONTAINSPOINTER_OFFSET UNITYSDK_OFFSET(0xA311140)
#define UNITYENGINE_UIELEMENTS_CLICKDETECTOR_CLEANUP_OFFSET UNITYSDK_OFFSET(0xA3118B0)
#define UNITYENGINE_UIELEMENTS_CLICKDETECTOR_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA311AC0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int ClickDetector_TypeDefinitionIndex = 30072;

	class ClickDetector : public Il2CppObject
	{
	public:
		Il2CppObject* m_ClickStatus; // 0x10
		::System::Int32 _s_DoubleClickTime_k__BackingField; // 0x0

		::System::Int32 get_s_DoubleClickTime()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_CLICKDETECTOR_GET_S_DOUBLECLICKTIME_OFFSET))(nullptr);
		}

		::System::Void set_s_DoubleClickTime(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_CLICKDETECTOR_SET_S_DOUBLECLICKTIME_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_CLICKDETECTOR_.CTOR_OFFSET))(nullptr);
		}

		::System::Void StartClickTracking(::UnityEngine::UIElements::EventBase* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::EventBase*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_CLICKDETECTOR_STARTCLICKTRACKING_OFFSET))(arg, nullptr);
		}

		::System::Void SendClickEvent(::UnityEngine::UIElements::EventBase* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::EventBase*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_CLICKDETECTOR_SENDCLICKEVENT_OFFSET))(arg, nullptr);
		}

		::System::Void CancelClickTracking(::UnityEngine::UIElements::EventBase* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::EventBase*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_CLICKDETECTOR_CANCELCLICKTRACKING_OFFSET))(arg, nullptr);
		}

		::System::Void ProcessEvent(::UnityEngine::UIElements::EventBase* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::EventBase*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_CLICKDETECTOR_PROCESSEVENT_OFFSET))(arg, nullptr);
		}

		::System::Boolean ContainsPointer(::UnityEngine::UIElements::VisualElement* arg, ::UnityEngine::Vector2* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_CLICKDETECTOR_CONTAINSPOINTER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cleanup(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_CLICKDETECTOR_CLEANUP_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_CLICKDETECTOR_.CCTOR_OFFSET))(nullptr);
		}

	};
}

