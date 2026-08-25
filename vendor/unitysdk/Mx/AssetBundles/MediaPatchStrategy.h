#pragma once
#include "../../unitysdk.h"

namespace Media::Service { class MediaCatalog; }
namespace Media::Service { class Media; }
namespace UnityEngine { class RuntimePlatform; }

#define MX_ASSETBUNDLES_MEDIAPATCHSTRATEGY_.CTOR_OFFSET UNITYSDK_OFFSET(0x144B5A0)
#define MX_ASSETBUNDLES_MEDIAPATCHSTRATEGY_FINALIZE_OFFSET UNITYSDK_OFFSET(0x144BE50)
#define MX_ASSETBUNDLES_MEDIAPATCHSTRATEGY_GET_LOCALROOT_OFFSET UNITYSDK_OFFSET(0x144BFA0)
#define MX_ASSETBUNDLES_MEDIAPATCHSTRATEGY_GET_LOCALCATALOGPATH_OFFSET UNITYSDK_OFFSET(0x144BFB0)
#define MX_ASSETBUNDLES_MEDIAPATCHSTRATEGY_GET_LOCALCATALOGHASHPATH_OFFSET UNITYSDK_OFFSET(0x144BFC0)
#define MX_ASSETBUNDLES_MEDIAPATCHSTRATEGY_GET_REMOTECATALOGURL_OFFSET UNITYSDK_OFFSET(0x144BFD0)
#define MX_ASSETBUNDLES_MEDIAPATCHSTRATEGY_GET_REMOTECATALOGHASHURL_OFFSET UNITYSDK_OFFSET(0x144BFE0)
#define MX_ASSETBUNDLES_MEDIAPATCHSTRATEGY_GET_LOCALCATALOGHASH_OFFSET UNITYSDK_OFFSET(0x144BFF0)
#define MX_ASSETBUNDLES_MEDIAPATCHSTRATEGY_SET_LOCALCATALOGHASH_OFFSET UNITYSDK_OFFSET(0x144C000)
#define MX_ASSETBUNDLES_MEDIAPATCHSTRATEGY_GET_LOCALCATALOG_OFFSET UNITYSDK_OFFSET(0x144C010)
#define MX_ASSETBUNDLES_MEDIAPATCHSTRATEGY_SET_LOCALCATALOG_OFFSET UNITYSDK_OFFSET(0x144C020)
#define MX_ASSETBUNDLES_MEDIAPATCHSTRATEGY_GET_URLROOT_OFFSET UNITYSDK_OFFSET(0x144C030)
#define MX_ASSETBUNDLES_MEDIAPATCHSTRATEGY_GET_LOCALROOTPRELOAD_OFFSET UNITYSDK_OFFSET(0x144C040)
#define MX_ASSETBUNDLES_MEDIAPATCHSTRATEGY_GET_LOCALROOTGAMEDATA_OFFSET UNITYSDK_OFFSET(0x144C050)
#define MX_ASSETBUNDLES_MEDIAPATCHSTRATEGY_GET_STREAMINGASSETPATH_OFFSET UNITYSDK_OFFSET(0x144C060)
#define MX_ASSETBUNDLES_MEDIAPATCHSTRATEGY_GETMEDIAPATHASURLFORMAT_OFFSET UNITYSDK_OFFSET(0x144C070)
#define MX_ASSETBUNDLES_MEDIAPATCHSTRATEGY_GETFILEPATH_OFFSET UNITYSDK_OFFSET(0x144C140)
#define MX_ASSETBUNDLES_MEDIAPATCHSTRATEGY_GETFILEPATH_OFFSET UNITYSDK_OFFSET(0x144C240)
#define MX_ASSETBUNDLES_MEDIAPATCHSTRATEGY_LOADLOCALCATALOG_OFFSET UNITYSDK_OFFSET(0x144C2D0)
#define MX_ASSETBUNDLES_MEDIAPATCHSTRATEGY_UPDATEREMOTECATALOG_OFFSET UNITYSDK_OFFSET(0x144C370)
#define MX_ASSETBUNDLES_MEDIAPATCHSTRATEGY_CLEARLOCAL_OFFSET UNITYSDK_OFFSET(0x144C410)
#define MX_ASSETBUNDLES_MEDIAPATCHSTRATEGY_WRITEBUNDLECATALOGFILE_OFFSET UNITYSDK_OFFSET(0x144C470)
#define MX_ASSETBUNDLES_MEDIAPATCHSTRATEGY_WRITEBUNDLECATALOG_OFFSET UNITYSDK_OFFSET(0x144C480)
#define MX_ASSETBUNDLES_MEDIAPATCHSTRATEGY_WRITEBUNDLECATALOGHASH_OFFSET UNITYSDK_OFFSET(0x144C490)
#define MX_ASSETBUNDLES_MEDIAPATCHSTRATEGY_GETURLROOT_OFFSET UNITYSDK_OFFSET(0x144BBC0)
#define MX_ASSETBUNDLES_MEDIAPATCHSTRATEGY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x144C4A0)

namespace MX::AssetBundles
{
	inline static constexpr unsigned int MediaPatchStrategy_TypeDefinitionIndex = 14980;

