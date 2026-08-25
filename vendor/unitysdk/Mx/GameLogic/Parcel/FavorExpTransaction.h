#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class ParcelType; }

#define MX_GAMELOGIC_PARCEL_FAVOREXPTRANSACTION_GET_PARCELINFOS_OFFSET UNITYSDK_OFFSET(0xFCDB40)
#define MX_GAMELOGIC_PARCEL_FAVOREXPTRANSACTION_GET_AMOUNT_OFFSET UNITYSDK_OFFSET(0xFCDC30)
#define MX_GAMELOGIC_PARCEL_FAVOREXPTRANSACTION_SET_PROB_OFFSET UNITYSDK_OFFSET(0xFCDC40)
#define MX_GAMELOGIC_PARCEL_FAVOREXPTRANSACTION_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xFCDC50)
#define MX_GAMELOGIC_PARCEL_FAVOREXPTRANSACTION_GET_TARGETCHARACTERUNIQUEID_OFFSET UNITYSDK_OFFSET(0xFCDC60)
#define MX_GAMELOGIC_PARCEL_FAVOREXPTRANSACTION_GET_PROB_OFFSET UNITYSDK_OFFSET(0xFCDC70)
#define MX_GAMELOGIC_PARCEL_FAVOREXPTRANSACTION_SET_TARGETCHARACTERUNIQUEID_OFFSET UNITYSDK_OFFSET(0xFCDC80)
#define MX_GAMELOGIC_PARCEL_FAVOREXPTRANSACTION_.CTOR_OFFSET UNITYSDK_OFFSET(0xFCDC90)

namespace MX::GameLogic::Parcel
{
	inline static constexpr unsigned int FavorExpTransaction_TypeDefinitionIndex = 12422;

	class FavorExpTransaction : public Il2CppObject
	{
	public:
		::System::Int64 _TargetCharacterUniqueId_k__BackingField; // 0x10
		::System::Int64 _Amount_k__BackingField; // 0x18
		::System::Int64 _Prob_k__BackingField; // 0x20

		Il2CppObject* get_ParcelInfos()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_FAVOREXPTRANSACTION_GET_PARCELINFOS_OFFSET))(nullptr);
		}

		::System::Int64 get_Amount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_FAVOREXPTRANSACTION_GET_AMOUNT_OFFSET))(nullptr);
		}

		::System::Void set_Prob(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_FAVOREXPTRANSACTION_SET_PROB_OFFSET))(arg, nullptr);
		}

		::FlatData::ParcelType* get_Type()
		{
			return ((::FlatData::ParcelType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_FAVOREXPTRANSACTION_GET_TYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_TargetCharacterUniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_FAVOREXPTRANSACTION_GET_TARGETCHARACTERUNIQUEID_OFFSET))(nullptr);
		}

		::System::Int64 get_Prob()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_FAVOREXPTRANSACTION_GET_PROB_OFFSET))(nullptr);
		}

		::System::Void set_TargetCharacterUniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_FAVOREXPTRANSACTION_SET_TARGETCHARACTERUNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Int64 arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_FAVOREXPTRANSACTION_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

	};
}

