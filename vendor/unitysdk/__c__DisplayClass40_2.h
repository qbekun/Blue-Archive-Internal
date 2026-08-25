#pragma once
#include "unitysdk.h"

class UIPopup_System;

#define <>C__DISPLAYCLASS40_2_.CTOR_OFFSET UNITYSDK_OFFSET(0xC05210)
#define <>C__DISPLAYCLASS40_2__COAUTOSYNCLOBBY_B__1_OFFSET UNITYSDK_OFFSET(0xC05220)

	inline static constexpr unsigned int <>c__DisplayClass40_2_TypeDefinitionIndex = 8786;

	class <>c__DisplayClass40_2 : public Il2CppObject
	{
	public:
		::System::String* message; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS40_2_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _CoAutoSyncLobby_b__1(UIPopup_System* arg)
		{
			((::System::Void(*)(UIPopup_System*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS40_2__COAUTOSYNCLOBBY_B__1_OFFSET))(arg, nullptr);
		}

	};

