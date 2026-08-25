#pragma once
#include "unitysdk.h"

namespace FlatData { class ContentType; }
namespace MX::Data { class WorldRaidSeasonInfo; }

#define UIWORLDRAIDBOSSLISTINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0xBFC2F0)
#define UIWORLDRAIDBOSSLISTINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0xBFC340)
#define UIWORLDRAIDBOSSLISTINFO_GET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0xBFC380)
#define UIWORLDRAIDBOSSLISTINFO_SET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0xBFC390)
#define UIWORLDRAIDBOSSLISTINFO_GET_SEASONID_OFFSET UNITYSDK_OFFSET(0xBFC3A0)
#define UIWORLDRAIDBOSSLISTINFO_SET_SEASONID_OFFSET UNITYSDK_OFFSET(0xBFC3B0)
#define UIWORLDRAIDBOSSLISTINFO_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0xBFC3C0)
#define UIWORLDRAIDBOSSLISTINFO_SET_GROUPID_OFFSET UNITYSDK_OFFSET(0xBFC3D0)
#define UIWORLDRAIDBOSSLISTINFO_GET_PHASEID_OFFSET UNITYSDK_OFFSET(0xBFC3E0)
#define UIWORLDRAIDBOSSLISTINFO_SET_PHASEID_OFFSET UNITYSDK_OFFSET(0xBFC3F0)

	inline static constexpr unsigned int UIWorldRaidBosslistInfo_TypeDefinitionIndex = 8773;

	class UIWorldRaidBosslistInfo : public Il2CppObject
	{
	public:
		::FlatData::ContentType* _ContentType_k__BackingField; // 0x10
		::System::Int64 _SeasonId_k__BackingField; // 0x18
		::System::Int64 _GroupId_k__BackingField; // 0x20
		::System::Int64 _PhaseId_k__BackingField; // 0x28

		::System::Void .ctor(::FlatData::ContentType* arg, ::MX::Data::WorldRaidSeasonInfo* arg2, ::System::Int64 arg3)
		{
			((::System::Void(*)(::FlatData::ContentType*, ::MX::Data::WorldRaidSeasonInfo*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDBOSSLISTINFO_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void .ctor(::FlatData::ContentType* arg, ::System::Int64 arg2, ::System::Int64 arg3, ::System::Int64 arg4)
		{
			((::System::Void(*)(::FlatData::ContentType*, ::System::Int64, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDBOSSLISTINFO_.CTOR_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::FlatData::ContentType* get_ContentType()
		{
			return ((::FlatData::ContentType*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDBOSSLISTINFO_GET_CONTENTTYPE_OFFSET))(nullptr);
		}

		::System::Void set_ContentType(::FlatData::ContentType* arg)
		{
			((::System::Void(*)(::FlatData::ContentType*, ::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDBOSSLISTINFO_SET_CONTENTTYPE_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_SeasonId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDBOSSLISTINFO_GET_SEASONID_OFFSET))(nullptr);
		}

		::System::Void set_SeasonId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDBOSSLISTINFO_SET_SEASONID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_GroupId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDBOSSLISTINFO_GET_GROUPID_OFFSET))(nullptr);
		}

		::System::Void set_GroupId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDBOSSLISTINFO_SET_GROUPID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_PhaseId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDBOSSLISTINFO_GET_PHASEID_OFFSET))(nullptr);
		}

		::System::Void set_PhaseId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDBOSSLISTINFO_SET_PHASEID_OFFSET))(arg, nullptr);
		}

	};

