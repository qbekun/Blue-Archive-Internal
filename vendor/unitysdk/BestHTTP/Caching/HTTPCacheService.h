#pragma once
#include "../../unitysdk.h"

namespace BestHTTP { class HTTPResponse; }
namespace BestHTTP::Caching { class HTTPCacheMaintananceParams; }
namespace BestHTTP { class HTTPRequest; }
namespace BestHTTP::Caching { class HTTPCacheFileInfo; }
namespace BestHTTP { class HTTPMethods; }

#define BESTHTTP_CACHING_HTTPCACHESERVICE_PREPARESTREAMED_OFFSET UNITYSDK_OFFSET(0x921FA0)
#define BESTHTTP_CACHING_HTTPCACHESERVICE_DELETEENTITY_OFFSET UNITYSDK_OFFSET(0x922760)
#define BESTHTTP_CACHING_HTTPCACHESERVICE_BEGINCLEAR_OFFSET UNITYSDK_OFFSET(0x922920)
#define BESTHTTP_CACHING_HTTPCACHESERVICE_SETUPCACHINGVALUES_OFFSET UNITYSDK_OFFSET(0x923030)
#define BESTHTTP_CACHING_HTTPCACHESERVICE_BEGINMAINTAINENCE_OFFSET UNITYSDK_OFFSET(0x9235C0)
#define BESTHTTP_CACHING_HTTPCACHESERVICE_SET_CACHEFOLDER_OFFSET UNITYSDK_OFFSET(0x923740)
#define BESTHTTP_CACHING_HTTPCACHESERVICE_LOADLIBRARY_OFFSET UNITYSDK_OFFSET(0x9237B0)
#define BESTHTTP_CACHING_HTTPCACHESERVICE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9247F0)
#define BESTHTTP_CACHING_HTTPCACHESERVICE_GETFULLRESPONSE_OFFSET UNITYSDK_OFFSET(0x9248F0)
#define BESTHTTP_CACHING_HTTPCACHESERVICE_SAVELIBRARY_OFFSET UNITYSDK_OFFSET(0x924B20)
#define BESTHTTP_CACHING_HTTPCACHESERVICE_DELETEUNUSEDFILES_OFFSET UNITYSDK_OFFSET(0x924280)
#define BESTHTTP_CACHING_HTTPCACHESERVICE_CLEARIMPL_OFFSET UNITYSDK_OFFSET(0x925450)
#define BESTHTTP_CACHING_HTTPCACHESERVICE_GET_CACHEFOLDER_OFFSET UNITYSDK_OFFSET(0x925830)
#define BESTHTTP_CACHING_HTTPCACHESERVICE_MAINTANANCEIMPL_OFFSET UNITYSDK_OFFSET(0x925880)
#define BESTHTTP_CACHING_HTTPCACHESERVICE_ISCACHEDENTITYEXPIRESINTHEFUTURE_OFFSET UNITYSDK_OFFSET(0x9263B0)
#define BESTHTTP_CACHING_HTTPCACHESERVICE_GET_LIBRARYPATH_OFFSET UNITYSDK_OFFSET(0x926680)
#define BESTHTTP_CACHING_HTTPCACHESERVICE_GETCACHESIZE_OFFSET UNITYSDK_OFFSET(0x9266D0)
#define BESTHTTP_CACHING_HTTPCACHESERVICE_GETENTITY_OFFSET UNITYSDK_OFFSET(0x926860)
#define BESTHTTP_CACHING_HTTPCACHESERVICE_HASENTITY_OFFSET UNITYSDK_OFFSET(0x926A40)
#define BESTHTTP_CACHING_HTTPCACHESERVICE_ISCACHEBLE_OFFSET UNITYSDK_OFFSET(0x926C00)
#define BESTHTTP_CACHING_HTTPCACHESERVICE_SETBODYLENGTH_OFFSET UNITYSDK_OFFSET(0x927000)
#define BESTHTTP_CACHING_HTTPCACHESERVICE_SET_LIBRARYPATH_OFFSET UNITYSDK_OFFSET(0x927470)
#define BESTHTTP_CACHING_HTTPCACHESERVICE_CHECKSETUP_OFFSET UNITYSDK_OFFSET(0x922340)
#define BESTHTTP_CACHING_HTTPCACHESERVICE_GET_ISSUPPORTED_OFFSET UNITYSDK_OFFSET(0x91F6B0)
#define BESTHTTP_CACHING_HTTPCACHESERVICE_DELETEENTITYIMPL_OFFSET UNITYSDK_OFFSET(0x922450)
#define BESTHTTP_CACHING_HTTPCACHESERVICE_GET_ISDOINGMAINTAINENCE_OFFSET UNITYSDK_OFFSET(0x9274E0)
#define BESTHTTP_CACHING_HTTPCACHESERVICE_STORE_OFFSET UNITYSDK_OFFSET(0x927570)
#define BESTHTTP_CACHING_HTTPCACHESERVICE_GETCACHEENTITYCOUNT_OFFSET UNITYSDK_OFFSET(0x927AD0)
#define BESTHTTP_CACHING_HTTPCACHESERVICE_SETHEADERS_OFFSET UNITYSDK_OFFSET(0x91E560)
#define BESTHTTP_CACHING_HTTPCACHESERVICE_SETUPCACHEFOLDER_OFFSET UNITYSDK_OFFSET(0x922A40)
#define BESTHTTP_CACHING_HTTPCACHESERVICE_GETNAMEIDX_OFFSET UNITYSDK_OFFSET(0x91EF20)
#define BESTHTTP_CACHING_HTTPCACHESERVICE_GETCACHESIZEIMPL_OFFSET UNITYSDK_OFFSET(0x9261E0)

