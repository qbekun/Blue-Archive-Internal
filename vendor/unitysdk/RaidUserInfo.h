#pragma once
#include "unitysdk.h"

#define RAIDUSERINFO_GET_CHARACTERID_OFFSET UNITYSDK_OFFSET(0x2232910)
#define RAIDUSERINFO_SET_SERVERID_OFFSET UNITYSDK_OFFSET(0x2232920)
#define RAIDUSERINFO_SET_CHARACTERID_OFFSET UNITYSDK_OFFSET(0x2232930)
#define RAIDUSERINFO_GET_SERVERID_OFFSET UNITYSDK_OFFSET(0x2232940)
#define RAIDUSERINFO_GET_NAME_OFFSET UNITYSDK_OFFSET(0x2232950)
#define RAIDUSERINFO_SET_NAME_OFFSET UNITYSDK_OFFSET(0x2232960)
#define RAIDUSERINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x2232970)

	inline static constexpr unsigned int RaidUserInfo_TypeDefinitionIndex = 4450;

	class RaidUserInfo : public Il2CppObject
	{
	public:
		::System::Int64 _ServerId_k__BackingField; // 0x10
		::System::Int64 _CharacterId_k__BackingField; // 0x18
		::System::String* _Name_k__BackingField; // 0x20

		::System::Int64 get_CharacterId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDUSERINFO_GET_CHARACTERID_OFFSET))(nullptr);
		}

		::System::Void set_ServerId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + RAIDUSERINFO_SET_SERVERID_OFFSET))(arg, nullptr);
		}

		::System::Void set_CharacterId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + RAIDUSERINFO_SET_CHARACTERID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_ServerId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDUSERINFO_GET_SERVERID_OFFSET))(nullptr);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDUSERINFO_GET_NAME_OFFSET))(nullptr);
		}

		::System::Void set_Name(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + RAIDUSERINFO_SET_NAME_OFFSET))(str, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDUSERINFO_.CTOR_OFFSET))(nullptr);
		}

	};

