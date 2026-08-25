#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Vector3; }

#define CINEMACHINE_UTILITY_GAUSSIANWINDOW1D_VECTOR3_.CTOR_OFFSET UNITYSDK_OFFSET(0x2883E30)
#define CINEMACHINE_UTILITY_GAUSSIANWINDOW1D_VECTOR3_COMPUTE_OFFSET UNITYSDK_OFFSET(0x2883E90)

namespace Cinemachine::Utility
{
	inline static constexpr unsigned int GaussianWindow1D_Vector3_TypeDefinitionIndex = 34407;

	class GaussianWindow1D_Vector3 : public MaxHPCapGaugeEffectDAOFormatter
	{
	public:
		::System::Void .ctor(::System::Single arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Single, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_GAUSSIANWINDOW1D_VECTOR3_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Vector3* Compute(::System::Int32 arg)
		{
			return (return (::UnityEngine::Vector3*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_GAUSSIANWINDOW1D_VECTOR3_COMPUTE_OFFSET))(arg, nullptr);
		}

	};
}

