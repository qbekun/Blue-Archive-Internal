#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class AssetBundleManifest; }
namespace Nexon::Pub { class NXPatcherConfig; }
namespace UnityEngine { class AssetBundle; }
namespace UnityEngine { class AssetBundle&; }
namespace UnityEngine { class AssetBundleManifest&; }

#define NEXON_PUB_NXPATCHERCOMMON_INIT_OFFSET UNITYSDK_OFFSET(0x9549E90)
#define NEXON_PUB_NXPATCHERCOMMON_SETDONTDESTROYONLOAD_OFFSET UNITYSDK_OFFSET(0x9549FE0)
#define NEXON_PUB_NXPATCHERCOMMON_LOADASSETBUNDLEFROMFILE_OFFSET UNITYSDK_OFFSET(0x954A090)
#define NEXON_PUB_NXPATCHERCOMMON_LOADASSETBUNDLEFROMFILE_OFFSET UNITYSDK_OFFSET(0x954A2F0)
#define NEXON_PUB_NXPATCHERCOMMON_LOADFROMFILE_OFFSET UNITYSDK_OFFSET(0x954A650)
#define NEXON_PUB_NXPATCHERCOMMON_GETASSETBUNDLE_OFFSET UNITYSDK_OFFSET(0x954A7A0)
#define NEXON_PUB_NXPATCHERCOMMON_GETASSETBUNDLEMANIFEST_OFFSET UNITYSDK_OFFSET(0x954A850)
#define NEXON_PUB_NXPATCHERCOMMON_GETFILEPATH_OFFSET UNITYSDK_OFFSET(0x954A990)
#define NEXON_PUB_NXPATCHERCOMMON_PATHCOMBINE_OFFSET UNITYSDK_OFFSET(0x954A1F0)
#define NEXON_PUB_NXPATCHERCOMMON_ISFILEEXIST_OFFSET UNITYSDK_OFFSET(0x954A250)
#define NEXON_PUB_NXPATCHERCOMMON_INITASSETBUNDLEMANIFEST_OFFSET UNITYSDK_OFFSET(0x954A880)
#define NEXON_PUB_NXPATCHERCOMMON_.CTOR_OFFSET UNITYSDK_OFFSET(0x954AA10)

namespace Nexon::Pub
{
	inline static constexpr unsigned int NXPatcherCommon_TypeDefinitionIndex = 37533;

	class NXPatcherCommon : public Il2CppObject
	{
	public:
		::UnityEngine::AssetBundleManifest* assetBundleManifest; // 0x18
		GetAssetBundleResultHandler* onGetAssetBundleResultHandler; // 0x20
		::System::String* resourceDirectory; // 0x28
		::System::String* assetBundleManifestFileName; // 0x30

		::System::Void Init(::Nexon::Pub::NXPatcherConfig* arg, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::Nexon::Pub::NXPatcherConfig*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHERCOMMON_INIT_OFFSET))(arg, str, str, nullptr);
		}

		::System::Void SetDontDestroyOnLoad(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHERCOMMON_SETDONTDESTROYONLOAD_OFFSET))(arg, nullptr);
		}

		::UnityEngine::AssetBundle* LoadAssetBundleFromFile(::System::String* str)
		{
			return (return (::UnityEngine::AssetBundle*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHERCOMMON_LOADASSETBUNDLEFROMFILE_OFFSET))(str, nullptr);
		}

		Il2CppObject* LoadAssetBundleFromFile(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHERCOMMON_LOADASSETBUNDLEFROMFILE_OFFSET))(arg, nullptr);
		}

		::System::Void LoadFromFile(::System::String* str, ::UnityEngine::AssetBundle&* arg)
		{
			((::System::Void(*)(::System::String*, ::UnityEngine::AssetBundle&*, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHERCOMMON_LOADFROMFILE_OFFSET))(str, arg, nullptr);
		}

		::System::Collections::IEnumerator* GetAssetBundle(::System::String* str)
		{
			return (return (::System::Collections::IEnumerator*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHERCOMMON_GETASSETBUNDLE_OFFSET))(str, nullptr);
		}

		::System::Void GetAssetBundleManifest(::UnityEngine::AssetBundleManifest&* arg)
		{
			((::System::Void(*)(::UnityEngine::AssetBundleManifest&*, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHERCOMMON_GETASSETBUNDLEMANIFEST_OFFSET))(arg, nullptr);
		}

		::System::String* GetFilePath(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHERCOMMON_GETFILEPATH_OFFSET))(str, nullptr);
		}

		::System::String* PathCombine(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHERCOMMON_PATHCOMBINE_OFFSET))(str, nullptr);
		}

		::System::Boolean IsFileExist(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHERCOMMON_ISFILEEXIST_OFFSET))(str, nullptr);
		}

		::System::Void InitAssetBundleManifest()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHERCOMMON_INITASSETBUNDLEMANIFEST_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHERCOMMON_.CTOR_OFFSET))(nullptr);
		}

	};
}

