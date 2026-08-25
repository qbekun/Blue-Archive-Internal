#pragma once
#include "../../unitysdk.h"

#define NPA_STORE_NXPTOYDELIVEROOAPENTITLEMENTINFO_GET_STAMPTOKEN_OFFSET UNITYSDK_OFFSET(0x9CC2C90)
#define NPA_STORE_NXPTOYDELIVEROOAPENTITLEMENTINFO_SET_STAMPTOKEN_OFFSET UNITYSDK_OFFSET(0x9CC2CA0)
#define NPA_STORE_NXPTOYDELIVEROOAPENTITLEMENTINFO_GET_CHECKDELIVERYSTATUS_OFFSET UNITYSDK_OFFSET(0x9CC2CB0)
#define NPA_STORE_NXPTOYDELIVEROOAPENTITLEMENTINFO_SET_CHECKDELIVERYSTATUS_OFFSET UNITYSDK_OFFSET(0x9CC2CC0)
#define NPA_STORE_NXPTOYDELIVEROOAPENTITLEMENTINFO_GET_CSMETA_OFFSET UNITYSDK_OFFSET(0x9CC2CD0)
#define NPA_STORE_NXPTOYDELIVEROOAPENTITLEMENTINFO_SET_CSMETA_OFFSET UNITYSDK_OFFSET(0x9CC2CE0)
#define NPA_STORE_NXPTOYDELIVEROOAPENTITLEMENTINFO_GET_SERVICEPAYLOAD_OFFSET UNITYSDK_OFFSET(0x9CC2CF0)
#define NPA_STORE_NXPTOYDELIVEROOAPENTITLEMENTINFO_SET_SERVICEPAYLOAD_OFFSET UNITYSDK_OFFSET(0x9CC2D00)
#define NPA_STORE_NXPTOYDELIVEROOAPENTITLEMENTINFO_GET_PRODUCTMETA_OFFSET UNITYSDK_OFFSET(0x9CC2D10)
#define NPA_STORE_NXPTOYDELIVEROOAPENTITLEMENTINFO_SET_PRODUCTMETA_OFFSET UNITYSDK_OFFSET(0x9CC2D20)
#define NPA_STORE_NXPTOYDELIVEROOAPENTITLEMENTINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CC2D30)
#define NPA_STORE_NXPTOYDELIVEROOAPENTITLEMENTINFO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9CC2D40)

namespace NPA::Store
{
	inline static constexpr unsigned int NXPToyDeliverOoapEntitlementInfo_TypeDefinitionIndex = 27225;

	class NXPToyDeliverOoapEntitlementInfo : public Il2CppObject
	{
	public:
		::System::String* stampToken; // 0x10
		::System::Boolean checkDeliveryStatus; // 0x18
		::System::String* csMeta; // 0x20
		::System::String* servicePayload; // 0x28
		::System::String* productMeta; // 0x30

		::System::String* get_StampToken()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_STORE_NXPTOYDELIVEROOAPENTITLEMENTINFO_GET_STAMPTOKEN_OFFSET))(nullptr);
		}

		::System::Void set_StampToken(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_STORE_NXPTOYDELIVEROOAPENTITLEMENTINFO_SET_STAMPTOKEN_OFFSET))(str, nullptr);
		}

		::System::Boolean get_CheckDeliveryStatus()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_STORE_NXPTOYDELIVEROOAPENTITLEMENTINFO_GET_CHECKDELIVERYSTATUS_OFFSET))(nullptr);
		}

		::System::Void set_CheckDeliveryStatus(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_STORE_NXPTOYDELIVEROOAPENTITLEMENTINFO_SET_CHECKDELIVERYSTATUS_OFFSET))(arg, nullptr);
		}

		::System::String* get_CsMeta()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_STORE_NXPTOYDELIVEROOAPENTITLEMENTINFO_GET_CSMETA_OFFSET))(nullptr);
		}

		::System::Void set_CsMeta(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_STORE_NXPTOYDELIVEROOAPENTITLEMENTINFO_SET_CSMETA_OFFSET))(str, nullptr);
		}

		::System::String* get_ServicePayload()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_STORE_NXPTOYDELIVEROOAPENTITLEMENTINFO_GET_SERVICEPAYLOAD_OFFSET))(nullptr);
		}

		::System::Void set_ServicePayload(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_STORE_NXPTOYDELIVEROOAPENTITLEMENTINFO_SET_SERVICEPAYLOAD_OFFSET))(str, nullptr);
		}

		::System::String* get_ProductMeta()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_STORE_NXPTOYDELIVEROOAPENTITLEMENTINFO_GET_PRODUCTMETA_OFFSET))(nullptr);
		}

		::System::Void set_ProductMeta(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_STORE_NXPTOYDELIVEROOAPENTITLEMENTINFO_SET_PRODUCTMETA_OFFSET))(str, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_STORE_NXPTOYDELIVEROOAPENTITLEMENTINFO_.CTOR_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_STORE_NXPTOYDELIVEROOAPENTITLEMENTINFO_TOSTRING_OFFSET))(nullptr);
		}

	};
}

