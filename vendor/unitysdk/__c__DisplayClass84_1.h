#pragma once
#include "unitysdk.h"

namespace NPA::Ex::Steam { class NXPLoadItemDefinitionsCallbackInfo; }

#define <>C__DISPLAYCLASS84_1_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D2AD70)
#define <>C__DISPLAYCLASS84_1__ONSTEAMINVENTORYRESULTREADY_B__0_OFFSET UNITYSDK_OFFSET(0x9D2AD80)

	inline static constexpr unsigned int <>c__DisplayClass84_1_TypeDefinitionIndex = 26027;

	class <>c__DisplayClass84_1 : public Il2CppObject
	{
	public:
		::NPA::Ex::Steam::NXPLoadItemDefinitionsCallbackInfo* loadItemDefinitionsCallbackInfo; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS84_1_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _OnSteamInventoryResultReady_b__0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS84_1__ONSTEAMINVENTORYRESULTREADY_B__0_OFFSET))(nullptr);
		}

	};

