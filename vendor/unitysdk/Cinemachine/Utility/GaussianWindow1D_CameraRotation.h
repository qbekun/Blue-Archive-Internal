#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Vector2; }

#define CINEMACHINE_UTILITY_GAUSSIANWINDOW1D_CAMERAROTATION_.CTOR_OFFSET UNITYSDK_OFFSET(0x2884540)
#define CINEMACHINE_UTILITY_GAUSSIANWINDOW1D_CAMERAROTATION_COMPUTE_OFFSET UNITYSDK_OFFSET(0x28845A0)

namespace Cinemachine::Utility
{
	inline static constexpr unsigned int GaussianWindow1D_CameraRotation_TypeDefinitionIndex = 34409;

	class GaussianWindow1D_CameraRotation : public ::MX::GameData::DAO::Battle::KnockbackEffectDAO
	{
	public:
		::System::Void .ctor(::System::Single arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Single, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_GAUSSIANWINDOW1D_CAMERAROTATION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Vector2* Compute(::System::Int32 arg)
		{
			return (return (::UnityEngine::Vector2*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_GAUSSIANWINDOW1D_CAMERAROTATION_COMPUTE_OFFSET))(arg, nullptr);
		}

	};
}

