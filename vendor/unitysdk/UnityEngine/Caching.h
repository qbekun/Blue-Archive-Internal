#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Hash128; }
namespace UnityEngine { class CachedAssetBundle; }
namespace UnityEngine { class Cache; }
namespace UnityEngine { class Hash128&; }
namespace UnityEngine { class Cache&; }

#define UNITYENGINE_CACHING_SET_COMPRESSIONENABLED_OFFSET UNITYSDK_OFFSET(0xA1E4770)
#define UNITYENGINE_CACHING_GET_READY_OFFSET UNITYSDK_OFFSET(0xA1E47B0)
#define UNITYENGINE_CACHING_CLEARCACHEDVERSION_OFFSET UNITYSDK_OFFSET(0xA1E47F0)
#define UNITYENGINE_CACHING_CLEARCACHEDVERSIONINTERNAL_OFFSET UNITYSDK_OFFSET(0xA1E48A0)
#define UNITYENGINE_CACHING_CLEAROTHERCACHEDVERSIONS_OFFSET UNITYSDK_OFFSET(0xA1E4920)
#define UNITYENGINE_CACHING_CLEARALLCACHEDVERSIONS_OFFSET UNITYSDK_OFFSET(0xA1E4A20)
#define UNITYENGINE_CACHING_CLEARCACHEDVERSIONS_OFFSET UNITYSDK_OFFSET(0xA1E49D0)
#define UNITYENGINE_CACHING_ISVERSIONCACHED_OFFSET UNITYSDK_OFFSET(0xA1E4B10)
#define UNITYENGINE_CACHING_ISVERSIONCACHED_OFFSET UNITYSDK_OFFSET(0xA1E4BE0)
#define UNITYENGINE_CACHING_ADDCACHE_OFFSET UNITYSDK_OFFSET(0xA1E4C80)
#define UNITYENGINE_CACHING_ADDCACHE_OFFSET UNITYSDK_OFFSET(0xA1E4F40)
#define UNITYENGINE_CACHING_GETCACHEBYPATH_OFFSET UNITYSDK_OFFSET(0xA1E4EF0)
#define UNITYENGINE_CACHING_GET_DEFAULTCACHE_OFFSET UNITYSDK_OFFSET(0xA1E5020)
#define UNITYENGINE_CACHING_GET_CURRENTCACHEFORWRITING_OFFSET UNITYSDK_OFFSET(0xA1E50A0)
#define UNITYENGINE_CACHING_SET_CURRENTCACHEFORWRITING_OFFSET UNITYSDK_OFFSET(0xA1E5120)
#define UNITYENGINE_CACHING_CLEARCACHEDVERSIONINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1E48E0)
#define UNITYENGINE_CACHING_CLEARCACHEDVERSIONS_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1E4AC0)
#define UNITYENGINE_CACHING_ISVERSIONCACHED_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1E4C30)
#define UNITYENGINE_CACHING_ADDCACHE_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1E4F90)
#define UNITYENGINE_CACHING_GETCACHEBYPATH_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1E4FE0)
#define UNITYENGINE_CACHING_GET_DEFAULTCACHE_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1E5060)
#define UNITYENGINE_CACHING_GET_CURRENTCACHEFORWRITING_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1E50E0)
#define UNITYENGINE_CACHING_SET_CURRENTCACHEFORWRITING_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1E5160)

namespace UnityEngine
{
	inline static constexpr unsigned int Caching_TypeDefinitionIndex = 30952;

