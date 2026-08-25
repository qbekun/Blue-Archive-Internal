#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::U2D { class SpriteAtlas; }

#define UNITYENGINE_TILEMAPS_TILEMAPRENDERER_REGISTERSPRITEATLASREGISTERED_OFFSET UNITYSDK_OFFSET(0xA2EA3C0)
#define UNITYENGINE_TILEMAPS_TILEMAPRENDERER_UNREGISTERSPRITEATLASREGISTERED_OFFSET UNITYSDK_OFFSET(0xA2EA430)
#define UNITYENGINE_TILEMAPS_TILEMAPRENDERER_ONSPRITEATLASREGISTERED_OFFSET UNITYSDK_OFFSET(0xA2EA4A0)

namespace UnityEngine::Tilemaps
{
	inline static constexpr unsigned int TilemapRenderer_TypeDefinitionIndex = 37913;

	class TilemapRenderer : public Il2CppObject
	{
	public:
		::System::Void RegisterSpriteAtlasRegistered()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TILEMAPS_TILEMAPRENDERER_REGISTERSPRITEATLASREGISTERED_OFFSET))(nullptr);
		}

		::System::Void UnregisterSpriteAtlasRegistered()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TILEMAPS_TILEMAPRENDERER_UNREGISTERSPRITEATLASREGISTERED_OFFSET))(nullptr);
		}

		::System::Void OnSpriteAtlasRegistered(::UnityEngine::U2D::SpriteAtlas* arg)
		{
			((::System::Void(*)(::UnityEngine::U2D::SpriteAtlas*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TILEMAPS_TILEMAPRENDERER_ONSPRITEATLASREGISTERED_OFFSET))(arg, nullptr);
		}

	};
}

