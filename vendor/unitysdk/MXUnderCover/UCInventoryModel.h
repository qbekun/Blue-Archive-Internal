#pragma once
#include "../unitysdk.h"

namespace MXUnderCover { class UCStage; }
namespace MXUnderCover { class UCItemModel; }
class UIButtonBindType;
class UCPersonalityType;
namespace MXUnderCover { class ItemContainerAsset; }
namespace FlatData { class UnderCoverItemCategory; }
class UIItemQuickSlotBindType;

#define MXUNDERCOVER_UCINVENTORYMODEL_.CTOR_OFFSET UNITYSDK_OFFSET(0xDA7FB0)
#define MXUNDERCOVER_UCINVENTORYMODEL_TRYGETSKILLDATA_OFFSET UNITYSDK_OFFSET(0xDA8890)
#define MXUNDERCOVER_UCINVENTORYMODEL_TRYGETPLAYERSKILLITEM_OFFSET UNITYSDK_OFFSET(0xDA8970)
#define MXUNDERCOVER_UCINVENTORYMODEL_SET_STAGE_OFFSET UNITYSDK_OFFSET(0xDA8C20)
#define MXUNDERCOVER_UCINVENTORYMODEL_GET_ITEMCONTAINER_OFFSET UNITYSDK_OFFSET(0xDA8940)
#define MXUNDERCOVER_UCINVENTORYMODEL_LOAD_OFFSET UNITYSDK_OFFSET(0xDA8C30)
#define MXUNDERCOVER_UCINVENTORYMODEL_EQUIPACQUIREDITEM_OFFSET UNITYSDK_OFFSET(0xDA9C30)
#define MXUNDERCOVER_UCINVENTORYMODEL_UNEQUIPITEM_OFFSET UNITYSDK_OFFSET(0xDA9F80)
#define MXUNDERCOVER_UCINVENTORYMODEL_TRYGETINVENTORYBYCATEGORY_OFFSET UNITYSDK_OFFSET(0xDA8BA0)
#define MXUNDERCOVER_UCINVENTORYMODEL_SAVE_OFFSET UNITYSDK_OFFSET(0xDAA210)
#define MXUNDERCOVER_UCINVENTORYMODEL_GET_STAGE_OFFSET UNITYSDK_OFFSET(0xDAAA00)
#define MXUNDERCOVER_UCINVENTORYMODEL_GET_AVAILABLEITEMIDS_OFFSET UNITYSDK_OFFSET(0xDAAA10)
#define MXUNDERCOVER_UCINVENTORYMODEL_ISCURRENTPLAYEREQUIPPEDITEM_OFFSET UNITYSDK_OFFSET(0xDAAB60)
#define MXUNDERCOVER_UCINVENTORYMODEL_LOADSAVEDBUTTONSTATE_OFFSET UNITYSDK_OFFSET(0xDA9660)
#define MXUNDERCOVER_UCINVENTORYMODEL_ADDITEM_OFFSET UNITYSDK_OFFSET(0xDAAC20)
#define MXUNDERCOVER_UCINVENTORYMODEL_TRYGETITEM_OFFSET UNITYSDK_OFFSET(0xDAADB0)
#define MXUNDERCOVER_UCINVENTORYMODEL_TRYGETPLAYERCONSUMABLEITEM_OFFSET UNITYSDK_OFFSET(0xDAB130)
#define MXUNDERCOVER_UCINVENTORYMODEL_SWAPITEM_OFFSET UNITYSDK_OFFSET(0xDAB360)
#define MXUNDERCOVER_UCINVENTORYMODEL_TRYGETCATEGORYITEMDATAS_OFFSET UNITYSDK_OFFSET(0xDAB3E0)

namespace MXUnderCover
{
	inline static constexpr unsigned int UCInventoryModel_TypeDefinitionIndex = 9894;

	class UCInventoryModel : public Il2CppObject
	{
	public:
		::MXUnderCover::UCStage* _Stage_k__BackingField; // 0x10
		Il2CppObject* temporaryInventories; // 0x18
		Il2CppObject* saveInventories; // 0x20
		Il2CppObject* temporaryEquippedItemId; // 0x28
		Il2CppObject* saveEquippedItemId; // 0x30

