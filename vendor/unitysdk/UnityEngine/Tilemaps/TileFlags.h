#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Tilemaps { class TileFlags; }

namespace UnityEngine::Tilemaps
{
	inline static constexpr unsigned int TileFlags_TypeDefinitionIndex = 37912;

	class TileFlags : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::Tilemaps::TileFlags* None; // 0x0
		::UnityEngine::Tilemaps::TileFlags* LockColor; // 0x0
		::UnityEngine::Tilemaps::TileFlags* LockTransform; // 0x0
		::UnityEngine::Tilemaps::TileFlags* InstantiateGameObjectRuntimeOnly; // 0x0
		::UnityEngine::Tilemaps::TileFlags* KeepGameObjectRuntimeOnly; // 0x0
		::UnityEngine::Tilemaps::TileFlags* LockAll; // 0x0

	};
}

