#pragma once
#include "../../../unitysdk.h"

class UITexture;
class UILabel;
class MXButton;
class UIWidget;
class UIScrollView;
class UIGrid;
namespace MXField::UI::Inventory { class UIEvidenceElement; }
namespace MXField::UI::Inventory { class UIPopup_EvidenceDetail; }
namespace MXField::Shared::Data { class FieldEvidenceInfo; }

#define MXFIELD_UI_INVENTORY_UIEVIDENCEINVENTORY_ONCLICKDETAIL_OFFSET UNITYSDK_OFFSET(0xEAB700)
#define MXFIELD_UI_INVENTORY_UIEVIDENCEINVENTORY_INITELEMENTS_OFFSET UNITYSDK_OFFSET(0xEAB850)
#define MXFIELD_UI_INVENTORY_UIEVIDENCEINVENTORY_SET_ISINITIALIZED_OFFSET UNITYSDK_OFFSET(0xEABBC0)
#define MXFIELD_UI_INVENTORY_UIEVIDENCEINVENTORY_INITSCROLLWIDGETS_OFFSET UNITYSDK_OFFSET(0xEABBD0)
#define MXFIELD_UI_INVENTORY_UIEVIDENCEINVENTORY_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xEABDE0)
#define MXFIELD_UI_INVENTORY_UIEVIDENCEINVENTORY__ONCLICKDETAIL_B__24_0_OFFSET UNITYSDK_OFFSET(0xEAC270)
#define MXFIELD_UI_INVENTORY_UIEVIDENCEINVENTORY_SET_CURRENTEVIDENCE_OFFSET UNITYSDK_OFFSET(0xEAC300)
#define MXFIELD_UI_INVENTORY_UIEVIDENCEINVENTORY_.CTOR_OFFSET UNITYSDK_OFFSET(0xEAC310)
#define MXFIELD_UI_INVENTORY_UIEVIDENCEINVENTORY_GET_ISINITIALIZED_OFFSET UNITYSDK_OFFSET(0xEAC320)
#define MXFIELD_UI_INVENTORY_UIEVIDENCEINVENTORY_REFRESHEVIDENCEDISPLAY_OFFSET UNITYSDK_OFFSET(0xEAC330)
#define MXFIELD_UI_INVENTORY_UIEVIDENCEINVENTORY_SELECTEVIDENCE_OFFSET UNITYSDK_OFFSET(0xEAC5A0)
#define MXFIELD_UI_INVENTORY_UIEVIDENCEINVENTORY_REFRESHINVENTORY_OFFSET UNITYSDK_OFFSET(0xEABF30)
#define MXFIELD_UI_INVENTORY_UIEVIDENCEINVENTORY_START_OFFSET UNITYSDK_OFFSET(0xEAC6D0)
#define MXFIELD_UI_INVENTORY_UIEVIDENCEINVENTORY_GET_CURRENTEVIDENCE_OFFSET UNITYSDK_OFFSET(0xEAC7F0)

namespace MXField::UI::Inventory
{
	inline static constexpr unsigned int UIEvidenceInventory_TypeDefinitionIndex = 10779;

	class UIEvidenceInventory : public Il2CppObject
	{
	public:
		UITexture* iconTexture; // 0x18
		UILabel* nameLabel; // 0x20
		UILabel* descriptionLabel; // 0x28
		MXButton* detailButton; // 0x30
		UIWidget* detailImageFont; // 0x38
		UIScrollView* descriptionScrollView; // 0x40
		UIScrollView* scrollView; // 0x48
		UIGrid* grid; // 0x50
		Il2CppObject* groups; // 0x58
		::System::Boolean _IsInitialized_k__BackingField; // 0x60
		::MXField::UI::Inventory::UIEvidenceElement* _CurrentEvidence_k__BackingField; // 0x68

		::System::Void OnClickDetail()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_INVENTORY_UIEVIDENCEINVENTORY_ONCLICKDETAIL_OFFSET))(nullptr);
		}

		::System::Void InitElements(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_INVENTORY_UIEVIDENCEINVENTORY_INITELEMENTS_OFFSET))(arg, nullptr);
		}

		::System::Void set_IsInitialized(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_INVENTORY_UIEVIDENCEINVENTORY_SET_ISINITIALIZED_OFFSET))(arg, nullptr);
		}

		::System::Void InitScrollWidgets(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_INVENTORY_UIEVIDENCEINVENTORY_INITSCROLLWIDGETS_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_INVENTORY_UIEVIDENCEINVENTORY_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void _OnClickDetail_b__24_0(::MXField::UI::Inventory::UIPopup_EvidenceDetail* arg)
		{
			((::System::Void(*)(::MXField::UI::Inventory::UIPopup_EvidenceDetail*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_INVENTORY_UIEVIDENCEINVENTORY__ONCLICKDETAIL_B__24_0_OFFSET))(arg, nullptr);
		}

		::System::Void set_CurrentEvidence(::MXField::UI::Inventory::UIEvidenceElement* arg)
		{
			((::System::Void(*)(::MXField::UI::Inventory::UIEvidenceElement*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_INVENTORY_UIEVIDENCEINVENTORY_SET_CURRENTEVIDENCE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_INVENTORY_UIEVIDENCEINVENTORY_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean get_IsInitialized()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_INVENTORY_UIEVIDENCEINVENTORY_GET_ISINITIALIZED_OFFSET))(nullptr);
		}

		::System::Void RefreshEvidenceDisplay(::MXField::Shared::Data::FieldEvidenceInfo* arg)
		{
			((::System::Void(*)(::MXField::Shared::Data::FieldEvidenceInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_INVENTORY_UIEVIDENCEINVENTORY_REFRESHEVIDENCEDISPLAY_OFFSET))(arg, nullptr);
		}

		::System::Boolean SelectEvidence(::MXField::UI::Inventory::UIEvidenceElement* arg)
		{
			return ((::System::Boolean(*)(::MXField::UI::Inventory::UIEvidenceElement*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_INVENTORY_UIEVIDENCEINVENTORY_SELECTEVIDENCE_OFFSET))(arg, nullptr);
		}

		::System::Void RefreshInventory()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_INVENTORY_UIEVIDENCEINVENTORY_REFRESHINVENTORY_OFFSET))(nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_INVENTORY_UIEVIDENCEINVENTORY_START_OFFSET))(nullptr);
		}

		::MXField::UI::Inventory::UIEvidenceElement* get_CurrentEvidence()
		{
			return ((::MXField::UI::Inventory::UIEvidenceElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_INVENTORY_UIEVIDENCEINVENTORY_GET_CURRENTEVIDENCE_OFFSET))(nullptr);
		}

	};
}

