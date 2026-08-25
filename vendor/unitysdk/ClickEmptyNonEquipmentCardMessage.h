#pragma once
#include "unitysdk.h"

#define CLICKEMPTYNONEQUIPMENTCARDMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x26B34C0)

	inline static constexpr unsigned int ClickEmptyNonEquipmentCardMessage_TypeDefinitionIndex = 6901;

	class ClickEmptyNonEquipmentCardMessage : public ::TriInspector::TitleAttribute
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLICKEMPTYNONEQUIPMENTCARDMESSAGE_.CTOR_OFFSET))(nullptr);
		}

	};

