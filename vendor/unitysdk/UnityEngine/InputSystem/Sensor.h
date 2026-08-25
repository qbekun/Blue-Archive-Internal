#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_INPUTSYSTEM_SENSOR_GET_SAMPLINGFREQUENCY_OFFSET UNITYSDK_OFFSET(0x9F00290)
#define UNITYENGINE_INPUTSYSTEM_SENSOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x9F00360)
#define UNITYENGINE_INPUTSYSTEM_SENSOR_SET_SAMPLINGFREQUENCY_OFFSET UNITYSDK_OFFSET(0x9F00370)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int Sensor_TypeDefinitionIndex = 28522;

	class Sensor : public Il2CppObject
	{
	public:
		::System::Single get_samplingFrequency()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_SENSOR_GET_SAMPLINGFREQUENCY_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_SENSOR_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_samplingFrequency(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_SENSOR_SET_SAMPLINGFREQUENCY_OFFSET))(arg, nullptr);
		}

	};
}

