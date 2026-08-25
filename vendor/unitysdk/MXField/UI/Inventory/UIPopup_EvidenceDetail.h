#pragma once
#include "../../../unitysdk.h"

class UILabel;
namespace MXField::Shared::Data { class FieldEvidenceInfo; }

#define MXFIELD_UI_INVENTORY_UIPOPUP_EVIDENCEDETAIL_SETDATA_OFFSET UNITYSDK_OFFSET(0xEAC2C0)
#define MXFIELD_UI_INVENTORY_UIPOPUP_EVIDENCEDETAIL_.CTOR_OFFSET UNITYSDK_OFFSET(0xEAF3A0)

namespace MXField::UI::Inventory
{
	inline static constexpr unsigned int UIPopup_EvidenceDetail_TypeDefinitionIndex = 10789;

	class UIPopup_EvidenceDetail : public Il2CppObject
	{
	public:
		UILabel* detailLabel; // 0xE8

		::System::Void SetData(::MXField::Shared::Data::FieldEvidenceInfo* arg)
		{
			((::System::Void(*)(::MXField::Shared::Data::FieldEvidenceInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_INVENTORY_UIPOPUP_EVIDENCEDETAIL_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_INVENTORY_UIPOPUP_EVIDENCEDETAIL_.CTOR_OFFSET))(nullptr);
		}

	};
}

