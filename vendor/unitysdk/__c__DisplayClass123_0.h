#pragma once
#include "unitysdk.h"

namespace MX::Data { class LocalizeData; }
class TutorialTask;
class UIPopup_System;

#define <>C__DISPLAYCLASS123_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x2041AA0)
#define <>C__DISPLAYCLASS123_0__NEXT_B__0_OFFSET UNITYSDK_OFFSET(0x2043450)

	inline static constexpr unsigned int <>c__DisplayClass123_0_TypeDefinitionIndex = 3251;

	class <>c__DisplayClass123_0 : public Il2CppObject
	{
	public:
		::MX::Data::LocalizeData* data; // 0x10
		TutorialTask* __4__this; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS123_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _Next_b__0(UIPopup_System* arg)
		{
			((::System::Void(*)(UIPopup_System*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS123_0__NEXT_B__0_OFFSET))(arg, nullptr);
		}

	};

