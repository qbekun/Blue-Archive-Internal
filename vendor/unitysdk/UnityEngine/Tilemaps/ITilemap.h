#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Tilemaps { class ITilemap; }
namespace UnityEngine::Tilemaps { class Tilemap; }
namespace UnityEngine { class Vector3Int; }

#define UNITYENGINE_TILEMAPS_ITILEMAP_.CTOR_OFFSET UNITYSDK_OFFSET(0xA2E93F0)
#define UNITYENGINE_TILEMAPS_ITILEMAP_REFRESHTILE_OFFSET UNITYSDK_OFFSET(0xA2E9400)
#define UNITYENGINE_TILEMAPS_ITILEMAP_CREATEINSTANCE_OFFSET UNITYSDK_OFFSET(0xA2E95C0)
#define UNITYENGINE_TILEMAPS_ITILEMAP_FINDALLREFRESHPOSITIONS_OFFSET UNITYSDK_OFFSET(0xA2E9650)
#define UNITYENGINE_TILEMAPS_ITILEMAP_GETALLTILEDATA_OFFSET UNITYSDK_OFFSET(0xA2E9A00)

namespace UnityEngine::Tilemaps
{
	inline static constexpr unsigned int ITilemap_TypeDefinitionIndex = 37907;

	class ITilemap : public Il2CppObject
	{
	public:
		::UnityEngine::Tilemaps::ITilemap* s_Instance; // 0x0
		::UnityEngine::Tilemaps::Tilemap* m_Tilemap; // 0x10
		::System::Boolean m_AddToList; // 0x18
		::System::Int32 m_RefreshCount; // 0x1C
		Il2CppObject* m_RefreshPos; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TILEMAPS_ITILEMAP_.CTOR_OFFSET))(nullptr);
		}

		::System::Void RefreshTile(::UnityEngine::Vector3Int* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3Int*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TILEMAPS_ITILEMAP_REFRESHTILE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Tilemaps::ITilemap* CreateInstance()
		{
			return (return (::UnityEngine::Tilemaps::ITilemap*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TILEMAPS_ITILEMAP_CREATEINSTANCE_OFFSET))(nullptr);
		}

		::System::Void FindAllRefreshPositions(::UnityEngine::Tilemaps::ITilemap* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::Tilemaps::ITilemap*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TILEMAPS_ITILEMAP_FINDALLREFRESHPOSITIONS_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void GetAllTileData(::UnityEngine::Tilemaps::ITilemap* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::Tilemaps::ITilemap*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TILEMAPS_ITILEMAP_GETALLTILEDATA_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

	};
}

