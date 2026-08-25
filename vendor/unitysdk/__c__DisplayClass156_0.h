#pragma once
#include "unitysdk.h"

namespace NPA::Social { class NXPToyAchievement; }

#define <>C__DISPLAYCLASS156_0_.CTOR_OFFSET UNITYSDK_OFFSET(0xC72330)
#define <>C__DISPLAYCLASS156_0__SYNCGAMECENTERUNLOCKACHIEVEMENT_B__0_OFFSET UNITYSDK_OFFSET(0xC72340)

	inline static constexpr unsigned int <>c__DisplayClass156_0_TypeDefinitionIndex = 9001;

	class <>c__DisplayClass156_0 : public Il2CppObject
	{
	public:
		::System::String* achievementId; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS156_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _SyncGameCenterUnlockAchievement_b__0(::NPA::Social::NXPToyAchievement* arg)
		{
			return ((::System::Boolean(*)(::NPA::Social::NXPToyAchievement*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS156_0__SYNCGAMECENTERUNLOCKACHIEVEMENT_B__0_OFFSET))(arg, nullptr);
		}

	};

