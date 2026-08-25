#pragma once
#include "unitysdk.h"

namespace NPA::Social { class NXPToyAchievement; }

#define <>C__DISPLAYCLASS154_0_.CTOR_OFFSET UNITYSDK_OFFSET(0xC722B0)
#define <>C__DISPLAYCLASS154_0__SYNCGAMECENTERACHIEVEMENT_B__0_OFFSET UNITYSDK_OFFSET(0xC722C0)

	inline static constexpr unsigned int <>c__DisplayClass154_0_TypeDefinitionIndex = 8999;

	class <>c__DisplayClass154_0 : public Il2CppObject
	{
	public:
		::System::String* achievementId; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS154_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _SyncGameCenterAchievement_b__0(::NPA::Social::NXPToyAchievement* arg)
		{
			return ((::System::Boolean(*)(::NPA::Social::NXPToyAchievement*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS154_0__SYNCGAMECENTERACHIEVEMENT_B__0_OFFSET))(arg, nullptr);
		}

	};

