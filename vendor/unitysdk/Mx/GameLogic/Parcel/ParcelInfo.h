#pragma once
#include "../../../unitysdk.h"

namespace MX::GameLogic::Parcel { class ParcelKeyPair; }
namespace MX::Core::Math { class BasisPoint; }
namespace MX::GameLogic::Parcel { class ParcelInfo; }
namespace FlatData { class ParcelType; }
namespace FlatData { class CurrencyTypes; }

#define MX_GAMELOGIC_PARCEL_PARCELINFO_GET_KEY_OFFSET UNITYSDK_OFFSET(0xFDB110)
#define MX_GAMELOGIC_PARCEL_PARCELINFO_SET_KEY_OFFSET UNITYSDK_OFFSET(0xFDB120)
#define MX_GAMELOGIC_PARCEL_PARCELINFO_GET_AMOUNT_OFFSET UNITYSDK_OFFSET(0xFDB130)
#define MX_GAMELOGIC_PARCEL_PARCELINFO_SET_AMOUNT_OFFSET UNITYSDK_OFFSET(0xFDB140)
#define MX_GAMELOGIC_PARCEL_PARCELINFO_GET_MULTIPLIER_OFFSET UNITYSDK_OFFSET(0xFDB150)
#define MX_GAMELOGIC_PARCEL_PARCELINFO_SET_MULTIPLIER_OFFSET UNITYSDK_OFFSET(0xFDB160)
#define MX_GAMELOGIC_PARCEL_PARCELINFO_GET_MULTIPLIEDAMOUNT_OFFSET UNITYSDK_OFFSET(0xFD8B30)
#define MX_GAMELOGIC_PARCEL_PARCELINFO_GET_PROBABILITY_OFFSET UNITYSDK_OFFSET(0xFDB170)
#define MX_GAMELOGIC_PARCEL_PARCELINFO_SET_PROBABILITY_OFFSET UNITYSDK_OFFSET(0xFDB180)
#define MX_GAMELOGIC_PARCEL_PARCELINFO_SETPARCELKEYPAIR_OFFSET UNITYSDK_OFFSET(0xFDB190)
#define MX_GAMELOGIC_PARCEL_PARCELINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0xFDB1A0)
#define MX_GAMELOGIC_PARCEL_PARCELINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0xFDB220)
#define MX_GAMELOGIC_PARCEL_PARCELINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0xFDB2B0)
#define MX_GAMELOGIC_PARCEL_PARCELINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0xFDB4F0)
#define MX_GAMELOGIC_PARCEL_PARCELINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0xFC6DC0)
#define MX_GAMELOGIC_PARCEL_PARCELINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0xFCD790)
#define MX_GAMELOGIC_PARCEL_PARCELINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0xFDB580)
#define MX_GAMELOGIC_PARCEL_PARCELINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0xFDB400)
#define MX_GAMELOGIC_PARCEL_PARCELINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0xFDB6D0)
#define MX_GAMELOGIC_PARCEL_PARCELINFO_TOSTRING_OFFSET UNITYSDK_OFFSET(0xFDB7C0)
#define MX_GAMELOGIC_PARCEL_PARCELINFO_EQUALS_OFFSET UNITYSDK_OFFSET(0xFDB920)
#define MX_GAMELOGIC_PARCEL_PARCELINFO_EQUALS_OFFSET UNITYSDK_OFFSET(0xFDBAE0)
#define MX_GAMELOGIC_PARCEL_PARCELINFO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xFDBB60)
#define MX_GAMELOGIC_PARCEL_PARCELINFO_CLONE_OFFSET UNITYSDK_OFFSET(0xFDBD40)

namespace MX::GameLogic::Parcel
{
	inline static constexpr unsigned int ParcelInfo_TypeDefinitionIndex = 12435;

	class ParcelInfo : public Il2CppObject
	{
	public:
		::MX::GameLogic::Parcel::ParcelKeyPair* _Key_k__BackingField; // 0x10
		::System::Int64 _Amount_k__BackingField; // 0x20
		::MX::Core::Math::BasisPoint* _Multiplier_k__BackingField; // 0x28
		::MX::Core::Math::BasisPoint* _Probability_k__BackingField; // 0x30