namespace BestHTTP::Caching
{
	inline static constexpr unsigned int HTTPCacheService_TypeDefinitionIndex = 23475;

	class HTTPCacheService : public Il2CppObject
	{
	public:
		::System::Int32 LibraryVersion; // 0x0
		::System::Boolean isSupported; // 0x0
		::System::Boolean IsSupportCheckDone; // 0x1
		Il2CppObject* library; // 0x8
		::System::Threading::ReaderWriterLockSlim* rwLock; // 0x10
		Il2CppObject* UsedIndexes; // 0x18
		::System::String* _CacheFolder_k__BackingField; // 0x20
		::System::String* _LibraryPath_k__BackingField; // 0x28
		::System::Boolean InClearThread; // 0x30
		::System::Boolean InMaintainenceThread; // 0x31
		::System::UInt64 NextNameIDX; // 0x38

		::System::IO::Stream* PrepareStreamed(::System::Uri* arg, ::BestHTTP::HTTPResponse* arg)
		{
			return (return (::System::IO::Stream*(*)(::System::Uri*, ::BestHTTP::HTTPResponse*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CACHING_HTTPCACHESERVICE_PREPARESTREAMED_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean DeleteEntity(::System::Uri* arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::System::Uri*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CACHING_HTTPCACHESERVICE_DELETEENTITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void BeginClear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CACHING_HTTPCACHESERVICE_BEGINCLEAR_OFFSET))(nullptr);
		}

		::System::Void SetUpCachingValues(::System::Uri* arg, ::BestHTTP::HTTPResponse* arg)
		{
			((::System::Void(*)(::System::Uri*, ::BestHTTP::HTTPResponse*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CACHING_HTTPCACHESERVICE_SETUPCACHINGVALUES_OFFSET))(arg, arg, nullptr);
		}

		::System::Void BeginMaintainence(::BestHTTP::Caching::HTTPCacheMaintananceParams* arg)
		{
			((::System::Void(*)(::BestHTTP::Caching::HTTPCacheMaintananceParams*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CACHING_HTTPCACHESERVICE_BEGINMAINTAINENCE_OFFSET))(arg, nullptr);
		}

		::System::Void set_CacheFolder(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CACHING_HTTPCACHESERVICE_SET_CACHEFOLDER_OFFSET))(str, nullptr);
		}

		::System::Void LoadLibrary()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CACHING_HTTPCACHESERVICE_LOADLIBRARY_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CACHING_HTTPCACHESERVICE_.CCTOR_OFFSET))(nullptr);
		}

