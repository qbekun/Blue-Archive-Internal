#pragma once
#include "../../../unitysdk.h"

#define NPA_EX_STEAM_NXPSTEAMHELPER_GETSTEAMDLLPATH_OFFSET UNITYSDK_OFFSET(0x9D32600)
#define NPA_EX_STEAM_NXPSTEAMHELPER_THROWIFPLATFORMNOTSUPPORTED_OFFSET UNITYSDK_OFFSET(0x9D326A0)
#define NPA_EX_STEAM_NXPSTEAMHELPER_THROWIFSTEAMCLIENTISNOTAVAILABLE_OFFSET UNITYSDK_OFFSET(0x9D32800)
#define NPA_EX_STEAM_NXPSTEAMHELPER_INITSTEAMAPIDLLINFO_OFFSET UNITYSDK_OFFSET(0x9D32920)
#define NPA_EX_STEAM_NXPSTEAMHELPER_WRITESTEAMAPPIDTXTFILE_OFFSET UNITYSDK_OFFSET(0x9D32BD0)
#define NPA_EX_STEAM_NXPSTEAMHELPER_GETSTEAMAPPIDTXTFILEPATH_OFFSET UNITYSDK_OFFSET(0x9D32EA0)
#define NPA_EX_STEAM_NXPSTEAMHELPER_ISSTEAMAPPIDTXTFILEEXISTS_OFFSET UNITYSDK_OFFSET(0x9D32F30)
#define NPA_EX_STEAM_NXPSTEAMHELPER_READSTEAMAPPIDTXTFILE_OFFSET UNITYSDK_OFFSET(0x9D32F80)
#define NPA_EX_STEAM_NXPSTEAMHELPER_GETSTEAMCLIENTINTERFACEVERSION_OFFSET UNITYSDK_OFFSET(0x9D2F090)
#define NPA_EX_STEAM_NXPSTEAMHELPER_GETSTEAMFRIENDSINTERFACEVERSION_OFFSET UNITYSDK_OFFSET(0x9D2F330)
#define NPA_EX_STEAM_NXPSTEAMHELPER_GETSTEAMAPPSINTERFACEVERSION_OFFSET UNITYSDK_OFFSET(0x9D2F980)
#define NPA_EX_STEAM_NXPSTEAMHELPER_GETSTEAMINVENTORYINTERFACEVERSION_OFFSET UNITYSDK_OFFSET(0x9D2FBA0)
#define NPA_EX_STEAM_NXPSTEAMHELPER_GETSTEAMUSERINTERFACEVERSION_OFFSET UNITYSDK_OFFSET(0x9D2F760)
#define NPA_EX_STEAM_NXPSTEAMHELPER_GETSTEAMUTILSINTERFACEVERSION_OFFSET UNITYSDK_OFFSET(0x9D2F550)
#define NPA_EX_STEAM_NXPSTEAMHELPER_GETSTEAMINPUTINTERFACEVERSION_OFFSET UNITYSDK_OFFSET(0x9D330B0)
#define NPA_EX_STEAM_NXPSTEAMHELPER_CONVERTSTEAMLANGUAGETOLOCALE_OFFSET UNITYSDK_OFFSET(0x9D330E0)
#define NPA_EX_STEAM_NXPSTEAMHELPER_CONVERTSTEAMLOCALETOLANGUAGE_OFFSET UNITYSDK_OFFSET(0x9D33980)
#define NPA_EX_STEAM_NXPSTEAMHELPER_CONVERTIPCOUNTRYTODEBUGCURRENCY_OFFSET UNITYSDK_OFFSET(0x9D34270)
#define NPA_EX_STEAM_NXPSTEAMHELPER_CONVERTTODOWNLOADABLECONTENTSDEF_OFFSET UNITYSDK_OFFSET(0x9D28380)
#define NPA_EX_STEAM_NXPSTEAMHELPER_CONVERTSTEAMPRICETOSTANDARDPRICE_OFFSET UNITYSDK_OFFSET(0x9D35170)
#define NPA_EX_STEAM_NXPSTEAMHELPER_CHECKFORSTEAMDLL_OFFSET UNITYSDK_OFFSET(0x9D351A0)
#define NPA_EX_STEAM_NXPSTEAMHELPER_CHECKFORDLL_OFFSET UNITYSDK_OFFSET(0x9D35240)
#define NPA_EX_STEAM_NXPSTEAMHELPER_PTRTOSTRINGUTF8_OFFSET UNITYSDK_OFFSET(0x9D352A0)
#define NPA_EX_STEAM_NXPSTEAMHELPER_BYTEARRAYTOSTRINGUTF8_OFFSET UNITYSDK_OFFSET(0x9D353F0)
#define NPA_EX_STEAM_NXPSTEAMHELPER_STRINGTOBYTEARRAYUTF8_OFFSET UNITYSDK_OFFSET(0x9D35460)
#define NPA_EX_STEAM_NXPSTEAMHELPER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9D35500)

