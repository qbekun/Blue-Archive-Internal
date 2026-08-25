#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class EventDispatcher; }
namespace UnityEngine::UIElements { class EventDispatcherGate; }

#define UNITYENGINE_UIELEMENTS_EVENTDISPATCHERGATE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA315180)
#define UNITYENGINE_UIELEMENTS_EVENTDISPATCHERGATE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA315210)
#define UNITYENGINE_UIELEMENTS_EVENTDISPATCHERGATE_EQUALS_OFFSET UNITYSDK_OFFSET(0xA315300)
#define UNITYENGINE_UIELEMENTS_EVENTDISPATCHERGATE_EQUALS_OFFSET UNITYSDK_OFFSET(0xA315310)
#define UNITYENGINE_UIELEMENTS_EVENTDISPATCHERGATE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA315390)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int EventDispatcherGate_TypeDefinitionIndex = 30092;

	class EventDispatcherGate : public Il2CppObject
	{
	public:
		::UnityEngine::UIElements::EventDispatcher* m_Dispatcher; // 0x10

		::System::Void .ctor(::UnityEngine::UIElements::EventDispatcher* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::EventDispatcher*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTDISPATCHERGATE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTDISPATCHERGATE_DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::UnityEngine::UIElements::EventDispatcherGate* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::EventDispatcherGate*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTDISPATCHERGATE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTDISPATCHERGATE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTDISPATCHERGATE_GETHASHCODE_OFFSET))(nullptr);
		}

	};
}

