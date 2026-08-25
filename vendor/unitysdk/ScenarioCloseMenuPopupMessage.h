#pragma once
#include "unitysdk.h"

#define SCENARIOCLOSEMENUPOPUPMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x27E03F0)

	inline static constexpr unsigned int ScenarioCloseMenuPopupMessage_TypeDefinitionIndex = 7661;

	class ScenarioCloseMenuPopupMessage : public ::TriInspector::TitleAttribute
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOCLOSEMENUPOPUPMESSAGE_.CTOR_OFFSET))(nullptr);
		}

	};

