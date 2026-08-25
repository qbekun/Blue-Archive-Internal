#pragma once
#include "../../unitysdk.h"

class TableCatalog;
namespace UnityEngine { class RuntimePlatform; }

#define MX_ASSETBUNDLES_TABLEPATCHSTRATEGY_.CTOR_OFFSET UNITYSDK_OFFSET(0x144C5E0)
#define MX_ASSETBUNDLES_TABLEPATCHSTRATEGY_FINALIZE_OFFSET UNITYSDK_OFFSET(0x144CCD0)
#define MX_ASSETBUNDLES_TABLEPATCHSTRATEGY_GET_LOCALROOT_OFFSET UNITYSDK_OFFSET(0x144CE20)
#define MX_ASSETBUNDLES_TABLEPATCHSTRATEGY_GET_LOCALCATALOGPATH_OFFSET UNITYSDK_OFFSET(0x144CE30)
#define MX_ASSETBUNDLES_TABLEPATCHSTRATEGY_GET_LOCALCATALOGHASHPATH_OFFSET UNITYSDK_OFFSET(0x144CE40)
#define MX_ASSETBUNDLES_TABLEPATCHSTRATEGY_GET_REMOTECATALOGURL_OFFSET UNITYSDK_OFFSET(0x144CE50)
#define MX_ASSETBUNDLES_TABLEPATCHSTRATEGY_GET_REMOTECATALOGHASHURL_OFFSET UNITYSDK_OFFSET(0x144CE60)
#define MX_ASSETBUNDLES_TABLEPATCHSTRATEGY_GET_URLROOT_OFFSET UNITYSDK_OFFSET(0x144CE70)
#define MX_ASSETBUNDLES_TABLEPATCHSTRATEGY_GET_LOCALCATALOGHASH_OFFSET UNITYSDK_OFFSET(0x144CE80)
#define MX_ASSETBUNDLES_TABLEPATCHSTRATEGY_SET_LOCALCATALOGHASH_OFFSET UNITYSDK_OFFSET(0x144CE90)
#define MX_ASSETBUNDLES_TABLEPATCHSTRATEGY_GET_LOCALCATALOG_OFFSET UNITYSDK_OFFSET(0x144CEA0)
#define MX_ASSETBUNDLES_TABLEPATCHSTRATEGY_SET_LOCALCATALOG_OFFSET UNITYSDK_OFFSET(0x144CEB0)
#define MX_ASSETBUNDLES_TABLEPATCHSTRATEGY_GET_AVAILABLECATALOG_OFFSET UNITYSDK_OFFSET(0x144CEC0)
#define MX_ASSETBUNDLES_TABLEPATCHSTRATEGY_GET_LOCALROOTPRELOAD_OFFSET UNITYSDK_OFFSET(0x144CED0)
#define MX_ASSETBUNDLES_TABLEPATCHSTRATEGY_GET_LOCALROOTGAMEDATA_OFFSET UNITYSDK_OFFSET(0x144CEE0)
#define MX_ASSETBUNDLES_TABLEPATCHSTRATEGY_LOADLOCALCATALOG_OFFSET UNITYSDK_OFFSET(0x144CEF0)
#define MX_ASSETBUNDLES_TABLEPATCHSTRATEGY_UPDATEREMOTECATALOG_OFFSET UNITYSDK_OFFSET(0x144CF90)
#define MX_ASSETBUNDLES_TABLEPATCHSTRATEGY_CLEARLOCAL_OFFSET UNITYSDK_OFFSET(0x144D030)
#define MX_ASSETBUNDLES_TABLEPATCHSTRATEGY_GETFILEURL_OFFSET UNITYSDK_OFFSET(0x144D090)
#define MX_ASSETBUNDLES_TABLEPATCHSTRATEGY_GETFILEPATH_OFFSET UNITYSDK_OFFSET(0x144D100)
#define MX_ASSETBUNDLES_TABLEPATCHSTRATEGY_GETFILEPATH_OFFSET UNITYSDK_OFFSET(0x1444B20)
#define MX_ASSETBUNDLES_TABLEPATCHSTRATEGY_GET__BUNDLEMAP_OFFSET UNITYSDK_OFFSET(0x144D2F0)
#define MX_ASSETBUNDLES_TABLEPATCHSTRATEGY_MAPRELATIVEPATHTOBUNDLENAME_OFFSET UNITYSDK_OFFSET(0x144D300)
#define MX_ASSETBUNDLES_TABLEPATCHSTRATEGY_GETBUNDLENAMEFROMRELATIVEPATH_OFFSET UNITYSDK_OFFSET(0x14449F0)
#define MX_ASSETBUNDLES_TABLEPATCHSTRATEGY_WRITEBUNDLECATALOGFILE_OFFSET UNITYSDK_OFFSET(0x144D640)
#define MX_ASSETBUNDLES_TABLEPATCHSTRATEGY_WRITEBUNDLECATALOG_OFFSET UNITYSDK_OFFSET(0x144D650)
#define MX_ASSETBUNDLES_TABLEPATCHSTRATEGY_WRITEBUNDLECATALOGHASH_OFFSET UNITYSDK_OFFSET(0x144D660)
#define MX_ASSETBUNDLES_TABLEPATCHSTRATEGY_GETURLROOT_OFFSET UNITYSDK_OFFSET(0x144CC40)
#define MX_ASSETBUNDLES_TABLEPATCHSTRATEGY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x144D670)

