#pragma once
#include "unitysdk.h"

#define UICHARACTERFILTERALLTABCONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0xAEF1F0)
#define UICHARACTERFILTERALLTABCONTROLLER_GET_ISMULTISELECT_OFFSET UNITYSDK_OFFSET(0xAEF200)

	inline static constexpr unsigned int UICharacterFilterAllTabController_TypeDefinitionIndex = 8116;

	class UICharacterFilterAllTabController : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERFILTERALLTABCONTROLLER_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean get_IsMultiSelect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERFILTERALLTABCONTROLLER_GET_ISMULTISELECT_OFFSET))(nullptr);
		}

	};

