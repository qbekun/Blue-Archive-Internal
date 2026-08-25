#pragma once
#include "../../../unitysdk.h"

namespace MX::GameLogic::Parcel { class ParcelBase; }
namespace MX::GameLogic::Parcel { class ParcelInfo; }
namespace MX::Core::Math { class BasisPoint; }
namespace MX::GameLogic::Parcel { class ParcelResultDB; }
namespace MX::GameLogic::Parcel { class CurrencySnapshot; }
namespace MX::Data { class CurrencyData; }
namespace FlatData { class CurrencyTypes; }
namespace MX::Data { class ItemData; }
namespace MX::GameLogic::DBModel { class ItemDB; }
namespace MX::Data { class EquipmentItemData; }
namespace MX::GameLogic::DBModel { class EquipmentDB; }
namespace MX::Data { class CafeData; }
namespace MX::GameLogic::DBModel { class FurnitureDB; }
namespace MX::GameLogic::Parcel { class ParcelCost; }
namespace MX::GameLogic::DBModel { class ConsumeRequestDB; }
class AssetObjectBase;
namespace MX::GameLogic::Parcel { class ParcelKeyPair; }
class SweepSortingOrder;

#define MX_GAMELOGIC_SERVICE_PARCELSERVICE_CREATEPARCEL_OFFSET UNITYSDK_OFFSET(0xFB90A0)
#define MX_GAMELOGIC_SERVICE_PARCELSERVICE_CREATEPARCEL_OFFSET UNITYSDK_OFFSET(0xFB95A0)
#define MX_GAMELOGIC_SERVICE_PARCELSERVICE_SUMMARIZE_OFFSET UNITYSDK_OFFSET(0xFB9E10)
#define MX_GAMELOGIC_SERVICE_PARCELSERVICE_SUBTRACTPARCELINFOS_OFFSET UNITYSDK_OFFSET(0xFBA350)
#define MX_GAMELOGIC_SERVICE_PARCELSERVICE_MULTIPLY_OFFSET UNITYSDK_OFFSET(0xFBAB90)
#define MX_GAMELOGIC_SERVICE_PARCELSERVICE_MULTIPLY_OFFSET UNITYSDK_OFFSET(0xFB9D60)
#define MX_GAMELOGIC_SERVICE_PARCELSERVICE_ADDPARCELRESULT_OFFSET UNITYSDK_OFFSET(0xFBAC30)
#define MX_GAMELOGIC_SERVICE_PARCELSERVICE_HASFREESPACE_OFFSET UNITYSDK_OFFSET(0xFBB3D0)
#define MX_GAMELOGIC_SERVICE_PARCELSERVICE_HASFREESPACE_OFFSET UNITYSDK_OFFSET(0xFBC760)
#define MX_GAMELOGIC_SERVICE_PARCELSERVICE_HASFREESPACE_OFFSET UNITYSDK_OFFSET(0xFBCAF0)
#define MX_GAMELOGIC_SERVICE_PARCELSERVICE_HASFREESPACE_OFFSET UNITYSDK_OFFSET(0xFBCCD0)
#define MX_GAMELOGIC_SERVICE_PARCELSERVICE_HASFREESPACE_OFFSET UNITYSDK_OFFSET(0xFBDA70)
#define MX_GAMELOGIC_SERVICE_PARCELSERVICE_HASFREESPACE_OFFSET UNITYSDK_OFFSET(0xFBD7D0)
#define MX_GAMELOGIC_SERVICE_PARCELSERVICE_HASFREESPACE_OFFSET UNITYSDK_OFFSET(0xFBD8B0)
#define MX_GAMELOGIC_SERVICE_PARCELSERVICE_HASFREESPACE_OFFSET UNITYSDK_OFFSET(0xFBD990)
#define MX_GAMELOGIC_SERVICE_PARCELSERVICE_CANAFFORDCOST_OFFSET UNITYSDK_OFFSET(0xFBE440)
#define MX_GAMELOGIC_SERVICE_PARCELSERVICE_CANAFFORDCOST_OFFSET UNITYSDK_OFFSET(0xFBE470)
#define MX_GAMELOGIC_SERVICE_PARCELSERVICE_CANCONSUME_OFFSET UNITYSDK_OFFSET(0xFBE620)
#define MX_GAMELOGIC_SERVICE_PARCELSERVICE_TOSTRING_OFFSET UNITYSDK_OFFSET(0xFBED10)
#define MX_GAMELOGIC_SERVICE_PARCELSERVICE_TOSTRING_OFFSET UNITYSDK_OFFSET(0xFBF0C0)
#define MX_GAMELOGIC_SERVICE_PARCELSERVICE_CONVERTCHARACTERTOSECRETSTONE_OFFSET UNITYSDK_OFFSET(0xFBF470)
#define MX_GAMELOGIC_SERVICE_PARCELSERVICE_PARCELTOCURRENCY_OFFSET UNITYSDK_OFFSET(0xFBFDD0)
#define MX_GAMELOGIC_SERVICE_PARCELSERVICE_TRYGETCOSTAMOUNT_OFFSET UNITYSDK_OFFSET(0xFC0320)
#define MX_GAMELOGIC_SERVICE_PARCELSERVICE_MERGEDUPLICATEELEMENT_OFFSET UNITYSDK_OFFSET(0xFC0500)
#define MX_GAMELOGIC_SERVICE_PARCELSERVICE_MERGEDUPLICATEELEMENT_OFFSET UNITYSDK_OFFSET(0xFC0880)
#define MX_GAMELOGIC_SERVICE_PARCELSERVICE_CREATASSETOBJECT_OFFSET UNITYSDK_OFFSET(0xFC0A50)
#define MX_GAMELOGIC_SERVICE_PARCELSERVICE_FINDINVENTORY_OFFSET UNITYSDK_OFFSET(0xFC0C20)
#define MX_GAMELOGIC_SERVICE_PARCELSERVICE_FINDINVENTORY_OFFSET UNITYSDK_OFFSET(0xFC0EC0)
#define MX_GAMELOGIC_SERVICE_PARCELSERVICE_GETPARCELORDEREDLIST_OFFSET UNITYSDK_OFFSET(0xFC1160)
#define MX_GAMELOGIC_SERVICE_PARCELSERVICE_HASFREESPACE_OFFSET UNITYSDK_OFFSET(0xFC1430)
#define MX_GAMELOGIC_SERVICE_PARCELSERVICE_HASFREESPACE_OFFSET UNITYSDK_OFFSET(0xFC1880)
#define MX_GAMELOGIC_SERVICE_PARCELSERVICE_CANCONSUME_OFFSET UNITYSDK_OFFSET(0xFC1910)
#define MX_GAMELOGIC_SERVICE_PARCELSERVICE_CANAFFORDCOST_OFFSET UNITYSDK_OFFSET(0xFC1C40)
#define MX_GAMELOGIC_SERVICE_PARCELSERVICE_CANAFFORDCOST_OFFSET UNITYSDK_OFFSET(0xFC2460)
#define MX_GAMELOGIC_SERVICE_PARCELSERVICE_CANAFFORDCOST_OFFSET UNITYSDK_OFFSET(0xFC2490)
#define MX_GAMELOGIC_SERVICE_PARCELSERVICE__GETPARCELORDEREDLIST_G__GETPARCELCATEGORYORDER|29_3_OFFSET UNITYSDK_OFFSET(0xFC25D0)
#define MX_GAMELOGIC_SERVICE_PARCELSERVICE__GETPARCELORDEREDLIST_G__GETPARCELPRECONDITIONORDER|29_4_OFFSET UNITYSDK_OFFSET(0xFC26F0)
#define MX_GAMELOGIC_SERVICE_PARCELSERVICE__GETPARCELORDEREDLIST_G__GETPARCELIDORDER|29_5_OFFSET UNITYSDK_OFFSET(0xFC28A0)

