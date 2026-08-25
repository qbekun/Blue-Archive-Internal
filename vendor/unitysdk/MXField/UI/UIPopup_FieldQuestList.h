#pragma once
#include "../../unitysdk.h"

class MXButton;
class UIGrid;
class UILabel;
namespace MXField::Quest { class FieldQuestStatus; }

#define MXFIELD_UI_UIPOPUP_FIELDQUESTLIST_START_OFFSET UNITYSDK_OFFSET(0xEA8D60)
#define MXFIELD_UI_UIPOPUP_FIELDQUESTLIST_REFRESHDETAIL_OFFSET UNITYSDK_OFFSET(0xEA8E80)
#define MXFIELD_UI_UIPOPUP_FIELDQUESTLIST_ONOPENED_OFFSET UNITYSDK_OFFSET(0xEA90B0)
#define MXFIELD_UI_UIPOPUP_FIELDQUESTLIST_.CTOR_OFFSET UNITYSDK_OFFSET(0xEA9540)

namespace MXField::UI
{
	inline static constexpr unsigned int UIPopup_FieldQuestList_TypeDefinitionIndex = 10766;

	class UIPopup_FieldQuestList : public Il2CppObject
	{
	public:
		MXButton* closeButton; // 0xE8
		UIGrid* grid; // 0xF0
		UILabel* detailLabel; // 0xF8
		Il2CppObject* questElements; // 0x100

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIPOPUP_FIELDQUESTLIST_START_OFFSET))(nullptr);
		}

		::System::Void RefreshDetail(::MXField::Quest::FieldQuestStatus* arg)
		{
			((::System::Void(*)(::MXField::Quest::FieldQuestStatus*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIPOPUP_FIELDQUESTLIST_REFRESHDETAIL_OFFSET))(arg, nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIPOPUP_FIELDQUESTLIST_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIPOPUP_FIELDQUESTLIST_.CTOR_OFFSET))(nullptr);
		}

	};
}

