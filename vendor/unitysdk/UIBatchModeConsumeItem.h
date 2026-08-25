#pragma once
#include "unitysdk.h"

class UIEquipmentCard;
class UINonEquipmentCard;
class AssetObjectBase;
namespace MX::GameLogic::Parcel { class ParcelKeyPair; }

#define UIBATCHMODECONSUMEITEM_.CTOR_OFFSET UNITYSDK_OFFSET(0x23F52E0)
#define UIBATCHMODECONSUMEITEM_GET_ITEMCARD_OFFSET UNITYSDK_OFFSET(0x23F52F0)
#define UIBATCHMODECONSUMEITEM_SETEQUIPMENTTYPE_OFFSET UNITYSDK_OFFSET(0x23F53A0)
#define UIBATCHMODECONSUMEITEM__SETEQUIPMENTTYPE_B__9_0_OFFSET UNITYSDK_OFFSET(0x23F5920)
#define UIBATCHMODECONSUMEITEM_SETDATA_OFFSET UNITYSDK_OFFSET(0x23F59E0)
#define UIBATCHMODECONSUMEITEM__SETFURNITURETYPE_B__10_0_OFFSET UNITYSDK_OFFSET(0x23F6480)
#define UIBATCHMODECONSUMEITEM__SETITEMTYPE_B__8_0_OFFSET UNITYSDK_OFFSET(0x23F6540)
#define UIBATCHMODECONSUMEITEM_SETFURNITURETYPE_OFFSET UNITYSDK_OFFSET(0x23F5FF0)
#define UIBATCHMODECONSUMEITEM_GET_CARD_OFFSET UNITYSDK_OFFSET(0x23F5870)
#define UIBATCHMODECONSUMEITEM_ISCANNOTINPUT_OFFSET UNITYSDK_OFFSET(0x23F6600)
#define UIBATCHMODECONSUMEITEM_SETITEMTYPE_OFFSET UNITYSDK_OFFSET(0x23F5B30)

	inline static constexpr unsigned int UIBatchModeConsumeItem_TypeDefinitionIndex = 5427;

	class UIBatchModeConsumeItem : public Il2CppObject
	{
	public:
		UIEquipmentCard* card; // 0x98
		UINonEquipmentCard* itemCard; // 0xA0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATCHMODECONSUMEITEM_.CTOR_OFFSET))(nullptr);
		}

		UINonEquipmentCard* get_ItemCard()
		{
			return ((UINonEquipmentCard*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATCHMODECONSUMEITEM_GET_ITEMCARD_OFFSET))(nullptr);
		}

		::System::Void SetEquipmentType(AssetObjectBase* arg)
		{
			((::System::Void(*)(AssetObjectBase*, ::PVOID))((::PBYTE)hIl2Cpp + UIBATCHMODECONSUMEITEM_SETEQUIPMENTTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void _SetEquipmentType_b__9_0(UIEquipmentCard* arg)
		{
			((::System::Void(*)(UIEquipmentCard*, ::PVOID))((::PBYTE)hIl2Cpp + UIBATCHMODECONSUMEITEM__SETEQUIPMENTTYPE_B__9_0_OFFSET))(arg, nullptr);
		}

		::System::Void SetData(AssetObjectBase* arg, ::MX::GameLogic::Parcel::ParcelKeyPair* arg2, AssetObjectBase* arg3)
		{
			((::System::Void(*)(AssetObjectBase*, ::MX::GameLogic::Parcel::ParcelKeyPair*, AssetObjectBase*, ::PVOID))((::PBYTE)hIl2Cpp + UIBATCHMODECONSUMEITEM_SETDATA_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void _SetFurnitureType_b__10_0(UINonEquipmentCard* arg)
		{
			((::System::Void(*)(UINonEquipmentCard*, ::PVOID))((::PBYTE)hIl2Cpp + UIBATCHMODECONSUMEITEM__SETFURNITURETYPE_B__10_0_OFFSET))(arg, nullptr);
		}

		::System::Void _SetItemType_b__8_0(UINonEquipmentCard* arg)
		{
			((::System::Void(*)(UINonEquipmentCard*, ::PVOID))((::PBYTE)hIl2Cpp + UIBATCHMODECONSUMEITEM__SETITEMTYPE_B__8_0_OFFSET))(arg, nullptr);
		}

		::System::Void SetFurnitureType(AssetObjectBase* arg)
		{
			((::System::Void(*)(AssetObjectBase*, ::PVOID))((::PBYTE)hIl2Cpp + UIBATCHMODECONSUMEITEM_SETFURNITURETYPE_OFFSET))(arg, nullptr);
		}

		UIEquipmentCard* get_Card()
		{
			return ((UIEquipmentCard*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATCHMODECONSUMEITEM_GET_CARD_OFFSET))(nullptr);
		}

		::System::Boolean IsCanNotInput()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATCHMODECONSUMEITEM_ISCANNOTINPUT_OFFSET))(nullptr);
		}

		::System::Void SetItemType(AssetObjectBase* arg)
		{
			((::System::Void(*)(AssetObjectBase*, ::PVOID))((::PBYTE)hIl2Cpp + UIBATCHMODECONSUMEITEM_SETITEMTYPE_OFFSET))(arg, nullptr);
		}

	};

