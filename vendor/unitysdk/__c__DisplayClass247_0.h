#pragma once
#include "unitysdk.h"

class CharacterVisual;
class UITimelinePlayer;

#define <>C__DISPLAYCLASS247_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x1209B30)
#define <>C__DISPLAYCLASS247_0__PLAYOPTIMELINE_B__0_OFFSET UNITYSDK_OFFSET(0x1209B40)

	inline static constexpr unsigned int <>c__DisplayClass247_0_TypeDefinitionIndex = 964;

	class <>c__DisplayClass247_0 : public Il2CppObject
	{
	public:
		CharacterVisual* __4__this; // 0x10
		::System::Action* callBack; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS247_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _PlayOPTimeLine_b__0(UITimelinePlayer* arg)
		{
			((::System::Void(*)(UITimelinePlayer*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS247_0__PLAYOPTIMELINE_B__0_OFFSET))(arg, nullptr);
		}

	};

