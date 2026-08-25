#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::XR { class MeshGenerationStatus; }

namespace UnityEngine::XR
{
	inline static constexpr unsigned int MeshGenerationStatus_TypeDefinitionIndex = 37610;

	class MeshGenerationStatus : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::XR::MeshGenerationStatus* Success; // 0x0
		::UnityEngine::XR::MeshGenerationStatus* InvalidMeshId; // 0x0
		::UnityEngine::XR::MeshGenerationStatus* GenerationAlreadyInProgress; // 0x0
		::UnityEngine::XR::MeshGenerationStatus* Canceled; // 0x0
		::UnityEngine::XR::MeshGenerationStatus* UnknownError; // 0x0

	};
}

