#pragma once
#include "../../unitysdk.h"

namespace BestHTTP { class HTTPResponse; }
namespace BestHTTP { class HTTPRequest; }
namespace BestHTTP::Caching { class HTTPCacheFileInfo; }

#define BESTHTTP_CACHING_HTTPCACHEFILEINFO_GET_URI_OFFSET UNITYSDK_OFFSET(0x91EBD0)
#define BESTHTTP_CACHING_HTTPCACHEFILEINFO_SET_URI_OFFSET UNITYSDK_OFFSET(0x91EBE0)
#define BESTHTTP_CACHING_HTTPCACHEFILEINFO_GET_LASTACCESS_OFFSET UNITYSDK_OFFSET(0x91EBF0)
#define BESTHTTP_CACHING_HTTPCACHEFILEINFO_SET_LASTACCESS_OFFSET UNITYSDK_OFFSET(0x91EC00)
#define BESTHTTP_CACHING_HTTPCACHEFILEINFO_GET_BODYLENGTH_OFFSET UNITYSDK_OFFSET(0x91EC10)
#define BESTHTTP_CACHING_HTTPCACHEFILEINFO_SET_BODYLENGTH_OFFSET UNITYSDK_OFFSET(0x91EC20)
#define BESTHTTP_CACHING_HTTPCACHEFILEINFO_GET_ETAG_OFFSET UNITYSDK_OFFSET(0x91EC30)
#define BESTHTTP_CACHING_HTTPCACHEFILEINFO_SET_ETAG_OFFSET UNITYSDK_OFFSET(0x91EC40)
#define BESTHTTP_CACHING_HTTPCACHEFILEINFO_GET_LASTMODIFIED_OFFSET UNITYSDK_OFFSET(0x91EC50)
#define BESTHTTP_CACHING_HTTPCACHEFILEINFO_SET_LASTMODIFIED_OFFSET UNITYSDK_OFFSET(0x91EC60)
#define BESTHTTP_CACHING_HTTPCACHEFILEINFO_GET_EXPIRES_OFFSET UNITYSDK_OFFSET(0x91EC70)
#define BESTHTTP_CACHING_HTTPCACHEFILEINFO_SET_EXPIRES_OFFSET UNITYSDK_OFFSET(0x91EC80)
#define BESTHTTP_CACHING_HTTPCACHEFILEINFO_GET_AGE_OFFSET UNITYSDK_OFFSET(0x91EC90)
#define BESTHTTP_CACHING_HTTPCACHEFILEINFO_SET_AGE_OFFSET UNITYSDK_OFFSET(0x91ECA0)
#define BESTHTTP_CACHING_HTTPCACHEFILEINFO_GET_MAXAGE_OFFSET UNITYSDK_OFFSET(0x91ECB0)
#define BESTHTTP_CACHING_HTTPCACHEFILEINFO_SET_MAXAGE_OFFSET UNITYSDK_OFFSET(0x91ECC0)
#define BESTHTTP_CACHING_HTTPCACHEFILEINFO_GET_DATE_OFFSET UNITYSDK_OFFSET(0x91ECD0)
#define BESTHTTP_CACHING_HTTPCACHEFILEINFO_SET_DATE_OFFSET UNITYSDK_OFFSET(0x91ECE0)
#define BESTHTTP_CACHING_HTTPCACHEFILEINFO_GET_MUSTREVALIDATE_OFFSET UNITYSDK_OFFSET(0x91ECF0)
#define BESTHTTP_CACHING_HTTPCACHEFILEINFO_SET_MUSTREVALIDATE_OFFSET UNITYSDK_OFFSET(0x91ED00)
#define BESTHTTP_CACHING_HTTPCACHEFILEINFO_GET_NOCACHE_OFFSET UNITYSDK_OFFSET(0x91ED10)
#define BESTHTTP_CACHING_HTTPCACHEFILEINFO_SET_NOCACHE_OFFSET UNITYSDK_OFFSET(0x91ED20)
#define BESTHTTP_CACHING_HTTPCACHEFILEINFO_GET_STALEWHILEREVALIDATE_OFFSET UNITYSDK_OFFSET(0x91ED30)
#define BESTHTTP_CACHING_HTTPCACHEFILEINFO_SET_STALEWHILEREVALIDATE_OFFSET UNITYSDK_OFFSET(0x91ED40)
#define BESTHTTP_CACHING_HTTPCACHEFILEINFO_GET_STALEIFERROR_OFFSET UNITYSDK_OFFSET(0x91ED50)
#define BESTHTTP_CACHING_HTTPCACHEFILEINFO_SET_STALEIFERROR_OFFSET UNITYSDK_OFFSET(0x91ED60)
#define BESTHTTP_CACHING_HTTPCACHEFILEINFO_GET_RECEIVED_OFFSET UNITYSDK_OFFSET(0x91ED70)
#define BESTHTTP_CACHING_HTTPCACHEFILEINFO_SET_RECEIVED_OFFSET UNITYSDK_OFFSET(0x91ED80)
#define BESTHTTP_CACHING_HTTPCACHEFILEINFO_GET_CONSTRUCTEDPATH_OFFSET UNITYSDK_OFFSET(0x91ED90)
#define BESTHTTP_CACHING_HTTPCACHEFILEINFO_SET_CONSTRUCTEDPATH_OFFSET UNITYSDK_OFFSET(0x91EDA0)
#define BESTHTTP_CACHING_HTTPCACHEFILEINFO_GET_MAPPEDNAMEIDX_OFFSET UNITYSDK_OFFSET(0x91EDB0)
#define BESTHTTP_CACHING_HTTPCACHEFILEINFO_SET_MAPPEDNAMEIDX_OFFSET UNITYSDK_OFFSET(0x91EDC0)
#define BESTHTTP_CACHING_HTTPCACHEFILEINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x91EDD0)
#define BESTHTTP_CACHING_HTTPCACHEFILEINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x91EE90)
#define BESTHTTP_CACHING_HTTPCACHEFILEINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x91F000)
#define BESTHTTP_CACHING_HTTPCACHEFILEINFO_SAVETO_OFFSET UNITYSDK_OFFSET(0x91F230)
#define BESTHTTP_CACHING_HTTPCACHEFILEINFO_GETPATH_OFFSET UNITYSDK_OFFSET(0x91F420)
#define BESTHTTP_CACHING_HTTPCACHEFILEINFO_ISEXISTS_OFFSET UNITYSDK_OFFSET(0x91F560)
#define BESTHTTP_CACHING_HTTPCACHEFILEINFO_DELETE_OFFSET UNITYSDK_OFFSET(0x91FA70)
#define BESTHTTP_CACHING_HTTPCACHEFILEINFO_RESET_OFFSET UNITYSDK_OFFSET(0x91FCC0)
#define BESTHTTP_CACHING_HTTPCACHEFILEINFO_SETUPCACHINGVALUES_OFFSET UNITYSDK_OFFSET(0x91FDA0)
#define BESTHTTP_CACHING_HTTPCACHEFILEINFO_WILLEXPIREINTHEFUTURE_OFFSET UNITYSDK_OFFSET(0x920390)
#define BESTHTTP_CACHING_HTTPCACHEFILEINFO_SETUPREVALIDATIONHEADERS_OFFSET UNITYSDK_OFFSET(0x920570)
#define BESTHTTP_CACHING_HTTPCACHEFILEINFO_GETBODYSTREAM_OFFSET UNITYSDK_OFFSET(0x920620)
#define BESTHTTP_CACHING_HTTPCACHEFILEINFO_READRESPONSETO_OFFSET UNITYSDK_OFFSET(0x920790)
#define BESTHTTP_CACHING_HTTPCACHEFILEINFO_STORE_OFFSET UNITYSDK_OFFSET(0x920AA0)
#define BESTHTTP_CACHING_HTTPCACHEFILEINFO_GETSAVESTREAM_OFFSET UNITYSDK_OFFSET(0x921440)
#define BESTHTTP_CACHING_HTTPCACHEFILEINFO_COMPARETO_OFFSET UNITYSDK_OFFSET(0x921DE0)

