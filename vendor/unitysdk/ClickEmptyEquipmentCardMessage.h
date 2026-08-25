#pragma once
#include "unitysdk.h"

#define CLICKEMPTYEQUIPMENTCARDMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x24163D0)

	inline static constexpr unsigned int ClickEmptyEquipmentCardMessage_TypeDefinitionIndex = 5473;

	class ClickEmptyEquipmentCardMessage : public ::TriInspector::TitleAttribute
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLICKEMPTYEQUIPMENTCARDMESSAGE_.CTOR_OFFSET))(nullptr);
		}

	};

