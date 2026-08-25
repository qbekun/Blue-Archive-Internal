#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class AssetBundleCreateRequest; }
namespace UnityEngine { class AssetBundle; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class AssetBundleRequest; }

#define UNITYENGINE_ASSETBUNDLE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA1D9C70)
#define UNITYENGINE_ASSETBUNDLE_GETALLLOADEDASSETBUNDLES_NATIVE_OFFSET UNITYSDK_OFFSET(0xA1D9CC0)
#define UNITYENGINE_ASSETBUNDLE_GETALLLOADEDASSETBUNDLES_OFFSET UNITYSDK_OFFSET(0xA1D9D00)
#define UNITYENGINE_ASSETBUNDLE_LOADFROMFILEASYNC_INTERNAL_OFFSET UNITYSDK_OFFSET(0xA1D9D40)
#define UNITYENGINE_ASSETBUNDLE_LOADFROMFILEASYNC_OFFSET UNITYSDK_OFFSET(0xA1D9D90)
#define UNITYENGINE_ASSETBUNDLE_LOADFROMFILEASYNC_OFFSET UNITYSDK_OFFSET(0xA1D9DD0)
#define UNITYENGINE_ASSETBUNDLE_LOADFROMFILE_INTERNAL_OFFSET UNITYSDK_OFFSET(0xA1D9E10)
#define UNITYENGINE_ASSETBUNDLE_LOADFROMFILE_OFFSET UNITYSDK_OFFSET(0xA1D9E60)
#define UNITYENGINE_ASSETBUNDLE_LOADASSET_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_ASSETBUNDLE_LOADASSET_OFFSET UNITYSDK_OFFSET(0xA1D9EA0)
#define UNITYENGINE_ASSETBUNDLE_LOADASSET_INTERNAL_OFFSET UNITYSDK_OFFSET(0xA1D9FB0)
#define UNITYENGINE_ASSETBUNDLE_LOADASSETASYNC_OFFSET UNITYSDK_OFFSET(0xA1DA000)
#define UNITYENGINE_ASSETBUNDLE_LOADASSETWITHSUBASSETSASYNC_OFFSET UNITYSDK_OFFSET(0xA1DA160)
#define UNITYENGINE_ASSETBUNDLE_LOADALLASSETSASYNC_OFFSET UNITYSDK_OFFSET(0xA1DA2C0)
#define UNITYENGINE_ASSETBUNDLE_LOADALLASSETSASYNC_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_ASSETBUNDLE_LOADALLASSETSASYNC_OFFSET UNITYSDK_OFFSET(0xA1DA330)
#define UNITYENGINE_ASSETBUNDLE_LOADASSETASYNC_INTERNAL_OFFSET UNITYSDK_OFFSET(0xA1DA110)
#define UNITYENGINE_ASSETBUNDLE_UNLOAD_OFFSET UNITYSDK_OFFSET(0xA1DA3F0)
#define UNITYENGINE_ASSETBUNDLE_GETALLASSETNAMES_OFFSET UNITYSDK_OFFSET(0xA1DA430)
#define UNITYENGINE_ASSETBUNDLE_LOADASSETWITHSUBASSETSASYNC_INTERNAL_OFFSET UNITYSDK_OFFSET(0xA1DA270)

namespace UnityEngine
{
	inline static constexpr unsigned int AssetBundle_TypeDefinitionIndex = 37961;

