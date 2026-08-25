#pragma once
#include "unitysdk.h"

namespace UnityEngine::UIElements { class IPanel; }

#define TRANSITIONEVENTSFRAMESTATE_GETPOOLEDQUEUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define TRANSITIONEVENTSFRAMESTATE_REGISTERCHANGE_OFFSET UNITYSDK_OFFSET(0x000000)
#define TRANSITIONEVENTSFRAMESTATE_UNREGISTERCHANGE_OFFSET UNITYSDK_OFFSET(0x000000)
#define TRANSITIONEVENTSFRAMESTATE_STATECHANGED_OFFSET UNITYSDK_OFFSET(0x000000)
#define TRANSITIONEVENTSFRAMESTATE_CLEAR_OFFSET UNITYSDK_OFFSET(0x000000)
#define TRANSITIONEVENTSFRAMESTATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define TRANSITIONEVENTSFRAMESTATE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int TransitionEventsFrameState_TypeDefinitionIndex = 30189;

	class TransitionEventsFrameState : public Il2CppObject
	{
	public:
		Il2CppObject* k_EventQueuePool; // 0x0
		Il2CppObject* elementPropertyStateDelta; // 0x0
		Il2CppObject* elementPropertyQueuedEvents; // 0x0
		::UnityEngine::UIElements::IPanel* panel; // 0x0
		::System::Int32 m_ChangesCount; // 0x0

		Il2CppObject* GetPooledQueue()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + TRANSITIONEVENTSFRAMESTATE_GETPOOLEDQUEUE_OFFSET))(nullptr);
		}

		::System::Void RegisterChange()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TRANSITIONEVENTSFRAMESTATE_REGISTERCHANGE_OFFSET))(nullptr);
		}

		::System::Void UnregisterChange()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TRANSITIONEVENTSFRAMESTATE_UNREGISTERCHANGE_OFFSET))(nullptr);
		}

		::System::Boolean StateChanged()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TRANSITIONEVENTSFRAMESTATE_STATECHANGED_OFFSET))(nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TRANSITIONEVENTSFRAMESTATE_CLEAR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TRANSITIONEVENTSFRAMESTATE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TRANSITIONEVENTSFRAMESTATE_.CCTOR_OFFSET))(nullptr);
		}

	};

