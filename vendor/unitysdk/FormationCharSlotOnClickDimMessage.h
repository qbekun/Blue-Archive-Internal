#pragma once
#include "unitysdk.h"

class UIPopupFormationCharSlot;

#define FORMATIONCHARSLOTONCLICKDIMMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x24DAE40)
#define FORMATIONCHARSLOTONCLICKDIMMESSAGE_GET_FORMATIONCHARSLOT_OFFSET UNITYSDK_OFFSET(0x24DAE70)

	inline static constexpr unsigned int FormationCharSlotOnClickDimMessage_TypeDefinitionIndex = 5977;

	class FormationCharSlotOnClickDimMessage : public ::TriInspector::TitleAttribute
	{
	public:
		UIPopupFormationCharSlot* _FormationCharSlot_k__BackingField; // 0x18

		::System::Void .ctor(UIPopupFormationCharSlot* arg)
		{
			((::System::Void(*)(UIPopupFormationCharSlot*, ::PVOID))((::PBYTE)hIl2Cpp + FORMATIONCHARSLOTONCLICKDIMMESSAGE_.CTOR_OFFSET))(arg, nullptr);
		}

		UIPopupFormationCharSlot* get_FormationCharSlot()
		{
			return ((UIPopupFormationCharSlot*(*)(::PVOID))((::PBYTE)hIl2Cpp + FORMATIONCHARSLOTONCLICKDIMMESSAGE_GET_FORMATIONCHARSLOT_OFFSET))(nullptr);
		}

	};

