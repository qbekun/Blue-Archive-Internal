#pragma once
#include "../../unitysdk.h"

#define NPA_PROMOTION_NXPEVENTBUILDERINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CCB230)
#define NPA_PROMOTION_NXPEVENTBUILDERINFO_GETPROJECTID_OFFSET UNITYSDK_OFFSET(0x9CCB280)
#define NPA_PROMOTION_NXPEVENTBUILDERINFO_GETPLACEMENTSLUG_OFFSET UNITYSDK_OFFSET(0x9CCB290)
#define NPA_PROMOTION_NXPEVENTBUILDERINFO_GETSERVERREGION_OFFSET UNITYSDK_OFFSET(0x9CCB2A0)
#define NPA_PROMOTION_NXPEVENTBUILDERINFO_SETSERVERREGION_OFFSET UNITYSDK_OFFSET(0x9CCB2B0)
#define NPA_PROMOTION_NXPEVENTBUILDERINFO_GETOPTIONALINFO_OFFSET UNITYSDK_OFFSET(0x9CCB2C0)
#define NPA_PROMOTION_NXPEVENTBUILDERINFO_SETOPTIONALINFO_OFFSET UNITYSDK_OFFSET(0x9CCB310)
#define NPA_PROMOTION_NXPEVENTBUILDERINFO_GETBILLINGMETA_OFFSET UNITYSDK_OFFSET(0x9CCB320)
#define NPA_PROMOTION_NXPEVENTBUILDERINFO_SETBILLINGMETA_OFFSET UNITYSDK_OFFSET(0x9CCB370)
#define NPA_PROMOTION_NXPEVENTBUILDERINFO_GETBILLINGSERVICEPAYLOAD_OFFSET UNITYSDK_OFFSET(0x9CCB380)
#define NPA_PROMOTION_NXPEVENTBUILDERINFO_SETBILLINGSERVICEPAYLOAD_OFFSET UNITYSDK_OFFSET(0x9CCB3D0)
#define NPA_PROMOTION_NXPEVENTBUILDERINFO_ISPREENVIRONMENT_OFFSET UNITYSDK_OFFSET(0x9CCB3E0)
#define NPA_PROMOTION_NXPEVENTBUILDERINFO_SETISPREENVIRONMENT_OFFSET UNITYSDK_OFFSET(0x9CCB3F0)
#define NPA_PROMOTION_NXPEVENTBUILDERINFO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9CCB400)

namespace NPA::Promotion
{
	inline static constexpr unsigned int NXPEventBuilderInfo_TypeDefinitionIndex = 27361;

	class NXPEventBuilderInfo : public Il2CppObject
	{
	public:
		::System::String* projectId; // 0x10
		::System::String* placementSlug; // 0x18
		::System::String* serverRegion; // 0x20
		::System::String* optionalInfo; // 0x28
		::System::String* billingMeta; // 0x30
		::System::String* billingServicePayload; // 0x38
		::System::Boolean isPreEnvironment; // 0x40

		::System::Void .ctor(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_PROMOTION_NXPEVENTBUILDERINFO_.CTOR_OFFSET))(str, str, nullptr);
		}

		::System::String* GetProjectId()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_PROMOTION_NXPEVENTBUILDERINFO_GETPROJECTID_OFFSET))(nullptr);
		}

		::System::String* GetPlacementSlug()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_PROMOTION_NXPEVENTBUILDERINFO_GETPLACEMENTSLUG_OFFSET))(nullptr);
		}

		::System::String* GetServerRegion()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_PROMOTION_NXPEVENTBUILDERINFO_GETSERVERREGION_OFFSET))(nullptr);
		}

		::System::Void SetServerRegion(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_PROMOTION_NXPEVENTBUILDERINFO_SETSERVERREGION_OFFSET))(str, nullptr);
		}

		::System::String* GetOptionalInfo()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_PROMOTION_NXPEVENTBUILDERINFO_GETOPTIONALINFO_OFFSET))(nullptr);
		}

		::System::Void SetOptionalInfo(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_PROMOTION_NXPEVENTBUILDERINFO_SETOPTIONALINFO_OFFSET))(str, nullptr);
		}

		::System::String* GetBillingMeta()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_PROMOTION_NXPEVENTBUILDERINFO_GETBILLINGMETA_OFFSET))(nullptr);
		}

		::System::Void SetBillingMeta(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_PROMOTION_NXPEVENTBUILDERINFO_SETBILLINGMETA_OFFSET))(str, nullptr);
		}

		::System::String* GetBillingServicePayload()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_PROMOTION_NXPEVENTBUILDERINFO_GETBILLINGSERVICEPAYLOAD_OFFSET))(nullptr);
		}

		::System::Void SetBillingServicePayload(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_PROMOTION_NXPEVENTBUILDERINFO_SETBILLINGSERVICEPAYLOAD_OFFSET))(str, nullptr);
		}

		::System::Boolean IsPreEnvironment()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_PROMOTION_NXPEVENTBUILDERINFO_ISPREENVIRONMENT_OFFSET))(nullptr);
		}

		::System::Void SetIsPreEnvironment(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_PROMOTION_NXPEVENTBUILDERINFO_SETISPREENVIRONMENT_OFFSET))(arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_PROMOTION_NXPEVENTBUILDERINFO_TOSTRING_OFFSET))(nullptr);
		}

	};
}

