#pragma once
#include "../../unitysdk.h"

namespace MX::Data::Excel { class ProductDailyRecordExcel; }
namespace MX::Data::Excel { class ProductDailyRecordInfoExcel; }

#define MX_DATA_PRODUCTDAILYRECORDEXTENSIONS_GETPARCELS_OFFSET UNITYSDK_OFFSET(0x197C1E0)
#define MX_DATA_PRODUCTDAILYRECORDEXTENSIONS_GETEXPIREDATE_OFFSET UNITYSDK_OFFSET(0x197C390)

namespace MX::Data
{
	inline static constexpr unsigned int ProductDailyRecordExtensions_TypeDefinitionIndex = 16507;

	class ProductDailyRecordExtensions : public Il2CppObject
	{
	public:
		Il2CppObject* GetParcels(::MX::Data::Excel::ProductDailyRecordExcel* arg)
		{
			return (return (Il2CppObject*(*)(::MX::Data::Excel::ProductDailyRecordExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_PRODUCTDAILYRECORDEXTENSIONS_GETPARCELS_OFFSET))(arg, nullptr);
		}

		::System::DateTime* GetExpireDate(::MX::Data::Excel::ProductDailyRecordInfoExcel* arg)
		{
			return (return (::System::DateTime*(*)(::MX::Data::Excel::ProductDailyRecordInfoExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_PRODUCTDAILYRECORDEXTENSIONS_GETEXPIREDATE_OFFSET))(arg, nullptr);
		}

	};
}

