#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::InputSystem::LowLevel { class InputEvent; }
namespace UnityEngine::InputSystem::LowLevel { class DeviceResetEvent; }
namespace UnityEngine::InputSystem::Utilities { class FourCC; }

#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_DEVICERESETEVENT_CREATE_OFFSET UNITYSDK_OFFSET(0x9F57A00)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_DEVICERESETEVENT_GET_TYPESTATIC_OFFSET UNITYSDK_OFFSET(0x9F57A60)

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int DeviceResetEvent_TypeDefinitionIndex = 28775;

	class DeviceResetEvent : public Il2CppObject
	{
	public:
		::System::Int32 Type; // 0x0
		::UnityEngine::InputSystem::LowLevel::InputEvent* baseEvent; // 0x10
		::System::Boolean hardReset; // 0x18

		::UnityEngine::InputSystem::LowLevel::DeviceResetEvent* Create(::System::Int32 arg, ::System::Boolean arg, ::System::Double arg)
		{
			return (return (::UnityEngine::InputSystem::LowLevel::DeviceResetEvent*(*)(::System::Int32, ::System::Boolean, ::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_DEVICERESETEVENT_CREATE_OFFSET))(arg, arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::Utilities::FourCC* get_typeStatic()
		{
			return (return (::UnityEngine::InputSystem::Utilities::FourCC*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_DEVICERESETEVENT_GET_TYPESTATIC_OFFSET))(nullptr);
		}

	};
}

