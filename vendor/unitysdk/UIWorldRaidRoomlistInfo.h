#pragma once
#include "unitysdk.h"

#define UIWORLDRAIDROOMLISTINFO_SET_GROUPID_OFFSET UNITYSDK_OFFSET(0xC09EC0)
#define UIWORLDRAIDROOMLISTINFO_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0xC09ED0)
#define UIWORLDRAIDROOMLISTINFO_SET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0xC09EE0)
#define UIWORLDRAIDROOMLISTINFO_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0xC09EF0)
#define UIWORLDRAIDROOMLISTINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0xC09F00)

	inline static constexpr unsigned int UIWorldRaidRoomlistInfo_TypeDefinitionIndex = 8804;

	class UIWorldRaidRoomlistInfo : public Il2CppObject
	{
	public:
		::System::Int64 _GroupId_k__BackingField; // 0x10
		::System::Int64 _UniqueId_k__BackingField; // 0x18

		::System::Void set_GroupId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDROOMLISTINFO_SET_GROUPID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_GroupId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDROOMLISTINFO_GET_GROUPID_OFFSET))(nullptr);
		}

		::System::Void set_UniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDROOMLISTINFO_SET_UNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_UniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDROOMLISTINFO_GET_UNIQUEID_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int64 arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDROOMLISTINFO_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

	};

