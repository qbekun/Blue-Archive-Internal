#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::TerrainUtils { class TerrainMapStatusCode; }

namespace UnityEngine::TerrainUtils
{
	inline static constexpr unsigned int TerrainMapStatusCode_TypeDefinitionIndex = 37799;

	class TerrainMapStatusCode : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::TerrainUtils::TerrainMapStatusCode* OK; // 0x0
		::UnityEngine::TerrainUtils::TerrainMapStatusCode* Overlapping; // 0x0
		::UnityEngine::TerrainUtils::TerrainMapStatusCode* SizeMismatch; // 0x0
		::UnityEngine::TerrainUtils::TerrainMapStatusCode* EdgeAlignmentMismatch; // 0x0

	};
}

