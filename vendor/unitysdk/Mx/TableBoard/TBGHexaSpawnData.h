#pragma once
#include "../../unitysdk.h"

namespace MX::TableBoard { class TBGHexaObjectSpawnRule; }
namespace MX::Campaign { class HexLocation; }

#define MX_TABLEBOARD_TBGHEXASPAWNDATA_SET_UNIQUEIDS_OFFSET UNITYSDK_OFFSET(0xF02AB0)
#define MX_TABLEBOARD_TBGHEXASPAWNDATA_SET_SPAWNRULE_OFFSET UNITYSDK_OFFSET(0xF02AC0)
#define MX_TABLEBOARD_TBGHEXASPAWNDATA_GET_SPAWNRULE_OFFSET UNITYSDK_OFFSET(0xF02AD0)
#define MX_TABLEBOARD_TBGHEXASPAWNDATA_SET_OBJECTTYPES_OFFSET UNITYSDK_OFFSET(0xF02AE0)
#define MX_TABLEBOARD_TBGHEXASPAWNDATA_GET_UNIQUEIDS_OFFSET UNITYSDK_OFFSET(0xF02AF0)
#define MX_TABLEBOARD_TBGHEXASPAWNDATA_SET_LOCATION_OFFSET UNITYSDK_OFFSET(0xF02B00)
#define MX_TABLEBOARD_TBGHEXASPAWNDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0xF02B10)
#define MX_TABLEBOARD_TBGHEXASPAWNDATA_TOSTRING_OFFSET UNITYSDK_OFFSET(0xF02B20)
#define MX_TABLEBOARD_TBGHEXASPAWNDATA_GET_LOCATION_OFFSET UNITYSDK_OFFSET(0xF02D80)
#define MX_TABLEBOARD_TBGHEXASPAWNDATA_SET_SHUFFLEGROUPID_OFFSET UNITYSDK_OFFSET(0xF02DA0)
#define MX_TABLEBOARD_TBGHEXASPAWNDATA_GET_SHUFFLEGROUPID_OFFSET UNITYSDK_OFFSET(0xF02DB0)
#define MX_TABLEBOARD_TBGHEXASPAWNDATA_GET_OBJECTTYPES_OFFSET UNITYSDK_OFFSET(0xF02DC0)

namespace MX::TableBoard
{
	inline static constexpr unsigned int TBGHexaSpawnData_TypeDefinitionIndex = 11191;

	class TBGHexaSpawnData : public Il2CppObject
	{
	public:
		::MX::TableBoard::TBGHexaObjectSpawnRule* _SpawnRule_k__BackingField; // 0x10
		::MX::Campaign::HexLocation* _Location_k__BackingField; // 0x14
		Il2CppObject* _UniqueIds_k__BackingField; // 0x20
		Il2CppObject* _ObjectTypes_k__BackingField; // 0x28
		::System::Int64 _ShuffleGroupId_k__BackingField; // 0x30

		::System::Void set_UniqueIds(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGHEXASPAWNDATA_SET_UNIQUEIDS_OFFSET))(arg, nullptr);
		}

		::System::Void set_SpawnRule(::MX::TableBoard::TBGHexaObjectSpawnRule* arg)
		{
			((::System::Void(*)(::MX::TableBoard::TBGHexaObjectSpawnRule*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGHEXASPAWNDATA_SET_SPAWNRULE_OFFSET))(arg, nullptr);
		}

		::MX::TableBoard::TBGHexaObjectSpawnRule* get_SpawnRule()
		{
			return ((::MX::TableBoard::TBGHexaObjectSpawnRule*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGHEXASPAWNDATA_GET_SPAWNRULE_OFFSET))(nullptr);
		}

		::System::Void set_ObjectTypes(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGHEXASPAWNDATA_SET_OBJECTTYPES_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_UniqueIds()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGHEXASPAWNDATA_GET_UNIQUEIDS_OFFSET))(nullptr);
		}

		::System::Void set_Location(::MX::Campaign::HexLocation* arg)
		{
			((::System::Void(*)(::MX::Campaign::HexLocation*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGHEXASPAWNDATA_SET_LOCATION_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGHEXASPAWNDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGHEXASPAWNDATA_TOSTRING_OFFSET))(nullptr);
		}

		::MX::Campaign::HexLocation* get_Location()
		{
			return ((::MX::Campaign::HexLocation*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGHEXASPAWNDATA_GET_LOCATION_OFFSET))(nullptr);
		}

		::System::Void set_ShuffleGroupId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGHEXASPAWNDATA_SET_SHUFFLEGROUPID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_ShuffleGroupId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGHEXASPAWNDATA_GET_SHUFFLEGROUPID_OFFSET))(nullptr);
		}

		Il2CppObject* get_ObjectTypes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TABLEBOARD_TBGHEXASPAWNDATA_GET_OBJECTTYPES_OFFSET))(nullptr);
		}

	};
}

