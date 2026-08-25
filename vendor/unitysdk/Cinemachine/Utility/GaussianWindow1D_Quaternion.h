#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Quaternion; }

#define CINEMACHINE_UTILITY_GAUSSIANWINDOW1D_QUATERNION_.CTOR_OFFSET UNITYSDK_OFFSET(0x2884010)
#define CINEMACHINE_UTILITY_GAUSSIANWINDOW1D_QUATERNION_COMPUTE_OFFSET UNITYSDK_OFFSET(0x2884070)

namespace Cinemachine::Utility
{
	inline static constexpr unsigned int GaussianWindow1D_Quaternion_TypeDefinitionIndex = 34408;

	class GaussianWindow1D_Quaternion : public KnockbackEffectDAOFormatter
	{
	public:
		::System::Void .ctor(::System::Single arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Single, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_GAUSSIANWINDOW1D_QUATERNION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Quaternion* Compute(::System::Int32 arg)
		{
			return (return (::UnityEngine::Quaternion*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_GAUSSIANWINDOW1D_QUATERNION_COMPUTE_OFFSET))(arg, nullptr);
		}

	};
}

