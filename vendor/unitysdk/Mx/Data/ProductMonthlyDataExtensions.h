#pragma once
#include "../../unitysdk.h"

namespace MX::Data::Excel { class ProductMonthlyExcel; }

#define MX_DATA_PRODUCTMONTHLYDATAEXTENSIONS_GETPARCELS_OFFSET UNITYSDK_OFFSET(0x197CA10)
#define MX_DATA_PRODUCTMONTHLYDATAEXTENSIONS_GETDAILYPARCELS_OFFSET UNITYSDK_OFFSET(0x197CBC0)

namespace MX::Data
{
	inline static constexpr unsigned int ProductMonthlyDataExtensions_TypeDefinitionIndex = 16509;

	class ProductMonthlyDataExtensions : public Il2CppObject
	{
	public:
		Il2CppObject* GetParcels(::MX::Data::Excel::ProductMonthlyExcel* arg)
		{
			return (return (Il2CppObject*(*)(::MX::Data::Excel::ProductMonthlyExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_PRODUCTMONTHLYDATAEXTENSIONS_GETPARCELS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetDailyParcels(::MX::Data::Excel::ProductMonthlyExcel* arg)
		{
			return (return (Il2CppObject*(*)(::MX::Data::Excel::ProductMonthlyExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_PRODUCTMONTHLYDATAEXTENSIONS_GETDAILYPARCELS_OFFSET))(arg, nullptr);
		}

	};
}

