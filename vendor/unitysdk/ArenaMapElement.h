#pragma once
#include "unitysdk.h"

#define ARENAMAPELEMENT_GET_MAPID_OFFSET UNITYSDK_OFFSET(0x21F6370)
#define ARENAMAPELEMENT_GET_GROUNDGROUPID_OFFSET UNITYSDK_OFFSET(0x21F64E0)
#define ARENAMAPELEMENT_GET_STARTRANK_OFFSET UNITYSDK_OFFSET(0x21F64F0)
#define ARENAMAPELEMENT_GET_ISLOCKED_OFFSET UNITYSDK_OFFSET(0x21F61A0)
#define ARENAMAPELEMENT_GET_MAPNAMEKEY_OFFSET UNITYSDK_OFFSET(0x21F6660)
#define ARENAMAPELEMENT_GET_ENDRANK_OFFSET UNITYSDK_OFFSET(0x21F6030)
#define ARENAMAPELEMENT_GET_TERRAINTYPE_OFFSET UNITYSDK_OFFSET(0x21F6670)
#define ARENAMAPELEMENT_SET_ISSELECTED_OFFSET UNITYSDK_OFFSET(0x21F6680)
#define ARENAMAPELEMENT_SETGROUNDRANK_OFFSET UNITYSDK_OFFSET(0x21F6690)
#define ARENAMAPELEMENT_GET_ISSELECTED_OFFSET UNITYSDK_OFFSET(0x21F6790)
#define ARENAMAPELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x21F67A0)
#define ARENAMAPELEMENT_SET_GROUNDGROUPID_OFFSET UNITYSDK_OFFSET(0x21F6850)
#define ARENAMAPELEMENT_SET_TERRAINTYPE_OFFSET UNITYSDK_OFFSET(0x21F6860)
#define ARENAMAPELEMENT_SET_MAPNAMEKEY_OFFSET UNITYSDK_OFFSET(0x21F6870)

	inline static constexpr unsigned int ArenaMapElement_TypeDefinitionIndex = 4267;

	class ArenaMapElement : public Il2CppObject
	{
	public:
		::System::Int64 _TerrainType_k__BackingField; // 0x10
		::System::Int64 _GroundGroupId_k__BackingField; // 0x18
		::System::String* _MapNameKey_k__BackingField; // 0x20
		::System::Boolean _IsSelected_k__BackingField; // 0x28
		Il2CppObject* groundRanks; // 0x30

		::System::Int64 get_MapId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + ARENAMAPELEMENT_GET_MAPID_OFFSET))(nullptr);
		}

		::System::Int64 get_GroundGroupId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + ARENAMAPELEMENT_GET_GROUNDGROUPID_OFFSET))(nullptr);
		}

		::System::Int64 get_StartRank()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + ARENAMAPELEMENT_GET_STARTRANK_OFFSET))(nullptr);
		}

		::System::Boolean get_IsLocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ARENAMAPELEMENT_GET_ISLOCKED_OFFSET))(nullptr);
		}

		::System::String* get_MapNameKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ARENAMAPELEMENT_GET_MAPNAMEKEY_OFFSET))(nullptr);
		}

		::System::Int64 get_EndRank()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + ARENAMAPELEMENT_GET_ENDRANK_OFFSET))(nullptr);
		}

		::System::Int64 get_TerrainType()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + ARENAMAPELEMENT_GET_TERRAINTYPE_OFFSET))(nullptr);
		}

		::System::Void set_IsSelected(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + ARENAMAPELEMENT_SET_ISSELECTED_OFFSET))(arg, nullptr);
		}

		::System::Void SetGroundRank(::System::Int64 arg, ::System::Int64 arg2, ::System::Int64 arg3)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + ARENAMAPELEMENT_SETGROUNDRANK_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean get_IsSelected()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ARENAMAPELEMENT_GET_ISSELECTED_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int64 arg, ::System::Int64 arg2, ::System::String* str)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + ARENAMAPELEMENT_.CTOR_OFFSET))(arg, arg2, str, nullptr);
		}

		::System::Void set_GroundGroupId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + ARENAMAPELEMENT_SET_GROUNDGROUPID_OFFSET))(arg, nullptr);
		}

		::System::Void set_TerrainType(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + ARENAMAPELEMENT_SET_TERRAINTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void set_MapNameKey(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + ARENAMAPELEMENT_SET_MAPNAMEKEY_OFFSET))(str, nullptr);
		}

	};

