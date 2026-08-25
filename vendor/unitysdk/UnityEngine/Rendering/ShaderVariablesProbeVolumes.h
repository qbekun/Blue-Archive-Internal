#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Vector3; }

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int ShaderVariablesProbeVolumes_TypeDefinitionIndex = 33989;

	class ShaderVariablesProbeVolumes : public Il2CppObject
	{
	public:
		::UnityEngine::Vector3* _PoolDim; // 0x10
		::System::Single _ViewBias; // 0x1C
		::UnityEngine::Vector3* _MinCellPosition; // 0x20
		::System::Single _PVSamplingNoise; // 0x2C
		::UnityEngine::Vector3* _CellIndicesDim; // 0x30
		::System::Single _CellInMeters; // 0x3C
		::System::Single _CellInMinBricks; // 0x40
		::System::Single _MinBrickSize; // 0x44
		::System::Int32 _IndexChunkSize; // 0x48
		::System::Single _NormalBias; // 0x4C

	};
}

