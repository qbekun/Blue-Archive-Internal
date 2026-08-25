#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::InputSystem::Controls { class AxisControl; }
namespace UnityEngine::InputSystem { class HumiditySensor; }

#define UNITYENGINE_INPUTSYSTEM_HUMIDITYSENSOR_GET_RELATIVEHUMIDITY_OFFSET UNITYSDK_OFFSET(0x9F01790)
#define UNITYENGINE_INPUTSYSTEM_HUMIDITYSENSOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x9F017A0)
#define UNITYENGINE_INPUTSYSTEM_HUMIDITYSENSOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x9F017E0)
#define UNITYENGINE_INPUTSYSTEM_HUMIDITYSENSOR_MAKECURRENT_OFFSET UNITYSDK_OFFSET(0x9F017F0)
#define UNITYENGINE_INPUTSYSTEM_HUMIDITYSENSOR_SET_RELATIVEHUMIDITY_OFFSET UNITYSDK_OFFSET(0x9F01850)
#define UNITYENGINE_INPUTSYSTEM_HUMIDITYSENSOR_ONREMOVED_OFFSET UNITYSDK_OFFSET(0x9F01870)
#define UNITYENGINE_INPUTSYSTEM_HUMIDITYSENSOR_SET_CURRENT_OFFSET UNITYSDK_OFFSET(0x9F01900)
#define UNITYENGINE_INPUTSYSTEM_HUMIDITYSENSOR_FINISHSETUP_OFFSET UNITYSDK_OFFSET(0x9F01950)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int HumiditySensor_TypeDefinitionIndex = 28532;

	class HumiditySensor : public Il2CppObject
	{
	public:
		::UnityEngine::InputSystem::Controls::AxisControl* _relativeHumidity_k__BackingField; // 0x170
		::UnityEngine::InputSystem::HumiditySensor* _current_k__BackingField; // 0x0

		::UnityEngine::InputSystem::Controls::AxisControl* get_relativeHumidity()
		{
			return (return (::UnityEngine::InputSystem::Controls::AxisControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_HUMIDITYSENSOR_GET_RELATIVEHUMIDITY_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::HumiditySensor* get_current()
		{
			return (return (::UnityEngine::InputSystem::HumiditySensor*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_HUMIDITYSENSOR_GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_HUMIDITYSENSOR_.CTOR_OFFSET))(nullptr);
		}

		::System::Void MakeCurrent()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_HUMIDITYSENSOR_MAKECURRENT_OFFSET))(nullptr);
		}

		::System::Void set_relativeHumidity(::UnityEngine::InputSystem::Controls::AxisControl* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::Controls::AxisControl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_HUMIDITYSENSOR_SET_RELATIVEHUMIDITY_OFFSET))(arg, nullptr);
		}

		::System::Void OnRemoved()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_HUMIDITYSENSOR_ONREMOVED_OFFSET))(nullptr);
		}

		::System::Void set_current(::UnityEngine::InputSystem::HumiditySensor* arg)
		{
			((::System::Void(*)(::UnityEngine::InputSystem::HumiditySensor*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_HUMIDITYSENSOR_SET_CURRENT_OFFSET))(arg, nullptr);
		}

		::System::Void FinishSetup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_HUMIDITYSENSOR_FINISHSETUP_OFFSET))(nullptr);
		}

	};
}