namespace MX::AssetBundles
{
	inline static constexpr unsigned int TablePatchStrategy_TypeDefinitionIndex = 14981;

	class TablePatchStrategy : public Il2CppObject
	{
	public:
		::System::String* _LocalRoot_k__BackingField; // 0x10
		::System::String* _LocalCatalogPath_k__BackingField; // 0x18
		::System::String* _LocalCatalogHashPath_k__BackingField; // 0x20
		::System::Uri* _RemoteCatalogURL_k__BackingField; // 0x28
		::System::Uri* _RemoteCatalogHashURL_k__BackingField; // 0x30
		::System::String* _URLRoot_k__BackingField; // 0x38
		::System::String* _LocalCatalogHash_k__BackingField; // 0x40
		TableCatalog* _LocalCatalog_k__BackingField; // 0x48
		::System::String* _LocalRootPreload_k__BackingField; // 0x50
		::System::String* _LocalRootGameData_k__BackingField; // 0x58
		Il2CppObject* __bundleMap_k__BackingField; // 0x60

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_TABLEPATCHSTRATEGY_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Finalize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_TABLEPATCHSTRATEGY_FINALIZE_OFFSET))(nullptr);
		}

		::System::String* get_LocalRoot()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_TABLEPATCHSTRATEGY_GET_LOCALROOT_OFFSET))(nullptr);
		}

		::System::String* get_LocalCatalogPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_TABLEPATCHSTRATEGY_GET_LOCALCATALOGPATH_OFFSET))(nullptr);
		}

		::System::String* get_LocalCatalogHashPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_TABLEPATCHSTRATEGY_GET_LOCALCATALOGHASHPATH_OFFSET))(nullptr);
		}

		::System::Uri* get_RemoteCatalogURL()
		{
			return ((::System::Uri*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_TABLEPATCHSTRATEGY_GET_REMOTECATALOGURL_OFFSET))(nullptr);
		}

		::System::Uri* get_RemoteCatalogHashURL()
		{
			return ((::System::Uri*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_TABLEPATCHSTRATEGY_GET_REMOTECATALOGHASHURL_OFFSET))(nullptr);
		}

		::System::String* get_URLRoot()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_TABLEPATCHSTRATEGY_GET_URLROOT_OFFSET))(nullptr);
		}

		::System::String* get_LocalCatalogHash()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_TABLEPATCHSTRATEGY_GET_LOCALCATALOGHASH_OFFSET))(nullptr);
		}

		::System::Void set_LocalCatalogHash(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_TABLEPATCHSTRATEGY_SET_LOCALCATALOGHASH_OFFSET))(str, nullptr);
		}

		TableCatalog* get_LocalCatalog()
		{
			return ((TableCatalog*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_TABLEPATCHSTRATEGY_GET_LOCALCATALOG_OFFSET))(nullptr);
		}

		::System::Void set_LocalCatalog(TableCatalog* arg)
		{
			((::System::Void(*)(TableCatalog*, ::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_TABLEPATCHSTRATEGY_SET_LOCALCATALOG_OFFSET))(arg, nullptr);
		}

		TableCatalog* get_AvailableCatalog()
		{
			return ((TableCatalog*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_TABLEPATCHSTRATEGY_GET_AVAILABLECATALOG_OFFSET))(nullptr);
		}

		::System::String* get_LocalRootPreload()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_TABLEPATCHSTRATEGY_GET_LOCALROOTPRELOAD_OFFSET))(nullptr);
		}

		::System::String* get_LocalRootGameData()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_TABLEPATCHSTRATEGY_GET_LOCALROOTGAMEDATA_OFFSET))(nullptr);
		}

		::System::Boolean LoadLocalCatalog()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_TABLEPATCHSTRATEGY_LOADLOCALCATALOG_OFFSET))(nullptr);
		}

		::System::Void UpdateRemoteCatalog(::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_TABLEPATCHSTRATEGY_UPDATEREMOTECATALOG_OFFSET))(str, arg, nullptr);
		}

		::System::Void ClearLocal()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_TABLEPATCHSTRATEGY_CLEARLOCAL_OFFSET))(nullptr);
		}

		::System::Uri* GetFileUrl(::System::String* str)
		{
			return ((::System::Uri*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_TABLEPATCHSTRATEGY_GETFILEURL_OFFSET))(str, nullptr);
		}

		::System::String* GetFilePath(::System::String* str, ::System::Boolean arg)
		{
			return ((::System::String*(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_TABLEPATCHSTRATEGY_GETFILEPATH_OFFSET))(str, arg, nullptr);
		}

		::System::String* GetFilePath(::System::String* str)
		{
			return ((::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_TABLEPATCHSTRATEGY_GETFILEPATH_OFFSET))(str, nullptr);
		}

		Il2CppObject* get__bundleMap()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_TABLEPATCHSTRATEGY_GET__BUNDLEMAP_OFFSET))(nullptr);
		}

		::System::Void MapRelativePathToBundleName()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_TABLEPATCHSTRATEGY_MAPRELATIVEPATHTOBUNDLENAME_OFFSET))(nullptr);
		}

		::System::String* GetBundleNameFromRelativePath(::System::String* str)
		{
			return ((::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_TABLEPATCHSTRATEGY_GETBUNDLENAMEFROMRELATIVEPATH_OFFSET))(str, nullptr);
		}

		::System::Void WriteBundleCatalogFile(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_TABLEPATCHSTRATEGY_WRITEBUNDLECATALOGFILE_OFFSET))(arg, nullptr);
		}

		::System::Void WriteBundleCatalog(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_TABLEPATCHSTRATEGY_WRITEBUNDLECATALOG_OFFSET))(arg, nullptr);
		}

		::System::Void WriteBundleCatalogHash(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_TABLEPATCHSTRATEGY_WRITEBUNDLECATALOGHASH_OFFSET))(str, nullptr);
		}

		::System::String* GetURLRoot(::System::String* str, ::UnityEngine::RuntimePlatform* arg)
		{
			return ((::System::String*(*)(::System::String*, ::UnityEngine::RuntimePlatform*, ::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_TABLEPATCHSTRATEGY_GETURLROOT_OFFSET))(str, arg, nullptr);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_TABLEPATCHSTRATEGY_TOSTRING_OFFSET))(nullptr);
		}

	};
}

