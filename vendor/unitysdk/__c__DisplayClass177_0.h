#pragma once
#include "unitysdk.h"

class UIPopup_System;

#define <>C__DISPLAYCLASS177_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x268FE40)
#define <>C__DISPLAYCLASS177_0__OPENMESSAGEPOPUP_B__0_OFFSET UNITYSDK_OFFSET(0x2694BE0)

	inline static constexpr unsigned int <>c__DisplayClass177_0_TypeDefinitionIndex = 6798;

	class <>c__DisplayClass177_0 : public Il2CppObject
	{
	public:
		::System::String* key; // 0x10
		::Il2CppArray<::System::Object*>* messageArgs; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS177_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _OpenMessagePopup_b__0(UIPopup_System* arg)
		{
			((::System::Void(*)(UIPopup_System*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS177_0__OPENMESSAGEPOPUP_B__0_OFFSET))(arg, nullptr);
		}

	};

