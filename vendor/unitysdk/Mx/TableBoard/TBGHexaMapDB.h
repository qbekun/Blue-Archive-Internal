#pragma once
#include "../../unitysdk.h"

namespace MX::TableBoard { class TBGBoardSaveDB; }
namespace MX::TableBoard { class TBGHexaMapData; }
namespace FlatData { class TBGThemaType; }
namespace MX::TableBoard { class TBGHexaMapDB; }
namespace MX::Core::Math { class IRandomService; }
namespace FlatData { class TBGObjectType; }
namespace MX::TableBoard { class TBGHexaSpawnData; }
namespace MX::Campaign { class HexLocation; }

#define MX_TABLEBOARD_TBGHEXAMAPDB_GET_MAPDATA_OFFSET UNITYSDK_OFFSET(0xF03BF0)
#define MX_TABLEBOARD_TBGHEXAMAPDB_GET_MAPTYPE_OFFSET UNITYSDK_OFFSET(0xF03CA0)
#define MX_TABLEBOARD_TBGHEXAMAPDB_SET_MAPTYPE_OFFSET UNITYSDK_OFFSET(0xF03CB0)
#define MX_TABLEBOARD_TBGHEXAMAPDB_GET_OBJECTS_OFFSET UNITYSDK_OFFSET(0xF03CC0)
#define MX_TABLEBOARD_TBGHEXAMAPDB_SET_OBJECTS_OFFSET UNITYSDK_OFFSET(0xF03CD0)
#define MX_TABLEBOARD_TBGHEXAMAPDB_GET_ISTUTORIAL_OFFSET UNITYSDK_OFFSET(0xF03CE0)
#define MX_TABLEBOARD_TBGHEXAMAPDB_SET_ISTUTORIAL_OFFSET UNITYSDK_OFFSET(0xF03CF0)
#define MX_TABLEBOARD_TBGHEXAMAPDB_GET_HASOBJECTDIRTY_OFFSET UNITYSDK_OFFSET(0xF03D00)
#define MX_TABLEBOARD_TBGHEXAMAPDB_GET_REALTREASUREOBJECTSERVERID_OFFSET UNITYSDK_OFFSET(0xF03E30)
#define MX_TABLEBOARD_TBGHEXAMAPDB_CREATEHEXAMAPDB_OFFSET UNITYSDK_OFFSET(0xF03FD0)
#define MX_TABLEBOARD_TBGHEXAMAPDB_RESOLVESAVEDB_OFFSET UNITYSDK_OFFSET(0xF04DD0)
#define MX_TABLEBOARD_TBGHEXAMAPDB_TRYGETPLAYEROBJECTLOCATION_OFFSET UNITYSDK_OFFSET(0xF05790)
#define MX_TABLEBOARD_TBGHEXAMAPDB_TRYSPAWNOBJECT_OFFSET UNITYSDK_OFFSET(0xF04F90)
#define MX_TABLEBOARD_TBGHEXAMAPDB_TRYGETOBJECTFROMTILE_OFFSET UNITYSDK_OFFSET(0xF05C90)
#define MX_TABLEBOARD_TBGHEXAMAPDB_TRYACTIVEGETINTERACTABLEOBJECTFROMTILE_OFFSET UNITYSDK_OFFSET(0xF05DB0)
#define MX_TABLEBOARD_TBGHEXAMAPDB_GETALLNEIGHBORTILES_OFFSET UNITYSDK_OFFSET(0xF05E50)
#define MX_TABLEBOARD_TBGHEXAMAPDB_GETALLNEIGHBORTILES_OFFSET UNITYSDK_OFFSET(0xF06110)
#define MX_TABLEBOARD_TBGHEXAMAPDB_GETREACHABLESFROM_OFFSET UNITYSDK_OFFSET(0xF061D0)
#define MX_TABLEBOARD_TBGHEXAMAPDB_FINDPATHFROMTO_OFFSET UNITYSDK_OFFSET(0xF06C40)
#define MX_TABLEBOARD_TBGHEXAMAPDB_CLEARALLOBJECTTYPE_OFFSET UNITYSDK_OFFSET(0xF07640)
#define MX_TABLEBOARD_TBGHEXAMAPDB_.CTOR_OFFSET UNITYSDK_OFFSET(0xF04D50)

namespace MX::TableBoard
{
	inline static constexpr unsigned int TBGHexaMapDB_TypeDefinitionIndex = 11203;

	class TBGHexaMapDB : public Il2CppObject
	{
	public:
		::MX::TableBoard::TBGBoardSaveDB* _saveDB; // 0x10
		::MX::TableBoard::TBGHexaMapData* _mapDataCache; // 0x18
		::FlatData::TBGThemaType* _MapType_k__BackingField; // 0x20
		Il2CppObject* _Objects_k__BackingField; // 0x28
		::System::Boolean _IsTutorial_k__BackingField; // 0x30

		::MX::TableBoard::TBGHexaMapData* get_MapData()
		{
			return ((::MX::TableBoard::TBGHexaMapData*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGHEXAMAPDB_GET_MAPDATA_OFFSET))(nullptr);
		}

