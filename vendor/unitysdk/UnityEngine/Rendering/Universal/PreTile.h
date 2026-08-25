#pragma once
#include "../../../unitysdk.h"

namespace Unity::Mathematics { class float4; }

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int PreTile_TypeDefinitionIndex = 32802;

	class PreTile : public Il2CppObject
	{
	public:
		::Unity::Mathematics::float4* planeLeft; // 0x10
		::Unity::Mathematics::float4* planeRight; // 0x20
		::Unity::Mathematics::float4* planeBottom; // 0x30
		::Unity::Mathematics::float4* planeTop; // 0x40

	};
}

