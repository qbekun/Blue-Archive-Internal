#pragma once
#include "../../unitysdk.h"

namespace MX::Data::Excel { class ShopFreeRecruitPeriodExcel; }

#define MX_DATA_SHOPFREERECRUITPERIODEXCELDATA_GET_SHOPFREERECRUITID_OFFSET UNITYSDK_OFFSET(0x185CD10)
#define MX_DATA_SHOPFREERECRUITPERIODEXCELDATA_SET_SHOPFREERECRUITID_OFFSET UNITYSDK_OFFSET(0x185CD20)
#define MX_DATA_SHOPFREERECRUITPERIODEXCELDATA_GET_SHOPFREERECRUITINTERVALID_OFFSET UNITYSDK_OFFSET(0x185CD30)
#define MX_DATA_SHOPFREERECRUITPERIODEXCELDATA_SET_SHOPFREERECRUITINTERVALID_OFFSET UNITYSDK_OFFSET(0x185CD40)
#define MX_DATA_SHOPFREERECRUITPERIODEXCELDATA_GET_INTERVALDATE_OFFSET UNITYSDK_OFFSET(0x185CD50)
#define MX_DATA_SHOPFREERECRUITPERIODEXCELDATA_SET_INTERVALDATE_OFFSET UNITYSDK_OFFSET(0x185CD60)
#define MX_DATA_SHOPFREERECRUITPERIODEXCELDATA_GET_FREERECRUITCOUNT_OFFSET UNITYSDK_OFFSET(0x185CD70)
#define MX_DATA_SHOPFREERECRUITPERIODEXCELDATA_SET_FREERECRUITCOUNT_OFFSET UNITYSDK_OFFSET(0x185CD80)
#define MX_DATA_SHOPFREERECRUITPERIODEXCELDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x185CD90)
#define MX_DATA_SHOPFREERECRUITPERIODEXCELDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x185CDA0)

namespace MX::Data
{
	inline static constexpr unsigned int ShopFreeRecruitPeriodExcelData_TypeDefinitionIndex = 15892;

	class ShopFreeRecruitPeriodExcelData : public Il2CppObject
	{
	public:
		::System::Int64 _ShopFreeRecruitId_k__BackingField; // 0x10
		::System::Int64 _ShopFreeRecruitIntervalId_k__BackingField; // 0x18
		::System::DateTime* _IntervalDate_k__BackingField; // 0x20
		::System::Int32 _FreeRecruitCount_k__BackingField; // 0x28

		::System::Int64 get_ShopFreeRecruitId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPFREERECRUITPERIODEXCELDATA_GET_SHOPFREERECRUITID_OFFSET))(nullptr);
		}

		::System::Void set_ShopFreeRecruitId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPFREERECRUITPERIODEXCELDATA_SET_SHOPFREERECRUITID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_ShopFreeRecruitIntervalId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPFREERECRUITPERIODEXCELDATA_GET_SHOPFREERECRUITINTERVALID_OFFSET))(nullptr);
		}

		::System::Void set_ShopFreeRecruitIntervalId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPFREERECRUITPERIODEXCELDATA_SET_SHOPFREERECRUITINTERVALID_OFFSET))(arg, nullptr);
		}

		::System::DateTime* get_IntervalDate()
		{
			return (return (::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPFREERECRUITPERIODEXCELDATA_GET_INTERVALDATE_OFFSET))(nullptr);
		}

		::System::Void set_IntervalDate(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPFREERECRUITPERIODEXCELDATA_SET_INTERVALDATE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_FreeRecruitCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPFREERECRUITPERIODEXCELDATA_GET_FREERECRUITCOUNT_OFFSET))(nullptr);
		}

		::System::Void set_FreeRecruitCount(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPFREERECRUITPERIODEXCELDATA_SET_FREERECRUITCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPFREERECRUITPERIODEXCELDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::ShopFreeRecruitPeriodExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::ShopFreeRecruitPeriodExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SHOPFREERECRUITPERIODEXCELDATA_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

