#pragma once
#include "unitysdk.h"

class ItemObject;
class UIPopup_System;

#define <>C__DISPLAYCLASS8_4_.CTOR_OFFSET UNITYSDK_OFFSET(0x25BDA40)
#define <>C__DISPLAYCLASS8_4__ONCLICKUSE_B__8_OFFSET UNITYSDK_OFFSET(0x25BDD00)

	inline static constexpr unsigned int <>c__DisplayClass8_4_TypeDefinitionIndex = 6281;

	class <>c__DisplayClass8_4 : public Il2CppObject
	{
	public:
		ItemObject* item; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS8_4_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _OnClickUse_b__8(UIPopup_System* arg)
		{
			((::System::Void(*)(UIPopup_System*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS8_4__ONCLICKUSE_B__8_OFFSET))(arg, nullptr);
		}

	};

