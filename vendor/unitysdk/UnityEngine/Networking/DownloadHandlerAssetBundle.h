#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Networking { class DownloadHandlerAssetBundle; }
namespace UnityEngine { class Hash128; }
namespace UnityEngine { class CachedAssetBundle; }
namespace UnityEngine { class AssetBundle; }
namespace UnityEngine::Networking { class UnityWebRequest; }
namespace UnityEngine { class Hash128&; }

#define UNITYENGINE_NETWORKING_DOWNLOADHANDLERASSETBUNDLE_CREATE_OFFSET UNITYSDK_OFFSET(0xA49F650)
#define UNITYENGINE_NETWORKING_DOWNLOADHANDLERASSETBUNDLE_CREATECACHED_OFFSET UNITYSDK_OFFSET(0xA49F6A0)
#define UNITYENGINE_NETWORKING_DOWNLOADHANDLERASSETBUNDLE_INTERNALCREATEASSETBUNDLE_OFFSET UNITYSDK_OFFSET(0xA49F740)
#define UNITYENGINE_NETWORKING_DOWNLOADHANDLERASSETBUNDLE_INTERNALCREATEASSETBUNDLECACHED_OFFSET UNITYSDK_OFFSET(0xA49F790)
#define UNITYENGINE_NETWORKING_DOWNLOADHANDLERASSETBUNDLE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA49F270)
#define UNITYENGINE_NETWORKING_DOWNLOADHANDLERASSETBUNDLE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA49F3E0)
#define UNITYENGINE_NETWORKING_DOWNLOADHANDLERASSETBUNDLE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA49F5C0)
#define UNITYENGINE_NETWORKING_DOWNLOADHANDLERASSETBUNDLE_GETDATA_OFFSET UNITYSDK_OFFSET(0xA49F800)
#define UNITYENGINE_NETWORKING_DOWNLOADHANDLERASSETBUNDLE_GETTEXT_OFFSET UNITYSDK_OFFSET(0xA49F860)
#define UNITYENGINE_NETWORKING_DOWNLOADHANDLERASSETBUNDLE_GET_ASSETBUNDLE_OFFSET UNITYSDK_OFFSET(0xA49F8C0)
#define UNITYENGINE_NETWORKING_DOWNLOADHANDLERASSETBUNDLE_GET_AUTOLOADASSETBUNDLE_OFFSET UNITYSDK_OFFSET(0xA49F900)
#define UNITYENGINE_NETWORKING_DOWNLOADHANDLERASSETBUNDLE_SET_AUTOLOADASSETBUNDLE_OFFSET UNITYSDK_OFFSET(0xA49F940)
#define UNITYENGINE_NETWORKING_DOWNLOADHANDLERASSETBUNDLE_GET_ISDOWNLOADCOMPLETE_OFFSET UNITYSDK_OFFSET(0xA49F980)
#define UNITYENGINE_NETWORKING_DOWNLOADHANDLERASSETBUNDLE_GETCONTENT_OFFSET UNITYSDK_OFFSET(0xA49F9C0)
#define UNITYENGINE_NETWORKING_DOWNLOADHANDLERASSETBUNDLE_CREATECACHED_INJECTED_OFFSET UNITYSDK_OFFSET(0xA49F6F0)

namespace UnityEngine::Networking
{
	inline static constexpr unsigned int DownloadHandlerAssetBundle_TypeDefinitionIndex = 38022;

	class DownloadHandlerAssetBundle : public Il2CppObject
	{
	public:
		::System::Int32 Create(::UnityEngine::Networking::DownloadHandlerAssetBundle* arg, ::System::String* str, ::System::UInt32 arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::Networking::DownloadHandlerAssetBundle*, ::System::String*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_DOWNLOADHANDLERASSETBUNDLE_CREATE_OFFSET))(arg, str, arg, nullptr);
		}

		::System::Int32 CreateCached(::UnityEngine::Networking::DownloadHandlerAssetBundle* arg, ::System::String* str, ::System::String* str, ::UnityEngine::Hash128* arg, ::System::UInt32 arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::Networking::DownloadHandlerAssetBundle*, ::System::String*, ::System::String*, ::UnityEngine::Hash128*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_DOWNLOADHANDLERASSETBUNDLE_CREATECACHED_OFFSET))(arg, str, str, arg, arg, nullptr);
		}

		::System::Void InternalCreateAssetBundle(::System::String* str, ::System::UInt32 arg)
		{
			((::System::Void(*)(::System::String*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_DOWNLOADHANDLERASSETBUNDLE_INTERNALCREATEASSETBUNDLE_OFFSET))(str, arg, nullptr);
		}

		::System::Void InternalCreateAssetBundleCached(::System::String* str, ::System::String* str, ::UnityEngine::Hash128* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::UnityEngine::Hash128*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_DOWNLOADHANDLERASSETBUNDLE_INTERNALCREATEASSETBUNDLECACHED_OFFSET))(str, str, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::UInt32 arg)
		{
			((::System::Void(*)(::System::String*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_DOWNLOADHANDLERASSETBUNDLE_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::UnityEngine::Hash128* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::System::String*, ::UnityEngine::Hash128*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_DOWNLOADHANDLERASSETBUNDLE_.CTOR_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::UnityEngine::CachedAssetBundle* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::System::String*, ::UnityEngine::CachedAssetBundle*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_DOWNLOADHANDLERASSETBUNDLE_.CTOR_OFFSET))(str, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetData()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_DOWNLOADHANDLERASSETBUNDLE_GETDATA_OFFSET))(nullptr);
		}

		::System::String* GetText()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_DOWNLOADHANDLERASSETBUNDLE_GETTEXT_OFFSET))(nullptr);
		}

		::UnityEngine::AssetBundle* get_assetBundle()
		{
			return (return (::UnityEngine::AssetBundle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_DOWNLOADHANDLERASSETBUNDLE_GET_ASSETBUNDLE_OFFSET))(nullptr);
		}

		::System::Boolean get_autoLoadAssetBundle()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_DOWNLOADHANDLERASSETBUNDLE_GET_AUTOLOADASSETBUNDLE_OFFSET))(nullptr);
		}

		::System::Void set_autoLoadAssetBundle(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_DOWNLOADHANDLERASSETBUNDLE_SET_AUTOLOADASSETBUNDLE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_isDownloadComplete()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_DOWNLOADHANDLERASSETBUNDLE_GET_ISDOWNLOADCOMPLETE_OFFSET))(nullptr);
		}

		::UnityEngine::AssetBundle* GetContent(::UnityEngine::Networking::UnityWebRequest* arg)
		{
			return (return (::UnityEngine::AssetBundle*(*)(::UnityEngine::Networking::UnityWebRequest*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_DOWNLOADHANDLERASSETBUNDLE_GETCONTENT_OFFSET))(arg, nullptr);
		}

		::System::Int32 CreateCached_Injected(::UnityEngine::Networking::DownloadHandlerAssetBundle* arg, ::System::String* str, ::System::String* str, ::UnityEngine::Hash128&* arg, ::System::UInt32 arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::Networking::DownloadHandlerAssetBundle*, ::System::String*, ::System::String*, ::UnityEngine::Hash128&*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_DOWNLOADHANDLERASSETBUNDLE_CREATECACHED_INJECTED_OFFSET))(arg, str, str, arg, arg, nullptr);
		}

	};
}

