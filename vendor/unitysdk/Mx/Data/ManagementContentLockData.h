#pragma once
#include "../../unitysdk.h"

namespace FlatData { class ContentLockType; }

#define MX_DATA_MANAGEMENTCONTENTLOCKDATA_SET_ENDDATE_OFFSET UNITYSDK_OFFSET(0x1853FC0)
#define MX_DATA_MANAGEMENTCONTENTLOCKDATA_SET_CONTENTLOCKTYPE_OFFSET UNITYSDK_OFFSET(0x1853FD0)
#define MX_DATA_MANAGEMENTCONTENTLOCKDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1853FE0)
#define MX_DATA_MANAGEMENTCONTENTLOCKDATA_GET_CREATEDATE_OFFSET UNITYSDK_OFFSET(0x1853FF0)
#define MX_DATA_MANAGEMENTCONTENTLOCKDATA_GET_ENDDATE_OFFSET UNITYSDK_OFFSET(0x1854000)
#define MX_DATA_MANAGEMENTCONTENTLOCKDATA_SET_STARTDATE_OFFSET UNITYSDK_OFFSET(0x1854010)
#define MX_DATA_MANAGEMENTCONTENTLOCKDATA_GET_CONTENTLOCKTYPE_OFFSET UNITYSDK_OFFSET(0x1854020)
#define MX_DATA_MANAGEMENTCONTENTLOCKDATA_SET_CREATEDATE_OFFSET UNITYSDK_OFFSET(0x1854030)
#define MX_DATA_MANAGEMENTCONTENTLOCKDATA_GET_STARTDATE_OFFSET UNITYSDK_OFFSET(0x1854040)

namespace MX::Data
{
	inline static constexpr unsigned int ManagementContentLockData_TypeDefinitionIndex = 15858;

	class ManagementContentLockData : public Il2CppObject
	{
	public:
		::FlatData::ContentLockType* _ContentLockType_k__BackingField; // 0x10
		::System::DateTime* _StartDate_k__BackingField; // 0x18
		::System::DateTime* _EndDate_k__BackingField; // 0x20
		::System::DateTime* _CreateDate_k__BackingField; // 0x28

		::System::Void set_EndDate(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MANAGEMENTCONTENTLOCKDATA_SET_ENDDATE_OFFSET))(arg, nullptr);
		}

		::System::Void set_ContentLockType(::FlatData::ContentLockType* arg)
		{
			((::System::Void(*)(::FlatData::ContentLockType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MANAGEMENTCONTENTLOCKDATA_SET_CONTENTLOCKTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MANAGEMENTCONTENTLOCKDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::DateTime* get_CreateDate()
		{
			return (return (::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MANAGEMENTCONTENTLOCKDATA_GET_CREATEDATE_OFFSET))(nullptr);
		}

		::System::DateTime* get_EndDate()
		{
			return (return (::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MANAGEMENTCONTENTLOCKDATA_GET_ENDDATE_OFFSET))(nullptr);
		}

		::System::Void set_StartDate(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MANAGEMENTCONTENTLOCKDATA_SET_STARTDATE_OFFSET))(arg, nullptr);
		}

		::FlatData::ContentLockType* get_ContentLockType()
		{
			return (return (::FlatData::ContentLockType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MANAGEMENTCONTENTLOCKDATA_GET_CONTENTLOCKTYPE_OFFSET))(nullptr);
		}

		::System::Void set_CreateDate(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MANAGEMENTCONTENTLOCKDATA_SET_CREATEDATE_OFFSET))(arg, nullptr);
		}

		::System::DateTime* get_StartDate()
		{
			return (return (::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MANAGEMENTCONTENTLOCKDATA_GET_STARTDATE_OFFSET))(nullptr);
		}

	};
}

