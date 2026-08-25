#pragma once
#include "unitysdk.h"

#define INTERACTIVEWORLDRAIDPATH_GETSTARTPOINT_OFFSET UNITYSDK_OFFSET(0x25A21A0)
#define INTERACTIVEWORLDRAIDPATH_.CTOR_OFFSET UNITYSDK_OFFSET(0x25A58E0)

	inline static constexpr unsigned int InteractiveWorldRaidPath_TypeDefinitionIndex = 339;

	class InteractiveWorldRaidPath : public ::NPA::Editor::Auth::View::NXPAccountLinkPickerItemView
	{
	public:
		::System::Single handleSize; // 0x20

		Il2CppObject* GetStartPoint()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDPATH_GETSTARTPOINT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDPATH_.CTOR_OFFSET))(nullptr);
		}

	};

