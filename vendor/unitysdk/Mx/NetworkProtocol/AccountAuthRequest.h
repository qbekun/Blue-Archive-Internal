#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_ACCOUNTAUTHREQUEST_SET_ACCESSIP_OFFSET UNITYSDK_OFFSET(0xF0EC50)
#define MX_NETWORKPROTOCOL_ACCOUNTAUTHREQUEST_GET_OSVERSION_OFFSET UNITYSDK_OFFSET(0xF0EC60)
#define MX_NETWORKPROTOCOL_ACCOUNTAUTHREQUEST_GET_IDFV_OFFSET UNITYSDK_OFFSET(0xF0EC70)
#define MX_NETWORKPROTOCOL_ACCOUNTAUTHREQUEST_SET_ADVERTISEMENTID_OFFSET UNITYSDK_OFFSET(0xF0EC80)
#define MX_NETWORKPROTOCOL_ACCOUNTAUTHREQUEST_SET_DEVICEMODEL_OFFSET UNITYSDK_OFFSET(0xF0EC90)
#define MX_NETWORKPROTOCOL_ACCOUNTAUTHREQUEST_SET_OSVERSION_OFFSET UNITYSDK_OFFSET(0xF0ECB0)
#define MX_NETWORKPROTOCOL_ACCOUNTAUTHREQUEST_GET_DEVID_OFFSET UNITYSDK_OFFSET(0xF0ECC0)
#define MX_NETWORKPROTOCOL_ACCOUNTAUTHREQUEST_GET_ISTEENVERSION_OFFSET UNITYSDK_OFFSET(0xF0ECD0)
#define MX_NETWORKPROTOCOL_ACCOUNTAUTHREQUEST_GET_ACCESSIP_OFFSET UNITYSDK_OFFSET(0xF0ECE0)
#define MX_NETWORKPROTOCOL_ACCOUNTAUTHREQUEST_SET_IMEI_OFFSET UNITYSDK_OFFSET(0xF0ECF0)
#define MX_NETWORKPROTOCOL_ACCOUNTAUTHREQUEST_GET_COUNTRYCODE_OFFSET UNITYSDK_OFFSET(0xF0ED00)
#define MX_NETWORKPROTOCOL_ACCOUNTAUTHREQUEST_SET_DEVID_OFFSET UNITYSDK_OFFSET(0xF0ED10)
#define MX_NETWORKPROTOCOL_ACCOUNTAUTHREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF0ED20)
#define MX_NETWORKPROTOCOL_ACCOUNTAUTHREQUEST_SET_IDFV_OFFSET UNITYSDK_OFFSET(0xF0ED30)
#define MX_NETWORKPROTOCOL_ACCOUNTAUTHREQUEST_GET_DEVICESYSTEMMEMORYSIZE_OFFSET UNITYSDK_OFFSET(0xF0ED50)
#define MX_NETWORKPROTOCOL_ACCOUNTAUTHREQUEST_GET_IMEI_OFFSET UNITYSDK_OFFSET(0xF0ED60)
#define MX_NETWORKPROTOCOL_ACCOUNTAUTHREQUEST_SET_USERTYPE_OFFSET UNITYSDK_OFFSET(0xF0ED70)
#define MX_NETWORKPROTOCOL_ACCOUNTAUTHREQUEST_GET_GAMEOPTIONLANGUAGE_OFFSET UNITYSDK_OFFSET(0xF0ED80)
#define MX_NETWORKPROTOCOL_ACCOUNTAUTHREQUEST_SET_GAMEOPTIONLANGUAGE_OFFSET UNITYSDK_OFFSET(0xF0ED90)
#define MX_NETWORKPROTOCOL_ACCOUNTAUTHREQUEST_SET_DEVICELOCALECODE_OFFSET UNITYSDK_OFFSET(0xF0EDB0)
#define MX_NETWORKPROTOCOL_ACCOUNTAUTHREQUEST_SET_VERSION_OFFSET UNITYSDK_OFFSET(0xF0EDD0)
#define MX_NETWORKPROTOCOL_ACCOUNTAUTHREQUEST_SET_DEVICESYSTEMMEMORYSIZE_OFFSET UNITYSDK_OFFSET(0xF0EDE0)
#define MX_NETWORKPROTOCOL_ACCOUNTAUTHREQUEST_SET_DEVICEUNIQUEID_OFFSET UNITYSDK_OFFSET(0xF0EDF0)
#define MX_NETWORKPROTOCOL_ACCOUNTAUTHREQUEST_SET_MARKETID_OFFSET UNITYSDK_OFFSET(0xF0EE10)
#define MX_NETWORKPROTOCOL_ACCOUNTAUTHREQUEST_GET_MARKETID_OFFSET UNITYSDK_OFFSET(0xF0EE20)
#define MX_NETWORKPROTOCOL_ACCOUNTAUTHREQUEST_GET_DEVICEUNIQUEID_OFFSET UNITYSDK_OFFSET(0xF0EE30)
#define MX_NETWORKPROTOCOL_ACCOUNTAUTHREQUEST_SET_COUNTRYCODE_OFFSET UNITYSDK_OFFSET(0xF0EE40)
#define MX_NETWORKPROTOCOL_ACCOUNTAUTHREQUEST_SET_ISTEENVERSION_OFFSET UNITYSDK_OFFSET(0xF0EE60)
#define MX_NETWORKPROTOCOL_ACCOUNTAUTHREQUEST_GET_ADVERTISEMENTID_OFFSET UNITYSDK_OFFSET(0xF0EE70)
#define MX_NETWORKPROTOCOL_ACCOUNTAUTHREQUEST_SET_OSTYPE_OFFSET UNITYSDK_OFFSET(0xF0EE80)
#define MX_NETWORKPROTOCOL_ACCOUNTAUTHREQUEST_GET_VERSION_OFFSET UNITYSDK_OFFSET(0xF0EE90)
#define MX_NETWORKPROTOCOL_ACCOUNTAUTHREQUEST_GET_OSTYPE_OFFSET UNITYSDK_OFFSET(0xF0EEA0)
#define MX_NETWORKPROTOCOL_ACCOUNTAUTHREQUEST_GET_DEVICELOCALECODE_OFFSET UNITYSDK_OFFSET(0xF0EEB0)
#define MX_NETWORKPROTOCOL_ACCOUNTAUTHREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF0EEC0)
#define MX_NETWORKPROTOCOL_ACCOUNTAUTHREQUEST_GET_DEVICEMODEL_OFFSET UNITYSDK_OFFSET(0xF0EED0)
#define MX_NETWORKPROTOCOL_ACCOUNTAUTHREQUEST_GET_USERTYPE_OFFSET UNITYSDK_OFFSET(0xF0EEE0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int AccountAuthRequest_TypeDefinitionIndex = 11229;

	class AccountAuthRequest : public Il2CppObject
	{
	public:
		::System::Int64 _Version_k__BackingField; // 0x40
		::System::String* _DevId_k__BackingField; // 0x48
		::System::Int64 _IMEI_k__BackingField; // 0x50
		::System::String* _AccessIP_k__BackingField; // 0x58
		::System::String* _MarketId_k__BackingField; // 0x60
		::System::String* _UserType_k__BackingField; // 0x68
		::System::String* _AdvertisementId_k__BackingField; // 0x70
		::System::String* _OSType_k__BackingField; // 0x78
		::System::String* _OSVersion_k__BackingField; // 0x80
		::System::String* _DeviceUniqueId_k__BackingField; // 0x88
		::System::String* _DeviceModel_k__BackingField; // 0x90
		::System::Int32 _DeviceSystemMemorySize_k__BackingField; // 0x98
		::System::String* _CountryCode_k__BackingField; // 0xA0
		::System::String* _Idfv_k__BackingField; // 0xA8
		::System::Boolean _IsTeenVersion_k__BackingField; // 0xB0
		::System::String* _DeviceLocaleCode_k__BackingField; // 0xB8
		::System::String* _GameOptionLanguage_k__BackingField; // 0xC0

		::System::Void set_AccessIP(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTAUTHREQUEST_SET_ACCESSIP_OFFSET))(str, nullptr);
		}

		::System::String* get_OSVersion()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTAUTHREQUEST_GET_OSVERSION_OFFSET))(nullptr);
		}

		::System::String* get_Idfv()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTAUTHREQUEST_GET_IDFV_OFFSET))(nullptr);
		}

		::System::Void set_AdvertisementId(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTAUTHREQUEST_SET_ADVERTISEMENTID_OFFSET))(str, nullptr);
		}

		::System::Void set_DeviceModel(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTAUTHREQUEST_SET_DEVICEMODEL_OFFSET))(str, nullptr);
		}

		::System::Void set_OSVersion(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTAUTHREQUEST_SET_OSVERSION_OFFSET))(str, nullptr);
		}

		::System::String* get_DevId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTAUTHREQUEST_GET_DEVID_OFFSET))(nullptr);
		}

		::System::Boolean get_IsTeenVersion()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTAUTHREQUEST_GET_ISTEENVERSION_OFFSET))(nullptr);
		}

		::System::String* get_AccessIP()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTAUTHREQUEST_GET_ACCESSIP_OFFSET))(nullptr);
		}

		::System::Void set_IMEI(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTAUTHREQUEST_SET_IMEI_OFFSET))(arg, nullptr);
		}

		::System::String* get_CountryCode()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTAUTHREQUEST_GET_COUNTRYCODE_OFFSET))(nullptr);
		}

		::System::Void set_DevId(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTAUTHREQUEST_SET_DEVID_OFFSET))(str, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTAUTHREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_Idfv(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTAUTHREQUEST_SET_IDFV_OFFSET))(str, nullptr);
		}

		::System::Int32 get_DeviceSystemMemorySize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTAUTHREQUEST_GET_DEVICESYSTEMMEMORYSIZE_OFFSET))(nullptr);
		}

		::System::Int64 get_IMEI()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTAUTHREQUEST_GET_IMEI_OFFSET))(nullptr);
		}

		::System::Void set_UserType(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTAUTHREQUEST_SET_USERTYPE_OFFSET))(str, nullptr);
		}

		::System::String* get_GameOptionLanguage()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTAUTHREQUEST_GET_GAMEOPTIONLANGUAGE_OFFSET))(nullptr);
		}

		::System::Void set_GameOptionLanguage(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTAUTHREQUEST_SET_GAMEOPTIONLANGUAGE_OFFSET))(str, nullptr);
		}

		::System::Void set_DeviceLocaleCode(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTAUTHREQUEST_SET_DEVICELOCALECODE_OFFSET))(str, nullptr);
		}

		::System::Void set_Version(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTAUTHREQUEST_SET_VERSION_OFFSET))(arg, nullptr);
		}

		::System::Void set_DeviceSystemMemorySize(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTAUTHREQUEST_SET_DEVICESYSTEMMEMORYSIZE_OFFSET))(arg, nullptr);
		}

		::System::Void set_DeviceUniqueId(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTAUTHREQUEST_SET_DEVICEUNIQUEID_OFFSET))(str, nullptr);
		}

		::System::Void set_MarketId(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTAUTHREQUEST_SET_MARKETID_OFFSET))(str, nullptr);
		}

		::System::String* get_MarketId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTAUTHREQUEST_GET_MARKETID_OFFSET))(nullptr);
		}

		::System::String* get_DeviceUniqueId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTAUTHREQUEST_GET_DEVICEUNIQUEID_OFFSET))(nullptr);
		}

		::System::Void set_CountryCode(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTAUTHREQUEST_SET_COUNTRYCODE_OFFSET))(str, nullptr);
		}

		::System::Void set_IsTeenVersion(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTAUTHREQUEST_SET_ISTEENVERSION_OFFSET))(arg, nullptr);
		}

		::System::String* get_AdvertisementId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTAUTHREQUEST_GET_ADVERTISEMENTID_OFFSET))(nullptr);
		}

		::System::Void set_OSType(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTAUTHREQUEST_SET_OSTYPE_OFFSET))(str, nullptr);
		}

		::System::Int64 get_Version()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTAUTHREQUEST_GET_VERSION_OFFSET))(nullptr);
		}

		::System::String* get_OSType()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTAUTHREQUEST_GET_OSTYPE_OFFSET))(nullptr);
		}

		::System::String* get_DeviceLocaleCode()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTAUTHREQUEST_GET_DEVICELOCALECODE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTAUTHREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::System::String* get_DeviceModel()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTAUTHREQUEST_GET_DEVICEMODEL_OFFSET))(nullptr);
		}

		::System::String* get_UserType()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTAUTHREQUEST_GET_USERTYPE_OFFSET))(nullptr);
		}

	};
}

