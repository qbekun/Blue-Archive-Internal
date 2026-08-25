#pragma once
#include "../../../unitysdk.h"

class UIScrollView;
class UIGrid;
class UICenterOnChild;
namespace MXField::UI::Inventory { class UIKeywordElementGroup; }
class UILabel;
namespace UnityEngine { class GameObject; }
namespace MXField::UI::Inventory { class UIKeywordElement; }
namespace MXField::Shared::Data { class FieldKeywordInfo; }

#define MXFIELD_UI_INVENTORY_UIKEYWORDINVENTORY_CREATESINGLEGROUP_OFFSET UNITYSDK_OFFSET(0xEAD940)
#define MXFIELD_UI_INVENTORY_UIKEYWORDINVENTORY_REFRESHKEYWORDDISPLAY_OFFSET UNITYSDK_OFFSET(0xEADB20)
#define MXFIELD_UI_INVENTORY_UIKEYWORDINVENTORY_GET_GROUPTOCENTERON_OFFSET UNITYSDK_OFFSET(0xEADDA0)
#define MXFIELD_UI_INVENTORY_UIKEYWORDINVENTORY_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xEADDB0)
#define MXFIELD_UI_INVENTORY_UIKEYWORDINVENTORY_SETCURRENTKEYWORD_OFFSET UNITYSDK_OFFSET(0xEAD260)
#define MXFIELD_UI_INVENTORY_UIKEYWORDINVENTORY_SET_GROUPTOCENTERON_OFFSET UNITYSDK_OFFSET(0xEAE6A0)
#define MXFIELD_UI_INVENTORY_UIKEYWORDINVENTORY_.CTOR_OFFSET UNITYSDK_OFFSET(0xEAE6B0)
#define MXFIELD_UI_INVENTORY_UIKEYWORDINVENTORY_SET_CURRENTKEYWORD_OFFSET UNITYSDK_OFFSET(0xEAE6C0)
#define MXFIELD_UI_INVENTORY_UIKEYWORDINVENTORY_INITIALIZESINGLEGROUP_OFFSET UNITYSDK_OFFSET(0xEAE6D0)
#define MXFIELD_UI_INVENTORY_UIKEYWORDINVENTORY_ONOPENED_OFFSET UNITYSDK_OFFSET(0xEAEBF0)
#define MXFIELD_UI_INVENTORY_UIKEYWORDINVENTORY_CREATEGROUP_OFFSET UNITYSDK_OFFSET(0xEAECF0)
#define MXFIELD_UI_INVENTORY_UIKEYWORDINVENTORY_GET_CURRENTKEYWORD_OFFSET UNITYSDK_OFFSET(0xEAF1C0)

namespace MXField::UI::Inventory
{
	inline static constexpr unsigned int UIKeywordInventory_TypeDefinitionIndex = 10788;

	class UIKeywordInventory : public Il2CppObject
	{
	public:
		UIScrollView* scrollView; // 0x18
		UIGrid* grid; // 0x20
		UICenterOnChild* centerOnChild; // 0x28
		::MXField::UI::Inventory::UIKeywordElementGroup* groupPrefab; // 0x30
		Il2CppObject* groups; // 0x38
		UILabel* nameLabel; // 0x40
		::UnityEngine::GameObject* nameLabelTag; // 0x48
		UILabel* unknownLabel; // 0x50
		UILabel* descriptionLabel; // 0x58
		UIScrollView* descriptionScrollView; // 0x60
		::MXField::UI::Inventory::UIKeywordElement* _CurrentKeyword_k__BackingField; // 0x68
		::MXField::UI::Inventory::UIKeywordElementGroup* _GroupToCenterOn_k__BackingField; // 0x70

		::System::Void CreateSingleGroup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_INVENTORY_UIKEYWORDINVENTORY_CREATESINGLEGROUP_OFFSET))(nullptr);
		}

		::System::Void RefreshKeywordDisplay(::MXField::Shared::Data::FieldKeywordInfo* arg)
		{
			((::System::Void(*)(::MXField::Shared::Data::FieldKeywordInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_INVENTORY_UIKEYWORDINVENTORY_REFRESHKEYWORDDISPLAY_OFFSET))(arg, nullptr);
		}

		::MXField::UI::Inventory::UIKeywordElementGroup* get_GroupToCenterOn()
		{
			return ((::MXField::UI::Inventory::UIKeywordElementGroup*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_INVENTORY_UIKEYWORDINVENTORY_GET_GROUPTOCENTERON_OFFSET))(nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_INVENTORY_UIKEYWORDINVENTORY_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void SetCurrentKeyword(::MXField::UI::Inventory::UIKeywordElement* arg)
		{
			((::System::Void(*)(::MXField::UI::Inventory::UIKeywordElement*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_INVENTORY_UIKEYWORDINVENTORY_SETCURRENTKEYWORD_OFFSET))(arg, nullptr);
		}

		::System::Void set_GroupToCenterOn(::MXField::UI::Inventory::UIKeywordElementGroup* arg)
		{
			((::System::Void(*)(::MXField::UI::Inventory::UIKeywordElementGroup*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_INVENTORY_UIKEYWORDINVENTORY_SET_GROUPTOCENTERON_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_INVENTORY_UIKEYWORDINVENTORY_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_CurrentKeyword(::MXField::UI::Inventory::UIKeywordElement* arg)
		{
			((::System::Void(*)(::MXField::UI::Inventory::UIKeywordElement*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_INVENTORY_UIKEYWORDINVENTORY_SET_CURRENTKEYWORD_OFFSET))(arg, nullptr);
		}

		::System::Void InitializeSingleGroup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_INVENTORY_UIKEYWORDINVENTORY_INITIALIZESINGLEGROUP_OFFSET))(nullptr);
		}

		::System::Void OnOpened()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_INVENTORY_UIKEYWORDINVENTORY_ONOPENED_OFFSET))(nullptr);
		}

		::System::Void CreateGroup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_INVENTORY_UIKEYWORDINVENTORY_CREATEGROUP_OFFSET))(nullptr);
		}

		::MXField::UI::Inventory::UIKeywordElement* get_CurrentKeyword()
		{
			return ((::MXField::UI::Inventory::UIKeywordElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_INVENTORY_UIKEYWORDINVENTORY_GET_CURRENTKEYWORD_OFFSET))(nullptr);
		}

	};
}

