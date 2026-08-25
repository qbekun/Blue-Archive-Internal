#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Vector3Int; }
namespace UnityEngine { class Vector3Int&; }

#define UNITYENGINE_TILEMAPS_TILEMAP_REFRESHTILE_OFFSET UNITYSDK_OFFSET(0xA2E9580)
#define UNITYENGINE_TILEMAPS_TILEMAP_REFRESHTILESNATIVE_OFFSET UNITYSDK_OFFSET(0xA2E99B0)
#define UNITYENGINE_TILEMAPS_TILEMAP_REFRESHTILE_INJECTED_OFFSET UNITYSDK_OFFSET(0xA2EA380)

namespace UnityEngine::Tilemaps
{
	inline static constexpr unsigned int Tilemap_TypeDefinitionIndex = 37911;

	class Tilemap : public Il2CppObject
	{
	public:
		::System::Void RefreshTile(::UnityEngine::Vector3Int* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3Int*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TILEMAPS_TILEMAP_REFRESHTILE_OFFSET))(arg, nullptr);
		}

		::System::Void RefreshTilesNative(::System::Object** arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object**, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TILEMAPS_TILEMAP_REFRESHTILESNATIVE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void RefreshTile_Injected(::UnityEngine::Vector3Int&* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3Int&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TILEMAPS_TILEMAP_REFRESHTILE_INJECTED_OFFSET))(arg, nullptr);
		}

	};
}

