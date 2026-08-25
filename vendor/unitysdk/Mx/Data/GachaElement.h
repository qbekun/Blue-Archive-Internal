#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::Parcel { class ParcelKeyPair; }
namespace FlatData { class Rarity; }
namespace FlatData { class ParcelType; }
namespace MX::Data::Excel { class GachaElementExcel; }
namespace MX::Data::Excel { class GachaElementRecursiveExcel; }

#define MX_DATA_GACHAELEMENT_GET_ID_OFFSET UNITYSDK_OFFSET(0x1849450)
#define MX_DATA_GACHAELEMENT_SET_ID_OFFSET UNITYSDK_OFFSET(0x1849460)
#define MX_DATA_GACHAELEMENT_GET_GACHAGROUPID_OFFSET UNITYSDK_OFFSET(0x1849470)
#define MX_DATA_GACHAELEMENT_SET_GACHAGROUPID_OFFSET UNITYSDK_OFFSET(0x1849480)
#define MX_DATA_GACHAELEMENT_GET_ISRECURSIVE_OFFSET UNITYSDK_OFFSET(0x1849490)
#define MX_DATA_GACHAELEMENT_SET_ISRECURSIVE_OFFSET UNITYSDK_OFFSET(0x18494A0)
#define MX_DATA_GACHAELEMENT_GET_PARCELKEY_OFFSET UNITYSDK_OFFSET(0x18494B0)
#define MX_DATA_GACHAELEMENT_SET_PARCELKEY_OFFSET UNITYSDK_OFFSET(0x18494C0)
#define MX_DATA_GACHAELEMENT_GET_PARCELTYPE_OFFSET UNITYSDK_OFFSET(0x18494D0)
#define MX_DATA_GACHAELEMENT_GET_PARCELID_OFFSET UNITYSDK_OFFSET(0x1849520)
#define MX_DATA_GACHAELEMENT_GET_RARITY_OFFSET UNITYSDK_OFFSET(0x1849570)
#define MX_DATA_GACHAELEMENT_SET_RARITY_OFFSET UNITYSDK_OFFSET(0x1849580)
#define MX_DATA_GACHAELEMENT_GET_AMOUNTMIN_OFFSET UNITYSDK_OFFSET(0x1849590)
#define MX_DATA_GACHAELEMENT_SET_AMOUNTMIN_OFFSET UNITYSDK_OFFSET(0x18495A0)
#define MX_DATA_GACHAELEMENT_GET_AMOUNTMAX_OFFSET UNITYSDK_OFFSET(0x18495B0)
#define MX_DATA_GACHAELEMENT_SET_AMOUNTMAX_OFFSET UNITYSDK_OFFSET(0x18495C0)
#define MX_DATA_GACHAELEMENT_GET_PROBABILITY_OFFSET UNITYSDK_OFFSET(0x18495D0)
#define MX_DATA_GACHAELEMENT_SET_PROBABILITY_OFFSET UNITYSDK_OFFSET(0x18495E0)
#define MX_DATA_GACHAELEMENT_GET_STATE_OFFSET UNITYSDK_OFFSET(0x18495F0)
#define MX_DATA_GACHAELEMENT_SET_STATE_OFFSET UNITYSDK_OFFSET(0x1849600)
#define MX_DATA_GACHAELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1849610)
#define MX_DATA_GACHAELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1849620)
#define MX_DATA_GACHAELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x18496F0)

namespace MX::Data
{
	inline static constexpr unsigned int GachaElement_TypeDefinitionIndex = 15830;

	class GachaElement : public Il2CppObject
	{
	public:
		::System::Int64 _Id_k__BackingField; // 0x10
		::System::Int64 _GachaGroupId_k__BackingField; // 0x18
		::System::Boolean _IsRecursive_k__BackingField; // 0x20
		::MX::GameLogic::Parcel::ParcelKeyPair* _ParcelKey_k__BackingField; // 0x28
		::FlatData::Rarity* _Rarity_k__BackingField; // 0x38
		::System::Int32 _AmountMin_k__BackingField; // 0x3C
		::System::Int32 _AmountMax_k__BackingField; // 0x40
		::System::Int32 _Probability_k__BackingField; // 0x44
		::System::Int32 _State_k__BackingField; // 0x48

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GACHAELEMENT_GET_ID_OFFSET))(nullptr);
		}

		::System::Void set_Id(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GACHAELEMENT_SET_ID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_GachaGroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GACHAELEMENT_GET_GACHAGROUPID_OFFSET))(nullptr);
		}

		::System::Void set_GachaGroupId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GACHAELEMENT_SET_GACHAGROUPID_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsRecursive()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GACHAELEMENT_GET_ISRECURSIVE_OFFSET))(nullptr);
		}

		::System::Void set_IsRecursive(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GACHAELEMENT_SET_ISRECURSIVE_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::Parcel::ParcelKeyPair* get_ParcelKey()
		{
			return (return (::MX::GameLogic::Parcel::ParcelKeyPair*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GACHAELEMENT_GET_PARCELKEY_OFFSET))(nullptr);
		}

		::System::Void set_ParcelKey(::MX::GameLogic::Parcel::ParcelKeyPair* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelKeyPair*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GACHAELEMENT_SET_PARCELKEY_OFFSET))(arg, nullptr);
		}

		::FlatData::ParcelType* get_ParcelType()
		{
			return (return (::FlatData::ParcelType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GACHAELEMENT_GET_PARCELTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_ParcelId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GACHAELEMENT_GET_PARCELID_OFFSET))(nullptr);
		}

		::FlatData::Rarity* get_Rarity()
		{
			return (return (::FlatData::Rarity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GACHAELEMENT_GET_RARITY_OFFSET))(nullptr);
		}

		::System::Void set_Rarity(::FlatData::Rarity* arg)
		{
			((::System::Void(*)(::FlatData::Rarity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GACHAELEMENT_SET_RARITY_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_AmountMin()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GACHAELEMENT_GET_AMOUNTMIN_OFFSET))(nullptr);
		}

		::System::Void set_AmountMin(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GACHAELEMENT_SET_AMOUNTMIN_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_AmountMax()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GACHAELEMENT_GET_AMOUNTMAX_OFFSET))(nullptr);
		}

		::System::Void set_AmountMax(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GACHAELEMENT_SET_AMOUNTMAX_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Probability()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GACHAELEMENT_GET_PROBABILITY_OFFSET))(nullptr);
		}

		::System::Void set_Probability(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GACHAELEMENT_SET_PROBABILITY_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_State()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GACHAELEMENT_GET_STATE_OFFSET))(nullptr);
		}

		::System::Void set_State(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GACHAELEMENT_SET_STATE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GACHAELEMENT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::GachaElementExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::GachaElementExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GACHAELEMENT_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::GachaElementRecursiveExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::GachaElementRecursiveExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GACHAELEMENT_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

