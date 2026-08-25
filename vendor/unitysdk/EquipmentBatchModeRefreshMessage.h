#pragma once
#include "unitysdk.h"

#define EQUIPMENTBATCHMODEREFRESHMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x23F6610)

	inline static constexpr unsigned int EquipmentBatchModeRefreshMessage_TypeDefinitionIndex = 5428;

	class EquipmentBatchModeRefreshMessage : public ::TriInspector::TitleAttribute
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EQUIPMENTBATCHMODEREFRESHMESSAGE_.CTOR_OFFSET))(nullptr);
		}

	};