namespace MX::GameLogic::Service
{
	inline static constexpr unsigned int ParcelService_TypeDefinitionIndex = 12400;

	class ParcelService : public Il2CppObject
	{
	public:
		Il2CppObject* CreateParcel(Il2CppObject* arg)
		{
			return ((Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_PARCELSERVICE_CREATEPARCEL_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::Parcel::ParcelBase* CreateParcel(::MX::GameLogic::Parcel::ParcelInfo* arg)
		{
			return ((::MX::GameLogic::Parcel::ParcelBase*(*)(::MX::GameLogic::Parcel::ParcelInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_PARCELSERVICE_CREATEPARCEL_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Summarize(Il2CppObject* arg, ::System::Boolean arg2)
		{
			return ((Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_PARCELSERVICE_SUMMARIZE_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* SubtractParcelInfos(Il2CppObject* arg, Il2CppObject* arg2)
		{
			return ((Il2CppObject*(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_PARCELSERVICE_SUBTRACTPARCELINFOS_OFFSET))(arg, arg2, nullptr);
		}

		::MX::GameLogic::Parcel::ParcelInfo* Multiply(::MX::GameLogic::Parcel::ParcelInfo* arg, ::MX::Core::Math::BasisPoint* arg2)
		{
			return ((::MX::GameLogic::Parcel::ParcelInfo*(*)(::MX::GameLogic::Parcel::ParcelInfo*, ::MX::Core::Math::BasisPoint*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_PARCELSERVICE_MULTIPLY_OFFSET))(arg, arg2, nullptr);
		}

		::MX::GameLogic::Parcel::ParcelInfo* Multiply(::MX::GameLogic::Parcel::ParcelInfo* arg, ::System::Int64 arg2)
		{
			return ((::MX::GameLogic::Parcel::ParcelInfo*(*)(::MX::GameLogic::Parcel::ParcelInfo*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_PARCELSERVICE_MULTIPLY_OFFSET))(arg, arg2, nullptr);
		}

		::MX::GameLogic::Parcel::ParcelResultDB* AddParcelResult(::MX::GameLogic::Parcel::ParcelResultDB* arg, ::MX::GameLogic::Parcel::ParcelResultDB* arg2)
		{
			return ((::MX::GameLogic::Parcel::ParcelResultDB*(*)(::MX::GameLogic::Parcel::ParcelResultDB*, ::MX::GameLogic::Parcel::ParcelResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_PARCELSERVICE_ADDPARCELRESULT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean HasFreeSpace(::MX::GameLogic::Parcel::CurrencySnapshot* arg, Il2CppObject* arg2, Il2CppObject* arg3, Il2CppObject* arg4, Il2CppObject&* arg5)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::Parcel::CurrencySnapshot*, Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_PARCELSERVICE_HASFREESPACE_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Boolean HasFreeSpace(::MX::GameLogic::Parcel::CurrencySnapshot* arg, Il2CppObject&* arg2)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::Parcel::CurrencySnapshot*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_PARCELSERVICE_HASFREESPACE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean HasFreeSpace(::MX::Data::CurrencyData* arg, ::FlatData::CurrencyTypes* arg2, ::System::Int64 arg3, ::MX::GameLogic::Parcel::ParcelInfo&* arg4)
		{
			return ((::System::Boolean(*)(::MX::Data::CurrencyData*, ::FlatData::CurrencyTypes*, ::System::Int64, ::MX::GameLogic::Parcel::ParcelInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_PARCELSERVICE_HASFREESPACE_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Boolean HasFreeSpace(Il2CppObject* arg, Il2CppObject* arg2, Il2CppObject* arg3, Il2CppObject&* arg4)
		{
			return ((::System::Boolean(*)(Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_PARCELSERVICE_HASFREESPACE_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Boolean HasFreeSpace(Il2CppObject* arg, Il2CppObject* arg2, Il2CppObject* arg3)
		{
			return ((::System::Boolean(*)(Il2CppObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_PARCELSERVICE_HASFREESPACE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean HasFreeSpace(::MX::Data::ItemData* arg, ::MX::GameLogic::DBModel::ItemDB* arg2)
		{
			return ((::System::Boolean(*)(::MX::Data::ItemData*, ::MX::GameLogic::DBModel::ItemDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_PARCELSERVICE_HASFREESPACE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean HasFreeSpace(::MX::Data::EquipmentItemData* arg, ::MX::GameLogic::DBModel::EquipmentDB* arg2)
		{
			return ((::System::Boolean(*)(::MX::Data::EquipmentItemData*, ::MX::GameLogic::DBModel::EquipmentDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_PARCELSERVICE_HASFREESPACE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean HasFreeSpace(::MX::Data::CafeData* arg, ::MX::GameLogic::DBModel::FurnitureDB* arg2)
		{
			return ((::System::Boolean(*)(::MX::Data::CafeData*, ::MX::GameLogic::DBModel::FurnitureDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_PARCELSERVICE_HASFREESPACE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean CanAffordCost(::MX::GameLogic::Parcel::CurrencySnapshot* arg, Il2CppObject* arg2, Il2CppObject* arg3, Il2CppObject* arg4, ::MX::GameLogic::Parcel::ParcelCost* arg5, Il2CppObject* arg6, ::MX::NetworkProtocol::WebAPIErrorCode&* arg7)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::Parcel::CurrencySnapshot*, Il2CppObject*, Il2CppObject*, Il2CppObject*, ::MX::GameLogic::Parcel::ParcelCost*, Il2CppObject*, ::MX::NetworkProtocol::WebAPIErrorCode&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_PARCELSERVICE_CANAFFORDCOST_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, nullptr);
		}

		::System::Boolean CanAffordCost(::MX::GameLogic::Parcel::CurrencySnapshot* arg, Il2CppObject* arg2, Il2CppObject* arg3, Il2CppObject* arg4, ::MX::GameLogic::Parcel::ParcelCost* arg5, Il2CppObject* arg6, ::MX::GameLogic::DBModel::ConsumeRequestDB* arg7, ::MX::NetworkProtocol::WebAPIErrorCode&* arg8)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::Parcel::CurrencySnapshot*, Il2CppObject*, Il2CppObject*, Il2CppObject*, ::MX::GameLogic::Parcel::ParcelCost*, Il2CppObject*, ::MX::GameLogic::DBModel::ConsumeRequestDB*, ::MX::NetworkProtocol::WebAPIErrorCode&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_PARCELSERVICE_CANAFFORDCOST_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, nullptr);
		}

		::System::Boolean CanConsume(Il2CppObject* arg, Il2CppObject* arg2, Il2CppObject* arg3, ::MX::GameLogic::DBModel::ConsumeRequestDB* arg4)
		{
			return ((::System::Boolean(*)(Il2CppObject*, Il2CppObject*, Il2CppObject*, ::MX::GameLogic::DBModel::ConsumeRequestDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_PARCELSERVICE_CANCONSUME_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::String* ToString(Il2CppObject* arg)
		{
			return ((::System::String*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_PARCELSERVICE_TOSTRING_OFFSET))(arg, nullptr);
		}

		::System::String* ToString(Il2CppObject* arg)
		{
			return ((::System::String*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_PARCELSERVICE_TOSTRING_OFFSET))(arg, nullptr);
		}

		::System::Void ConvertCharacterToSecretStone(Il2CppObject* arg, ::System::Int64 arg2, ::System::Int64 arg3, Il2CppObject&* arg4, Il2CppObject&* arg5)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Int64, ::System::Int64, Il2CppObject&*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_PARCELSERVICE_CONVERTCHARACTERTOSECRETSTONE_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		Il2CppObject* ParcelToCurrency(Il2CppObject* arg)
		{
			return ((Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_PARCELSERVICE_PARCELTOCURRENCY_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetCostAmount(Il2CppObject* arg, ::FlatData::CurrencyTypes* arg2, int64_t&* arg3)
		{
			return ((::System::Boolean(*)(Il2CppObject*, ::FlatData::CurrencyTypes*, int64_t&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_PARCELSERVICE_TRYGETCOSTAMOUNT_OFFSET))(arg, arg2, arg3, nullptr);
		}

		Il2CppObject* MergeDuplicateElement(Il2CppObject* arg)
		{
			return ((Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_PARCELSERVICE_MERGEDUPLICATEELEMENT_OFFSET))(arg, nullptr);
		}

		::System::Void MergeDuplicateElement(Il2CppObject&* arg)
		{
			((::System::Void(*)(Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_PARCELSERVICE_MERGEDUPLICATEELEMENT_OFFSET))(arg, nullptr);
		}

		AssetObjectBase* CreatAssetObject(::MX::GameLogic::Parcel::ParcelInfo* arg)
		{
			return ((AssetObjectBase*(*)(::MX::GameLogic::Parcel::ParcelInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_PARCELSERVICE_CREATASSETOBJECT_OFFSET))(arg, nullptr);
		}

		AssetObjectBase* FindInventory(::MX::GameLogic::Parcel::ParcelInfo* arg)
		{
			return ((AssetObjectBase*(*)(::MX::GameLogic::Parcel::ParcelInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_PARCELSERVICE_FINDINVENTORY_OFFSET))(arg, nullptr);
		}

		AssetObjectBase* FindInventory(::MX::GameLogic::Parcel::ParcelKeyPair* arg)
		{
			return ((AssetObjectBase*(*)(::MX::GameLogic::Parcel::ParcelKeyPair*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_PARCELSERVICE_FINDINVENTORY_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetParcelOrderedList(Il2CppObject* arg)
		{
			return ((Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_PARCELSERVICE_GETPARCELORDEREDLIST_OFFSET))(arg, nullptr);
		}

		::System::Boolean HasFreeSpace(Il2CppObject* arg, Il2CppObject&* arg2)
		{
			return ((::System::Boolean(*)(Il2CppObject*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_PARCELSERVICE_HASFREESPACE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean HasFreeSpace(::MX::GameLogic::Parcel::CurrencySnapshot* arg, Il2CppObject* arg2, Il2CppObject&* arg3)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::Parcel::CurrencySnapshot*, Il2CppObject*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_PARCELSERVICE_HASFREESPACE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean CanConsume(Il2CppObject* arg, Il2CppObject* arg2)
		{
			return ((::System::Boolean(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_PARCELSERVICE_CANCONSUME_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean CanAffordCost(::MX::GameLogic::Parcel::ParcelCost* arg, Il2CppObject* arg2)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::Parcel::ParcelCost*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_PARCELSERVICE_CANAFFORDCOST_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean CanAffordCost(::MX::GameLogic::Parcel::CurrencySnapshot* arg, Il2CppObject* arg2, ::MX::GameLogic::Parcel::ParcelCost* arg3, Il2CppObject* arg4, ::MX::NetworkProtocol::WebAPIErrorCode&* arg5)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::Parcel::CurrencySnapshot*, Il2CppObject*, ::MX::GameLogic::Parcel::ParcelCost*, Il2CppObject*, ::MX::NetworkProtocol::WebAPIErrorCode&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_PARCELSERVICE_CANAFFORDCOST_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Boolean CanAffordCost(::MX::GameLogic::Parcel::CurrencySnapshot* arg, Il2CppObject* arg2, ::MX::GameLogic::Parcel::ParcelCost* arg3, Il2CppObject* arg4, Il2CppObject* arg5, ::MX::NetworkProtocol::WebAPIErrorCode&* arg6)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::Parcel::CurrencySnapshot*, Il2CppObject*, ::MX::GameLogic::Parcel::ParcelCost*, Il2CppObject*, Il2CppObject*, ::MX::NetworkProtocol::WebAPIErrorCode&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_PARCELSERVICE_CANAFFORDCOST_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

		SweepSortingOrder* _GetParcelOrderedList_g__GetParcelCategoryOrder|29_3(::MX::GameLogic::Parcel::ParcelKeyPair* arg)
		{
			return ((SweepSortingOrder*(*)(::MX::GameLogic::Parcel::ParcelKeyPair*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_PARCELSERVICE__GETPARCELORDEREDLIST_G__GETPARCELCATEGORYORDER|29_3_OFFSET))(arg, nullptr);
		}

		::System::Int64 _GetParcelOrderedList_g__GetParcelPreConditionOrder|29_4(::MX::GameLogic::Parcel::ParcelKeyPair* arg)
		{
			return ((::System::Int64(*)(::MX::GameLogic::Parcel::ParcelKeyPair*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_PARCELSERVICE__GETPARCELORDEREDLIST_G__GETPARCELPRECONDITIONORDER|29_4_OFFSET))(arg, nullptr);
		}

		::System::Int64 _GetParcelOrderedList_g__GetParcelIDOrder|29_5(::MX::GameLogic::Parcel::ParcelKeyPair* arg)
		{
			return ((::System::Int64(*)(::MX::GameLogic::Parcel::ParcelKeyPair*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_PARCELSERVICE__GETPARCELORDEREDLIST_G__GETPARCELIDORDER|29_5_OFFSET))(arg, nullptr);
		}

	};
}