		::MX::GameLogic::Parcel::ParcelKeyPair* get_Key()
		{
			return ((::MX::GameLogic::Parcel::ParcelKeyPair*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_PARCELINFO_GET_KEY_OFFSET))(nullptr);
		}

		::System::Void set_Key(::MX::GameLogic::Parcel::ParcelKeyPair* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelKeyPair*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_PARCELINFO_SET_KEY_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_Amount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_PARCELINFO_GET_AMOUNT_OFFSET))(nullptr);
		}

		::System::Void set_Amount(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_PARCELINFO_SET_AMOUNT_OFFSET))(arg, nullptr);
		}

		::MX::Core::Math::BasisPoint* get_Multiplier()
		{
			return ((::MX::Core::Math::BasisPoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_PARCELINFO_GET_MULTIPLIER_OFFSET))(nullptr);
		}

		::System::Void set_Multiplier(::MX::Core::Math::BasisPoint* arg)
		{
			((::System::Void(*)(::MX::Core::Math::BasisPoint*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_PARCELINFO_SET_MULTIPLIER_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_MultipliedAmount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_PARCELINFO_GET_MULTIPLIEDAMOUNT_OFFSET))(nullptr);
		}

		::MX::Core::Math::BasisPoint* get_Probability()
		{
			return ((::MX::Core::Math::BasisPoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_PARCELINFO_GET_PROBABILITY_OFFSET))(nullptr);
		}

		::System::Void set_Probability(::MX::Core::Math::BasisPoint* arg)
		{
			((::System::Void(*)(::MX::Core::Math::BasisPoint*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_PARCELINFO_SET_PROBABILITY_OFFSET))(arg, nullptr);
		}

		::System::Void SetParcelKeyPair(::MX::GameLogic::Parcel::ParcelKeyPair* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelKeyPair*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_PARCELINFO_SETPARCELKEYPAIR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::GameLogic::Parcel::ParcelKeyPair* arg, ::System::Int64 arg2, ::MX::Core::Math::BasisPoint* arg3)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelKeyPair*, ::System::Int64, ::MX::Core::Math::BasisPoint*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_PARCELINFO_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void .ctor(::MX::GameLogic::Parcel::ParcelKeyPair* arg, ::System::Int64 arg2, ::System::Int64 arg3)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelKeyPair*, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_PARCELINFO_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_PARCELINFO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::GameLogic::Parcel::ParcelInfo* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_PARCELINFO_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::GameLogic::Parcel::ParcelKeyPair* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelKeyPair*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_PARCELINFO_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor(::FlatData::ParcelType* arg, ::System::Int64 arg2, ::System::Int64 arg3)
		{
			((::System::Void(*)(::FlatData::ParcelType*, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_PARCELINFO_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void .ctor(::FlatData::CurrencyTypes* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatData::CurrencyTypes*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_PARCELINFO_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor(::FlatData::ParcelType* arg, ::System::Int64 arg2, ::System::Int64 arg3, ::MX::Core::Math::BasisPoint* arg4)
		{
			((::System::Void(*)(::FlatData::ParcelType*, ::System::Int64, ::System::Int64, ::MX::Core::Math::BasisPoint*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_PARCELINFO_.CTOR_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void .ctor(::FlatData::ParcelType* arg, ::System::Int64 arg2, ::System::Int64 arg3, ::System::Int64 arg4)
		{
			((::System::Void(*)(::FlatData::ParcelType*, ::System::Int64, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_PARCELINFO_.CTOR_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_PARCELINFO_TOSTRING_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::MX::GameLogic::Parcel::ParcelInfo* arg)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::Parcel::ParcelInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_PARCELINFO_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return ((::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_PARCELINFO_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_PARCELINFO_GETHASHCODE_OFFSET))(nullptr);
		}

		::MX::GameLogic::Parcel::ParcelInfo* Clone()
		{
			return ((::MX::GameLogic::Parcel::ParcelInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_PARCELINFO_CLONE_OFFSET))(nullptr);
		}

	};
}

