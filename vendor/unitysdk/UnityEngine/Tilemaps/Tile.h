#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Sprite; }
namespace UnityEngine { class Color; }
namespace UnityEngine { class Matrix4x4; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::Tilemaps { class TileFlags; }
namespace UnityEngine { class Vector3Int; }
namespace UnityEngine::Tilemaps { class ITilemap; }
namespace UnityEngine::Tilemaps { class TileData&; }

#define UNITYENGINE_TILEMAPS_TILE_GET_SPRITE_OFFSET UNITYSDK_OFFSET(0xA2E9CC0)
#define UNITYENGINE_TILEMAPS_TILE_SET_SPRITE_OFFSET UNITYSDK_OFFSET(0xA2E9CD0)
#define UNITYENGINE_TILEMAPS_TILE_GET_COLOR_OFFSET UNITYSDK_OFFSET(0xA2E9CE0)
#define UNITYENGINE_TILEMAPS_TILE_SET_COLOR_OFFSET UNITYSDK_OFFSET(0xA2E9CF0)
#define UNITYENGINE_TILEMAPS_TILE_GET_TRANSFORM_OFFSET UNITYSDK_OFFSET(0xA2E9D00)
#define UNITYENGINE_TILEMAPS_TILE_SET_TRANSFORM_OFFSET UNITYSDK_OFFSET(0xA2E9D30)
#define UNITYENGINE_TILEMAPS_TILE_GET_GAMEOBJECT_OFFSET UNITYSDK_OFFSET(0xA2E9D50)
#define UNITYENGINE_TILEMAPS_TILE_SET_GAMEOBJECT_OFFSET UNITYSDK_OFFSET(0xA2E9D60)
#define UNITYENGINE_TILEMAPS_TILE_GET_FLAGS_OFFSET UNITYSDK_OFFSET(0xA2E9D70)
#define UNITYENGINE_TILEMAPS_TILE_SET_FLAGS_OFFSET UNITYSDK_OFFSET(0xA2E9D80)
#define UNITYENGINE_TILEMAPS_TILE_GET_COLLIDERTYPE_OFFSET UNITYSDK_OFFSET(0xA2E9D90)
#define UNITYENGINE_TILEMAPS_TILE_SET_COLLIDERTYPE_OFFSET UNITYSDK_OFFSET(0xA2E9DA0)
#define UNITYENGINE_TILEMAPS_TILE_GETTILEDATA_OFFSET UNITYSDK_OFFSET(0xA2E9DB0)
#define UNITYENGINE_TILEMAPS_TILE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA2EA0E0)

namespace UnityEngine::Tilemaps
{
	inline static constexpr unsigned int Tile_TypeDefinitionIndex = 37909;

	class Tile : public Il2CppObject
	{
	public:
		::UnityEngine::Sprite* m_Sprite; // 0x18
		::UnityEngine::Color* m_Color; // 0x20
		::UnityEngine::Matrix4x4* m_Transform; // 0x30
		::UnityEngine::GameObject* m_InstancedGameObject; // 0x70
		::UnityEngine::Tilemaps::TileFlags* m_Flags; // 0x78
		ColliderType* m_ColliderType; // 0x7C

		::UnityEngine::Sprite* get_sprite()
		{
			return (return (::UnityEngine::Sprite*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TILEMAPS_TILE_GET_SPRITE_OFFSET))(nullptr);
		}

		::System::Void set_sprite(::UnityEngine::Sprite* arg)
		{
			((::System::Void(*)(::UnityEngine::Sprite*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TILEMAPS_TILE_SET_SPRITE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Color* get_color()
		{
			return (return (::UnityEngine::Color*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TILEMAPS_TILE_GET_COLOR_OFFSET))(nullptr);
		}

		::System::Void set_color(::UnityEngine::Color* arg)
		{
			((::System::Void(*)(::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TILEMAPS_TILE_SET_COLOR_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Matrix4x4* get_transform()
		{
			return (return (::UnityEngine::Matrix4x4*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TILEMAPS_TILE_GET_TRANSFORM_OFFSET))(nullptr);
		}

		::System::Void set_transform(::UnityEngine::Matrix4x4* arg)
		{
			((::System::Void(*)(::UnityEngine::Matrix4x4*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TILEMAPS_TILE_SET_TRANSFORM_OFFSET))(arg, nullptr);
		}

		::UnityEngine::GameObject* get_gameObject()
		{
			return (return (::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TILEMAPS_TILE_GET_GAMEOBJECT_OFFSET))(nullptr);
		}

		::System::Void set_gameObject(::UnityEngine::GameObject* arg)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TILEMAPS_TILE_SET_GAMEOBJECT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Tilemaps::TileFlags* get_flags()
		{
			return (return (::UnityEngine::Tilemaps::TileFlags*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TILEMAPS_TILE_GET_FLAGS_OFFSET))(nullptr);
		}

		::System::Void set_flags(::UnityEngine::Tilemaps::TileFlags* arg)
		{
			((::System::Void(*)(::UnityEngine::Tilemaps::TileFlags*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TILEMAPS_TILE_SET_FLAGS_OFFSET))(arg, nullptr);
		}

		ColliderType* get_colliderType()
		{
			return (return (ColliderType*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TILEMAPS_TILE_GET_COLLIDERTYPE_OFFSET))(nullptr);
		}

		::System::Void set_colliderType(ColliderType* arg)
		{
			((::System::Void(*)(ColliderType*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TILEMAPS_TILE_SET_COLLIDERTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void GetTileData(::UnityEngine::Vector3Int* arg, ::UnityEngine::Tilemaps::ITilemap* arg, ::UnityEngine::Tilemaps::TileData&* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3Int*, ::UnityEngine::Tilemaps::ITilemap*, ::UnityEngine::Tilemaps::TileData&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TILEMAPS_TILE_GETTILEDATA_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TILEMAPS_TILE_.CTOR_OFFSET))(nullptr);
		}

	};
}

