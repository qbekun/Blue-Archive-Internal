#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Color; }
namespace UnityEngine { class Matrix4x4; }
namespace UnityEngine::Tilemaps { class TileFlags; }
namespace UnityEngine::Tilemaps { class TileData; }
namespace UnityEngine { class Sprite; }
namespace UnityEngine { class GameObject; }

#define UNITYENGINE_TILEMAPS_TILEDATA_SET_SPRITE_OFFSET UNITYSDK_OFFSET(0xA2E9F70)
#define UNITYENGINE_TILEMAPS_TILEDATA_SET_COLOR_OFFSET UNITYSDK_OFFSET(0xA2EA000)
#define UNITYENGINE_TILEMAPS_TILEDATA_SET_TRANSFORM_OFFSET UNITYSDK_OFFSET(0xA2EA010)
#define UNITYENGINE_TILEMAPS_TILEDATA_SET_GAMEOBJECT_OFFSET UNITYSDK_OFFSET(0xA2EA030)
#define UNITYENGINE_TILEMAPS_TILEDATA_SET_FLAGS_OFFSET UNITYSDK_OFFSET(0xA2EA0C0)
#define UNITYENGINE_TILEMAPS_TILEDATA_SET_COLLIDERTYPE_OFFSET UNITYSDK_OFFSET(0xA2EA0D0)
#define UNITYENGINE_TILEMAPS_TILEDATA_CREATEDEFAULT_OFFSET UNITYSDK_OFFSET(0xA2EA4E0)
#define UNITYENGINE_TILEMAPS_TILEDATA_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA2EA5C0)

namespace UnityEngine::Tilemaps
{
	inline static constexpr unsigned int TileData_TypeDefinitionIndex = 37914;

	class TileData : public Il2CppObject
	{
	public:
		::System::Int32 m_Sprite; // 0x10
		::UnityEngine::Color* m_Color; // 0x14
		::UnityEngine::Matrix4x4* m_Transform; // 0x24
		::System::Int32 m_GameObject; // 0x64
		::UnityEngine::Tilemaps::TileFlags* m_Flags; // 0x68
		ColliderType* m_ColliderType; // 0x6C
		::UnityEngine::Tilemaps::TileData* Default; // 0x0

		::System::Void set_sprite(::UnityEngine::Sprite* arg)
		{
			((::System::Void(*)(::UnityEngine::Sprite*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TILEMAPS_TILEDATA_SET_SPRITE_OFFSET))(arg, nullptr);
		}

		::System::Void set_color(::UnityEngine::Color* arg)
		{
			((::System::Void(*)(::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TILEMAPS_TILEDATA_SET_COLOR_OFFSET))(arg, nullptr);
		}

		::System::Void set_transform(::UnityEngine::Matrix4x4* arg)
		{
			((::System::Void(*)(::UnityEngine::Matrix4x4*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TILEMAPS_TILEDATA_SET_TRANSFORM_OFFSET))(arg, nullptr);
		}

		::System::Void set_gameObject(::UnityEngine::GameObject* arg)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TILEMAPS_TILEDATA_SET_GAMEOBJECT_OFFSET))(arg, nullptr);
		}

		::System::Void set_flags(::UnityEngine::Tilemaps::TileFlags* arg)
		{
			((::System::Void(*)(::UnityEngine::Tilemaps::TileFlags*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TILEMAPS_TILEDATA_SET_FLAGS_OFFSET))(arg, nullptr);
		}

		::System::Void set_colliderType(ColliderType* arg)
		{
			((::System::Void(*)(ColliderType*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TILEMAPS_TILEDATA_SET_COLLIDERTYPE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Tilemaps::TileData* CreateDefault()
		{
			return (return (::UnityEngine::Tilemaps::TileData*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TILEMAPS_TILEDATA_CREATEDEFAULT_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TILEMAPS_TILEDATA_.CCTOR_OFFSET))(nullptr);
		}

	};
}

