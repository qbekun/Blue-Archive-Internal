#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_PRODUCTDAILYRECORDREWARDDBSCHEMA_SET_ID_OFFSET UNITYSDK_OFFSET(0x1C38860)
#define MX_DATA_EXCEL_PRODUCTDAILYRECORDREWARDDBSCHEMA_GET_DAY_OFFSET UNITYSDK_OFFSET(0x1C38870)
#define MX_DATA_EXCEL_PRODUCTDAILYRECORDREWARDDBSCHEMA_GET_ID_OFFSET UNITYSDK_OFFSET(0x1C38880)
#define MX_DATA_EXCEL_PRODUCTDAILYRECORDREWARDDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1C38890)
#define MX_DATA_EXCEL_PRODUCTDAILYRECORDREWARDDBSCHEMA_SET_DAY_OFFSET UNITYSDK_OFFSET(0x1C388A0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ProductDailyRecordRewardDBSchema_TypeDefinitionIndex = 19114;

	class ProductDailyRecordRewardDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _Id_k__BackingField; // 0x20
		::System::Int32 _Day_k__BackingField; // 0x28

		::System::Void set_Id(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTDAILYRECORDREWARDDBSCHEMA_SET_ID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Day()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTDAILYRECORDREWARDDBSCHEMA_GET_DAY_OFFSET))(nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTDAILYRECORDREWARDDBSCHEMA_GET_ID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTDAILYRECORDREWARDDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_Day(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_PRODUCTDAILYRECORDREWARDDBSCHEMA_SET_DAY_OFFSET))(arg, nullptr);
		}

	};
}

