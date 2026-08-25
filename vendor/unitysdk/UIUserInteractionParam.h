#pragma once
#include "unitysdk.h"

class UIType;
class TouchSquareParam;
class SlideRailParam;

#define UIUSERINTERACTIONPARAM_.CTOR_OFFSET UNITYSDK_OFFSET(0xB84960)

	inline static constexpr unsigned int UIUserInteractionParam_TypeDefinitionIndex = 8535;

	class UIUserInteractionParam : public Il2CppObject
	{
	public:
		::System::String* HELP_POSITION; // 0x0
		::System::String* HELP_SIZE; // 0x0
		UIType* interactionUIType; // 0x10
		TouchSquareParam* TouchSquare; // 0x14
		SlideRailParam* SlideRail; // 0x24

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIUSERINTERACTIONPARAM_.CTOR_OFFSET))(nullptr);
		}

	};

