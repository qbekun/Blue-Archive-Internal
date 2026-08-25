#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::XR { class ConnectionChangeType; }

#define UNITYENGINE_XR_INPUTDEVICES_INVOKECONNECTIONEVENT_OFFSET UNITYSDK_OFFSET(0xA4ABC20)

namespace UnityEngine::XR
{
	inline static constexpr unsigned int InputDevices_TypeDefinitionIndex = 37599;

	class InputDevices : public Il2CppObject
	{
	public:
		Il2CppObject* deviceConnected; // 0x0
		Il2CppObject* deviceDisconnected; // 0x8
		Il2CppObject* deviceConfigChanged; // 0x10

		::System::Void InvokeConnectionEvent(::System::UInt64 arg, ::UnityEngine::XR::ConnectionChangeType* arg)
		{
			((::System::Void(*)(::System::UInt64, ::UnityEngine::XR::ConnectionChangeType*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_INPUTDEVICES_INVOKECONNECTIONEVENT_OFFSET))(arg, arg, nullptr);
		}

	};
}

