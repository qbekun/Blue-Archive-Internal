#pragma once
#include "unitysdk.h"

namespace MX::Campaign { class HexLocation; }
class RoadPuzzleTileData;

#define ROADPUZZLETILEDATA_GET_LOCATION_OFFSET UNITYSDK_OFFSET(0x2185F50)
#define ROADPUZZLETILEDATA_SET_LOCATION_OFFSET UNITYSDK_OFFSET(0x2185F70)
#define ROADPUZZLETILEDATA_GET_ROTATION_OFFSET UNITYSDK_OFFSET(0x2185F80)
#define ROADPUZZLETILEDATA_SET_ROTATION_OFFSET UNITYSDK_OFFSET(0x2185F90)
#define ROADPUZZLETILEDATA_GET_UID_OFFSET UNITYSDK_OFFSET(0x2185FB0)
#define ROADPUZZLETILEDATA_SET_UID_OFFSET UNITYSDK_OFFSET(0x2185FC0)
#define ROADPUZZLETILEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x2185FD0)
#define ROADPUZZLETILEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x2185FE0)
#define ROADPUZZLETILEDATA_EQUALS_OFFSET UNITYSDK_OFFSET(0x2186030)
#define ROADPUZZLETILEDATA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x2186120)

	inline static constexpr unsigned int RoadPuzzleTileData_TypeDefinitionIndex = 4063;

	class RoadPuzzleTileData : public Il2CppObject
	{
	public:
		::MX::Campaign::HexLocation* _Location_k__BackingField; // 0x10
		::System::Int32 rotation; // 0x1C
		::System::Int64 _Uid_k__BackingField; // 0x20

		::MX::Campaign::HexLocation* get_Location()
		{
			return ((::MX::Campaign::HexLocation*(*)(::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLETILEDATA_GET_LOCATION_OFFSET))(nullptr);
		}

		::System::Void set_Location(::MX::Campaign::HexLocation* arg)
		{
			((::System::Void(*)(::MX::Campaign::HexLocation*, ::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLETILEDATA_SET_LOCATION_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Rotation()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLETILEDATA_GET_ROTATION_OFFSET))(nullptr);
		}

		::System::Void set_Rotation(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLETILEDATA_SET_ROTATION_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_Uid()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLETILEDATA_GET_UID_OFFSET))(nullptr);
		}

		::System::Void set_Uid(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLETILEDATA_SET_UID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLETILEDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(RoadPuzzleTileData* arg)
		{
			((::System::Void(*)(RoadPuzzleTileData*, ::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLETILEDATA_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return ((::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLETILEDATA_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLETILEDATA_GETHASHCODE_OFFSET))(nullptr);
		}

	};

