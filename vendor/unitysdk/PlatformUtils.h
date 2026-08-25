#pragma once
#include "unitysdk.h"

namespace FlatData { class GachaTicketType; }
namespace FlatData { class ProductCategory; }
class ServerRegion;
namespace FlatData { class StoreType; }
class PatchGroupType;
class ResourceType;
class CountryLetterCode;

#define PLATFORMUTILS_SHOWMAILBOXFORTAKETICKET_OFFSET UNITYSDK_OFFSET(0x2108080)
#define PLATFORMUTILS_SHOWSHOPCASHFORTAKETICKET_OFFSET UNITYSDK_OFFSET(0x2108240)
#define PLATFORMUTILS_GET_PUB_PACKAGE_NAME_ANDROID_OFFSET UNITYSDK_OFFSET(0x2108410)
#define PLATFORMUTILS_GET_PUB_PACKAGE_NAME_ANDROID_TEEN_OFFSET UNITYSDK_OFFSET(0x21084D0)
#define PLATFORMUTILS_GET_PUB_PACKAGE_NAME_ANDROID_ONESTORE_OFFSET UNITYSDK_OFFSET(0x2108590)
#define PLATFORMUTILS_GET_PUB_PACKAGE_NAME_ANDROID_ONESTORE_TEEN_OFFSET UNITYSDK_OFFSET(0x21085C0)
#define PLATFORMUTILS_GET_PUB_PACKAGE_NAME_ANDROID_GALAXYSTORE_OFFSET UNITYSDK_OFFSET(0x21085F0)
#define PLATFORMUTILS_GET_PUB_PACKAGE_NAME_ANDROID_GALAXYSTORE_TEEN_OFFSET UNITYSDK_OFFSET(0x21086B0)
#define PLATFORMUTILS_GET_PUB_PACKAGE_NAME_STEAM_OFFSET UNITYSDK_OFFSET(0x2108770)
#define PLATFORMUTILS_GET_PUB_APPID_IOS_OFFSET UNITYSDK_OFFSET(0x2108840)
#define PLATFORMUTILS_GET_PUB_APPID_IOS_TEEN_OFFSET UNITYSDK_OFFSET(0x2108870)
#define PLATFORMUTILS_GET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0x21084A0)
#define PLATFORMUTILS_GET_IDENTIFIER_TEEN_OFFSET UNITYSDK_OFFSET(0x2108560)
#define PLATFORMUTILS_GET_IDENTIFIER_STEAM_OFFSET UNITYSDK_OFFSET(0x2108810)
#define PLATFORMUTILS_GET_IDENTIFIER_ONESTORE_OFFSET UNITYSDK_OFFSET(0x21088A0)
#define PLATFORMUTILS_GET_IDENTIFIER_ONESTORE_TEEN_OFFSET UNITYSDK_OFFSET(0x21088D0)
#define PLATFORMUTILS_GET_IDENTIFIER_GALAXYSTORE_OFFSET UNITYSDK_OFFSET(0x2108680)
#define PLATFORMUTILS_GET_IDENTIFIER_GALAXYSTORE_TEEN_OFFSET UNITYSDK_OFFSET(0x2108740)
#define PLATFORMUTILS_GET_IDENTIFIER_IOS_INHOUSE_OFFSET UNITYSDK_OFFSET(0x2108900)
#define PLATFORMUTILS_GET_IDENTIFIER_TEEN_IOS_INHOUSE_OFFSET UNITYSDK_OFFSET(0x2108930)
#define PLATFORMUTILS_GET_MYSERVERREGION_OFFSET UNITYSDK_OFFSET(0x2108960)
#define PLATFORMUTILS_GET_DEFAULTCONNECTIONGROUP_OFFSET UNITYSDK_OFFSET(0x2108B20)
#define PLATFORMUTILS_GET_DEFAULTCOUNTRY_OFFSET UNITYSDK_OFFSET(0x2108B50)
#define PLATFORMUTILS_GET_ROOTPATH_OFFSET UNITYSDK_OFFSET(0x2108BB0)
#define PLATFORMUTILS_GET_ADDRESSABLELOADPATH_OFFSET UNITYSDK_OFFSET(0x2108C20)
#define PLATFORMUTILS_GET_ADDRESSABLEPRELOADPATH_OFFSET UNITYSDK_OFFSET(0x2108D30)
#define PLATFORMUTILS_GET_BUILDINFOPATH_OFFSET UNITYSDK_OFFSET(0x2108E40)
#define PLATFORMUTILS_GET_CDNLISTPATH_OFFSET UNITYSDK_OFFSET(0x2108E80)
#define PLATFORMUTILS_OD73744EC5D08800DA13B818C363F4C3057262AE033EDB0A72D6862B396634642_OFFSET UNITYSDK_OFFSET(0x2108F60)
#define PLATFORMUTILS_GAMESERVERMARKETID_OFFSET UNITYSDK_OFFSET(0x211ABB0)
#define PLATFORMUTILS_GETBUILDVERSION_OFFSET UNITYSDK_OFFSET(0x211AC30)
#define PLATFORMUTILS_GETBUILDVERSION_OFFSET UNITYSDK_OFFSET(0x211AD20)
#define PLATFORMUTILS_GETGROUPTYPEPATH_OFFSET UNITYSDK_OFFSET(0x211AEE0)
#define PLATFORMUTILS_GETRESOURCEPATH_OFFSET UNITYSDK_OFFSET(0x211AFB0)
#define PLATFORMUTILS_GETPATH_OFFSET UNITYSDK_OFFSET(0x211B030)
#define PLATFORMUTILS_GETPATH_OFFSET UNITYSDK_OFFSET(0x211B140)
#define PLATFORMUTILS_GETPATH_OFFSET UNITYSDK_OFFSET(0x211B250)
#define PLATFORMUTILS_GETPATH_OFFSET UNITYSDK_OFFSET(0x211B380)
#define PLATFORMUTILS_GETCDNPATH_OFFSET UNITYSDK_OFFSET(0x211B410)
#define PLATFORMUTILS_GETCDNPATH_OFFSET UNITYSDK_OFFSET(0x211B4A0)
#define PLATFORMUTILS_GETCDNPATH_OFFSET UNITYSDK_OFFSET(0x211B590)
#define PLATFORMUTILS_GETBUNDLEREVISIONNUMBER_OFFSET UNITYSDK_OFFSET(0x211B620)
#define PLATFORMUTILS_CLEARTOCDNLIST_OFFSET UNITYSDK_OFFSET(0x211BA50)
#define PLATFORMUTILS_CREATEDIRECTORYTOCDNLIST_OFFSET UNITYSDK_OFFSET(0x211BB80)
#define PLATFORMUTILS_COPYFILETOCDNLIST_OFFSET UNITYSDK_OFFSET(0x211BC70)
#define PLATFORMUTILS_COPYDIRECTORYTOCDNLIST_OFFSET UNITYSDK_OFFSET(0x211BD10)
#define PLATFORMUTILS_ISDIRECTORY_OFFSET UNITYSDK_OFFSET(0x211C0B0)
#define PLATFORMUTILS_GETSERVERREGION_OFFSET UNITYSDK_OFFSET(0x211C0D0)
#define PLATFORMUTILS_GETSERVERREGIONTEXT_OFFSET UNITYSDK_OFFSET(0x211C230)
#define PLATFORMUTILS_GETSERVERREGIONENUM_OFFSET UNITYSDK_OFFSET(0x2108A30)
#define PLATFORMUTILS_GETCOUNTRYLETTERCODE_OFFSET UNITYSDK_OFFSET(0x211C170)
#define PLATFORMUTILS_GETLATESTPATCHBUILDNUMBER_OFFSET UNITYSDK_OFFSET(0x211C2C0)
#define PLATFORMUTILS_GETPATCHBUILDNUMBERFILEPATH_OFFSET UNITYSDK_OFFSET(0x211C570)
#define PLATFORMUTILS_PARSEINIFILE_OFFSET UNITYSDK_OFFSET(0x211C680)
#define PLATFORMUTILS_GETSECTIONVALUELINES_OFFSET UNITYSDK_OFFSET(0x211CAD0)
#define PLATFORMUTILS_PARSEKEYVALUE_OFFSET UNITYSDK_OFFSET(0x211CE10)
#define PLATFORMUTILS_.CCTOR_OFFSET UNITYSDK_OFFSET(0x211CF90)

	inline static constexpr unsigned int PlatformUtils_TypeDefinitionIndex = 3870;

	class PlatformUtils : public Il2CppObject
	{
	public:
		::System::String* CatalogGroupName; // 0x0
		::System::String* PreloadGroupName; // 0x8
		::System::String* GameDataGroupName; // 0x10
		::System::String* PATCHGROUP_REVISION_FILENAME; // 0x18

		::System::Void ShowMailBoxForTakeTicket(::FlatData::GachaTicketType* arg)
		{
			((::System::Void(*)(::FlatData::GachaTicketType*, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMUTILS_SHOWMAILBOXFORTAKETICKET_OFFSET))(arg, nullptr);
		}

		::System::Void ShowShopCashForTakeTicket(::FlatData::GachaTicketType* arg, ::FlatData::ProductCategory* arg2)
		{
			((::System::Void(*)(::FlatData::GachaTicketType*, ::FlatData::ProductCategory*, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMUTILS_SHOWSHOPCASHFORTAKETICKET_OFFSET))(arg, arg2, nullptr);
		}

		::System::String* get_PUB_PACKAGE_NAME_ANDROID()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLATFORMUTILS_GET_PUB_PACKAGE_NAME_ANDROID_OFFSET))(nullptr);
		}

		::System::String* get_PUB_PACKAGE_NAME_ANDROID_TEEN()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLATFORMUTILS_GET_PUB_PACKAGE_NAME_ANDROID_TEEN_OFFSET))(nullptr);
		}

		::System::String* get_PUB_PACKAGE_NAME_ANDROID_ONESTORE()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLATFORMUTILS_GET_PUB_PACKAGE_NAME_ANDROID_ONESTORE_OFFSET))(nullptr);
		}

		::System::String* get_PUB_PACKAGE_NAME_ANDROID_ONESTORE_TEEN()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLATFORMUTILS_GET_PUB_PACKAGE_NAME_ANDROID_ONESTORE_TEEN_OFFSET))(nullptr);
		}

		::System::String* get_PUB_PACKAGE_NAME_ANDROID_GALAXYSTORE()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLATFORMUTILS_GET_PUB_PACKAGE_NAME_ANDROID_GALAXYSTORE_OFFSET))(nullptr);
		}

		::System::String* get_PUB_PACKAGE_NAME_ANDROID_GALAXYSTORE_TEEN()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLATFORMUTILS_GET_PUB_PACKAGE_NAME_ANDROID_GALAXYSTORE_TEEN_OFFSET))(nullptr);
		}

		::System::String* get_PUB_PACKAGE_NAME_STEAM()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLATFORMUTILS_GET_PUB_PACKAGE_NAME_STEAM_OFFSET))(nullptr);
		}

		::System::String* get_PUB_APPID_IOS()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLATFORMUTILS_GET_PUB_APPID_IOS_OFFSET))(nullptr);
		}

		::System::String* get_PUB_APPID_IOS_TEEN()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLATFORMUTILS_GET_PUB_APPID_IOS_TEEN_OFFSET))(nullptr);
		}

		::System::String* get_IDENTIFIER()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLATFORMUTILS_GET_IDENTIFIER_OFFSET))(nullptr);
		}

		::System::String* get_IDENTIFIER_TEEN()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLATFORMUTILS_GET_IDENTIFIER_TEEN_OFFSET))(nullptr);
		}

		::System::String* get_IDENTIFIER_STEAM()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLATFORMUTILS_GET_IDENTIFIER_STEAM_OFFSET))(nullptr);
		}

		::System::String* get_IDENTIFIER_ONESTORE()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLATFORMUTILS_GET_IDENTIFIER_ONESTORE_OFFSET))(nullptr);
		}

		::System::String* get_IDENTIFIER_ONESTORE_TEEN()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLATFORMUTILS_GET_IDENTIFIER_ONESTORE_TEEN_OFFSET))(nullptr);
		}

		::System::String* get_IDENTIFIER_GALAXYSTORE()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLATFORMUTILS_GET_IDENTIFIER_GALAXYSTORE_OFFSET))(nullptr);
		}

		::System::String* get_IDENTIFIER_GALAXYSTORE_TEEN()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLATFORMUTILS_GET_IDENTIFIER_GALAXYSTORE_TEEN_OFFSET))(nullptr);
		}

		::System::String* get_IDENTIFIER_IOS_INHOUSE()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLATFORMUTILS_GET_IDENTIFIER_IOS_INHOUSE_OFFSET))(nullptr);
		}

		::System::String* get_IDENTIFIER_TEEN_IOS_INHOUSE()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLATFORMUTILS_GET_IDENTIFIER_TEEN_IOS_INHOUSE_OFFSET))(nullptr);
		}

		ServerRegion* get_MyServerRegion()
		{
			return ((ServerRegion*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLATFORMUTILS_GET_MYSERVERREGION_OFFSET))(nullptr);
		}

		::System::String* get_DefaultConnectionGroup()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLATFORMUTILS_GET_DEFAULTCONNECTIONGROUP_OFFSET))(nullptr);
		}

		::System::String* get_DefaultCountry()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLATFORMUTILS_GET_DEFAULTCOUNTRY_OFFSET))(nullptr);
		}

		::System::String* get_RootPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLATFORMUTILS_GET_ROOTPATH_OFFSET))(nullptr);
		}

		::System::String* get_AddressableLoadPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLATFORMUTILS_GET_ADDRESSABLELOADPATH_OFFSET))(nullptr);
		}

		::System::String* get_AddressablePreLoadPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLATFORMUTILS_GET_ADDRESSABLEPRELOADPATH_OFFSET))(nullptr);
		}

		::System::String* get_BuildInfoPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLATFORMUTILS_GET_BUILDINFOPATH_OFFSET))(nullptr);
		}

		::System::String* get_CDNListPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLATFORMUTILS_GET_CDNLISTPATH_OFFSET))(nullptr);
		}

		::System::String* Od73744ec5d08800da13b818c363f4c3057262ae033edb0a72d6862b396634642(::System::Boolean arg, ::FlatData::StoreType* arg2)
		{
			return ((::System::String*(*)(::System::Boolean, ::FlatData::StoreType*, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMUTILS_OD73744EC5D08800DA13B818C363F4C3057262AE033EDB0A72D6862B396634642_OFFSET))(arg, arg2, nullptr);
		}

		::System::String* GameServerMarketID(::FlatData::StoreType* arg)
		{
			return ((::System::String*(*)(::FlatData::StoreType*, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMUTILS_GAMESERVERMARKETID_OFFSET))(arg, nullptr);
		}

		::System::String* GetBuildVersion(::System::Int32 arg, ::System::Int32 arg2, ::System::Int32 arg3)
		{
			return ((::System::String*(*)(::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMUTILS_GETBUILDVERSION_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::String* GetBuildVersion(::System::String* str, ::System::String* str2, ::System::String* str3)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMUTILS_GETBUILDVERSION_OFFSET))(str, str2, str3, nullptr);
		}

		::System::String* GetGroupTypePath(PatchGroupType* arg)
		{
			return ((::System::String*(*)(PatchGroupType*, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMUTILS_GETGROUPTYPEPATH_OFFSET))(arg, nullptr);
		}

		::System::String* GetResourcePath(ResourceType* arg)
		{
			return ((::System::String*(*)(ResourceType*, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMUTILS_GETRESOURCEPATH_OFFSET))(arg, nullptr);
		}

		::System::String* GetPath(PatchGroupType* arg)
		{
			return ((::System::String*(*)(PatchGroupType*, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMUTILS_GETPATH_OFFSET))(arg, nullptr);
		}

		::System::String* GetPath(PatchGroupType* arg, ::System::String* str)
		{
			return ((::System::String*(*)(PatchGroupType*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMUTILS_GETPATH_OFFSET))(arg, str, nullptr);
		}

		::System::String* GetPath(PatchGroupType* arg, ResourceType* arg2)
		{
			return ((::System::String*(*)(PatchGroupType*, ResourceType*, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMUTILS_GETPATH_OFFSET))(arg, arg2, nullptr);
		}

		::System::String* GetPath(PatchGroupType* arg, ResourceType* arg2, ::System::String* str)
		{
			return ((::System::String*(*)(PatchGroupType*, ResourceType*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMUTILS_GETPATH_OFFSET))(arg, arg2, str, nullptr);
		}

		::System::String* GetCDNPath(PatchGroupType* arg, ::System::String* str)
		{
			return ((::System::String*(*)(PatchGroupType*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMUTILS_GETCDNPATH_OFFSET))(arg, str, nullptr);
		}

		::System::String* GetCDNPath(PatchGroupType* arg, ResourceType* arg2)
		{
			return ((::System::String*(*)(PatchGroupType*, ResourceType*, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMUTILS_GETCDNPATH_OFFSET))(arg, arg2, nullptr);
		}

		::System::String* GetCDNPath(PatchGroupType* arg, ResourceType* arg2, ::System::String* str)
		{
			return ((::System::String*(*)(PatchGroupType*, ResourceType*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMUTILS_GETCDNPATH_OFFSET))(arg, arg2, str, nullptr);
		}

		::System::String* GetBundleRevisionNumber()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLATFORMUTILS_GETBUNDLEREVISIONNUMBER_OFFSET))(nullptr);
		}

		::System::Void ClearToCDNList(ResourceType* arg)
		{
			((::System::Void(*)(ResourceType*, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMUTILS_CLEARTOCDNLIST_OFFSET))(arg, nullptr);
		}

		::System::Void CreateDirectoryToCDNList(ResourceType* arg)
		{
			((::System::Void(*)(ResourceType*, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMUTILS_CREATEDIRECTORYTOCDNLIST_OFFSET))(arg, nullptr);
		}

		::System::Void CopyFileToCDNList(::System::String* str, ::System::String* str2)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMUTILS_COPYFILETOCDNLIST_OFFSET))(str, str2, nullptr);
		}

		::System::Void CopyDirectoryToCDNList(::System::String* str, ::System::String* str2)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMUTILS_COPYDIRECTORYTOCDNLIST_OFFSET))(str, str2, nullptr);
		}

		::System::Boolean IsDirectory(::System::String* str)
		{
			return ((::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMUTILS_ISDIRECTORY_OFFSET))(str, nullptr);
		}

		::System::String* GetServerRegion(::System::String* str)
		{
			return ((::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMUTILS_GETSERVERREGION_OFFSET))(str, nullptr);
		}

		::System::String* GetServerRegionText(ServerRegion* arg)
		{
			return ((::System::String*(*)(ServerRegion*, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMUTILS_GETSERVERREGIONTEXT_OFFSET))(arg, nullptr);
		}

		ServerRegion* GetServerRegionEnum(::System::String* str)
		{
			return ((ServerRegion*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMUTILS_GETSERVERREGIONENUM_OFFSET))(str, nullptr);
		}

		CountryLetterCode* GetCountryLetterCode(::System::String* str)
		{
			return ((CountryLetterCode*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMUTILS_GETCOUNTRYLETTERCODE_OFFSET))(str, nullptr);
		}

		::System::Void GetLatestPatchBuildNumber(::System::String* str, ::System::String&* arg, ::System::String&* arg2)
		{
			((::System::Void(*)(::System::String*, ::System::String&*, ::System::String&*, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMUTILS_GETLATESTPATCHBUILDNUMBER_OFFSET))(str, arg, arg2, nullptr);
		}

		::System::String* GetPatchBuildNumberFilePath(::System::String* str)
		{
			return ((::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMUTILS_GETPATCHBUILDNUMBERFILEPATH_OFFSET))(str, nullptr);
		}

		Il2CppObject* ParseIniFile(::System::String* str)
		{
			return ((Il2CppObject*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMUTILS_PARSEINIFILE_OFFSET))(str, nullptr);
		}

		Il2CppObject* GetSectionValueLines(::System::String* str)
		{
			return ((Il2CppObject*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMUTILS_GETSECTIONVALUELINES_OFFSET))(str, nullptr);
		}

		::System::Void ParseKeyValue(::System::String* str, ::System::String&* arg, ::System::String&* arg2)
		{
			((::System::Void(*)(::System::String*, ::System::String&*, ::System::String&*, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMUTILS_PARSEKEYVALUE_OFFSET))(str, arg, arg2, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLATFORMUTILS_.CCTOR_OFFSET))(nullptr);
		}

	};