namespace BestHTTP::Caching
{
	inline static constexpr unsigned int HTTPCacheFileInfo_TypeDefinitionIndex = 23470;

	class HTTPCacheFileInfo : public Il2CppObject
	{
	public:
		::System::Uri* _Uri_k__BackingField; // 0x10
		::System::DateTime* _LastAccess_k__BackingField; // 0x18
		::System::Int32 _BodyLength_k__BackingField; // 0x20
		::System::String* _ETag_k__BackingField; // 0x28
		::System::String* _LastModified_k__BackingField; // 0x30
		::System::DateTime* _Expires_k__BackingField; // 0x38
		::System::Int64 _Age_k__BackingField; // 0x40
		::System::Int64 _MaxAge_k__BackingField; // 0x48
		::System::DateTime* _Date_k__BackingField; // 0x50
		::System::Boolean _MustRevalidate_k__BackingField; // 0x58
		::System::Boolean _NoCache_k__BackingField; // 0x59
		::System::Int64 _StaleWhileRevalidate_k__BackingField; // 0x60
		::System::Int64 _StaleIfError_k__BackingField; // 0x68
		::System::DateTime* _Received_k__BackingField; // 0x70
		::System::String* _ConstructedPath_k__BackingField; // 0x78
		::System::UInt64 _MappedNameIDX_k__BackingField; // 0x80

