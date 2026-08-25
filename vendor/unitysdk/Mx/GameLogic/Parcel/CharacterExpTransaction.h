#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class ParcelType; }

#define MX_GAMELOGIC_PARCEL_CHARACTEREXPTRANSACTION_GET_PARCELINFOS_OFFSET UNITYSDK_OFFSET(0xFCD9E0)
#define MX_GAMELOGIC_PARCEL_CHARACTEREXPTRANSACTION_GET_TARGETCHARACTERUNIQUEID_OFFSET UNITYSDK_OFFSET(0xFCDAD0)
#define MX_GAMELOGIC_PARCEL_CHARACTEREXPTRANSACTION_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xFCDAE0)
#define MX_GAMELOGIC_PARCEL_CHARACTEREXPTRANSACTION_SET_TARGETCHARACTERUNIQUEID_OFFSET UNITYSDK_OFFSET(0xFCDAF0)
#define MX_GAMELOGIC_PARCEL_CHARACTEREXPTRANSACTION_GET_AMOUNT_OFFSET UNITYSDK_OFFSET(0xFCDB00)
#define MX_GAMELOGIC_PARCEL_CHARACTEREXPTRANSACTION_.CTOR_OFFSET UNITYSDK_OFFSET(0xFCDB10)

namespace MX::GameLogic::Parcel
{
	inline static constexpr unsigned int CharacterExpTransaction_TypeDefinitionIndex = 12421;

	class CharacterExpTransaction : public Il2CppObject
	{
	public:
		::System::Int64 _TargetCharacterUniqueId_k__BackingField; // 0x10
		::System::Int64 _Amount_k__BackingField; // 0x18

		Il2CppObject* get_ParcelInfos()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_CHARACTEREXPTRANSACTION_GET_PARCELINFOS_OFFSET))(nullptr);
		}

		::System::Int64 get_TargetCharacterUniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_CHARACTEREXPTRANSACTION_GET_TARGETCHARACTERUNIQUEID_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* get_Type()
		{
			return ((::FlatData::ParcelType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_CHARACTEREXPTRANSACTION_GET_TYPE_OFFSET))(nullptr);
		}

		::System::Void set_TargetCharacterUniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_CHARACTEREXPTRANSACTION_SET_TARGETCHARACTERUNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_Amount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_CHARACTEREXPTRANSACTION_GET_AMOUNT_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int64 arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_CHARACTEREXPTRANSACTION_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

	};
}

