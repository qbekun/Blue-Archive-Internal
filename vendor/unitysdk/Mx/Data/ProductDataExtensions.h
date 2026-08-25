#pragma once
#include "../../unitysdk.h"

namespace MX::Data::Excel { class ProductExcel; }
namespace MX::Data::Excel { class ProductSelectExcel; }
namespace MX::GameLogic::Parcel { class ParcelInfo; }
namespace MX::Data::Excel { class ProductSelectionGroupExcel; }
namespace MX::Data::Excel { class ProductAutoSelectionGroupExcel; }

#define MX_DATA_PRODUCTDATAEXTENSIONS_GETPARCELS_OFFSET UNITYSDK_OFFSET(0x197C470)
#define MX_DATA_PRODUCTDATAEXTENSIONS_GETPARCELS_OFFSET UNITYSDK_OFFSET(0x197C620)
#define MX_DATA_PRODUCTDATAEXTENSIONS_GETPARCELS_OFFSET UNITYSDK_OFFSET(0x197C7D0)
#define MX_DATA_PRODUCTDATAEXTENSIONS_GETPARCELS_OFFSET UNITYSDK_OFFSET(0x197C860)

namespace MX::Data
{
	inline static constexpr unsigned int ProductDataExtensions_TypeDefinitionIndex = 16508;

	class ProductDataExtensions : public Il2CppObject
	{
	public:
		Il2CppObject* GetParcels(::MX::Data::Excel::ProductExcel* arg)
		{
			return (return (Il2CppObject*(*)(::MX::Data::Excel::ProductExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_PRODUCTDATAEXTENSIONS_GETPARCELS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetParcels(::MX::Data::Excel::ProductSelectExcel* arg)
		{
			return (return (Il2CppObject*(*)(::MX::Data::Excel::ProductSelectExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_PRODUCTDATAEXTENSIONS_GETPARCELS_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::Parcel::ParcelInfo* GetParcels(::MX::Data::Excel::ProductSelectionGroupExcel* arg)
		{
			return (return (::MX::GameLogic::Parcel::ParcelInfo*(*)(::MX::Data::Excel::ProductSelectionGroupExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_PRODUCTDATAEXTENSIONS_GETPARCELS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetParcels(::MX::Data::Excel::ProductAutoSelectionGroupExcel* arg)
		{
			return (return (Il2CppObject*(*)(::MX::Data::Excel::ProductAutoSelectionGroupExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_PRODUCTDATAEXTENSIONS_GETPARCELS_OFFSET))(arg, nullptr);
		}

	};
}

