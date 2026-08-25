#pragma once
#include "unitysdk.h"

namespace NPA::Social { class NXPToyAchievement; }

#define <>C__DISPLAYCLASS155_0_.CTOR_OFFSET UNITYSDK_OFFSET(0xC722F0)
#define <>C__DISPLAYCLASS155_0__SYNCGAMECENTERINCREMENTACHIEVEMENT_B__0_OFFSET UNITYSDK_OFFSET(0xC72300)

	inline static constexpr unsigned int <>c__DisplayClass155_0_TypeDefinitionIndex = 9000;

	class <>c__DisplayClass155_0 : public Il2CppObject
	{
	public:
		::System::String* achievementId; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS155_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _SyncGameCenterIncrementAchievement_b__0(::NPA::Social::NXPToyAchievement* arg)
		{
			return ((::System::Boolean(*)(::NPA::Social::NXPToyAchievement*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS155_0__SYNCGAMECENTERINCREMENTACHIEVEMENT_B__0_OFFSET))(arg, nullptr);
		}

	};

