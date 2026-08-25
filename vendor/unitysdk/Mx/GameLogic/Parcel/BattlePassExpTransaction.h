#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class ParcelType; }

#define MX_GAMELOGIC_PARCEL_BATTLEPASSEXPTRANSACTION_GET_PARCELINFOS_OFFSET UNITYSDK_OFFSET(0xFCDE20)
#define MX_GAMELOGIC_PARCEL_BATTLEPASSEXPTRANSACTION_.CTOR_OFFSET UNITYSDK_OFFSET(0xFCDF10)
#define MX_GAMELOGIC_PARCEL_BATTLEPASSEXPTRANSACTION_GET_AMOUNT_OFFSET UNITYSDK_OFFSET(0xFCDF40)
#define MX_GAMELOGIC_PARCEL_BATTLEPASSEXPTRANSACTION_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xFCDF50)
#define MX_GAMELOGIC_PARCEL_BATTLEPASSEXPTRANSACTION_GET_TARGETBATTLEPASSSEASONID_OFFSET UNITYSDK_OFFSET(0xFCDF60)
#define MX_GAMELOGIC_PARCEL_BATTLEPASSEXPTRANSACTION_SET_TARGETBATTLEPASSSEASONID_OFFSET UNITYSDK_OFFSET(0xFCDF70)

namespace MX::GameLogic::Parcel
{
	inline static constexpr unsigned int BattlePassExpTransaction_TypeDefinitionIndex = 12424;

	class BattlePassExpTransaction : public Il2CppObject
	{
	public:
		::System::Int64 _TargetBattlePassSeasonId_k__BackingField; // 0x10
		::System::Int64 _Amount_k__BackingField; // 0x18

		Il2CppObject* get_ParcelInfos()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_BATTLEPASSEXPTRANSACTION_GET_PARCELINFOS_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int64 arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_BATTLEPASSEXPTRANSACTION_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int64 get_Amount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_BATTLEPASSEXPTRANSACTION_GET_AMOUNT_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* get_Type()
		{
			return ((::FlatData::ParcelType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_BATTLEPASSEXPTRANSACTION_GET_TYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_TargetBattlePassSeasonId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_BATTLEPASSEXPTRANSACTION_GET_TARGETBATTLEPASSSEASONID_OFFSET))(nullptr);
		}

		::System::Void set_TargetBattlePassSeasonId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_BATTLEPASSEXPTRANSACTION_SET_TARGETBATTLEPASSSEASONID_OFFSET))(arg, nullptr);
		}

	};
}

