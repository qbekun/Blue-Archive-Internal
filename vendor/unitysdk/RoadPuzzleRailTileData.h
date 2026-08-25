#pragma once
#include "unitysdk.h"

namespace FlatData { class RoadPuzzleRailTileType; }
class RoadPuzzleRailTileData;

#define ROADPUZZLERAILTILEDATA_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x21864C0)
#define ROADPUZZLERAILTILEDATA_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x21864D0)
#define ROADPUZZLERAILTILEDATA_GET_ENTRANCEINDEX_OFFSET UNITYSDK_OFFSET(0x21864E0)
#define ROADPUZZLERAILTILEDATA_GET_EXITINDEX_OFFSET UNITYSDK_OFFSET(0x2186540)
#define ROADPUZZLERAILTILEDATA_GET_ENTRANCEINDEX_OFFSET UNITYSDK_OFFSET(0x2186520)
#define ROADPUZZLERAILTILEDATA_GET_EXITINDEX_OFFSET UNITYSDK_OFFSET(0x2186590)
#define ROADPUZZLERAILTILEDATA_GET_RESOURCEPATH_OFFSET UNITYSDK_OFFSET(0x21865B0)
#define ROADPUZZLERAILTILEDATA_GETRESOURCEPATH_OFFSET UNITYSDK_OFFSET(0x21865F0)
#define ROADPUZZLERAILTILEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x2186700)
#define ROADPUZZLERAILTILEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x2186710)
#define ROADPUZZLERAILTILEDATA_EQUALS_OFFSET UNITYSDK_OFFSET(0x2186770)
#define ROADPUZZLERAILTILEDATA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x2186860)

	inline static constexpr unsigned int RoadPuzzleRailTileData_TypeDefinitionIndex = 4065;

	class RoadPuzzleRailTileData : public Il2CppObject
	{
	public:
		::FlatData::RoadPuzzleRailTileType* _Type_k__BackingField; // 0x28
		::System::String* resourcePath; // 0x30

		::FlatData::RoadPuzzleRailTileType* get_Type()
		{
			return ((::FlatData::RoadPuzzleRailTileType*(*)(::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLERAILTILEDATA_GET_TYPE_OFFSET))(nullptr);
		}

		::System::Void set_Type(::FlatData::RoadPuzzleRailTileType* arg)
		{
			((::System::Void(*)(::FlatData::RoadPuzzleRailTileType*, ::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLERAILTILEDATA_SET_TYPE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_EntranceIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLERAILTILEDATA_GET_ENTRANCEINDEX_OFFSET))(nullptr);
		}

		::System::Int32 get_ExitIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLERAILTILEDATA_GET_EXITINDEX_OFFSET))(nullptr);
		}

		::System::Int32 get_entranceIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLERAILTILEDATA_GET_ENTRANCEINDEX_OFFSET))(nullptr);
		}

		::System::Int32 get_exitIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLERAILTILEDATA_GET_EXITINDEX_OFFSET))(nullptr);
		}

		::System::String* get_ResourcePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLERAILTILEDATA_GET_RESOURCEPATH_OFFSET))(nullptr);
		}

		::System::String* GetResourcePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLERAILTILEDATA_GETRESOURCEPATH_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLERAILTILEDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(RoadPuzzleRailTileData* arg)
		{
			((::System::Void(*)(RoadPuzzleRailTileData*, ::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLERAILTILEDATA_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return ((::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLERAILTILEDATA_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLERAILTILEDATA_GETHASHCODE_OFFSET))(nullptr);
		}

	};

