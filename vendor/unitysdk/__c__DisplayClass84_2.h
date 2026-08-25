#pragma once
#include "unitysdk.h"

namespace NPA::Ex::Steam { class NXPGetAllItemsCallbackInfo; }

#define <>C__DISPLAYCLASS84_2_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D2ADE0)
#define <>C__DISPLAYCLASS84_2__ONSTEAMINVENTORYRESULTREADY_B__1_OFFSET UNITYSDK_OFFSET(0x9D2ADF0)

	inline static constexpr unsigned int <>c__DisplayClass84_2_TypeDefinitionIndex = 26028;

	class <>c__DisplayClass84_2 : public Il2CppObject
	{
	public:
		::NPA::Ex::Steam::NXPGetAllItemsCallbackInfo* getAllItemCallbackInfo; // 0x10
		<>c__DisplayClass84_0* CS$__8__locals1; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS84_2_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _OnSteamInventoryResultReady_b__1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS84_2__ONSTEAMINVENTORYRESULTREADY_B__1_OFFSET))(nullptr);
		}

	};

