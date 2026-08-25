#pragma once
#include "../../unitysdk.h"

namespace MX::AssetBundles { class AddressableCatalogStrategy; }
namespace MX::AssetBundles { class TablePatchStrategy; }
namespace MX::AssetBundles { class MediaPatchStrategy; }
namespace MX::AssetBundles { class IPatchStrategy; }
class PatchGroupType;
namespace MX::Data { class CampaignStageInfo; }

#define MX_ASSETBUNDLES_RESOURCEPATCHER_GET__ADDRESSABLE_OFFSET UNITYSDK_OFFSET(0x144DDF0)
#define MX_ASSETBUNDLES_RESOURCEPATCHER_SET__ADDRESSABLE_OFFSET UNITYSDK_OFFSET(0x144DE00)
#define MX_ASSETBUNDLES_RESOURCEPATCHER_GET__TABLE_OFFSET UNITYSDK_OFFSET(0x144DE10)
#define MX_ASSETBUNDLES_RESOURCEPATCHER_SET__TABLE_OFFSET UNITYSDK_OFFSET(0x144DE20)
#define MX_ASSETBUNDLES_RESOURCEPATCHER_GET__MEDIA_OFFSET UNITYSDK_OFFSET(0x144DE30)
#define MX_ASSETBUNDLES_RESOURCEPATCHER_SET__MEDIA_OFFSET UNITYSDK_OFFSET(0x144DE40)
#define MX_ASSETBUNDLES_RESOURCEPATCHER_GET_ADDRESSABLECATALOGLOCALPATH_OFFSET UNITYSDK_OFFSET(0x144DE50)
#define MX_ASSETBUNDLES_RESOURCEPATCHER_GET_ISPROLOGUEPLAYONLYNOPATCHDOWNLOAD_OFFSET UNITYSDK_OFFSET(0x144DE70)
#define MX_ASSETBUNDLES_RESOURCEPATCHER_SET_ISPROLOGUEPLAYONLYNOPATCHDOWNLOAD_OFFSET UNITYSDK_OFFSET(0x144DE80)
#define MX_ASSETBUNDLES_RESOURCEPATCHER_GET_RESOURCEDIRECTORIES_OFFSET UNITYSDK_OFFSET(0x144DE90)
#define MX_ASSETBUNDLES_RESOURCEPATCHER_ENUMERATERESOURCEFILES_OFFSET UNITYSDK_OFFSET(0x144DF40)
#define MX_ASSETBUNDLES_RESOURCEPATCHER_HASREMOTECATALOGURL_OFFSET UNITYSDK_OFFSET(0x144E430)
#define MX_ASSETBUNDLES_RESOURCEPATCHER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x144E440)
#define MX_ASSETBUNDLES_RESOURCEPATCHER_CLEAR_OFFSET UNITYSDK_OFFSET(0x144E640)
#define MX_ASSETBUNDLES_RESOURCEPATCHER_LOADLOCALCATALOG_OFFSET UNITYSDK_OFFSET(0x144E650)
#define MX_ASSETBUNDLES_RESOURCEPATCHER_UPDATEADDRESSABLECATALOG_OFFSET UNITYSDK_OFFSET(0x144E6C0)
#define MX_ASSETBUNDLES_RESOURCEPATCHER_UPDATETABLECATALOG_OFFSET UNITYSDK_OFFSET(0x144E770)
#define MX_ASSETBUNDLES_RESOURCEPATCHER_UPDATEMEDIACATALOG_OFFSET UNITYSDK_OFFSET(0x144E820)
#define MX_ASSETBUNDLES_RESOURCEPATCHER_TABLEBUNDLECRC_OFFSET UNITYSDK_OFFSET(0x144E8D0)
#define MX_ASSETBUNDLES_RESOURCEPATCHER_CRC_OFFSET UNITYSDK_OFFSET(0x144EC30)
#define MX_ASSETBUNDLES_RESOURCEPATCHER_UPDATECATALOG_OFFSET UNITYSDK_OFFSET(0x144EC60)
#define MX_ASSETBUNDLES_RESOURCEPATCHER_DOWNLOADCATALOG_OFFSET UNITYSDK_OFFSET(0x144ED20)
#define MX_ASSETBUNDLES_RESOURCEPATCHER_DOWNLOADBUNDLES_OFFSET UNITYSDK_OFFSET(0x144EDA0)
#define MX_ASSETBUNDLES_RESOURCEPATCHER_CREATEURI_OFFSET UNITYSDK_OFFSET(0x144BC50)
#define MX_ASSETBUNDLES_RESOURCEPATCHER_MAPTABLERAWDATAPATHTOBUNDLENAME_OFFSET UNITYSDK_OFFSET(0x144EE20)
#define MX_ASSETBUNDLES_RESOURCEPATCHER_GETBUNDLENAMEFROMRELATIVEPATH_OFFSET UNITYSDK_OFFSET(0x1444A80)
#define MX_ASSETBUNDLES_RESOURCEPATCHER_GETTABLEPATH_OFFSET UNITYSDK_OFFSET(0x1444D20)
#define MX_ASSETBUNDLES_RESOURCEPATCHER_GETMEDIAPATHASURLFORMAT_OFFSET UNITYSDK_OFFSET(0x144EE30)
#define MX_ASSETBUNDLES_RESOURCEPATCHER_GETMEDIAPATH_OFFSET UNITYSDK_OFFSET(0x144EE50)
#define MX_ASSETBUNDLES_RESOURCEPATCHER_CLEARRESOURCES_OFFSET UNITYSDK_OFFSET(0x144EEB0)
#define MX_ASSETBUNDLES_RESOURCEPATCHER_CLEARALLBUNDLEFILES_OFFSET UNITYSDK_OFFSET(0x144EF40)
#define MX_ASSETBUNDLES_RESOURCEPATCHER_CLEARACCOUNTCACHE_OFFSET UNITYSDK_OFFSET(0x144F1D0)
#define MX_ASSETBUNDLES_RESOURCEPATCHER_CLEARRESOURCES_OFFSET UNITYSDK_OFFSET(0x144F530)
#define MX_ASSETBUNDLES_RESOURCEPATCHER_ENUMERATEDELETETARGETS_OFFSET UNITYSDK_OFFSET(0x144E2C0)
#define MX_ASSETBUNDLES_RESOURCEPATCHER_ISDELETETARGET_OFFSET UNITYSDK_OFFSET(0x144F5C0)
#define MX_ASSETBUNDLES_RESOURCEPATCHER_DOWNLOADTEXTCOROUTINERETURNVALUE_OFFSET UNITYSDK_OFFSET(0x144F710)
#define MX_ASSETBUNDLES_RESOURCEPATCHER_GETGROUNDIDSBYSTAGEINFO_OFFSET UNITYSDK_OFFSET(0x144F7A0)
#define MX_ASSETBUNDLES_RESOURCEPATCHER_.CTOR_OFFSET UNITYSDK_OFFSET(0x144FBC0)

