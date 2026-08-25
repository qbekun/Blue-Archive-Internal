#pragma once
#include "unitysdk.h"

class FeedItemData;

#define <>C__DISPLAYCLASS56_1_.CTOR_OFFSET UNITYSDK_OFFSET(0xADFA00)
#define <>C__DISPLAYCLASS56_1__SETUI_B__8_OFFSET UNITYSDK_OFFSET(0xAE53D0)

	inline static constexpr unsigned int <>c__DisplayClass56_1_TypeDefinitionIndex = 8085;

	class <>c__DisplayClass56_1 : public Il2CppObject
	{
	public:
		Il2CppObject* newPosts; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS56_1_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _SetUI_b__8(FeedItemData* arg)
		{
			return ((::System::Boolean(*)(FeedItemData*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS56_1__SETUI_B__8_OFFSET))(arg, nullptr);
		}

	};

