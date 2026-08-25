#pragma once
#include "unitysdk.h"

class ServerInfoConnectionGroupData;

#define SERVERINFOCONNECTIONGROUPDATA_GETOVERRIDED_OFFSET UNITYSDK_OFFSET(0xC2A360)
#define SERVERINFOCONNECTIONGROUPDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0xC3C560)
#define SERVERINFOCONNECTIONGROUPDATA_SET_GATEWAYURL_OFFSET UNITYSDK_OFFSET(0xC3C570)
#define SERVERINFOCONNECTIONGROUPDATA_SET_OVERRIDECONNECTIONGROUPS_OFFSET UNITYSDK_OFFSET(0xC3C580)
#define SERVERINFOCONNECTIONGROUPDATA_SET_DISABLEWEBVIEWBANNER_OFFSET UNITYSDK_OFFSET(0xC3C590)
#define SERVERINFOCONNECTIONGROUPDATA_GET_PROHIBITEDCHATTINGWORDBLACKLISTURI_OFFSET UNITYSDK_OFFSET(0xC3C5A0)
#define SERVERINFOCONNECTIONGROUPDATA_SET_NAME_OFFSET UNITYSDK_OFFSET(0xC3C5B0)
#define SERVERINFOCONNECTIONGROUPDATA_SET_PROHIBITEDWORDBLACKLISTURI_OFFSET UNITYSDK_OFFSET(0xC3C5C0)
#define SERVERINFOCONNECTIONGROUPDATA_SET_PROHIBITEDWORDWHITELISTURI_OFFSET UNITYSDK_OFFSET(0xC3C5D0)
#define SERVERINFOCONNECTIONGROUPDATA_GET_DISABLEWEBVIEWBANNER_OFFSET UNITYSDK_OFFSET(0xC3C5E0)
#define SERVERINFOCONNECTIONGROUPDATA_SET_APIURL_OFFSET UNITYSDK_OFFSET(0xC3C5F0)
#define SERVERINFOCONNECTIONGROUPDATA_SET_BUNDLEVERSION_OFFSET UNITYSDK_OFFSET(0xC3C600)
#define SERVERINFOCONNECTIONGROUPDATA_GET_PROHIBITEDWORDWHITELISTURI_OFFSET UNITYSDK_OFFSET(0xC3C610)
#define SERVERINFOCONNECTIONGROUPDATA_GET_PROHIBITEDWORDBLACKLISTURI_OFFSET UNITYSDK_OFFSET(0xC3C620)
#define SERVERINFOCONNECTIONGROUPDATA_GET_NXSID_OFFSET UNITYSDK_OFFSET(0xC3C630)
#define SERVERINFOCONNECTIONGROUPDATA_GET_BUNDLEVERSION_OFFSET UNITYSDK_OFFSET(0xC3C640)
#define SERVERINFOCONNECTIONGROUPDATA_GET_OVERRIDECONNECTIONGROUPS_OFFSET UNITYSDK_OFFSET(0xC3C650)
#define SERVERINFOCONNECTIONGROUPDATA_GET_GATEWAYURL_OFFSET UNITYSDK_OFFSET(0xC3C660)
#define SERVERINFOCONNECTIONGROUPDATA_SET_PROHIBITEDCHATTINGWORDBLACKLISTURI_OFFSET UNITYSDK_OFFSET(0xC3C670)
#define SERVERINFOCONNECTIONGROUPDATA_SET_NXSID_OFFSET UNITYSDK_OFFSET(0xC3C680)
#define SERVERINFOCONNECTIONGROUPDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0xC3C4C0)
#define SERVERINFOCONNECTIONGROUPDATA_GET_APIURL_OFFSET UNITYSDK_OFFSET(0xC3C690)

	inline static constexpr unsigned int ServerInfoConnectionGroupData_TypeDefinitionIndex = 8914;

	class ServerInfoConnectionGroupData : public Il2CppObject
	{
	public:
		::System::String* _Name_k__BackingField; // 0x10
		::System::String* _ApiUrl_k__BackingField; // 0x18
		::System::String* _GatewayUrl_k__BackingField; // 0x20
		::System::String* _ProhibitedWordBlackListUri_k__BackingField; // 0x28
		::System::String* _ProhibitedWordWhiteListUri_k__BackingField; // 0x30
		::System::String* _ProhibitedChattingWordBlackListUri_k__BackingField; // 0x38
		::System::Boolean _DisableWebviewBanner_k__BackingField; // 0x40
		::System::String* _NXSID_k__BackingField; // 0x48
		::System::String* _BundleVersion_k__BackingField; // 0x50
		::Il2CppArray<::System::Object*>* _OverrideConnectionGroups_k__BackingField; // 0x58

		ServerInfoConnectionGroupData* GetOverrided(::System::String* str)
		{
			return ((ServerInfoConnectionGroupData*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SERVERINFOCONNECTIONGROUPDATA_GETOVERRIDED_OFFSET))(str, nullptr);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SERVERINFOCONNECTIONGROUPDATA_GET_NAME_OFFSET))(nullptr);
		}

		::System::Void set_GatewayUrl(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SERVERINFOCONNECTIONGROUPDATA_SET_GATEWAYURL_OFFSET))(str, nullptr);
		}

		::System::Void set_OverrideConnectionGroups(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SERVERINFOCONNECTIONGROUPDATA_SET_OVERRIDECONNECTIONGROUPS_OFFSET))(arg, nullptr);
		}

		::System::Void set_DisableWebviewBanner(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SERVERINFOCONNECTIONGROUPDATA_SET_DISABLEWEBVIEWBANNER_OFFSET))(arg, nullptr);
		}

		::System::String* get_ProhibitedChattingWordBlackListUri()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SERVERINFOCONNECTIONGROUPDATA_GET_PROHIBITEDCHATTINGWORDBLACKLISTURI_OFFSET))(nullptr);
		}

		::System::Void set_Name(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SERVERINFOCONNECTIONGROUPDATA_SET_NAME_OFFSET))(str, nullptr);
		}

		::System::Void set_ProhibitedWordBlackListUri(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SERVERINFOCONNECTIONGROUPDATA_SET_PROHIBITEDWORDBLACKLISTURI_OFFSET))(str, nullptr);
		}

		::System::Void set_ProhibitedWordWhiteListUri(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SERVERINFOCONNECTIONGROUPDATA_SET_PROHIBITEDWORDWHITELISTURI_OFFSET))(str, nullptr);
		}

		::System::Boolean get_DisableWebviewBanner()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SERVERINFOCONNECTIONGROUPDATA_GET_DISABLEWEBVIEWBANNER_OFFSET))(nullptr);
		}

		::System::Void set_ApiUrl(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SERVERINFOCONNECTIONGROUPDATA_SET_APIURL_OFFSET))(str, nullptr);
		}

		::System::Void set_BundleVersion(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SERVERINFOCONNECTIONGROUPDATA_SET_BUNDLEVERSION_OFFSET))(str, nullptr);
		}

		::System::String* get_ProhibitedWordWhiteListUri()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SERVERINFOCONNECTIONGROUPDATA_GET_PROHIBITEDWORDWHITELISTURI_OFFSET))(nullptr);
		}

		::System::String* get_ProhibitedWordBlackListUri()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SERVERINFOCONNECTIONGROUPDATA_GET_PROHIBITEDWORDBLACKLISTURI_OFFSET))(nullptr);
		}

		::System::String* get_NXSID()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SERVERINFOCONNECTIONGROUPDATA_GET_NXSID_OFFSET))(nullptr);
		}

		::System::String* get_BundleVersion()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SERVERINFOCONNECTIONGROUPDATA_GET_BUNDLEVERSION_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_OverrideConnectionGroups()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SERVERINFOCONNECTIONGROUPDATA_GET_OVERRIDECONNECTIONGROUPS_OFFSET))(nullptr);
		}

		::System::String* get_GatewayUrl()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SERVERINFOCONNECTIONGROUPDATA_GET_GATEWAYURL_OFFSET))(nullptr);
		}

		::System::Void set_ProhibitedChattingWordBlackListUri(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SERVERINFOCONNECTIONGROUPDATA_SET_PROHIBITEDCHATTINGWORDBLACKLISTURI_OFFSET))(str, nullptr);
		}

		::System::Void set_NXSID(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SERVERINFOCONNECTIONGROUPDATA_SET_NXSID_OFFSET))(str, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SERVERINFOCONNECTIONGROUPDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::String* get_ApiUrl()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SERVERINFOCONNECTIONGROUPDATA_GET_APIURL_OFFSET))(nullptr);
		}

	};