	class Caching : public Il2CppObject
	{
	public:
		::System::Void set_compressionEnabled(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CACHING_SET_COMPRESSIONENABLED_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_ready()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CACHING_GET_READY_OFFSET))(nullptr);
		}

		::System::Boolean ClearCachedVersion(::System::String* str, ::UnityEngine::Hash128* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::UnityEngine::Hash128*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CACHING_CLEARCACHEDVERSION_OFFSET))(str, arg, nullptr);
		}

		::System::Boolean ClearCachedVersionInternal(::System::String* str, ::UnityEngine::Hash128* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::UnityEngine::Hash128*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CACHING_CLEARCACHEDVERSIONINTERNAL_OFFSET))(str, arg, nullptr);
		}

		::System::Boolean ClearOtherCachedVersions(::System::String* str, ::UnityEngine::Hash128* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::UnityEngine::Hash128*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CACHING_CLEAROTHERCACHEDVERSIONS_OFFSET))(str, arg, nullptr);
		}

		::System::Boolean ClearAllCachedVersions(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CACHING_CLEARALLCACHEDVERSIONS_OFFSET))(str, nullptr);
		}

		::System::Boolean ClearCachedVersions(::System::String* str, ::UnityEngine::Hash128* arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::UnityEngine::Hash128*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CACHING_CLEARCACHEDVERSIONS_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Boolean IsVersionCached(::UnityEngine::CachedAssetBundle* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::CachedAssetBundle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CACHING_ISVERSIONCACHED_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsVersionCached(::System::String* str, ::System::String* str, ::UnityEngine::Hash128* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::String*, ::UnityEngine::Hash128*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CACHING_ISVERSIONCACHED_OFFSET))(str, str, arg, nullptr);
		}

		::UnityEngine::Cache* AddCache(::System::String* str)
		{
			return (return (::UnityEngine::Cache*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CACHING_ADDCACHE_OFFSET))(str, nullptr);
		}

		::UnityEngine::Cache* AddCache(::System::String* str, ::System::Boolean arg)
		{
			return (return (::UnityEngine::Cache*(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CACHING_ADDCACHE_OFFSET))(str, arg, nullptr);
		}

		::UnityEngine::Cache* GetCacheByPath(::System::String* str)
		{
			return (return (::UnityEngine::Cache*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CACHING_GETCACHEBYPATH_OFFSET))(str, nullptr);
		}

		::UnityEngine::Cache* get_defaultCache()
		{
			return (return (::UnityEngine::Cache*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CACHING_GET_DEFAULTCACHE_OFFSET))(nullptr);
		}

		::UnityEngine::Cache* get_currentCacheForWriting()
		{
			return (return (::UnityEngine::Cache*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CACHING_GET_CURRENTCACHEFORWRITING_OFFSET))(nullptr);
		}

		::System::Void set_currentCacheForWriting(::UnityEngine::Cache* arg)
		{
			((::System::Void(*)(::UnityEngine::Cache*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CACHING_SET_CURRENTCACHEFORWRITING_OFFSET))(arg, nullptr);
		}

		::System::Boolean ClearCachedVersionInternal_Injected(::System::String* str, ::UnityEngine::Hash128&* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::UnityEngine::Hash128&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CACHING_CLEARCACHEDVERSIONINTERNAL_INJECTED_OFFSET))(str, arg, nullptr);
		}

		::System::Boolean ClearCachedVersions_Injected(::System::String* str, ::UnityEngine::Hash128&* arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::UnityEngine::Hash128&*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CACHING_CLEARCACHEDVERSIONS_INJECTED_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Boolean IsVersionCached_Injected(::System::String* str, ::System::String* str, ::UnityEngine::Hash128&* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::String*, ::UnityEngine::Hash128&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CACHING_ISVERSIONCACHED_INJECTED_OFFSET))(str, str, arg, nullptr);
		}

		::System::Void AddCache_Injected(::System::String* str, ::System::Boolean arg, ::UnityEngine::Cache&* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Boolean, ::UnityEngine::Cache&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CACHING_ADDCACHE_INJECTED_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Void GetCacheByPath_Injected(::System::String* str, ::UnityEngine::Cache&* arg)
		{
			((::System::Void(*)(::System::String*, ::UnityEngine::Cache&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CACHING_GETCACHEBYPATH_INJECTED_OFFSET))(str, arg, nullptr);
		}

		::System::Void get_defaultCache_Injected(::UnityEngine::Cache&* arg)
		{
			((::System::Void(*)(::UnityEngine::Cache&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CACHING_GET_DEFAULTCACHE_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void get_currentCacheForWriting_Injected(::UnityEngine::Cache&* arg)
		{
			((::System::Void(*)(::UnityEngine::Cache&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CACHING_GET_CURRENTCACHEFORWRITING_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void set_currentCacheForWriting_Injected(::UnityEngine::Cache&* arg)
		{
			((::System::Void(*)(::UnityEngine::Cache&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CACHING_SET_CURRENTCACHEFORWRITING_INJECTED_OFFSET))(arg, nullptr);
		}

	};
}

