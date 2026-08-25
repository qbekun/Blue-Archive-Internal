#pragma once
#include "unitysdk.h"

class UIPopup_System_InteractiveWorldRaid;

#define <>C__DISPLAYCLASS80_1_.CTOR_OFFSET UNITYSDK_OFFSET(0x2621C90)
#define <>C__DISPLAYCLASS80_1__HANDLEEVENTCONTENTSHOPLISTRESPONSEMESSAGE_B__1_OFFSET UNITYSDK_OFFSET(0x2621CA0)

	inline static constexpr unsigned int <>c__DisplayClass80_1_TypeDefinitionIndex = 6529;

	class <>c__DisplayClass80_1 : public Il2CppObject
	{
	public:
		::System::String* localizeMessage; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS80_1_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _HandleEventContentShopListResponseMessage_b__1(UIPopup_System_InteractiveWorldRaid* arg)
		{
			((::System::Void(*)(UIPopup_System_InteractiveWorldRaid*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS80_1__HANDLEEVENTCONTENTSHOPLISTRESPONSEMESSAGE_B__1_OFFSET))(arg, nullptr);
		}

	};

