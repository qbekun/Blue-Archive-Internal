#pragma once
#include "unitysdk.h"

#define WIDGETTOFULLSCREENLOGO_.CTOR_OFFSET UNITYSDK_OFFSET(0xCDB1E0)
#define WIDGETTOFULLSCREENLOGO_REFRESH_OFFSET UNITYSDK_OFFSET(0xCDB1F0)

	inline static constexpr unsigned int WidgetToFullscreenLogo_TypeDefinitionIndex = 9165;

	class WidgetToFullscreenLogo : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WIDGETTOFULLSCREENLOGO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Refresh()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WIDGETTOFULLSCREENLOGO_REFRESH_OFFSET))(nullptr);
		}

	};

