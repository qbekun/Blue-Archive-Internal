#pragma once
#include "unitysdk.h"

#define UIEVENTREWARDSCROLLCONTROLLER_AWAKE_OFFSET UNITYSDK_OFFSET(0x245F350)
#define UIEVENTREWARDSCROLLCONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x245F550)

	inline static constexpr unsigned int UIEventRewardScrollController_TypeDefinitionIndex = 5595;

	class UIEventRewardScrollController : public ::System::Xml::DomNameTable
	{
	public:
		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTREWARDSCROLLCONTROLLER_AWAKE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTREWARDSCROLLCONTROLLER_.CTOR_OFFSET))(nullptr);
		}

	};

