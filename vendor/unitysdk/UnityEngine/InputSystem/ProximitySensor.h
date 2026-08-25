#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::InputSystem::Controls { class AxisControl; }
namespace UnityEngine::InputSystem { class ProximitySensor; }

#define UNITYENGINE_INPUTSYSTEM_PROXIMITYSENSOR_GET_DISTANCE_OFFSET UNITYSDK_OFFSET(0x9F01560)
#define UNITYENGINE_INPUTSYSTEM_PROXIMITYSENSOR_SET_CURRENT_OFFSET UNITYSDK_OFFSET(0x9F01570)
#define UNITYENGINE_INPUTSYSTEM_PROXIMITYSENSOR_MAKECURRENT_OFFSET UNITYSDK_OFFSET(0x9F015C0)
#define UNITYENGINE_INPUTSYSTEM_PROXIMITYSENSOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x9F01620)
#define UNITYENGINE_INPUTSYSTEM_PROXIMITYSENSOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x9F01630)
#define UNITYENGINE_INPUTSYSTEM_PROXIMITYSENSOR_SET_DISTANCE_OFFSET UNITYSDK_OFFSET(0x9F01670)
#define UNITYENGINE_INPUTSYSTEM_PROXIMITYSENSOR_ONREMOVED_OFFSET UNITYSDK_OFFSET(0x9F01690)
#define UNITYENGINE_INPUTSYSTEM_PROXIMITYSENSOR_FINISHSETUP_OFFSET UNITYSDK_OFFSET(0x9F01720)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int ProximitySensor_TypeDefinitionIndex = 28531;

	class ProximitySensor : public Il2CppObject
	{
	public:
		::UnityEngine::InputSystem::Controls::AxisControl* _distance_k__BackingField; // 0x170
		::UnityEngine::InputSystem::ProximitySensor* _current_k__BackingField; // 0x0

		::UnityEngine::InputSystem::Controls::AxisControl* get_distance()
		{
			return (return (::UnityEngine::InputSystem::Controls::AxisControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PROXIMITYSENSOR_GET_DISTANCE_OFFSET))(nullptr);
		}

		::System::Void set_current(::UnityEngine::InputSystem::ProximitySensor* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::ProximitySensor*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PROXIMITYSENSOR_SET_CURRENT_OFFSET))(arg, nullptr);
		}

		::System::Void MakeCurrent()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PROXIMITYSENSOR_MAKECURRENT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PROXIMITYSENSOR_.CTOR_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::ProximitySensor* get_current()
		{
			return (return (::UnityEngine::InputSystem::ProximitySensor*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PROXIMITYSENSOR_GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void set_distance(::UnityEngine::InputSystem::Controls::AxisControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::AxisControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PROXIMITYSENSOR_SET_DISTANCE_OFFSET))(arg, nullptr);
		}

		::System::Void OnRemoved()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PROXIMITYSENSOR_ONREMOVED_OFFSET))(nullptr);
		}

		::System::Void FinishSetup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PROXIMITYSENSOR_FINISHSETUP_OFFSET))(nullptr);
		}

	};
}