namespace MX::AssetBundles
{
	inline static constexpr unsigned int ResourcePatcher_TypeDefinitionIndex = 15000;

	class ResourcePatcher : public ::ToyWebViewShared::Messages::RequestGoBack
	{
	public:
		::MX::AssetBundles::AddressableCatalogStrategy* __addressable_k__BackingField; // 0x20
		::MX::AssetBundles::TablePatchStrategy* __table_k__BackingField; // 0x28
		::MX::AssetBundles::MediaPatchStrategy* __media_k__BackingField; // 0x30
		::System::Boolean _IsProloguePlayOnlyNoPatchDownload_k__BackingField; // 0x38
		::System::String* _skillRoot; // 0x40
		::System::String* _bannerRoot; // 0x48
		::System::String* _TTSRoot; // 0x50

		::MX::AssetBundles::AddressableCatalogStrategy* get__addressable()
		{
			return ((::MX::AssetBundles::AddressableCatalogStrategy*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_RESOURCEPATCHER_GET__ADDRESSABLE_OFFSET))(nullptr);
		}

		::System::Void set__addressable(::MX::AssetBundles::AddressableCatalogStrategy* arg)
		{
			((::System::Void(*)(::MX::AssetBundles::AddressableCatalogStrategy*, ::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_RESOURCEPATCHER_SET__ADDRESSABLE_OFFSET))(arg, nullptr);
		}

		::MX::AssetBundles::TablePatchStrategy* get__table()
		{
			return ((::MX::AssetBundles::TablePatchStrategy*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_RESOURCEPATCHER_GET__TABLE_OFFSET))(nullptr);
		}

		::System::Void set__table(::MX::AssetBundles::TablePatchStrategy* arg)
		{
			((::System::Void(*)(::MX::AssetBundles::TablePatchStrategy*, ::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_RESOURCEPATCHER_SET__TABLE_OFFSET))(arg, nullptr);
		}

		::MX::AssetBundles::MediaPatchStrategy* get__media()
		{
			return ((::MX::AssetBundles::MediaPatchStrategy*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_RESOURCEPATCHER_GET__MEDIA_OFFSET))(nullptr);
		}

		::System::Void set__media(::MX::AssetBundles::MediaPatchStrategy* arg)
		{
			((::System::Void(*)(::MX::AssetBundles::MediaPatchStrategy*, ::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_RESOURCEPATCHER_SET__MEDIA_OFFSET))(arg, nullptr);
		}

		::System::String* get_AddressableCatalogLocalPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_RESOURCEPATCHER_GET_ADDRESSABLECATALOGLOCALPATH_OFFSET))(nullptr);
		}

