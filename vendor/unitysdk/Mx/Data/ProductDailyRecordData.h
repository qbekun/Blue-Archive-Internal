#pragma once
#include "../../unitysdk.h"

namespace MX::Data { class ProductDailyRecordRewardExcelInfo; }

#define MX_DATA_PRODUCTDAILYRECORDDATA_INITIALIZECOMMON_OFFSET UNITYSDK_OFFSET(0x1921F40)
#define MX_DATA_PRODUCTDAILYRECORDDATA_GETPRODUCTDAILYRECORDINFOEXCEL_OFFSET UNITYSDK_OFFSET(0x1921FC0)
#define MX_DATA_PRODUCTDAILYRECORDDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1922120)
#define MX_DATA_PRODUCTDAILYRECORDDATA_GETLIST_OFFSET UNITYSDK_OFFSET(0x1922130)
#define MX_DATA_PRODUCTDAILYRECORDDATA_GETPRODUCTDAILYRECORDREWARDEXCELINFO_OFFSET UNITYSDK_OFFSET(0x19221C0)
#define MX_DATA_PRODUCTDAILYRECORDDATA_GETPRODUCTDAILYRECORD_OFFSET UNITYSDK_OFFSET(0x1922260)
#define MX_DATA_PRODUCTDAILYRECORDDATA_VALIDATE_OFFSET UNITYSDK_OFFSET(0x1922320)

namespace MX::Data
{
	inline static constexpr unsigned int ProductDailyRecordData_TypeDefinitionIndex = 16298;

	class ProductDailyRecordData : public Il2CppObject
	{
	public:
		::System::Void InitializeCommon()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_PRODUCTDAILYRECORDDATA_INITIALIZECOMMON_OFFSET))(nullptr);
		}

		Il2CppObject* GetProductDailyRecordInfoExcel(::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_PRODUCTDAILYRECORDDATA_GETPRODUCTDAILYRECORDINFOEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_PRODUCTDAILYRECORDDATA_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* GetList()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_PRODUCTDAILYRECORDDATA_GETLIST_OFFSET))(nullptr);
		}

		::MX::Data::ProductDailyRecordRewardExcelInfo* GetProductDailyRecordRewardExcelInfo(::System::Int64 arg)
		{
			return (return (::MX::Data::ProductDailyRecordRewardExcelInfo*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_PRODUCTDAILYRECORDDATA_GETPRODUCTDAILYRECORDREWARDEXCELINFO_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetProductDailyRecord(::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_PRODUCTDAILYRECORDDATA_GETPRODUCTDAILYRECORD_OFFSET))(arg, nullptr);
		}

		::System::Void Validate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_PRODUCTDAILYRECORDDATA_VALIDATE_OFFSET))(nullptr);
		}

	};
}

