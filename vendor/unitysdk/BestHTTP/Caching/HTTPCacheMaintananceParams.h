#pragma once
#include "../../unitysdk.h"

#define BESTHTTP_CACHING_HTTPCACHEMAINTANANCEPARAMS_SET_MAXCACHESIZE_OFFSET UNITYSDK_OFFSET(0x921E50)
#define BESTHTTP_CACHING_HTTPCACHEMAINTANANCEPARAMS_GET_MAXCACHESIZE_OFFSET UNITYSDK_OFFSET(0x921E60)
#define BESTHTTP_CACHING_HTTPCACHEMAINTANANCEPARAMS_SET_DELETEOLDER_OFFSET UNITYSDK_OFFSET(0x921E70)
#define BESTHTTP_CACHING_HTTPCACHEMAINTANANCEPARAMS_.CTOR_OFFSET UNITYSDK_OFFSET(0x921E80)
#define BESTHTTP_CACHING_HTTPCACHEMAINTANANCEPARAMS_GET_DELETEOLDER_OFFSET UNITYSDK_OFFSET(0x921EB0)

namespace BestHTTP::Caching
{
	inline static constexpr unsigned int HTTPCacheMaintananceParams_TypeDefinitionIndex = 23471;

	class HTTPCacheMaintananceParams : public Il2CppObject
	{
	public:
		::System::TimeSpan* _DeleteOlder_k__BackingField; // 0x10
		::System::UInt64 _MaxCacheSize_k__BackingField; // 0x18

		::System::Void set_MaxCacheSize(::System::UInt64 arg)
		{
			((::System::Void(*)(::System::UInt64, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CACHING_HTTPCACHEMAINTANANCEPARAMS_SET_MAXCACHESIZE_OFFSET))(arg, nullptr);
		}

		::System::UInt64 get_MaxCacheSize()
		{
			return (return (::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CACHING_HTTPCACHEMAINTANANCEPARAMS_GET_MAXCACHESIZE_OFFSET))(nullptr);
		}

		::System::Void set_DeleteOlder(::System::TimeSpan* arg)
		{
			((::System::Void(*)(::System::TimeSpan*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CACHING_HTTPCACHEMAINTANANCEPARAMS_SET_DELETEOLDER_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::TimeSpan* arg, ::System::UInt64 arg)
		{
			((::System::Void(*)(::System::TimeSpan*, ::System::UInt64, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CACHING_HTTPCACHEMAINTANANCEPARAMS_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::TimeSpan* get_DeleteOlder()
		{
			return (return (::System::TimeSpan*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CACHING_HTTPCACHEMAINTANANCEPARAMS_GET_DELETEOLDER_OFFSET))(nullptr);
		}

	};
}

