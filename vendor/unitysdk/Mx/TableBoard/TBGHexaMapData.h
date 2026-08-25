#pragma once
#include "../../unitysdk.h"

namespace MX::TableBoard { class TBGHexaMapData; }
namespace MX::TableBoard { class TBGHexaTileData; }
namespace MX::TableBoard { class TBGHexaSpawnData; }

#define MX_TABLEBOARD_TBGHEXAMAPDATA_GET_TILES_OFFSET UNITYSDK_OFFSET(0xF02EB0)
#define MX_TABLEBOARD_TBGHEXAMAPDATA_SET_TILES_OFFSET UNITYSDK_OFFSET(0xF02EC0)
#define MX_TABLEBOARD_TBGHEXAMAPDATA_GET_SPAWNS_OFFSET UNITYSDK_OFFSET(0xF02ED0)
#define MX_TABLEBOARD_TBGHEXAMAPDATA_SET_SPAWNS_OFFSET UNITYSDK_OFFSET(0xF02EE0)
#define MX_TABLEBOARD_TBGHEXAMAPDATA_LOADHEXAMAPDATA_OFFSET UNITYSDK_OFFSET(0xF02EF0)
#define MX_TABLEBOARD_TBGHEXAMAPDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0xF031C0)
#define MX_TABLEBOARD_TBGHEXAMAPDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0xF032E0)
#define MX_TABLEBOARD_TBGHEXAMAPDATA_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xF034A0)
#define MX_TABLEBOARD_TBGHEXAMAPDATA_DELETETILE_OFFSET UNITYSDK_OFFSET(0xF036E0)
#define MX_TABLEBOARD_TBGHEXAMAPDATA_ADDHEXATILE_OFFSET UNITYSDK_OFFSET(0xF03770)
#define MX_TABLEBOARD_TBGHEXAMAPDATA_DELETESPAWNDATA_OFFSET UNITYSDK_OFFSET(0xF03900)
#define MX_TABLEBOARD_TBGHEXAMAPDATA_ADDSPAWNDATA_OFFSET UNITYSDK_OFFSET(0xF03950)

namespace MX::TableBoard
{
	inline static constexpr unsigned int TBGHexaMapData_TypeDefinitionIndex = 11193;

	class TBGHexaMapData : public Il2CppObject
	{
	public:
		Il2CppObject* _Tiles_k__BackingField; // 0x10
		Il2CppObject* _Spawns_k__BackingField; // 0x18
		Il2CppObject* TileLocationMap; // 0x20

		Il2CppObject* get_Tiles()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGHEXAMAPDATA_GET_TILES_OFFSET))(nullptr);
		}

		::System::Void set_Tiles(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGHEXAMAPDATA_SET_TILES_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Spawns()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGHEXAMAPDATA_GET_SPAWNS_OFFSET))(nullptr);
		}

		::System::Void set_Spawns(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGHEXAMAPDATA_SET_SPAWNS_OFFSET))(arg, nullptr);
		}

		::MX::TableBoard::TBGHexaMapData* LoadHexaMapData(::System::String* str)
		{
			return ((::MX::TableBoard::TBGHexaMapData*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGHEXAMAPDATA_LOADHEXAMAPDATA_OFFSET))(str, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGHEXAMAPDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::TableBoard::TBGHexaMapData* arg)
		{
			((::System::Void(*)(::MX::TableBoard::TBGHexaMapData*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGHEXAMAPDATA_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGHEXAMAPDATA_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void DeleteTile(::MX::TableBoard::TBGHexaTileData* arg)
		{
			((::System::Void(*)(::MX::TableBoard::TBGHexaTileData*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGHEXAMAPDATA_DELETETILE_OFFSET))(arg, nullptr);
		}

		::System::Boolean AddHexaTile(::MX::TableBoard::TBGHexaTileData* arg)
		{
			return ((::System::Boolean(*)(::MX::TableBoard::TBGHexaTileData*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGHEXAMAPDATA_ADDHEXATILE_OFFSET))(arg, nullptr);
		}

		::System::Void DeleteSpawnData(::MX::TableBoard::TBGHexaSpawnData* arg)
		{
			((::System::Void(*)(::MX::TableBoard::TBGHexaSpawnData*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGHEXAMAPDATA_DELETESPAWNDATA_OFFSET))(arg, nullptr);
		}

		::System::Boolean AddSpawnData(::MX::TableBoard::TBGHexaSpawnData* arg)
		{
			return ((::System::Boolean(*)(::MX::TableBoard::TBGHexaSpawnData*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGHEXAMAPDATA_ADDSPAWNDATA_OFFSET))(arg, nullptr);
		}

	};
}