		::BestHTTP::HTTPResponse* GetFullResponse(::BestHTTP::HTTPRequest* arg)
		{
			return (return (::BestHTTP::HTTPResponse*(*)(::BestHTTP::HTTPRequest*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CACHING_HTTPCACHESERVICE_GETFULLRESPONSE_OFFSET))(arg, nullptr);
		}

		::System::Void SaveLibrary()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CACHING_HTTPCACHESERVICE_SAVELIBRARY_OFFSET))(nullptr);
		}

		::System::Void DeleteUnusedFiles()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CACHING_HTTPCACHESERVICE_DELETEUNUSEDFILES_OFFSET))(nullptr);
		}

		::System::Void ClearImpl()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CACHING_HTTPCACHESERVICE_CLEARIMPL_OFFSET))(nullptr);
		}

		::System::String* get_CacheFolder()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CACHING_HTTPCACHESERVICE_GET_CACHEFOLDER_OFFSET))(nullptr);
		}

		::System::Void MaintananceImpl(::BestHTTP::Caching::HTTPCacheMaintananceParams* arg)
		{
			((::System::Void(*)(::BestHTTP::Caching::HTTPCacheMaintananceParams*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CACHING_HTTPCACHESERVICE_MAINTANANCEIMPL_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsCachedEntityExpiresInTheFuture(::BestHTTP::HTTPRequest* arg)
		{
			return (return (::System::Boolean(*)(::BestHTTP::HTTPRequest*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CACHING_HTTPCACHESERVICE_ISCACHEDENTITYEXPIRESINTHEFUTURE_OFFSET))(arg, nullptr);
		}

		::System::String* get_LibraryPath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CACHING_HTTPCACHESERVICE_GET_LIBRARYPATH_OFFSET))(nullptr);
		}

		::System::UInt64 GetCacheSize()
		{
			return (return (::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CACHING_HTTPCACHESERVICE_GETCACHESIZE_OFFSET))(nullptr);
		}

		::BestHTTP::Caching::HTTPCacheFileInfo* GetEntity(::System::Uri* arg)
		{
			return (return (::BestHTTP::Caching::HTTPCacheFileInfo*(*)(::System::Uri*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CACHING_HTTPCACHESERVICE_GETENTITY_OFFSET))(arg, nullptr);
		}

		::System::Boolean HasEntity(::System::Uri* arg)
		{
			return (return (::System::Boolean(*)(::System::Uri*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CACHING_HTTPCACHESERVICE_HASENTITY_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsCacheble(::System::Uri* arg, ::BestHTTP::HTTPMethods* arg, ::BestHTTP::HTTPResponse* arg)
		{
			return (return (::System::Boolean(*)(::System::Uri*, ::BestHTTP::HTTPMethods*, ::BestHTTP::HTTPResponse*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CACHING_HTTPCACHESERVICE_ISCACHEBLE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void SetBodyLength(::System::Uri* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Uri*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CACHING_HTTPCACHESERVICE_SETBODYLENGTH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void set_LibraryPath(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CACHING_HTTPCACHESERVICE_SET_LIBRARYPATH_OFFSET))(str, nullptr);
		}

		::System::Void CheckSetup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CACHING_HTTPCACHESERVICE_CHECKSETUP_OFFSET))(nullptr);
		}

		::System::Boolean get_IsSupported()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CACHING_HTTPCACHESERVICE_GET_ISSUPPORTED_OFFSET))(nullptr);
		}

		::System::Void DeleteEntityImpl(::System::Uri* arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Uri*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CACHING_HTTPCACHESERVICE_DELETEENTITYIMPL_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean get_IsDoingMaintainence()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CACHING_HTTPCACHESERVICE_GET_ISDOINGMAINTAINENCE_OFFSET))(nullptr);
		}

		::BestHTTP::Caching::HTTPCacheFileInfo* Store(::System::Uri* arg, ::BestHTTP::HTTPMethods* arg, ::BestHTTP::HTTPResponse* arg)
		{
			return (return (::BestHTTP::Caching::HTTPCacheFileInfo*(*)(::System::Uri*, ::BestHTTP::HTTPMethods*, ::BestHTTP::HTTPResponse*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CACHING_HTTPCACHESERVICE_STORE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 GetCacheEntityCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CACHING_HTTPCACHESERVICE_GETCACHEENTITYCOUNT_OFFSET))(nullptr);
		}

		::System::Void SetHeaders(::BestHTTP::HTTPRequest* arg)
		{
			((::System::Void(*)(::BestHTTP::HTTPRequest*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CACHING_HTTPCACHESERVICE_SETHEADERS_OFFSET))(arg, nullptr);
		}

		::System::Void SetupCacheFolder()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CACHING_HTTPCACHESERVICE_SETUPCACHEFOLDER_OFFSET))(nullptr);
		}

		::System::UInt64 GetNameIdx()
		{
			return (return (::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CACHING_HTTPCACHESERVICE_GETNAMEIDX_OFFSET))(nullptr);
		}

		::System::UInt64 GetCacheSizeImpl()
		{
			return (return (::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CACHING_HTTPCACHESERVICE_GETCACHESIZEIMPL_OFFSET))(nullptr);
		}

	};
}

