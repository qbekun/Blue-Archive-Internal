#pragma once
#include "../../../unitysdk.h"

namespace MX::GameLogic::Parcel { class ParcelKeyPair; }
namespace FlatData { class ParcelType; }

#define MX_GAMELOGIC_PARCEL_PARCELKEYPAIR_.CTOR_OFFSET UNITYSDK_OFFSET(0xFDB530)
#define MX_GAMELOGIC_PARCEL_PARCELKEYPAIR_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xFDC4E0)
#define MX_GAMELOGIC_PARCEL_PARCELKEYPAIR_SET_TYPE_OFFSET UNITYSDK_OFFSET(0xFDC4F0)
#define MX_GAMELOGIC_PARCEL_PARCELKEYPAIR_GET_ID_OFFSET UNITYSDK_OFFSET(0xFDC500)
#define MX_GAMELOGIC_PARCEL_PARCELKEYPAIR_SET_ID_OFFSET UNITYSDK_OFFSET(0xFDC510)
#define MX_GAMELOGIC_PARCEL_PARCELKEYPAIR_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xFC3840)
#define MX_GAMELOGIC_PARCEL_PARCELKEYPAIR_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0xFDC520)
#define MX_GAMELOGIC_PARCEL_PARCELKEYPAIR_EQUALS_OFFSET UNITYSDK_OFFSET(0xFDC5E0)
#define MX_GAMELOGIC_PARCEL_PARCELKEYPAIR_EQUALS_OFFSET UNITYSDK_OFFSET(0xFC3660)
#define MX_GAMELOGIC_PARCEL_PARCELKEYPAIR_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xFDBCC0)
#define MX_GAMELOGIC_PARCEL_PARCELKEYPAIR_TOSTRING_OFFSET UNITYSDK_OFFSET(0xFDC6E0)
#define MX_GAMELOGIC_PARCEL_PARCELKEYPAIR_COMPARETO_OFFSET UNITYSDK_OFFSET(0xFDC790)
#define MX_GAMELOGIC_PARCEL_PARCELKEYPAIR_.CCTOR_OFFSET UNITYSDK_OFFSET(0xFDC870)

namespace MX::GameLogic::Parcel
{
	inline static constexpr unsigned int ParcelKeyPair_TypeDefinitionIndex = 12437;

	class ParcelKeyPair : public Il2CppObject
	{
	public:
		::MX::GameLogic::Parcel::ParcelKeyPair* Empty; // 0x0
		::FlatData::ParcelType* _Type_k__BackingField; // 0x10
		::System::Int64 _Id_k__BackingField; // 0x18

		::System::Void .ctor(::FlatData::ParcelType* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatData::ParcelType*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_PARCELKEYPAIR_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::ParcelType* get_Type()
		{
			return ((::FlatData::ParcelType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_PARCELKEYPAIR_GET_TYPE_OFFSET))(nullptr);
		}

		::System::Void set_Type(::FlatData::ParcelType* arg)
		{
			((::System::Void(*)(::FlatData::ParcelType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_PARCELKEYPAIR_SET_TYPE_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_Id()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_PARCELKEYPAIR_GET_ID_OFFSET))(nullptr);
		}

		::System::Void set_Id(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_PARCELKEYPAIR_SET_ID_OFFSET))(arg, nullptr);
		}

		::System::Boolean op_Equality(::MX::GameLogic::Parcel::ParcelKeyPair* arg, ::MX::GameLogic::Parcel::ParcelKeyPair* arg2)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::Parcel::ParcelKeyPair*, ::MX::GameLogic::Parcel::ParcelKeyPair*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_PARCELKEYPAIR_OP_EQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean op_Inequality(::MX::GameLogic::Parcel::ParcelKeyPair* arg, ::MX::GameLogic::Parcel::ParcelKeyPair* arg2)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::Parcel::ParcelKeyPair*, ::MX::GameLogic::Parcel::ParcelKeyPair*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_PARCELKEYPAIR_OP_INEQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return ((::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_PARCELKEYPAIR_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::MX::GameLogic::Parcel::ParcelKeyPair* arg)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::Parcel::ParcelKeyPair*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_PARCELKEYPAIR_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_PARCELKEYPAIR_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_PARCELKEYPAIR_TOSTRING_OFFSET))(nullptr);
		}

		::System::Int32 CompareTo(::MX::GameLogic::Parcel::ParcelKeyPair* arg)
		{
			return ((::System::Int32(*)(::MX::GameLogic::Parcel::ParcelKeyPair*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_PARCELKEYPAIR_COMPARETO_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_PARCELKEYPAIR_.CCTOR_OFFSET))(nullptr);
		}

	};
}

