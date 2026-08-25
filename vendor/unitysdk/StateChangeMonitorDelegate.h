#pragma once
#include "unitysdk.h"

namespace UnityEngine::InputSystem { class InputControl; }
namespace UnityEngine::InputSystem::LowLevel { class InputEventPtr; }

#define STATECHANGEMONITORDELEGATE_NOTIFYCONTROLSTATECHANGED_OFFSET UNITYSDK_OFFSET(0x9F61470)
#define STATECHANGEMONITORDELEGATE_NOTIFYTIMEREXPIRED_OFFSET UNITYSDK_OFFSET(0x9F614B0)
#define STATECHANGEMONITORDELEGATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9F61170)

	inline static constexpr unsigned int StateChangeMonitorDelegate_TypeDefinitionIndex = 28815;

	class StateChangeMonitorDelegate : public Il2CppObject
	{
	public:
		Il2CppObject* valueChangeCallback; // 0x10
		Il2CppObject* timerExpiredCallback; // 0x18

		::System::Void NotifyControlStateChanged(::UnityEngine::InputSystem::InputControl* arg, ::System::Double arg, ::UnityEngine::InputSystem::LowLevel::InputEventPtr* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputControl*, ::System::Double, ::UnityEngine::InputSystem::LowLevel::InputEventPtr*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + STATECHANGEMONITORDELEGATE_NOTIFYCONTROLSTATECHANGED_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void NotifyTimerExpired(::UnityEngine::InputSystem::InputControl* arg, ::System::Double arg, ::System::Int64 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::InputControl*, ::System::Double, ::System::Int64, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + STATECHANGEMONITORDELEGATE_NOTIFYTIMEREXPIRED_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATECHANGEMONITORDELEGATE_.CTOR_OFFSET))(nullptr);
		}

	};

