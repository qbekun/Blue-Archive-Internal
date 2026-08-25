#pragma once
#include "unitysdk.h"

class UIPopup_System;

#define <>C__DISPLAYCLASS178_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x268FF80)
#define <>C__DISPLAYCLASS178_0__OPENMESSAGEPOPUP_B__0_OFFSET UNITYSDK_OFFSET(0x2694C20)

	inline static constexpr unsigned int <>c__DisplayClass178_0_TypeDefinitionIndex = 6799;

	class <>c__DisplayClass178_0 : public Il2CppObject
	{
	public:
		::System::String* key; // 0x10
		::Il2CppArray<::System::Object*>* messageArgs; // 0x18
		::System::Action* okCallback; // 0x20
		::System::Action* cancelCallback; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS178_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _OpenMessagePopup_b__0(UIPopup_System* arg)
		{
			((::System::Void(*)(UIPopup_System*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS178_0__OPENMESSAGEPOPUP_B__0_OFFSET))(arg, nullptr);
		}

	};

