#pragma once
#include "../../../unitysdk.h"

namespace MXField::Shared::Data { class FieldEvidenceInfo; }
namespace MXField::UI::Inventory { class UIEvidenceElement; }

#define MXFIELD_UI_INVENTORY_UIEVIDENCEELEMENTGROUP_TRYGETFIRSTEVIDENCE_OFFSET UNITYSDK_OFFSET(0xEAB0C0)
#define MXFIELD_UI_INVENTORY_UIEVIDENCEELEMENTGROUP_GET_ELEMENTCOUNT_OFFSET UNITYSDK_OFFSET(0xEAB230)
#define MXFIELD_UI_INVENTORY_UIEVIDENCEELEMENTGROUP_SETDATA_OFFSET UNITYSDK_OFFSET(0xEAB250)
#define MXFIELD_UI_INVENTORY_UIEVIDENCEELEMENTGROUP_GET_ISFULL_OFFSET UNITYSDK_OFFSET(0xEAB400)
#define MXFIELD_UI_INVENTORY_UIEVIDENCEELEMENTGROUP_GET_ITEM_OFFSET UNITYSDK_OFFSET(0xEAB450)
#define MXFIELD_UI_INVENTORY_UIEVIDENCEELEMENTGROUP_INACTIVEEMPTYELEMENTS_OFFSET UNITYSDK_OFFSET(0xEAB480)
#define MXFIELD_UI_INVENTORY_UIEVIDENCEELEMENTGROUP_REFRESH_OFFSET UNITYSDK_OFFSET(0xEAB510)
#define MXFIELD_UI_INVENTORY_UIEVIDENCEELEMENTGROUP_.CTOR_OFFSET UNITYSDK_OFFSET(0xEAB5D0)

namespace MXField::UI::Inventory
{
	inline static constexpr unsigned int UIEvidenceElementGroup_TypeDefinitionIndex = 10778;

	class UIEvidenceElementGroup : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* elements; // 0x18
		Il2CppObject* evidenceInfos; // 0x20

		::System::Boolean TryGetFirstEvidence(::MXField::UI::Inventory::UIEvidenceElement&* arg)
		{
			return ((::System::Boolean(*)(::MXField::UI::Inventory::UIEvidenceElement&*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_INVENTORY_UIEVIDENCEELEMENTGROUP_TRYGETFIRSTEVIDENCE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ElementCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_INVENTORY_UIEVIDENCEELEMENTGROUP_GET_ELEMENTCOUNT_OFFSET))(nullptr);
		}

		::System::Void SetData(::MXField::Shared::Data::FieldEvidenceInfo* arg)
		{
			((::System::Void(*)(::MXField::Shared::Data::FieldEvidenceInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_INVENTORY_UIEVIDENCEELEMENTGROUP_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsFull()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_INVENTORY_UIEVIDENCEELEMENTGROUP_GET_ISFULL_OFFSET))(nullptr);
		}

		::MXField::UI::Inventory::UIEvidenceElement* get_Item(::System::Int32 arg)
		{
			return ((::MXField::UI::Inventory::UIEvidenceElement*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_INVENTORY_UIEVIDENCEELEMENTGROUP_GET_ITEM_OFFSET))(arg, nullptr);
		}

		::System::Void InactiveEmptyElements()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_INVENTORY_UIEVIDENCEELEMENTGROUP_INACTIVEEMPTYELEMENTS_OFFSET))(nullptr);
		}

		::System::Void Refresh()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_INVENTORY_UIEVIDENCEELEMENTGROUP_REFRESH_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_INVENTORY_UIEVIDENCEELEMENTGROUP_.CTOR_OFFSET))(nullptr);
		}

	};
}