		::System::Uri* get_Uri()
		{
			return (return (::System::Uri*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CACHING_HTTPCACHEFILEINFO_GET_URI_OFFSET))(nullptr);
		}

		::System::Void set_Uri(::System::Uri* arg)
		{
			((::System::Void(*)(::System::Uri*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CACHING_HTTPCACHEFILEINFO_SET_URI_OFFSET))(arg, nullptr);
		}

		::System::DateTime* get_LastAccess()
		{
			return (return (::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CACHING_HTTPCACHEFILEINFO_GET_LASTACCESS_OFFSET))(nullptr);
		}

		::System::Void set_LastAccess(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CACHING_HTTPCACHEFILEINFO_SET_LASTACCESS_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_BodyLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CACHING_HTTPCACHEFILEINFO_GET_BODYLENGTH_OFFSET))(nullptr);
		}

		::System::Void set_BodyLength(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CACHING_HTTPCACHEFILEINFO_SET_BODYLENGTH_OFFSET))(arg, nullptr);
		}

		::System::String* get_ETag()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CACHING_HTTPCACHEFILEINFO_GET_ETAG_OFFSET))(nullptr);
		}

		::System::Void set_ETag(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CACHING_HTTPCACHEFILEINFO_SET_ETAG_OFFSET))(str, nullptr);
		}

		::System::String* get_LastModified()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CACHING_HTTPCACHEFILEINFO_GET_LASTMODIFIED_OFFSET))(nullptr);
		}

		::System::Void set_LastModified(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CACHING_HTTPCACHEFILEINFO_SET_LASTMODIFIED_OFFSET))(str, nullptr);
		}

		::System::DateTime* get_Expires()
		{
			return (return (::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CACHING_HTTPCACHEFILEINFO_GET_EXPIRES_OFFSET))(nullptr);
		}

		::System::Void set_Expires(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CACHING_HTTPCACHEFILEINFO_SET_EXPIRES_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_Age()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CACHING_HTTPCACHEFILEINFO_GET_AGE_OFFSET))(nullptr);
		}

		::System::Void set_Age(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CACHING_HTTPCACHEFILEINFO_SET_AGE_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_MaxAge()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CACHING_HTTPCACHEFILEINFO_GET_MAXAGE_OFFSET))(nullptr);
		}

		::System::Void set_MaxAge(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CACHING_HTTPCACHEFILEINFO_SET_MAXAGE_OFFSET))(arg, nullptr);
		}

		::System::DateTime* get_Date()
		{
			return (return (::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CACHING_HTTPCACHEFILEINFO_GET_DATE_OFFSET))(nullptr);
		}

		::System::Void set_Date(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CACHING_HTTPCACHEFILEINFO_SET_DATE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_MustRevalidate()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CACHING_HTTPCACHEFILEINFO_GET_MUSTREVALIDATE_OFFSET))(nullptr);
		}

		::System::Void set_MustRevalidate(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CACHING_HTTPCACHEFILEINFO_SET_MUSTREVALIDATE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_NoCache()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CACHING_HTTPCACHEFILEINFO_GET_NOCACHE_OFFSET))(nullptr);
		}

		::System::Void set_NoCache(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CACHING_HTTPCACHEFILEINFO_SET_NOCACHE_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_StaleWhileRevalidate()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CACHING_HTTPCACHEFILEINFO_GET_STALEWHILEREVALIDATE_OFFSET))(nullptr);
		}

		::System::Void set_StaleWhileRevalidate(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CACHING_HTTPCACHEFILEINFO_SET_STALEWHILEREVALIDATE_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_StaleIfError()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CACHING_HTTPCACHEFILEINFO_GET_STALEIFERROR_OFFSET))(nullptr);
		}

		::System::Void set_StaleIfError(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CACHING_HTTPCACHEFILEINFO_SET_STALEIFERROR_OFFSET))(arg, nullptr);
		}

		::System::DateTime* get_Received()
		{
			return (return (::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CACHING_HTTPCACHEFILEINFO_GET_RECEIVED_OFFSET))(nullptr);
		}

		::System::Void set_Received(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CACHING_HTTPCACHEFILEINFO_SET_RECEIVED_OFFSET))(arg, nullptr);
		}

		::System::String* get_ConstructedPath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CACHING_HTTPCACHEFILEINFO_GET_CONSTRUCTEDPATH_OFFSET))(nullptr);
		}

		::System::Void set_ConstructedPath(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CACHING_HTTPCACHEFILEINFO_SET_CONSTRUCTEDPATH_OFFSET))(str, nullptr);
		}

		::System::UInt64 get_MappedNameIDX()
		{
			return (return (::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CACHING_HTTPCACHEFILEINFO_GET_MAPPEDNAMEIDX_OFFSET))(nullptr);
		}

		::System::Void set_MappedNameIDX(::System::UInt64 arg)
		{
			((::System::Void(*)(::System::UInt64, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CACHING_HTTPCACHEFILEINFO_SET_MAPPEDNAMEIDX_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Uri* arg)
		{
			((::System::Void(*)(::System::Uri*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CACHING_HTTPCACHEFILEINFO_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Uri* arg, ::System::DateTime* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Uri*, ::System::DateTime*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CACHING_HTTPCACHEFILEINFO_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Uri* arg, ::System::IO::BinaryReader* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Uri*, ::System::IO::BinaryReader*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CACHING_HTTPCACHEFILEINFO_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void SaveTo(::System::IO::BinaryWriter* arg)
		{
			((::System::Void(*)(::System::IO::BinaryWriter*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CACHING_HTTPCACHEFILEINFO_SAVETO_OFFSET))(arg, nullptr);
		}

		::System::String* GetPath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CACHING_HTTPCACHEFILEINFO_GETPATH_OFFSET))(nullptr);
		}

		::System::Boolean IsExists()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CACHING_HTTPCACHEFILEINFO_ISEXISTS_OFFSET))(nullptr);
		}

		::System::Void Delete()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CACHING_HTTPCACHEFILEINFO_DELETE_OFFSET))(nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CACHING_HTTPCACHEFILEINFO_RESET_OFFSET))(nullptr);
		}

		::System::Void SetUpCachingValues(::BestHTTP::HTTPResponse* arg)
		{
			((::System::Void(*)(::BestHTTP::HTTPResponse*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CACHING_HTTPCACHEFILEINFO_SETUPCACHINGVALUES_OFFSET))(arg, nullptr);
		}

		::System::Boolean WillExpireInTheFuture(::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CACHING_HTTPCACHEFILEINFO_WILLEXPIREINTHEFUTURE_OFFSET))(arg, nullptr);
		}

		::System::Void SetUpRevalidationHeaders(::BestHTTP::HTTPRequest* arg)
		{
			((::System::Void(*)(::BestHTTP::HTTPRequest*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CACHING_HTTPCACHEFILEINFO_SETUPREVALIDATIONHEADERS_OFFSET))(arg, nullptr);
		}

		::System::IO::Stream* GetBodyStream(int32_t&* arg)
		{
			return (return (::System::IO::Stream*(*)(int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CACHING_HTTPCACHEFILEINFO_GETBODYSTREAM_OFFSET))(arg, nullptr);
		}

		::BestHTTP::HTTPResponse* ReadResponseTo(::BestHTTP::HTTPRequest* arg)
		{
			return (return (::BestHTTP::HTTPResponse*(*)(::BestHTTP::HTTPRequest*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CACHING_HTTPCACHEFILEINFO_READRESPONSETO_OFFSET))(arg, nullptr);
		}

		::System::Void Store(::BestHTTP::HTTPResponse* arg)
		{
			((::System::Void(*)(::BestHTTP::HTTPResponse*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CACHING_HTTPCACHEFILEINFO_STORE_OFFSET))(arg, nullptr);
		}

		::System::IO::Stream* GetSaveStream(::BestHTTP::HTTPResponse* arg)
		{
			return (return (::System::IO::Stream*(*)(::BestHTTP::HTTPResponse*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CACHING_HTTPCACHEFILEINFO_GETSAVESTREAM_OFFSET))(arg, nullptr);
		}

		::System::Int32 CompareTo(::BestHTTP::Caching::HTTPCacheFileInfo* arg)
		{
			return (return (::System::Int32(*)(::BestHTTP::Caching::HTTPCacheFileInfo*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CACHING_HTTPCACHEFILEINFO_COMPARETO_OFFSET))(arg, nullptr);
		}

	};
}

