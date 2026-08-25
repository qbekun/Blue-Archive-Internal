#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::Parcel { class ParcelKeyPair; }
namespace MX::Data::Excel { class CafeProductionExcel; }

#define MX_DATA_CAFEPRODUCTIONEXCELINFO_GET_PRODUCTIONCOEFFICIENT_OFFSET UNITYSDK_OFFSET(0x18321C0)
#define MX_DATA_CAFEPRODUCTIONEXCELINFO_GET_PRODUCTIONCORRECTIONVALUE_OFFSET UNITYSDK_OFFSET(0x18321D0)
#define MX_DATA_CAFEPRODUCTIONEXCELINFO_GET_PARCELSTORAGEMAX_OFFSET UNITYSDK_OFFSET(0x18321E0)
#define MX_DATA_CAFEPRODUCTIONEXCELINFO_GET_KEY_OFFSET UNITYSDK_OFFSET(0x18321F0)
#define MX_DATA_CAFEPRODUCTIONEXCELINFO_SET_PRODUCTIONCORRECTIONVALUE_OFFSET UNITYSDK_OFFSET(0x1832200)
#define MX_DATA_CAFEPRODUCTIONEXCELINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1832210)
#define MX_DATA_CAFEPRODUCTIONEXCELINFO_SET_PARCELSTORAGEMAX_OFFSET UNITYSDK_OFFSET(0x1832290)
#define MX_DATA_CAFEPRODUCTIONEXCELINFO_SET_KEY_OFFSET UNITYSDK_OFFSET(0x18322A0)
#define MX_DATA_CAFEPRODUCTIONEXCELINFO_SET_PRODUCTIONCOEFFICIENT_OFFSET UNITYSDK_OFFSET(0x18322B0)

namespace MX::Data
{
	inline static constexpr unsigned int CafeProductionExcelInfo_TypeDefinitionIndex = 15730;

	class CafeProductionExcelInfo : public Il2CppObject
	{
	public:
		::MX::GameLogic::Parcel::ParcelKeyPair* _Key_k__BackingField; // 0x10
		::System::Int64 _ProductionCoefficient_k__BackingField; // 0x20
		::System::Int64 _ProductionCorrectionValue_k__BackingField; // 0x28
		::System::Int64 _ParcelStorageMax_k__BackingField; // 0x30

		::System::Int64 get_ProductionCoefficient()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAFEPRODUCTIONEXCELINFO_GET_PRODUCTIONCOEFFICIENT_OFFSET))(nullptr);
		}

		::System::Int64 get_ProductionCorrectionValue()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAFEPRODUCTIONEXCELINFO_GET_PRODUCTIONCORRECTIONVALUE_OFFSET))(nullptr);
		}

		::System::Int64 get_ParcelStorageMax()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAFEPRODUCTIONEXCELINFO_GET_PARCELSTORAGEMAX_OFFSET))(nullptr);
		}

		::MX::GameLogic::Parcel::ParcelKeyPair* get_Key()
		{
			return (return (::MX::GameLogic::Parcel::ParcelKeyPair*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAFEPRODUCTIONEXCELINFO_GET_KEY_OFFSET))(nullptr);
		}

		::System::Void set_ProductionCorrectionValue(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAFEPRODUCTIONEXCELINFO_SET_PRODUCTIONCORRECTIONVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::CafeProductionExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::CafeProductionExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAFEPRODUCTIONEXCELINFO_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void set_ParcelStorageMax(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAFEPRODUCTIONEXCELINFO_SET_PARCELSTORAGEMAX_OFFSET))(arg, nullptr);
		}

		::System::Void set_Key(::MX::GameLogic::Parcel::ParcelKeyPair* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelKeyPair*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAFEPRODUCTIONEXCELINFO_SET_KEY_OFFSET))(arg, nullptr);
		}

		::System::Void set_ProductionCoefficient(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAFEPRODUCTIONEXCELINFO_SET_PRODUCTIONCOEFFICIENT_OFFSET))(arg, nullptr);
		}

	};
}

