#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_ACCOUNTCREATEREQUEST_GET_IMEI_OFFSET UNITYSDK_OFFSET(0xF0F390)
#define MX_NETWORKPROTOCOL_ACCOUNTCREATEREQUEST_SET_IMEI_OFFSET UNITYSDK_OFFSET(0xF0F3A0)
#define MX_NETWORKPROTOCOL_ACCOUNTCREATEREQUEST_GET_COUNTRYCODE_OFFSET UNITYSDK_OFFSET(0xF0F3B0)
#define MX_NETWORKPROTOCOL_ACCOUNTCREATEREQUEST_SET_OSTYPE_OFFSET UNITYSDK_OFFSET(0xF0F3C0)
#define MX_NETWORKPROTOCOL_ACCOUNTCREATEREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF0F3D0)
#define MX_NETWORKPROTOCOL_ACCOUNTCREATEREQUEST_GET_USERTYPE_OFFSET UNITYSDK_OFFSET(0xF0F3E0)
#define MX_NETWORKPROTOCOL_ACCOUNTCREATEREQUEST_SET_VERSION_OFFSET UNITYSDK_OFFSET(0xF0F3F0)
#define MX_NETWORKPROTOCOL_ACCOUNTCREATEREQUEST_GET_OSTYPE_OFFSET UNITYSDK_OFFSET(0xF0F400)
#define MX_NETWORKPROTOCOL_ACCOUNTCREATEREQUEST_GET_OSVERSION_OFFSET UNITYSDK_OFFSET(0xF0F410)
#define MX_NETWORKPROTOCOL_ACCOUNTCREATEREQUEST_SET_DEVID_OFFSET UNITYSDK_OFFSET(0xF0F420)
#define MX_NETWORKPROTOCOL_ACCOUNTCREATEREQUEST_SET_COUNTRYCODE_OFFSET UNITYSDK_OFFSET(0xF0F430)
#define MX_NETWORKPROTOCOL_ACCOUNTCREATEREQUEST_GET_VERSION_OFFSET UNITYSDK_OFFSET(0xF0F450)
#define MX_NETWORKPROTOCOL_ACCOUNTCREATEREQUEST_SET_ADVERTISEMENTID_OFFSET UNITYSDK_OFFSET(0xF0F460)
#define MX_NETWORKPROTOCOL_ACCOUNTCREATEREQUEST_GET_ACCESSIP_OFFSET UNITYSDK_OFFSET(0xF0F470)
#define MX_NETWORKPROTOCOL_ACCOUNTCREATEREQUEST_SET_OSVERSION_OFFSET UNITYSDK_OFFSET(0xF0F480)
#define MX_NETWORKPROTOCOL_ACCOUNTCREATEREQUEST_SET_ACCESSIP_OFFSET UNITYSDK_OFFSET(0xF0F490)
#define MX_NETWORKPROTOCOL_ACCOUNTCREATEREQUEST_SET_USERTYPE_OFFSET UNITYSDK_OFFSET(0xF0F4A0)
#define MX_NETWORKPROTOCOL_ACCOUNTCREATEREQUEST_GET_MARKETID_OFFSET UNITYSDK_OFFSET(0xF0F4B0)
#define MX_NETWORKPROTOCOL_ACCOUNTCREATEREQUEST_GET_ADVERTISEMENTID_OFFSET UNITYSDK_OFFSET(0xF0F4C0)
#define MX_NETWORKPROTOCOL_ACCOUNTCREATEREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF0F4D0)
#define MX_NETWORKPROTOCOL_ACCOUNTCREATEREQUEST_SET_MARKETID_OFFSET UNITYSDK_OFFSET(0xF0F4E0)
#define MX_NETWORKPROTOCOL_ACCOUNTCREATEREQUEST_GET_DEVID_OFFSET UNITYSDK_OFFSET(0xF0F4F0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int AccountCreateRequest_TypeDefinitionIndex = 11233;

	class AccountCreateRequest : public Il2CppObject
	{
	public:
		::System::String* _DevId_k__BackingField; // 0x40
		::System::Int64 _Version_k__BackingField; // 0x48
		::System::Int64 _IMEI_k__BackingField; // 0x50
		::System::String* _AccessIP_k__BackingField; // 0x58
		::System::String* _MarketId_k__BackingField; // 0x60
		::System::String* _UserType_k__BackingField; // 0x68
		::System::String* _AdvertisementId_k__BackingField; // 0x70
		::System::String* _OSType_k__BackingField; // 0x78
		::System::String* _OSVersion_k__BackingField; // 0x80
		::System::String* _CountryCode_k__BackingField; // 0x88

		::System::Int64 get_IMEI()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTCREATEREQUEST_GET_IMEI_OFFSET))(nullptr);
		}

		::System::Void set_IMEI(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTCREATEREQUEST_SET_IMEI_OFFSET))(arg, nullptr);
		}

		::System::String* get_CountryCode()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTCREATEREQUEST_GET_COUNTRYCODE_OFFSET))(nullptr);
		}

		::System::Void set_OSType(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTCREATEREQUEST_SET_OSTYPE_OFFSET))(str, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTCREATEREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::System::String* get_UserType()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTCREATEREQUEST_GET_USERTYPE_OFFSET))(nullptr);
		}

		::System::Void set_Version(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTCREATEREQUEST_SET_VERSION_OFFSET))(arg, nullptr);
		}

		::System::String* get_OSType()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTCREATEREQUEST_GET_OSTYPE_OFFSET))(nullptr);
		}

		::System::String* get_OSVersion()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTCREATEREQUEST_GET_OSVERSION_OFFSET))(nullptr);
		}

		::System::Void set_DevId(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTCREATEREQUEST_SET_DEVID_OFFSET))(str, nullptr);
		}

		::System::Void set_CountryCode(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTCREATEREQUEST_SET_COUNTRYCODE_OFFSET))(str, nullptr);
		}

		::System::Int64 get_Version()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTCREATEREQUEST_GET_VERSION_OFFSET))(nullptr);
		}

		::System::Void set_AdvertisementId(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTCREATEREQUEST_SET_ADVERTISEMENTID_OFFSET))(str, nullptr);
		}

		::System::String* get_AccessIP()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTCREATEREQUEST_GET_ACCESSIP_OFFSET))(nullptr);
		}

		::System::Void set_OSVersion(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTCREATEREQUEST_SET_OSVERSION_OFFSET))(str, nullptr);
		}

		::System::Void set_AccessIP(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTCREATEREQUEST_SET_ACCESSIP_OFFSET))(str, nullptr);
		}

		::System::Void set_UserType(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTCREATEREQUEST_SET_USERTYPE_OFFSET))(str, nullptr);
		}

		::System::String* get_MarketId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTCREATEREQUEST_GET_MARKETID_OFFSET))(nullptr);
		}

		::System::String* get_AdvertisementId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTCREATEREQUEST_GET_ADVERTISEMENTID_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTCREATEREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_MarketId(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTCREATEREQUEST_SET_MARKETID_OFFSET))(str, nullptr);
		}

		::System::String* get_DevId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTCREATEREQUEST_GET_DEVID_OFFSET))(nullptr);
		}

	};
}

