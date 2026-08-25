#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::Parcel { class ParcelInfo; }
namespace MX::Data::Excel { class PossessionCheckExcel; }

#define MX_DATA_POSSESSIONCHECKINFO_GET__EXCEL_OFFSET UNITYSDK_OFFSET(0x191E5E0)
#define MX_DATA_POSSESSIONCHECKINFO_GET_DEFAULTPARCEL_OFFSET UNITYSDK_OFFSET(0x191E5F0)
#define MX_DATA_POSSESSIONCHECKINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x191E490)
#define MX_DATA_POSSESSIONCHECKINFO_GET_REPLACEPARCEL_OFFSET UNITYSDK_OFFSET(0x191E600)
#define MX_DATA_POSSESSIONCHECKINFO_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x191E610)
#define MX_DATA_POSSESSIONCHECKINFO_SET_DEFAULTPARCEL_OFFSET UNITYSDK_OFFSET(0x191E630)
#define MX_DATA_POSSESSIONCHECKINFO_SET_REPLACEPARCEL_OFFSET UNITYSDK_OFFSET(0x191E640)

namespace MX::Data
{
	inline static constexpr unsigned int PossessionCheckInfo_TypeDefinitionIndex = 16288;

	class PossessionCheckInfo : public Il2CppObject
	{
	public:
		::MX::GameLogic::Parcel::ParcelInfo* _DefaultParcel_k__BackingField; // 0x10
		::MX::GameLogic::Parcel::ParcelInfo* _ReplaceParcel_k__BackingField; // 0x18
		::MX::Data::Excel::PossessionCheckExcel* __excel_k__BackingField; // 0x20

		::MX::Data::Excel::PossessionCheckExcel* get__excel()
		{
			return (return (::MX::Data::Excel::PossessionCheckExcel*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_POSSESSIONCHECKINFO_GET__EXCEL_OFFSET))(nullptr);
		}

		::MX::GameLogic::Parcel::ParcelInfo* get_DefaultParcel()
		{
			return (return (::MX::GameLogic::Parcel::ParcelInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_POSSESSIONCHECKINFO_GET_DEFAULTPARCEL_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::PossessionCheckExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::PossessionCheckExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_POSSESSIONCHECKINFO_.CTOR_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::Parcel::ParcelInfo* get_ReplaceParcel()
		{
			return (return (::MX::GameLogic::Parcel::ParcelInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_POSSESSIONCHECKINFO_GET_REPLACEPARCEL_OFFSET))(nullptr);
		}

		::System::Int64 get_UniqueId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_POSSESSIONCHECKINFO_GET_UNIQUEID_OFFSET))(nullptr);
		}

		::System::Void set_DefaultParcel(::MX::GameLogic::Parcel::ParcelInfo* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_POSSESSIONCHECKINFO_SET_DEFAULTPARCEL_OFFSET))(arg, nullptr);
		}

		::System::Void set_ReplaceParcel(::MX::GameLogic::Parcel::ParcelInfo* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_POSSESSIONCHECKINFO_SET_REPLACEPARCEL_OFFSET))(arg, nullptr);
		}

	};
}