namespace NPA::Ex::Steam
{
	inline static constexpr unsigned int NXPSteamHelper_TypeDefinitionIndex = 26073;

	class NXPSteamHelper : public Il2CppObject
	{
	public:
		::System::String* SPACE_WAR_APP_ID; // 0x0
		::System::String* NXP_STEAM_LIBRARY_NAME; // 0x0
		::System::String* NXP_STEAM_APPID_FILENAME; // 0x8
		::System::Double NXP_STEAMWORKS_SDK_VERSION; // 0x10
		::System::String* NXP_STEAM_API_DLL_VERSION; // 0x18
		Il2CppObject* SteamworksVersionInfos; // 0x20

		::System::String* GetSteamDllPath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMHELPER_GETSTEAMDLLPATH_OFFSET))(nullptr);
		}

		::System::Void ThrowIfPlatformNotSupported()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMHELPER_THROWIFPLATFORMNOTSUPPORTED_OFFSET))(nullptr);
		}

		::System::Void ThrowIfSteamClientIsNotAvailable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMHELPER_THROWIFSTEAMCLIENTISNOTAVAILABLE_OFFSET))(nullptr);
		}

		::System::Void InitSteamAPIDllInfo()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMHELPER_INITSTEAMAPIDLLINFO_OFFSET))(nullptr);
		}

		::System::Void WriteSteamAppIdTxtFile(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMHELPER_WRITESTEAMAPPIDTXTFILE_OFFSET))(str, nullptr);
		}

		::System::String* GetSteamAppIdTxtFilePath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMHELPER_GETSTEAMAPPIDTXTFILEPATH_OFFSET))(nullptr);
		}

		::System::Boolean IsSteamAppIdTxtFileExists()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMHELPER_ISSTEAMAPPIDTXTFILEEXISTS_OFFSET))(nullptr);
		}

		::System::UInt32 ReadSteamAppIdTxtFile()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMHELPER_READSTEAMAPPIDTXTFILE_OFFSET))(nullptr);
		}

		::System::String* GetSteamClientInterfaceVersion()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMHELPER_GETSTEAMCLIENTINTERFACEVERSION_OFFSET))(nullptr);
		}

		::System::String* GetSteamFriendsInterfaceVersion()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMHELPER_GETSTEAMFRIENDSINTERFACEVERSION_OFFSET))(nullptr);
		}

		::System::String* GetSteamAppsInterfaceVersion()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMHELPER_GETSTEAMAPPSINTERFACEVERSION_OFFSET))(nullptr);
		}

		::System::String* GetSteamInventoryInterfaceVersion()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMHELPER_GETSTEAMINVENTORYINTERFACEVERSION_OFFSET))(nullptr);
		}

		::System::String* GetSteamUserInterfaceVersion()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMHELPER_GETSTEAMUSERINTERFACEVERSION_OFFSET))(nullptr);
		}

		::System::String* GetSteamUtilsInterfaceVersion()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMHELPER_GETSTEAMUTILSINTERFACEVERSION_OFFSET))(nullptr);
		}

		::System::String* GetSteamInputInterfaceVersion()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMHELPER_GETSTEAMINPUTINTERFACEVERSION_OFFSET))(nullptr);
		}

		::System::String* ConvertSteamLanguageToLocale(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMHELPER_CONVERTSTEAMLANGUAGETOLOCALE_OFFSET))(str, nullptr);
		}

		::System::String* ConvertSteamLocaleToLanguage(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMHELPER_CONVERTSTEAMLOCALETOLANGUAGE_OFFSET))(str, nullptr);
		}

		::System::String* ConvertIPCountryToDebugCurrency(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMHELPER_CONVERTIPCOUNTRYTODEBUGCURRENCY_OFFSET))(str, nullptr);
		}

		Il2CppObject* ConvertToDownloadableContentsDef(::System::String* str, Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMHELPER_CONVERTTODOWNLOADABLECONTENTSDEF_OFFSET))(str, arg, nullptr);
		}

		::System::String* ConvertSteamPriceToStandardPrice(::System::UInt32 arg)
		{
			return (return (::System::String*(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMHELPER_CONVERTSTEAMPRICETOSTANDARDPRICE_OFFSET))(arg, nullptr);
		}

		::System::Boolean CheckForSteamDll()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMHELPER_CHECKFORSTEAMDLL_OFFSET))(nullptr);
		}

		::System::Boolean CheckForDll(::System::String* str, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMHELPER_CHECKFORDLL_OFFSET))(str, str, nullptr);
		}

		::System::String* PtrToStringUTF8(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMHELPER_PTRTOSTRINGUTF8_OFFSET))(arg, nullptr);
		}

		::System::String* ByteArrayToStringUTF8(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::String*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMHELPER_BYTEARRAYTOSTRINGUTF8_OFFSET))(arg, nullptr);
		}

		::System::Void StringToByteArrayUTF8(::System::String* str, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMHELPER_STRINGTOBYTEARRAYUTF8_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_STEAM_NXPSTEAMHELPER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

