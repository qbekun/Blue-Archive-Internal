#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::InputSystem::LowLevel { class InputEvent; }
namespace UnityEngine::InputSystem::Utilities { class FourCC; }
namespace UnityEngine::InputSystem::LowLevel { class DeviceConfigurationEvent; }
namespace UnityEngine::InputSystem::LowLevel { class InputEventPtr; }

#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_DEVICECONFIGURATIONEVENT_GET_TYPESTATIC_OFFSET UNITYSDK_OFFSET(0x9F57920)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_DEVICECONFIGURATIONEVENT_CREATE_OFFSET UNITYSDK_OFFSET(0x9F57930)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_DEVICECONFIGURATIONEVENT_TOEVENTPTR_OFFSET UNITYSDK_OFFSET(0x9F57980)

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int DeviceConfigurationEvent_TypeDefinitionIndex = 28773;

	class DeviceConfigurationEvent : public Il2CppObject
	{
	public:
		::System::Int32 Type; // 0x0
		::UnityEngine::InputSystem::LowLevel::InputEvent* baseEvent; // 0x10

		::UnityEngine::InputSystem::Utilities::FourCC* get_typeStatic()
		{
			return (return (::UnityEngine::InputSystem::Utilities::FourCC*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_DEVICECONFIGURATIONEVENT_GET_TYPESTATIC_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::LowLevel::DeviceConfigurationEvent* Create(::System::Int32 arg, ::System::Double arg)
		{
			return (return (::UnityEngine::InputSystem::LowLevel::DeviceConfigurationEvent*(*)(::System::Int32, ::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_DEVICECONFIGURATIONEVENT_CREATE_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::LowLevel::InputEventPtr* ToEventPtr()
		{
			return (return (::UnityEngine::InputSystem::LowLevel::InputEventPtr*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_DEVICECONFIGURATIONEVENT_TOEVENTPTR_OFFSET))(nullptr);
		}

	};
}

