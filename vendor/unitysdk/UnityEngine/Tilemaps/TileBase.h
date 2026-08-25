#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Vector3Int; }
namespace UnityEngine::Tilemaps { class ITilemap; }
namespace UnityEngine::Tilemaps { class TileData&; }
namespace UnityEngine::Tilemaps { class TileData; }
namespace UnityEngine::Tilemaps { class TileAnimationData&; }
namespace UnityEngine::Tilemaps { class TileAnimationData; }
namespace UnityEngine { class GameObject; }

#define UNITYENGINE_TILEMAPS_TILEBASE_REFRESHTILE_OFFSET UNITYSDK_OFFSET(0xA2EA170)
#define UNITYENGINE_TILEMAPS_TILEBASE_GETTILEDATA_OFFSET UNITYSDK_OFFSET(0xA2EA1B0)
#define UNITYENGINE_TILEMAPS_TILEBASE_GETTILEDATANOREF_OFFSET UNITYSDK_OFFSET(0xA2EA1C0)
#define UNITYENGINE_TILEMAPS_TILEBASE_GETTILEANIMATIONDATA_OFFSET UNITYSDK_OFFSET(0xA2EA280)
#define UNITYENGINE_TILEMAPS_TILEBASE_GETTILEANIMATIONDATANOREF_OFFSET UNITYSDK_OFFSET(0xA2EA290)
#define UNITYENGINE_TILEMAPS_TILEBASE_GETTILEANIMATIONDATAREF_OFFSET UNITYSDK_OFFSET(0xA2EA2F0)
#define UNITYENGINE_TILEMAPS_TILEBASE_STARTUP_OFFSET UNITYSDK_OFFSET(0xA2EA330)
#define UNITYENGINE_TILEMAPS_TILEBASE_STARTUPREF_OFFSET UNITYSDK_OFFSET(0xA2EA340)
#define UNITYENGINE_TILEMAPS_TILEBASE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA2EA160)

namespace UnityEngine::Tilemaps
{
	inline static constexpr unsigned int TileBase_TypeDefinitionIndex = 37910;

	class TileBase : public Il2CppObject
	{
	public:
		::System::Void RefreshTile(::UnityEngine::Vector3Int* arg, ::UnityEngine::Tilemaps::ITilemap* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3Int*, ::UnityEngine::Tilemaps::ITilemap*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TILEMAPS_TILEBASE_REFRESHTILE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void GetTileData(::UnityEngine::Vector3Int* arg, ::UnityEngine::Tilemaps::ITilemap* arg, ::UnityEngine::Tilemaps::TileData&* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3Int*, ::UnityEngine::Tilemaps::ITilemap*, ::UnityEngine::Tilemaps::TileData&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TILEMAPS_TILEBASE_GETTILEDATA_OFFSET))(arg, arg, arg, nullptr);
		}

		::UnityEngine::Tilemaps::TileData* GetTileDataNoRef(::UnityEngine::Vector3Int* arg, ::UnityEngine::Tilemaps::ITilemap* arg)
		{
			return (return (::UnityEngine::Tilemaps::TileData*(*)(::UnityEngine::Vector3Int*, ::UnityEngine::Tilemaps::ITilemap*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TILEMAPS_TILEBASE_GETTILEDATANOREF_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean GetTileAnimationData(::UnityEngine::Vector3Int* arg, ::UnityEngine::Tilemaps::ITilemap* arg, ::UnityEngine::Tilemaps::TileAnimationData&* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Vector3Int*, ::UnityEngine::Tilemaps::ITilemap*, ::UnityEngine::Tilemaps::TileAnimationData&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TILEMAPS_TILEBASE_GETTILEANIMATIONDATA_OFFSET))(arg, arg, arg, nullptr);
		}

		::UnityEngine::Tilemaps::TileAnimationData* GetTileAnimationDataNoRef(::UnityEngine::Vector3Int* arg, ::UnityEngine::Tilemaps::ITilemap* arg)
		{
			return (return (::UnityEngine::Tilemaps::TileAnimationData*(*)(::UnityEngine::Vector3Int*, ::UnityEngine::Tilemaps::ITilemap*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TILEMAPS_TILEBASE_GETTILEANIMATIONDATANOREF_OFFSET))(arg, arg, nullptr);
		}

		::System::Void GetTileAnimationDataRef(::UnityEngine::Vector3Int* arg, ::UnityEngine::Tilemaps::ITilemap* arg, ::UnityEngine::Tilemaps::TileAnimationData&* arg, bool&* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3Int*, ::UnityEngine::Tilemaps::ITilemap*, ::UnityEngine::Tilemaps::TileAnimationData&*, bool&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TILEMAPS_TILEBASE_GETTILEANIMATIONDATAREF_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean StartUp(::UnityEngine::Vector3Int* arg, ::UnityEngine::Tilemaps::ITilemap* arg, ::UnityEngine::GameObject* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Vector3Int*, ::UnityEngine::Tilemaps::ITilemap*, ::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TILEMAPS_TILEBASE_STARTUP_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void StartUpRef(::UnityEngine::Vector3Int* arg, ::UnityEngine::Tilemaps::ITilemap* arg, ::UnityEngine::GameObject* arg, bool&* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3Int*, ::UnityEngine::Tilemaps::ITilemap*, ::UnityEngine::GameObject*, bool&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TILEMAPS_TILEBASE_STARTUPREF_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TILEMAPS_TILEBASE_.CTOR_OFFSET))(nullptr);
		}

	};
}

