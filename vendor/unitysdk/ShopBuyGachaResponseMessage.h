#pragma once
#include "unitysdk.h"

namespace MX::GameLogic::Parcel { class ParcelResultDB; }
namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define SHOPBUYGACHARESPONSEMESSAGE_GET_MERCHANDISEUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1FA9670)
#define SHOPBUYGACHARESPONSEMESSAGE_GET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0x1FA9680)
#define SHOPBUYGACHARESPONSEMESSAGE_SET_REWARDCONFIRMDATALIST_OFFSET UNITYSDK_OFFSET(0x1FA9690)
#define SHOPBUYGACHARESPONSEMESSAGE_SET_MERCHANDISEUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1FA96A0)
#define SHOPBUYGACHARESPONSEMESSAGE_SET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0x1FA96B0)
#define SHOPBUYGACHARESPONSEMESSAGE_GET_REWARDCONFIRMDATALIST_OFFSET UNITYSDK_OFFSET(0x1FA96C0)
#define SHOPBUYGACHARESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1FA47C0)

	inline static constexpr unsigned int ShopBuyGachaResponseMessage_TypeDefinitionIndex = 2847;

	class ShopBuyGachaResponseMessage : public Il2CppObject
	{
	public:
		::MX::GameLogic::Parcel::ParcelResultDB* _ParcelResultDB_k__BackingField; // 0x20
		::System::Int64 _MerchandiseUniqueId_k__BackingField; // 0x28
		Il2CppObject* _RewardConfirmDataList_k__BackingField; // 0x30

		::System::Int64 get_MerchandiseUniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SHOPBUYGACHARESPONSEMESSAGE_GET_MERCHANDISEUNIQUEID_OFFSET))(nullptr);
		}

		::MX::GameLogic::Parcel::ParcelResultDB* get_ParcelResultDB()
		{
			return ((::MX::GameLogic::Parcel::ParcelResultDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + SHOPBUYGACHARESPONSEMESSAGE_GET_PARCELRESULTDB_OFFSET))(nullptr);
		}

		::System::Void set_RewardConfirmDataList(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SHOPBUYGACHARESPONSEMESSAGE_SET_REWARDCONFIRMDATALIST_OFFSET))(arg, nullptr);
		}

		::System::Void set_MerchandiseUniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SHOPBUYGACHARESPONSEMESSAGE_SET_MERCHANDISEUNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Void set_ParcelResultDB(::MX::GameLogic::Parcel::ParcelResultDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + SHOPBUYGACHARESPONSEMESSAGE_SET_PARCELRESULTDB_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_RewardConfirmDataList()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SHOPBUYGACHARESPONSEMESSAGE_GET_REWARDCONFIRMDATALIST_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg, ::MX::GameLogic::Parcel::ParcelResultDB* arg2, ::System::Int64 arg3, Il2CppObject* arg4)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::MX::GameLogic::Parcel::ParcelResultDB*, ::System::Int64, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SHOPBUYGACHARESPONSEMESSAGE_.CTOR_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

	};

