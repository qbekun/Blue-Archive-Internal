#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class ParcelType; }

#define MX_GAMELOGIC_PARCEL_ACCOUNTEXPTRANSACTION_GET_PARCELINFOS_OFFSET UNITYSDK_OFFSET(0xFCD6B0)
#define MX_GAMELOGIC_PARCEL_ACCOUNTEXPTRANSACTION_.CTOR_OFFSET UNITYSDK_OFFSET(0xFCD8F0)
#define MX_GAMELOGIC_PARCEL_ACCOUNTEXPTRANSACTION_GET_AMOUNT_OFFSET UNITYSDK_OFFSET(0xFCD920)
#define MX_GAMELOGIC_PARCEL_ACCOUNTEXPTRANSACTION_TOSTRING_OFFSET UNITYSDK_OFFSET(0xFCD930)
#define MX_GAMELOGIC_PARCEL_ACCOUNTEXPTRANSACTION_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xFCD9D0)

namespace MX::GameLogic::Parcel
{
	inline static constexpr unsigned int AccountExpTransaction_TypeDefinitionIndex = 12420;

	class AccountExpTransaction : public Il2CppObject
	{
	public:
		::System::Int64 _Amount_k__BackingField; // 0x10

		Il2CppObject* get_ParcelInfos()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_ACCOUNTEXPTRANSACTION_GET_PARCELINFOS_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_ACCOUNTEXPTRANSACTION_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_Amount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_ACCOUNTEXPTRANSACTION_GET_AMOUNT_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_ACCOUNTEXPTRANSACTION_TOSTRING_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* get_Type()
		{
			return ((::FlatData::ParcelType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_ACCOUNTEXPTRANSACTION_GET_TYPE_OFFSET))(nullptr);
		}

	};
}

