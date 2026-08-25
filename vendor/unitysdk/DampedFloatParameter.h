#pragma once
#include "unitysdk.h"

namespace Animancer { class ControllerState; }

#define DAMPEDFLOATPARAMETER_.CTOR_OFFSET UNITYSDK_OFFSET(0x492190)
#define DAMPEDFLOATPARAMETER_APPLY_OFFSET UNITYSDK_OFFSET(0x492210)
#define DAMPEDFLOATPARAMETER_APPLY_OFFSET UNITYSDK_OFFSET(0x492240)

	inline static constexpr unsigned int DampedFloatParameter_TypeDefinitionIndex = 35100;

	class DampedFloatParameter : public Il2CppObject
	{
	public:
		ParameterID* parameter; // 0x10
		::System::Single smoothTime; // 0x20
		::System::Single currentValue; // 0x24
		::System::Single targetValue; // 0x28
		::System::Single maxSpeed; // 0x2C
		::System::Single velocity; // 0x30

		::System::Void .ctor(ParameterID* arg, ::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			((::System::Void(*)(ParameterID*, ::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + DAMPEDFLOATPARAMETER_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void Apply(::Animancer::ControllerState* arg)
		{
			((::System::Void(*)(::Animancer::ControllerState*, ::PVOID))((::PBYTE)hIl2Cpp + DAMPEDFLOATPARAMETER_APPLY_OFFSET))(arg, nullptr);
		}

		::System::Void Apply(::Animancer::ControllerState* arg, ::System::Single arg)
		{
			((::System::Void(*)(::Animancer::ControllerState*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + DAMPEDFLOATPARAMETER_APPLY_OFFSET))(arg, arg, nullptr);
		}

	};

