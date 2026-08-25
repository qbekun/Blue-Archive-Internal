#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class ParcelType; }

#define MX_GAMELOGIC_PARCEL_LOCATIONEXPTRANSACTION_GET_TARGETLOCATIONUNIQUEID_OFFSET UNITYSDK_OFFSET(0xFCDCC0)
#define MX_GAMELOGIC_PARCEL_LOCATIONEXPTRANSACTION_GET_AMOUNT_OFFSET UNITYSDK_OFFSET(0xFCDCD0)
#define MX_GAMELOGIC_PARCEL_LOCATIONEXPTRANSACTION_SET_TARGETLOCATIONUNIQUEID_OFFSET UNITYSDK_OFFSET(0xFCDCE0)
#define MX_GAMELOGIC_PARCEL_LOCATIONEXPTRANSACTION_GET_PARCELINFOS_OFFSET UNITYSDK_OFFSET(0xFCDCF0)
#define MX_GAMELOGIC_PARCEL_LOCATIONEXPTRANSACTION_.CTOR_OFFSET UNITYSDK_OFFSET(0xFCDDE0)
#define MX_GAMELOGIC_PARCEL_LOCATIONEXPTRANSACTION_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xFCDE10)

namespace MX::GameLogic::Parcel
{
	inline static constexpr unsigned int LocationExpTransaction_TypeDefinitionIndex = 12423;

	class LocationExpTransaction : public Il2CppObject
	{
	public:
		::System::Int64 _TargetLocationUniqueId_k__BackingField; // 0x10
		::System::Int64 _Amount_k__BackingField; // 0x18

		::System::Int64 get_TargetLocationUniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_LOCATIONEXPTRANSACTION_GET_TARGETLOCATIONUNIQUEID_OFFSET))(nullptr);
		}

		::System::Int64 get_Amount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_LOCATIONEXPTRANSACTION_GET_AMOUNT_OFFSET))(nullptr);
		}

		::System::Void set_TargetLocationUniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_LOCATIONEXPTRANSACTION_SET_TARGETLOCATIONUNIQUEID_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_ParcelInfos()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_LOCATIONEXPTRANSACTION_GET_PARCELINFOS_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int64 arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_LOCATIONEXPTRANSACTION_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::ParcelType* get_Type()
		{
			return ((::FlatData::ParcelType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_PARCEL_LOCATIONEXPTRANSACTION_GET_TYPE_OFFSET))(nullptr);
		}

	};
}