	class MediaPatchStrategy : public Il2CppObject
	{
	public:
		::System::String* _LocalRoot_k__BackingField; // 0x10
		::System::String* _LocalCatalogPath_k__BackingField; // 0x18
		::System::String* _LocalCatalogHashPath_k__BackingField; // 0x20
		::System::Uri* _RemoteCatalogURL_k__BackingField; // 0x28
		::System::Uri* _RemoteCatalogHashURL_k__BackingField; // 0x30
		::System::String* _LocalCatalogHash_k__BackingField; // 0x38
		::Media::Service::MediaCatalog* _LocalCatalog_k__BackingField; // 0x40
		::System::String* _URLRoot_k__BackingField; // 0x48
		::System::String* _LocalRootPreload_k__BackingField; // 0x50
		::System::String* _LocalRootGameData_k__BackingField; // 0x58
		::System::String* _StreamingAssetPath_k__BackingField; // 0x60

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_MEDIAPATCHSTRATEGY_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Finalize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_MEDIAPATCHSTRATEGY_FINALIZE_OFFSET))(nullptr);
		}

		::System::String* get_LocalRoot()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_MEDIAPATCHSTRATEGY_GET_LOCALROOT_OFFSET))(nullptr);
		}

		::System::String* get_LocalCatalogPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_MEDIAPATCHSTRATEGY_GET_LOCALCATALOGPATH_OFFSET))(nullptr);
		}

		::System::String* get_LocalCatalogHashPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_MEDIAPATCHSTRATEGY_GET_LOCALCATALOGHASHPATH_OFFSET))(nullptr);
		}

		::System::Uri* get_RemoteCatalogURL()
		{
			return ((::System::Uri*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_MEDIAPATCHSTRATEGY_GET_REMOTECATALOGURL_OFFSET))(nullptr);
		}

		::System::Uri* get_RemoteCatalogHashURL()
		{
			return ((::System::Uri*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_MEDIAPATCHSTRATEGY_GET_REMOTECATALOGHASHURL_OFFSET))(nullptr);
		}

		::System::String* get_LocalCatalogHash()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_MEDIAPATCHSTRATEGY_GET_LOCALCATALOGHASH_OFFSET))(nullptr);
		}

		::System::Void set_LocalCatalogHash(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_MEDIAPATCHSTRATEGY_SET_LOCALCATALOGHASH_OFFSET))(str, nullptr);
		}

		::Media::Service::MediaCatalog* get_LocalCatalog()
		{
			return ((::Media::Service::MediaCatalog*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_MEDIAPATCHSTRATEGY_GET_LOCALCATALOG_OFFSET))(nullptr);
		}

		::System::Void set_LocalCatalog(::Media::Service::MediaCatalog* arg)
		{
			((::System::Void(*)(::Media::Service::MediaCatalog*, ::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_MEDIAPATCHSTRATEGY_SET_LOCALCATALOG_OFFSET))(arg, nullptr);
		}

		::System::String* get_URLRoot()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_MEDIAPATCHSTRATEGY_GET_URLROOT_OFFSET))(nullptr);
		}

		::System::String* get_LocalRootPreload()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_MEDIAPATCHSTRATEGY_GET_LOCALROOTPRELOAD_OFFSET))(nullptr);
		}

		::System::String* get_LocalRootGameData()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_MEDIAPATCHSTRATEGY_GET_LOCALROOTGAMEDATA_OFFSET))(nullptr);
		}

		::System::String* get_StreamingAssetPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_MEDIAPATCHSTRATEGY_GET_STREAMINGASSETPATH_OFFSET))(nullptr);
		}

		::System::String* GetMediaPathAsUrlFormat(::System::String* str)
		{
			return ((::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_MEDIAPATCHSTRATEGY_GETMEDIAPATHASURLFORMAT_OFFSET))(str, nullptr);
		}

		::System::String* GetFilePath(::System::String* str)
		{
			return ((::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_MEDIAPATCHSTRATEGY_GETFILEPATH_OFFSET))(str, nullptr);
		}

		::System::String* GetFilePath(::Media::Service::Media* arg)
		{
			return ((::System::String*(*)(::Media::Service::Media*, ::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_MEDIAPATCHSTRATEGY_GETFILEPATH_OFFSET))(arg, nullptr);
		}

		::System::Boolean LoadLocalCatalog()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_MEDIAPATCHSTRATEGY_LOADLOCALCATALOG_OFFSET))(nullptr);
		}

		::System::Void UpdateRemoteCatalog(::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_MEDIAPATCHSTRATEGY_UPDATEREMOTECATALOG_OFFSET))(str, arg, nullptr);
		}

		::System::Void ClearLocal()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_MEDIAPATCHSTRATEGY_CLEARLOCAL_OFFSET))(nullptr);
		}

		::System::Void WriteBundleCatalogFile(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_MEDIAPATCHSTRATEGY_WRITEBUNDLECATALOGFILE_OFFSET))(arg, nullptr);
		}

		::System::Void WriteBundleCatalog(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_MEDIAPATCHSTRATEGY_WRITEBUNDLECATALOG_OFFSET))(arg, nullptr);
		}

		::System::Void WriteBundleCatalogHash(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_MEDIAPATCHSTRATEGY_WRITEBUNDLECATALOGHASH_OFFSET))(str, nullptr);
		}

		::System::String* GetURLRoot(::System::String* str, ::UnityEngine::RuntimePlatform* arg)
		{
			return ((::System::String*(*)(::System::String*, ::UnityEngine::RuntimePlatform*, ::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_MEDIAPATCHSTRATEGY_GETURLROOT_OFFSET))(str, arg, nullptr);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_MEDIAPATCHSTRATEGY_TOSTRING_OFFSET))(nullptr);
		}

	};
}

