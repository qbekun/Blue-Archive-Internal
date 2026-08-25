#pragma once
#include "unitysdk.h"

namespace MX::Data { class EventContentSeasonInfo; }
class UISpecialOperationLobby;
class UIEventLobby;

#define <>C__DISPLAYCLASS13_1_.CTOR_OFFSET UNITYSDK_OFFSET(0xBA75B0)
#define <>C__DISPLAYCLASS13_1__HANDLECLOSE_B__7_OFFSET UNITYSDK_OFFSET(0xBA80D0)
#define <>C__DISPLAYCLASS13_1__HANDLECLOSE_B__8_OFFSET UNITYSDK_OFFSET(0xBA8250)

	inline static constexpr unsigned int <>c__DisplayClass13_1_TypeDefinitionIndex = 8548;

	class <>c__DisplayClass13_1 : public Il2CppObject
	{
	public:
		::MX::Data::EventContentSeasonInfo* seasonInfo; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS13_1_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _HandleClose_b__7(UISpecialOperationLobby* arg)
		{
			((::System::Void(*)(UISpecialOperationLobby*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS13_1__HANDLECLOSE_B__7_OFFSET))(arg, nullptr);
		}

		::System::Void _HandleClose_b__8(UIEventLobby* arg)
		{
			((::System::Void(*)(UIEventLobby*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS13_1__HANDLECLOSE_B__8_OFFSET))(arg, nullptr);
		}

	};

