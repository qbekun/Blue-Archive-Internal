#pragma once
#include "../../unitysdk.h"

namespace FlatData { class TBGTileType; }
namespace MX::Campaign { class HexLocation; }
namespace MX::TableBoard { class TBGHexaTileData; }

#define MX_TABLEBOARD_TBGHEXATILEDATA_GET_RESOURCEPATH_OFFSET UNITYSDK_OFFSET(0xF02DD0)
#define MX_TABLEBOARD_TBGHEXATILEDATA_SET_RESOURCEPATH_OFFSET UNITYSDK_OFFSET(0xF02DE0)
#define MX_TABLEBOARD_TBGHEXATILEDATA_GET_TILETYPE_OFFSET UNITYSDK_OFFSET(0xF02DF0)
#define MX_TABLEBOARD_TBGHEXATILEDATA_SET_TILETYPE_OFFSET UNITYSDK_OFFSET(0xF02E00)
#define MX_TABLEBOARD_TBGHEXATILEDATA_GET_LOCATION_OFFSET UNITYSDK_OFFSET(0xF02E10)
#define MX_TABLEBOARD_TBGHEXATILEDATA_SET_LOCATION_OFFSET UNITYSDK_OFFSET(0xF02E30)
#define MX_TABLEBOARD_TBGHEXATILEDATA_ISSTANDABLE_OFFSET UNITYSDK_OFFSET(0xF02E40)
#define MX_TABLEBOARD_TBGHEXATILEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0xF02E50)
#define MX_TABLEBOARD_TBGHEXATILEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0xF02E60)

namespace MX::TableBoard
{
	inline static constexpr unsigned int TBGHexaTileData_TypeDefinitionIndex = 11192;

	class TBGHexaTileData : public Il2CppObject
	{
	public:
		::System::String* _ResourcePath_k__BackingField; // 0x10
		::FlatData::TBGTileType* _TileType_k__BackingField; // 0x18
		::MX::Campaign::HexLocation* _Location_k__BackingField; // 0x1C

		::System::String* get_ResourcePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGHEXATILEDATA_GET_RESOURCEPATH_OFFSET))(nullptr);
		}

		::System::Void set_ResourcePath(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGHEXATILEDATA_SET_RESOURCEPATH_OFFSET))(str, nullptr);
		}

		::FlatData::TBGTileType* get_TileType()
		{
			return ((::FlatData::TBGTileType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGHEXATILEDATA_GET_TILETYPE_OFFSET))(nullptr);
		}

		::System::Void set_TileType(::FlatData::TBGTileType* arg)
		{
			((::System::Void(*)(::FlatData::TBGTileType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGHEXATILEDATA_SET_TILETYPE_OFFSET))(arg, nullptr);
		}

		::MX::Campaign::HexLocation* get_Location()
		{
			return ((::MX::Campaign::HexLocation*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGHEXATILEDATA_GET_LOCATION_OFFSET))(nullptr);
		}

		::System::Void set_Location(::MX::Campaign::HexLocation* arg)
		{
			((::System::Void(*)(::MX::Campaign::HexLocation*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGHEXATILEDATA_SET_LOCATION_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsStandable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGHEXATILEDATA_ISSTANDABLE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGHEXATILEDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::TableBoard::TBGHexaTileData* arg)
		{
			((::System::Void(*)(::MX::TableBoard::TBGHexaTileData*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGHEXATILEDATA_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

