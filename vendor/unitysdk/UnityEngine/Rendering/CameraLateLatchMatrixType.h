#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Rendering { class CameraLateLatchMatrixType; }

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int CameraLateLatchMatrixType_TypeDefinitionIndex = 31522;

	class CameraLateLatchMatrixType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::Rendering::CameraLateLatchMatrixType* View; // 0x0
		::UnityEngine::Rendering::CameraLateLatchMatrixType* InverseView; // 0x0
		::UnityEngine::Rendering::CameraLateLatchMatrixType* ViewProjection; // 0x0
		::UnityEngine::Rendering::CameraLateLatchMatrixType* InverseViewProjection; // 0x0

	};
}

