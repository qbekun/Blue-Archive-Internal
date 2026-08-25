#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_TERRAINUTILS_TERRAINTILECOORD_.CTOR_OFFSET UNITYSDK_OFFSET(0xA2A8260)

namespace UnityEngine::TerrainUtils
{
	inline static constexpr unsigned int TerrainTileCoord_TypeDefinitionIndex = 37800;

	class TerrainTileCoord : public Il2CppObject
	{
	public:
		::System::Int32 tileX; // 0x10
		::System::Int32 tileZ; // 0x14

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINUTILS_TERRAINTILECOORD_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

