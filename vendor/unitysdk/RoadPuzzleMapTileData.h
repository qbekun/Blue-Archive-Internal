#pragma once
#include "unitysdk.h"

namespace FlatData { class RoadPuzzleMapTileType; }
class RoadPuzzleMapTileData;

#define ROADPUZZLEMAPTILEDATA_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x21861B0)
#define ROADPUZZLEMAPTILEDATA_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x21861C0)
#define ROADPUZZLEMAPTILEDATA_GETRESOURCEPATH_OFFSET UNITYSDK_OFFSET(0x21861D0)
#define ROADPUZZLEMAPTILEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x21862E0)
#define ROADPUZZLEMAPTILEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x21862F0)
#define ROADPUZZLEMAPTILEDATA_EQUALS_OFFSET UNITYSDK_OFFSET(0x2186350)
#define ROADPUZZLEMAPTILEDATA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x21863D0)

	inline static constexpr unsigned int RoadPuzzleMapTileData_TypeDefinitionIndex = 4064;

	class RoadPuzzleMapTileData : public Il2CppObject
	{
	public:
		::FlatData::RoadPuzzleMapTileType* _Type_k__BackingField; // 0x28
		::System::String* ResourcePath; // 0x30

		::FlatData::RoadPuzzleMapTileType* get_Type()
		{
			return ((::FlatData::RoadPuzzleMapTileType*(*)(::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLEMAPTILEDATA_GET_TYPE_OFFSET))(nullptr);
		}

		::System::Void set_Type(::FlatData::RoadPuzzleMapTileType* arg)
		{
			((::System::Void(*)(::FlatData::RoadPuzzleMapTileType*, ::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLEMAPTILEDATA_SET_TYPE_OFFSET))(arg, nullptr);
		}

		::System::String* GetResourcePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLEMAPTILEDATA_GETRESOURCEPATH_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLEMAPTILEDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(RoadPuzzleMapTileData* arg)
		{
			((::System::Void(*)(RoadPuzzleMapTileData*, ::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLEMAPTILEDATA_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return ((::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLEMAPTILEDATA_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLEMAPTILEDATA_GETHASHCODE_OFFSET))(nullptr);
		}

	};

