#pragma once
#include "unitysdk.h"

class UIPopupFormationCharSlot;

#define FORMATIONCHARSLOTONCLICKMESSAGE_GET_FORMATIONCHARSLOT_OFFSET UNITYSDK_OFFSET(0x24DAE80)
#define FORMATIONCHARSLOTONCLICKMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x24DAE90)

	inline static constexpr unsigned int FormationCharSlotOnClickMessage_TypeDefinitionIndex = 5978;

	class FormationCharSlotOnClickMessage : public ::TriInspector::TitleAttribute
	{
	public:
		UIPopupFormationCharSlot* _FormationCharSlot_k__BackingField; // 0x18

		UIPopupFormationCharSlot* get_FormationCharSlot()
		{
			return ((UIPopupFormationCharSlot*(*)(::PVOID))((::PBYTE)hIl2Cpp + FORMATIONCHARSLOTONCLICKMESSAGE_GET_FORMATIONCHARSLOT_OFFSET))(nullptr);
		}

		::System::Void .ctor(UIPopupFormationCharSlot* arg)
		{
			((::System::Void(*)(UIPopupFormationCharSlot*, ::PVOID))((::PBYTE)hIl2Cpp + FORMATIONCHARSLOTONCLICKMESSAGE_.CTOR_OFFSET))(arg, nullptr);
		}

	};

