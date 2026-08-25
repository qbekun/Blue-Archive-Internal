#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Vector3Int; }

	inline static constexpr unsigned int CellIndexUpdateInfo_TypeDefinitionIndex = 33782;

	class CellIndexUpdateInfo : public Il2CppObject
	{
	public:
		::System::Int32 firstChunkIndex; // 0x10
		::System::Int32 numberOfChunks; // 0x14
		::System::Int32 minSubdivInCell; // 0x18
		::UnityEngine::Vector3Int* minValidBrickIndexForCellAtMaxRes; // 0x1C
		::UnityEngine::Vector3Int* maxValidBrickIndexForCellAtMaxResPlusOne; // 0x28
		::UnityEngine::Vector3Int* cellPositionInBricksAtMaxRes; // 0x34

	};

