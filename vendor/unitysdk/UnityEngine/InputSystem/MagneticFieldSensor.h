#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::InputSystem::Controls { class Vector3Control; }
namespace UnityEngine::InputSystem { class MagneticFieldSensor; }

#define UNITYENGINE_INPUTSYSTEM_MAGNETICFIELDSENSOR_SET_CURRENT_OFFSET UNITYSDK_OFFSET(0x9F00ED0)
#define UNITYENGINE_INPUTSYSTEM_MAGNETICFIELDSENSOR_ONREMOVED_OFFSET UNITYSDK_OFFSET(0x9F00F20)
#define UNITYENGINE_INPUTSYSTEM_MAGNETICFIELDSENSOR_FINISHSETUP_OFFSET UNITYSDK_OFFSET(0x9F00FB0)
#define UNITYENGINE_INPUTSYSTEM_MAGNETICFIELDSENSOR_MAKECURRENT_OFFSET UNITYSDK_OFFSET(0x9F01020)
#define UNITYENGINE_INPUTSYSTEM_MAGNETICFIELDSENSOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x9F01080)
#define UNITYENGINE_INPUTSYSTEM_MAGNETICFIELDSENSOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x9F010C0)
#define UNITYENGINE_INPUTSYSTEM_MAGNETICFIELDSENSOR_SET_MAGNETICFIELD_OFFSET UNITYSDK_OFFSET(0x9F010D0)
#define UNITYENGINE_INPUTSYSTEM_MAGNETICFIELDSENSOR_GET_MAGNETICFIELD_OFFSET UNITYSDK_OFFSET(0x9F010F0)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int MagneticFieldSensor_TypeDefinitionIndex = 28528;

	class MagneticFieldSensor : public Il2CppObject
	{
	public:
		::UnityEngine::InputSystem::Controls::Vector3Control* _magneticField_k__BackingField; // 0x170
		::UnityEngine::InputSystem::MagneticFieldSensor* _current_k__BackingField; // 0x0

		::System::Void set_current(::UnityEngine::InputSystem::MagneticFieldSensor* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::MagneticFieldSensor*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_MAGNETICFIELDSENSOR_SET_CURRENT_OFFSET))(arg, nullptr);
		}

		::System::Void OnRemoved()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_MAGNETICFIELDSENSOR_ONREMOVED_OFFSET))(nullptr);
		}

		::System::Void FinishSetup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_MAGNETICFIELDSENSOR_FINISHSETUP_OFFSET))(nullptr);
		}

		::System::Void MakeCurrent()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_MAGNETICFIELDSENSOR_MAKECURRENT_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::MagneticFieldSensor* get_current()
		{
			return (return (::UnityEngine::InputSystem::MagneticFieldSensor*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_MAGNETICFIELDSENSOR_GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_MAGNETICFIELDSENSOR_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_magneticField(::UnityEngine::InputSystem::Controls::Vector3Control* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::Vector3Control*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_MAGNETICFIELDSENSOR_SET_MAGNETICFIELD_OFFSET))(arg, nullptr);
		}

		::UnityEngine::InputSystem::Controls::Vector3Control* get_magneticField()
		{
			return (return (::UnityEngine::InputSystem::Controls::Vector3Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_MAGNETICFIELDSENSOR_GET_MAGNETICFIELD_OFFSET))(nullptr);
		}

	};
}

