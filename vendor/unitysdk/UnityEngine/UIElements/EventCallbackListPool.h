#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class EventCallbackList; }

#define UNITYENGINE_UIELEMENTS_EVENTCALLBACKLISTPOOL_GET_OFFSET UNITYSDK_OFFSET(0xA3DF9A0)
#define UNITYENGINE_UIELEMENTS_EVENTCALLBACKLISTPOOL_RELEASE_OFFSET UNITYSDK_OFFSET(0xA3DFD50)
#define UNITYENGINE_UIELEMENTS_EVENTCALLBACKLISTPOOL_.CTOR_OFFSET UNITYSDK_OFFSET(0xA3DFE60)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int EventCallbackListPool_TypeDefinitionIndex = 30468;

	class EventCallbackListPool : public Il2CppObject
	{
	public:
		Il2CppObject* m_Stack; // 0x10

		::UnityEngine::UIElements::EventCallbackList* Get(::UnityEngine::UIElements::EventCallbackList* arg)
		{
			return (return (::UnityEngine::UIElements::EventCallbackList*(*)(::UnityEngine::UIElements::EventCallbackList*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTCALLBACKLISTPOOL_GET_OFFSET))(arg, nullptr);
		}

		::System::Void Release(::UnityEngine::UIElements::EventCallbackList* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::EventCallbackList*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTCALLBACKLISTPOOL_RELEASE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTCALLBACKLISTPOOL_.CTOR_OFFSET))(nullptr);
		}

	};
}

