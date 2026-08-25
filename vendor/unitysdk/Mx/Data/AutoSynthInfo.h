#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::Parcel { class ParcelInfo; }
namespace MX::Data::Excel { class ParcelAutoSynthExcel; }

#define MX_DATA_AUTOSYNTHINFO_SET_SYNTHMAXITEM_OFFSET UNITYSDK_OFFSET(0x1811180)
#define MX_DATA_AUTOSYNTHINFO_SET_SYNTHSTARTAMOUNT_OFFSET UNITYSDK_OFFSET(0x1811190)
#define MX_DATA_AUTOSYNTHINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x18111A0)
#define MX_DATA_AUTOSYNTHINFO_SET_REQUIREPARCEL_OFFSET UNITYSDK_OFFSET(0x18112F0)
#define MX_DATA_AUTOSYNTHINFO_GET_REQUIREPARCEL_OFFSET UNITYSDK_OFFSET(0x1811300)
#define MX_DATA_AUTOSYNTHINFO_GET_SYNTHMAXITEM_OFFSET UNITYSDK_OFFSET(0x1811310)
#define MX_DATA_AUTOSYNTHINFO_SET_RESULTPARCEL_OFFSET UNITYSDK_OFFSET(0x1811320)
#define MX_DATA_AUTOSYNTHINFO_GET_SYNTHSTARTAMOUNT_OFFSET UNITYSDK_OFFSET(0x1811330)
#define MX_DATA_AUTOSYNTHINFO_GET_SYNTHLAST_OFFSET UNITYSDK_OFFSET(0x1811340)
#define MX_DATA_AUTOSYNTHINFO_GET_RESULTPARCEL_OFFSET UNITYSDK_OFFSET(0x1811350)
#define MX_DATA_AUTOSYNTHINFO_GET_SYNTHENDAMOUNT_OFFSET UNITYSDK_OFFSET(0x1811360)
#define MX_DATA_AUTOSYNTHINFO_SET_SYNTHENDAMOUNT_OFFSET UNITYSDK_OFFSET(0x1811370)
#define MX_DATA_AUTOSYNTHINFO_SET_SYNTHLAST_OFFSET UNITYSDK_OFFSET(0x1811380)

namespace MX::Data
{
	inline static constexpr unsigned int AutoSynthInfo_TypeDefinitionIndex = 15716;

	class AutoSynthInfo : public Il2CppObject
	{
	public:
		::MX::GameLogic::Parcel::ParcelInfo* _RequireParcel_k__BackingField; // 0x10
		::MX::GameLogic::Parcel::ParcelInfo* _ResultParcel_k__BackingField; // 0x18
		::System::Int64 _SynthStartAmount_k__BackingField; // 0x20
		::System::Int64 _SynthEndAmount_k__BackingField; // 0x28
		::System::Boolean _SynthLast_k__BackingField; // 0x30
		::System::Boolean _SynthMaxItem_k__BackingField; // 0x31

		::System::Void set_SynthMaxItem(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_AUTOSYNTHINFO_SET_SYNTHMAXITEM_OFFSET))(arg, nullptr);
		}

		::System::Void set_SynthStartAmount(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_AUTOSYNTHINFO_SET_SYNTHSTARTAMOUNT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::ParcelAutoSynthExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::ParcelAutoSynthExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_AUTOSYNTHINFO_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void set_RequireParcel(::MX::GameLogic::Parcel::ParcelInfo* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_AUTOSYNTHINFO_SET_REQUIREPARCEL_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::Parcel::ParcelInfo* get_RequireParcel()
		{
			return (return (::MX::GameLogic::Parcel::ParcelInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_AUTOSYNTHINFO_GET_REQUIREPARCEL_OFFSET))(nullptr);
		}

		::System::Boolean get_SynthMaxItem()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_AUTOSYNTHINFO_GET_SYNTHMAXITEM_OFFSET))(nullptr);
		}

		::System::Void set_ResultParcel(::MX::GameLogic::Parcel::ParcelInfo* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_AUTOSYNTHINFO_SET_RESULTPARCEL_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_SynthStartAmount()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_AUTOSYNTHINFO_GET_SYNTHSTARTAMOUNT_OFFSET))(nullptr);
		}

		::System::Boolean get_SynthLast()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_AUTOSYNTHINFO_GET_SYNTHLAST_OFFSET))(nullptr);
		}

		::MX::GameLogic::Parcel::ParcelInfo* get_ResultParcel()
		{
			return (return (::MX::GameLogic::Parcel::ParcelInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_AUTOSYNTHINFO_GET_RESULTPARCEL_OFFSET))(nullptr);
		}

		::System::Int64 get_SynthEndAmount()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_AUTOSYNTHINFO_GET_SYNTHENDAMOUNT_OFFSET))(nullptr);
		}

		::System::Void set_SynthEndAmount(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_AUTOSYNTHINFO_SET_SYNTHENDAMOUNT_OFFSET))(arg, nullptr);
		}

		::System::Void set_SynthLast(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_AUTOSYNTHINFO_SET_SYNTHLAST_OFFSET))(arg, nullptr);
		}

	};
}

