#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class TimerState; }

#define UNITYENGINE_UIELEMENTS_TIMERSTATE_GET_START_OFFSET UNITYSDK_OFFSET(0xA3258F0)
#define UNITYENGINE_UIELEMENTS_TIMERSTATE_SET_START_OFFSET UNITYSDK_OFFSET(0xA325900)
#define UNITYENGINE_UIELEMENTS_TIMERSTATE_GET_NOW_OFFSET UNITYSDK_OFFSET(0xA325910)
#define UNITYENGINE_UIELEMENTS_TIMERSTATE_SET_NOW_OFFSET UNITYSDK_OFFSET(0xA325920)
#define UNITYENGINE_UIELEMENTS_TIMERSTATE_GET_DELTATIME_OFFSET UNITYSDK_OFFSET(0xA325930)
#define UNITYENGINE_UIELEMENTS_TIMERSTATE_EQUALS_OFFSET UNITYSDK_OFFSET(0xA325940)
#define UNITYENGINE_UIELEMENTS_TIMERSTATE_EQUALS_OFFSET UNITYSDK_OFFSET(0xA3259C0)
#define UNITYENGINE_UIELEMENTS_TIMERSTATE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA3259E0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int TimerState_TypeDefinitionIndex = 30147;

	class TimerState : public Il2CppObject
	{
	public:
		::System::Int64 _start_k__BackingField; // 0x10
		::System::Int64 _now_k__BackingField; // 0x18

		::System::Int64 get_start()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TIMERSTATE_GET_START_OFFSET))(nullptr);
		}

		::System::Void set_start(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TIMERSTATE_SET_START_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_now()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TIMERSTATE_GET_NOW_OFFSET))(nullptr);
		}

		::System::Void set_now(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TIMERSTATE_SET_NOW_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_deltaTime()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TIMERSTATE_GET_DELTATIME_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TIMERSTATE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::UnityEngine::UIElements::TimerState* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::TimerState*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TIMERSTATE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TIMERSTATE_GETHASHCODE_OFFSET))(nullptr);
		}

	};
}