		::FlatData::TBGThemaType* get_MapType()
		{
			return ((::FlatData::TBGThemaType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGHEXAMAPDB_GET_MAPTYPE_OFFSET))(nullptr);
		}

		::System::Void set_MapType(::FlatData::TBGThemaType* arg)
		{
			((::System::Void(*)(::FlatData::TBGThemaType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGHEXAMAPDB_SET_MAPTYPE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Objects()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGHEXAMAPDB_GET_OBJECTS_OFFSET))(nullptr);
		}

		::System::Void set_Objects(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGHEXAMAPDB_SET_OBJECTS_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsTutorial()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGHEXAMAPDB_GET_ISTUTORIAL_OFFSET))(nullptr);
		}

		::System::Void set_IsTutorial(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGHEXAMAPDB_SET_ISTUTORIAL_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_HasObjectDirty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGHEXAMAPDB_GET_HASOBJECTDIRTY_OFFSET))(nullptr);
		}

		::System::Int64 get_RealTreasureObjectServerId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGHEXAMAPDB_GET_REALTREASUREOBJECTSERVERID_OFFSET))(nullptr);
		}

		::MX::TableBoard::TBGHexaMapDB* CreateHexaMapDB(::MX::Core::Math::IRandomService* arg, ::MX::TableBoard::TBGBoardSaveDB* arg2, ::System::Int64 arg3, ::System::Int32 arg4, ::FlatData::TBGThemaType* arg5)
		{
			return ((::MX::TableBoard::TBGHexaMapDB*(*)(::MX::Core::Math::IRandomService*, ::MX::TableBoard::TBGBoardSaveDB*, ::System::Int64, ::System::Int32, ::FlatData::TBGThemaType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGHEXAMAPDB_CREATEHEXAMAPDB_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Void ResolveSaveDB(::MX::TableBoard::TBGBoardSaveDB* arg)
		{
			((::System::Void(*)(::MX::TableBoard::TBGBoardSaveDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGHEXAMAPDB_RESOLVESAVEDB_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetPlayerObjectLocation(::MX::Core::Math::IRandomService* arg, ::FlatData::TBGObjectType* arg2, ::MX::Campaign::HexLocation&* arg3)
		{
			return ((::System::Boolean(*)(::MX::Core::Math::IRandomService*, ::FlatData::TBGObjectType*, ::MX::Campaign::HexLocation&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGHEXAMAPDB_TRYGETPLAYEROBJECTLOCATION_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean TrySpawnObject(::MX::Core::Math::IRandomService* arg, ::MX::TableBoard::TBGHexaSpawnData* arg2, ::MX::Campaign::HexLocation* arg3, ::FlatData::TBGThemaType* arg4)
		{
			return ((::System::Boolean(*)(::MX::Core::Math::IRandomService*, ::MX::TableBoard::TBGHexaSpawnData*, ::MX::Campaign::HexLocation*, ::FlatData::TBGThemaType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGHEXAMAPDB_TRYSPAWNOBJECT_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Boolean TryGetObjectFromTile(::MX::Campaign::HexLocation* arg, ::MX::TableBoard::TBGHexaObjectDB&* arg2)
		{
			return ((::System::Boolean(*)(::MX::Campaign::HexLocation*, ::MX::TableBoard::TBGHexaObjectDB&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGHEXAMAPDB_TRYGETOBJECTFROMTILE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean TryActiveGetInteractableObjectFromTile(::MX::Campaign::HexLocation* arg, ::MX::TableBoard::TBGHexaObjectDB&* arg2)
		{
			return ((::System::Boolean(*)(::MX::Campaign::HexLocation*, ::MX::TableBoard::TBGHexaObjectDB&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGHEXAMAPDB_TRYACTIVEGETINTERACTABLEOBJECTFROMTILE_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* GetAllNeighborTiles(::MX::Campaign::HexLocation* arg)
		{
			return ((Il2CppObject*(*)(::MX::Campaign::HexLocation*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGHEXAMAPDB_GETALLNEIGHBORTILES_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetAllNeighborTiles(Il2CppObject* arg, ::MX::Campaign::HexLocation* arg2)
		{
			return ((Il2CppObject*(*)(Il2CppObject*, ::MX::Campaign::HexLocation*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGHEXAMAPDB_GETALLNEIGHBORTILES_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* GetReachablesFrom(::MX::Campaign::HexLocation* arg, ::System::Boolean arg2)
		{
			return ((Il2CppObject*(*)(::MX::Campaign::HexLocation*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGHEXAMAPDB_GETREACHABLESFROM_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* FindPathFromTo(::MX::Campaign::HexLocation* arg, ::MX::Campaign::HexLocation* arg2)
		{
			return ((Il2CppObject*(*)(::MX::Campaign::HexLocation*, ::MX::Campaign::HexLocation*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGHEXAMAPDB_FINDPATHFROMTO_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean ClearAllObjectType(::FlatData::TBGObjectType* arg)
		{
			return ((::System::Boolean(*)(::FlatData::TBGObjectType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGHEXAMAPDB_CLEARALLOBJECTTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGHEXAMAPDB_.CTOR_OFFSET))(nullptr);
		}

	};
}

