#pragma once
#include "unitysdk.h"

namespace MX::Data { class GuideMissionSeasonInfo; }

#define GUIDEMISSIONTABACTIVATIONCACHE_GET_CURRENTTABCACHE_OFFSET UNITYSDK_OFFSET(0x1EB61E0)
#define GUIDEMISSIONTABACTIVATIONCACHE_GET_SEASONINFO_OFFSET UNITYSDK_OFFSET(0x1EB61F0)
#define GUIDEMISSIONTABACTIVATIONCACHE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1EB6200)
#define GUIDEMISSIONTABACTIVATIONCACHE_GET_ACTIVETABS_OFFSET UNITYSDK_OFFSET(0x1EB65A0)
#define GUIDEMISSIONTABACTIVATIONCACHE_GET_CURRENTTAB_OFFSET UNITYSDK_OFFSET(0x1EB65B0)
#define GUIDEMISSIONTABACTIVATIONCACHE_SET_CURRENTTAB_OFFSET UNITYSDK_OFFSET(0x1EB6860)
#define GUIDEMISSIONTABACTIVATIONCACHE_SET_CURRENTTABCACHE_OFFSET UNITYSDK_OFFSET(0x1EB6870)

	inline static constexpr unsigned int GuideMissionTabActivationCache_TypeDefinitionIndex = 1724;

	class GuideMissionTabActivationCache : public Il2CppObject
	{
	public:
		::MX::Data::GuideMissionSeasonInfo* _SeasonInfo_k__BackingField; // 0x10
		Il2CppObject* _ActiveTabs_k__BackingField; // 0x18
		::System::Int64 _CurrentTabCache_k__BackingField; // 0x20

		::System::Int64 get_CurrentTabCache()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + GUIDEMISSIONTABACTIVATIONCACHE_GET_CURRENTTABCACHE_OFFSET))(nullptr);
		}

		::MX::Data::GuideMissionSeasonInfo* get_SeasonInfo()
		{
			return ((::MX::Data::GuideMissionSeasonInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + GUIDEMISSIONTABACTIVATIONCACHE_GET_SEASONINFO_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Data::GuideMissionSeasonInfo* arg)
		{
			((::System::Void(*)(::MX::Data::GuideMissionSeasonInfo*, ::PVOID))((::PBYTE)hIl2Cpp + GUIDEMISSIONTABACTIVATIONCACHE_.CTOR_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_ActiveTabs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + GUIDEMISSIONTABACTIVATIONCACHE_GET_ACTIVETABS_OFFSET))(nullptr);
		}

		::System::Int64 get_CurrentTab()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + GUIDEMISSIONTABACTIVATIONCACHE_GET_CURRENTTAB_OFFSET))(nullptr);
		}

		::System::Void set_CurrentTab(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + GUIDEMISSIONTABACTIVATIONCACHE_SET_CURRENTTAB_OFFSET))(arg, nullptr);
		}

		::System::Void set_CurrentTabCache(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + GUIDEMISSIONTABACTIVATIONCACHE_SET_CURRENTTABCACHE_OFFSET))(arg, nullptr);
		}

	};