		::System::Boolean get_IsProloguePlayOnlyNoPatchDownload()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_RESOURCEPATCHER_GET_ISPROLOGUEPLAYONLYNOPATCHDOWNLOAD_OFFSET))(nullptr);
		}

		::System::Void set_IsProloguePlayOnlyNoPatchDownload(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_RESOURCEPATCHER_SET_ISPROLOGUEPLAYONLYNOPATCHDOWNLOAD_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_ResourceDirectories()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_RESOURCEPATCHER_GET_RESOURCEDIRECTORIES_OFFSET))(nullptr);
		}

		Il2CppObject* EnumerateResourceFiles()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_RESOURCEPATCHER_ENUMERATERESOURCEFILES_OFFSET))(nullptr);
		}

		::System::Boolean HasRemoteCatalogURL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_RESOURCEPATCHER_HASREMOTECATALOGURL_OFFSET))(nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_RESOURCEPATCHER_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_RESOURCEPATCHER_CLEAR_OFFSET))(nullptr);
		}

		::System::Void LoadLocalCatalog()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_RESOURCEPATCHER_LOADLOCALCATALOG_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* UpdateAddressableCatalog(Il2CppObject* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_RESOURCEPATCHER_UPDATEADDRESSABLECATALOG_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* UpdateTableCatalog(Il2CppObject* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_RESOURCEPATCHER_UPDATETABLECATALOG_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* UpdateMediaCatalog(Il2CppObject* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_RESOURCEPATCHER_UPDATEMEDIACATALOG_OFFSET))(arg, nullptr);
		}

		Il2CppObject* TableBundleCRC()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_RESOURCEPATCHER_TABLEBUNDLECRC_OFFSET))(nullptr);
		}

		::System::Boolean CRC(::System::String* str, ::System::Int64 arg)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_RESOURCEPATCHER_CRC_OFFSET))(str, arg, nullptr);
		}

		::System::Collections::IEnumerator* UpdateCatalog(::MX::AssetBundles::IPatchStrategy* arg, Il2CppObject* arg2)
		{
			return ((::System::Collections::IEnumerator*(*)(::MX::AssetBundles::IPatchStrategy*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_RESOURCEPATCHER_UPDATECATALOG_OFFSET))(arg, arg2, nullptr);
		}

		::System::Collections::IEnumerator* DownloadCatalog(::MX::AssetBundles::IPatchStrategy* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::MX::AssetBundles::IPatchStrategy*, ::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_RESOURCEPATCHER_DOWNLOADCATALOG_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* DownloadBundles(PatchGroupType* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(PatchGroupType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_RESOURCEPATCHER_DOWNLOADBUNDLES_OFFSET))(arg, nullptr);
		}

		::System::Uri* CreateUri(::System::String* str)
		{
			return ((::System::Uri*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_RESOURCEPATCHER_CREATEURI_OFFSET))(str, nullptr);
		}

		::System::Void MapTableRawdataPathToBundleName()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_RESOURCEPATCHER_MAPTABLERAWDATAPATHTOBUNDLENAME_OFFSET))(nullptr);
		}

		::System::String* GetBundleNameFromRelativePath(::System::String* str)
		{
			return ((::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_RESOURCEPATCHER_GETBUNDLENAMEFROMRELATIVEPATH_OFFSET))(str, nullptr);
		}

		::System::String* GetTablePath(::System::String* str)
		{
			return ((::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_RESOURCEPATCHER_GETTABLEPATH_OFFSET))(str, nullptr);
		}

		::System::String* GetMediaPathAsUrlFormat(::System::String* str)
		{
			return ((::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_RESOURCEPATCHER_GETMEDIAPATHASURLFORMAT_OFFSET))(str, nullptr);
		}

		::System::String* GetMediaPath(::System::String* str)
		{
			return ((::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_RESOURCEPATCHER_GETMEDIAPATH_OFFSET))(str, nullptr);
		}

		::System::Collections::IEnumerator* ClearResources(Il2CppObject* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_RESOURCEPATCHER_CLEARRESOURCES_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* ClearAllBundleFiles()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_RESOURCEPATCHER_CLEARALLBUNDLEFILES_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ClearAccountCache()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_RESOURCEPATCHER_CLEARACCOUNTCACHE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ClearResources(Il2CppObject* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_RESOURCEPATCHER_CLEARRESOURCES_OFFSET))(arg, nullptr);
		}

		Il2CppObject* EnumerateDeleteTargets()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_RESOURCEPATCHER_ENUMERATEDELETETARGETS_OFFSET))(nullptr);
		}

		::System::Boolean IsDeleteTarget(::System::IO::FileInfo* arg)
		{
			return ((::System::Boolean(*)(::System::IO::FileInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_RESOURCEPATCHER_ISDELETETARGET_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* DownloadTextCoroutineReturnValue(::System::String* str)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_RESOURCEPATCHER_DOWNLOADTEXTCOROUTINERETURNVALUE_OFFSET))(str, nullptr);
		}

		Il2CppObject* GetGroundIdsByStageInfo(::MX::Data::CampaignStageInfo* arg)
		{
			return ((Il2CppObject*(*)(::MX::Data::CampaignStageInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_RESOURCEPATCHER_GETGROUNDIDSBYSTAGEINFO_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_ASSETBUNDLES_RESOURCEPATCHER_.CTOR_OFFSET))(nullptr);
		}

	};
}