		::System::Void .ctor(::MXUnderCover::UCStage* arg)
		{
			((::System::Void(*)(::MXUnderCover::UCStage*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCINVENTORYMODEL_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetSkillData(::MXUnderCover::UCItemModel* arg, ::MXUnderCover::SkillDataAsset&* arg2)
		{
			return ((::System::Boolean(*)(::MXUnderCover::UCItemModel*, ::MXUnderCover::SkillDataAsset&*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCINVENTORYMODEL_TRYGETSKILLDATA_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean TryGetPlayerSkillItem(UIButtonBindType* arg, UCPersonalityType* arg2, ::MXUnderCover::UCItemModel&* arg3)
		{
			return ((::System::Boolean(*)(UIButtonBindType*, UCPersonalityType*, ::MXUnderCover::UCItemModel&*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCINVENTORYMODEL_TRYGETPLAYERSKILLITEM_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void set_Stage(::MXUnderCover::UCStage* arg)
		{
			((::System::Void(*)(::MXUnderCover::UCStage*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCINVENTORYMODEL_SET_STAGE_OFFSET))(arg, nullptr);
		}

		::MXUnderCover::ItemContainerAsset* get_ItemContainer()
		{
			return ((::MXUnderCover::ItemContainerAsset*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCINVENTORYMODEL_GET_ITEMCONTAINER_OFFSET))(nullptr);
		}

		::System::Void Load()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCINVENTORYMODEL_LOAD_OFFSET))(nullptr);
		}

		::System::Void EquipAcquiredItem(::MXUnderCover::UCItemModel* arg)
		{
			((::System::Void(*)(::MXUnderCover::UCItemModel*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCINVENTORYMODEL_EQUIPACQUIREDITEM_OFFSET))(arg, nullptr);
		}

		::System::Void UnEquipItem(::MXUnderCover::UCItemModel* arg)
		{
			((::System::Void(*)(::MXUnderCover::UCItemModel*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCINVENTORYMODEL_UNEQUIPITEM_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetInventoryByCategory(::FlatData::UnderCoverItemCategory* arg, Il2CppObject&* arg2)
		{
			return ((::System::Boolean(*)(::FlatData::UnderCoverItemCategory*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCINVENTORYMODEL_TRYGETINVENTORYBYCATEGORY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Save()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCINVENTORYMODEL_SAVE_OFFSET))(nullptr);
		}

		::MXUnderCover::UCStage* get_Stage()
		{
			return ((::MXUnderCover::UCStage*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCINVENTORYMODEL_GET_STAGE_OFFSET))(nullptr);
		}

		Il2CppObject* get_AvailableItemIds()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCINVENTORYMODEL_GET_AVAILABLEITEMIDS_OFFSET))(nullptr);
		}

		::System::Boolean IsCurrentPlayerEquippedItem(::MXUnderCover::UCItemModel* arg)
		{
			return ((::System::Boolean(*)(::MXUnderCover::UCItemModel*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCINVENTORYMODEL_ISCURRENTPLAYEREQUIPPEDITEM_OFFSET))(arg, nullptr);
		}

		::System::Void LoadSavedButtonState()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCINVENTORYMODEL_LOADSAVEDBUTTONSTATE_OFFSET))(nullptr);
		}

		::MXUnderCover::UCItemModel* AddItem(::System::String* str)
		{
			return ((::MXUnderCover::UCItemModel*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCINVENTORYMODEL_ADDITEM_OFFSET))(str, nullptr);
		}

		::System::Boolean TryGetItem(::System::String* str, ::MXUnderCover::UCItemModel&* arg)
		{
			return ((::System::Boolean(*)(::System::String*, ::MXUnderCover::UCItemModel&*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCINVENTORYMODEL_TRYGETITEM_OFFSET))(str, arg, nullptr);
		}

		::System::Boolean TryGetPlayerConsumableItem(UIItemQuickSlotBindType* arg, UCPersonalityType* arg2, ::MXUnderCover::UCItemModel&* arg3)
		{
			return ((::System::Boolean(*)(UIItemQuickSlotBindType*, UCPersonalityType*, ::MXUnderCover::UCItemModel&*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCINVENTORYMODEL_TRYGETPLAYERCONSUMABLEITEM_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void SwapItem(::MXUnderCover::UCItemModel* arg)
		{
			((::System::Void(*)(::MXUnderCover::UCItemModel*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCINVENTORYMODEL_SWAPITEM_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetCategoryItemDatas(::FlatData::UnderCoverItemCategory* arg, Il2CppObject&* arg2)
		{
			return ((::System::Boolean(*)(::FlatData::UnderCoverItemCategory*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCINVENTORYMODEL_TRYGETCATEGORYITEMDATAS_OFFSET))(arg, arg2, nullptr);
		}

	};
}

