#pragma once
#include "unitysdk.h"

namespace MX::Data { class EventContentSeasonInfo; }
class <>c__DisplayClass60_1;
class UISpecialOperationLobby;
class UIEventLobby;

#define <>C__DISPLAYCLASS60_2_.CTOR_OFFSET UNITYSDK_OFFSET(0x26D4190)
#define <>C__DISPLAYCLASS60_2__COEXIT_B__4_OFFSET UNITYSDK_OFFSET(0x26D41A0)
#define <>C__DISPLAYCLASS60_2__COEXIT_B__5_OFFSET UNITYSDK_OFFSET(0x26D42B0)

	inline static constexpr unsigned int <>c__DisplayClass60_2_TypeDefinitionIndex = 7021;

	class <>c__DisplayClass60_2 : public Il2CppObject
	{
	public:
		::MX::Data::EventContentSeasonInfo* seasonInfo; // 0x10
		<>c__DisplayClass60_1* CS$__8__locals2; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS60_2_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _CoExit_b__4(UISpecialOperationLobby* arg)
		{
			((::System::Void(*)(UISpecialOperationLobby*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS60_2__COEXIT_B__4_OFFSET))(arg, nullptr);
		}

		::System::Void _CoExit_b__5(UIEventLobby* arg)
		{
			((::System::Void(*)(UIEventLobby*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS60_2__COEXIT_B__5_OFFSET))(arg, nullptr);
		}

	};

