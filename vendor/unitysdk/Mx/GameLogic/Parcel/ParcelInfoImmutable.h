#pragma once
#include "../../../unitysdk.h"

namespace MX::GameLogic::Parcel { class ParcelKeyPair; }
namespace FlatData { class ParcelType; }
namespace FlatData { class CurrencyTypes; }
namespace MX::GameLogic::Parcel { class ParcelInfoImmutable; }
namespace MX::GameLogic::Parcel { class ParcelInfo; }
namespace MX::Core::Math { class BasisPoint; }

#define MX_GAMELOGIC_PARCEL_PARCELINFOIMMUTABLE_GET_KEY_OFFSET UNITYSDK_OFFSET(0xFDBDC0)
#define MX_GAMELOGIC_PARCEL_PARCELINFOIMMUTABLE_GET_AMOUNT_OFFSET UNITYSDK_OFFSET(0xFDBDD0)
#define MX_GAMELOGIC_PARCEL_PARCELINFOIMMUTABLE_.CTOR_OFFSET UNITYSDK_OFFSET(0xFDBDE0)
#define MX_GAMELOGIC_PARCEL_PARCELINFOIMMUTABLE_.CTOR_OFFSET UNITYSDK_OFFSET(0xFDBE10)
#define MX_GAMELOGIC_PARCEL_PARCELINFOIMMUTABLE_.CTOR_OFFSET UNITYSDK_OFFSET(0xFDBE80)
#define MX_GAMELOGIC_PARCEL_PARCELINFOIMMUTABLE_.CTOR_OFFSET UNITYSDK_OFFSET(0xFDBEF0)
#define MX_GAMELOGIC_PARCEL_PARCELINFOIMMUTABLE_TOSTRING_OFFSET UNITYSDK_OFFSET(0xFDBF30)
#define MX_GAMELOGIC_PARCEL_PARCELINFOIMMUTABLE_EQUALS_OFFSET UNITYSDK_OFFSET(0xFDBFD0)
#define MX_GAMELOGIC_PARCEL_PARCELINFOIMMUTABLE_EQUALS_OFFSET UNITYSDK_OFFSET(0xFDC110)
#define MX_GAMELOGIC_PARCEL_PARCELINFOIMMUTABLE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xFDC190)
#define MX_GAMELOGIC_PARCEL_PARCELINFOIMMUTABLE_CLONE_OFFSET UNITYSDK_OFFSET(0xFDC280)
#define MX_GAMELOGIC_PARCEL_PARCELINFOIMMUTABLE_TOPARCELINFO_OFFSET UNITYSDK_OFFSET(0xFDC2F0)
#define MX_GAMELOGIC_PARCEL_PARCELINFOIMMUTABLE_TOPARCELINFO_OFFSET UNITYSDK_OFFSET(0xFDC360)
#define MX_GAMELOGIC_PARCEL_PARCELINFOIMMUTABLE_TOPARCELINFO_OFFSET UNITYSDK_OFFSET(0xFDC420)

namespace MX::GameLogic::Parcel
{
	inline static constexpr unsigned int ParcelInfoImmutable_TypeDefinitionIndex = 12436;

	class ParcelInfoImmutable : public Il2CppObject
	{
	public:
		::MX::GameLogic::Parcel::ParcelKeyPair* _Key_k__BackingField; // 0x10
		::System::Int64 _Amount_k__BackingField; // 0x20

		::MX::GameLogic::Parcel::ParcelKeyPair* get_Key()
		{
			return ((::MX::GameLogic::Parcel::ParcelKeyPair*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_PARCELINFOIMMUTABLE_GET_KEY_OFFSET))(nullptr);
		}

		::System::Int64 get_Amount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_PARCELINFOIMMUTABLE_GET_AMOUNT_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::GameLogic::Parcel::ParcelKeyPair* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelKeyPair*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_PARCELINFOIMMUTABLE_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor(::FlatData::ParcelType* arg, ::System::Int64 arg2, ::System::Int64 arg3)
		{
			((::System::Void(*)(::FlatData::ParcelType*, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_PARCELINFOIMMUTABLE_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void .ctor(::FlatData::CurrencyTypes* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatData::CurrencyTypes*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_PARCELINFOIMMUTABLE_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor(::MX::GameLogic::Parcel::ParcelInfoImmutable* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelInfoImmutable*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_PARCELINFOIMMUTABLE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_PARCELINFOIMMUTABLE_TOSTRING_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::MX::GameLogic::Parcel::ParcelInfoImmutable* arg)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::Parcel::ParcelInfoImmutable*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_PARCELINFOIMMUTABLE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return ((::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_PARCELINFOIMMUTABLE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_PARCELINFOIMMUTABLE_GETHASHCODE_OFFSET))(nullptr);
		}

		::MX::GameLogic::Parcel::ParcelInfoImmutable* Clone()
		{
			return ((::MX::GameLogic::Parcel::ParcelInfoImmutable*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_PARCELINFOIMMUTABLE_CLONE_OFFSET))(nullptr);
		}

		::MX::GameLogic::Parcel::ParcelInfo* ToParcelInfo()
		{
			return ((::MX::GameLogic::Parcel::ParcelInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_PARCELINFOIMMUTABLE_TOPARCELINFO_OFFSET))(nullptr);
		}

		::MX::GameLogic::Parcel::ParcelInfo* ToParcelInfo(::System::Int64 arg)
		{
			return ((::MX::GameLogic::Parcel::ParcelInfo*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_PARCELINFOIMMUTABLE_TOPARCELINFO_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::Parcel::ParcelInfo* ToParcelInfo(::MX::Core::Math::BasisPoint* arg)
		{
			return ((::MX::GameLogic::Parcel::ParcelInfo*(*)(::MX::Core::Math::BasisPoint*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_PARCELINFOIMMUTABLE_TOPARCELINFO_OFFSET))(arg, nullptr);
		}

	};
}