	class AssetBundle : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_.CTOR_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetAllLoadedAssetBundles_Native()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_GETALLLOADEDASSETBUNDLES_NATIVE_OFFSET))(nullptr);
		}

		Il2CppObject* GetAllLoadedAssetBundles()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_GETALLLOADEDASSETBUNDLES_OFFSET))(nullptr);
		}

		::UnityEngine::AssetBundleCreateRequest* LoadFromFileAsync_Internal(::System::String* str, ::System::UInt32 arg, ::System::UInt64 arg)
		{
			return (return (::UnityEngine::AssetBundleCreateRequest*(*)(::System::String*, ::System::UInt32, ::System::UInt64, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_LOADFROMFILEASYNC_INTERNAL_OFFSET))(str, arg, arg, nullptr);
		}

		::UnityEngine::AssetBundleCreateRequest* LoadFromFileAsync(::System::String* str)
		{
			return (return (::UnityEngine::AssetBundleCreateRequest*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_LOADFROMFILEASYNC_OFFSET))(str, nullptr);
		}

		::UnityEngine::AssetBundleCreateRequest* LoadFromFileAsync(::System::String* str, ::System::UInt32 arg)
		{
			return (return (::UnityEngine::AssetBundleCreateRequest*(*)(::System::String*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_LOADFROMFILEASYNC_OFFSET))(str, arg, nullptr);
		}

		::UnityEngine::AssetBundle* LoadFromFile_Internal(::System::String* str, ::System::UInt32 arg, ::System::UInt64 arg)
		{
			return (return (::UnityEngine::AssetBundle*(*)(::System::String*, ::System::UInt32, ::System::UInt64, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_LOADFROMFILE_INTERNAL_OFFSET))(str, arg, arg, nullptr);
		}

		::UnityEngine::AssetBundle* LoadFromFile(::System::String* str)
		{
			return (return (::UnityEngine::AssetBundle*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_LOADFROMFILE_OFFSET))(str, nullptr);
		}

		Il2CppObject* LoadAsset(::System::String* str)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_LOADASSET_OFFSET))(str, nullptr);
		}

		::UnityEngine::Object* LoadAsset(::System::String* str, ::System::Type* arg)
		{
			return (return (::UnityEngine::Object*(*)(::System::String*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_LOADASSET_OFFSET))(str, arg, nullptr);
		}

		::UnityEngine::Object* LoadAsset_Internal(::System::String* str, ::System::Type* arg)
		{
			return (return (::UnityEngine::Object*(*)(::System::String*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_LOADASSET_INTERNAL_OFFSET))(str, arg, nullptr);
		}

		::UnityEngine::AssetBundleRequest* LoadAssetAsync(::System::String* str, ::System::Type* arg)
		{
			return (return (::UnityEngine::AssetBundleRequest*(*)(::System::String*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_LOADASSETASYNC_OFFSET))(str, arg, nullptr);
		}

		::UnityEngine::AssetBundleRequest* LoadAssetWithSubAssetsAsync(::System::String* str, ::System::Type* arg)
		{
			return (return (::UnityEngine::AssetBundleRequest*(*)(::System::String*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_LOADASSETWITHSUBASSETSASYNC_OFFSET))(str, arg, nullptr);
		}

		::UnityEngine::AssetBundleRequest* LoadAllAssetsAsync()
		{
			return (return (::UnityEngine::AssetBundleRequest*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_LOADALLASSETSASYNC_OFFSET))(nullptr);
		}

		::UnityEngine::AssetBundleRequest* LoadAllAssetsAsync()
		{
			return (return (::UnityEngine::AssetBundleRequest*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_LOADALLASSETSASYNC_OFFSET))(nullptr);
		}

		::UnityEngine::AssetBundleRequest* LoadAllAssetsAsync(::System::Type* arg)
		{
			return (return (::UnityEngine::AssetBundleRequest*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_LOADALLASSETSASYNC_OFFSET))(arg, nullptr);
		}

		::UnityEngine::AssetBundleRequest* LoadAssetAsync_Internal(::System::String* str, ::System::Type* arg)
		{
			return (return (::UnityEngine::AssetBundleRequest*(*)(::System::String*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_LOADASSETASYNC_INTERNAL_OFFSET))(str, arg, nullptr);
		}

		::System::Void Unload(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_UNLOAD_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetAllAssetNames()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_GETALLASSETNAMES_OFFSET))(nullptr);
		}

		::UnityEngine::AssetBundleRequest* LoadAssetWithSubAssetsAsync_Internal(::System::String* str, ::System::Type* arg)
		{
			return (return (::UnityEngine::AssetBundleRequest*(*)(::System::String*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_LOADASSETWITHSUBASSETSASYNC_INTERNAL_OFFSET))(str, arg, nullptr);
		}

	};
}

