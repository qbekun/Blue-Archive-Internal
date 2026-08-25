#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::InputSystem::LowLevel { class InputEvent; }
namespace UnityEngine::InputSystem::LowLevel { class InputEventPtr; }
namespace UnityEngine::InputSystem::LowLevel { class DeviceRemoveEvent; }
namespace UnityEngine::InputSystem::Utilities { class FourCC; }

#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_DEVICEREMOVEEVENT_TOEVENTPTR_OFFSET UNITYSDK_OFFSET(0x9F57990)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_DEVICEREMOVEEVENT_CREATE_OFFSET UNITYSDK_OFFSET(0x9F579A0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_DEVICEREMOVEEVENT_GET_TYPESTATIC_OFFSET UNITYSDK_OFFSET(0x9F579F0)

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int DeviceRemoveEvent_TypeDefinitionIndex = 28774;

	class DeviceRemoveEvent : public Il2CppObject
	{
	public:
		::System::Int32 Type; // 0x0
		::UnityEngine::InputSystem::LowLevel::InputEvent* baseEvent; // 0x10

		::UnityEngine::InputSystem::LowLevel::InputEventPtr* ToEventPtr()
		{
			return (return (::UnityEngine::InputSystem::LowLevel::InputEventPtr*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_DEVICEREMOVEEVENT_TOEVENTPTR_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::LowLevel::DeviceRemoveEvent* Create(::System::Int32 arg, ::System::Double arg)
		{
			return (return (::UnityEngine::InputSystem::LowLevel::DeviceRemoveEvent*(*)(::System::Int32, ::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_DEVICEREMOVEEVENT_CREATE_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::InputSystem::Utilities::FourCC* get_typeStatic()
		{
			return (return (::UnityEngine::InputSystem::Utilities::FourCC*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_DEVICEREMOVEEVENT_GET_TYPESTATIC_OFFSET))(nullptr);
		}

	};
}

