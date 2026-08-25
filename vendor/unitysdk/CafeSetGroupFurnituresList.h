#pragma once
#include "unitysdk.h"

#define CAFESETGROUPFURNITURESLIST_GET_SETGROUPID_OFFSET UNITYSDK_OFFSET(0x225FC10)
#define CAFESETGROUPFURNITURESLIST_SET_SETGROUPID_OFFSET UNITYSDK_OFFSET(0x225FC20)
#define CAFESETGROUPFURNITURESLIST_REFRESHLIST_OFFSET UNITYSDK_OFFSET(0x225FC30)
#define CAFESETGROUPFURNITURESLIST_GET_SETNAME_OFFSET UNITYSDK_OFFSET(0x225FF10)
#define CAFESETGROUPFURNITURESLIST_SET_APPLIEDCOUNT_OFFSET UNITYSDK_OFFSET(0x225FF20)
#define CAFESETGROUPFURNITURESLIST_GET_APPLIEDCOUNT_OFFSET UNITYSDK_OFFSET(0x225FF30)
#define CAFESETGROUPFURNITURESLIST_.CTOR_OFFSET UNITYSDK_OFFSET(0x225FF40)
#define CAFESETGROUPFURNITURESLIST_SET_SETNAME_OFFSET UNITYSDK_OFFSET(0x225FF80)

	inline static constexpr unsigned int CafeSetGroupFurnituresList_TypeDefinitionIndex = 4572;

	class CafeSetGroupFurnituresList : public Namespace
	{
	public:
		::System::Int64 _SetGroupId_k__BackingField; // 0x90
		::System::Int32 _AppliedCount_k__BackingField; // 0x98
		::System::String* _SetName_k__BackingField; // 0xA0

		::System::Int64 get_SetGroupId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFESETGROUPFURNITURESLIST_GET_SETGROUPID_OFFSET))(nullptr);
		}

		::System::Void set_SetGroupId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CAFESETGROUPFURNITURESLIST_SET_SETGROUPID_OFFSET))(arg, nullptr);
		}

		::System::Void RefreshList()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFESETGROUPFURNITURESLIST_REFRESHLIST_OFFSET))(nullptr);
		}

		::System::String* get_SetName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFESETGROUPFURNITURESLIST_GET_SETNAME_OFFSET))(nullptr);
		}

		::System::Void set_AppliedCount(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CAFESETGROUPFURNITURESLIST_SET_APPLIEDCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_AppliedCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFESETGROUPFURNITURESLIST_GET_APPLIEDCOUNT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFESETGROUPFURNITURESLIST_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_SetName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + CAFESETGROUPFURNITURESLIST_SET_SETNAME_OFFSET))(str, nullptr);
		}

	};

