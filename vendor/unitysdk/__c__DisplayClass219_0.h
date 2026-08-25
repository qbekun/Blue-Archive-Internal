#pragma once
#include "unitysdk.h"

namespace MX::Data { class EventContentSeasonInfo; }
class UIConquest;

#define <>C__DISPLAYCLASS219_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x2353410)
#define <>C__DISPLAYCLASS219_0__CLOSEANDREOPENUICONQUEST_B__0_OFFSET UNITYSDK_OFFSET(0x23628B0)
#define <>C__DISPLAYCLASS219_0__CLOSEANDREOPENUICONQUEST_B__1_OFFSET UNITYSDK_OFFSET(0x2362A20)

	inline static constexpr unsigned int <>c__DisplayClass219_0_TypeDefinitionIndex = 5047;

	class <>c__DisplayClass219_0 : public Il2CppObject
	{
	public:
		::MX::Data::EventContentSeasonInfo* seasonInfo; // 0x10
		Il2CppObject* __9__1; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS219_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _CloseAndReopenUIConquest_b__0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS219_0__CLOSEANDREOPENUICONQUEST_B__0_OFFSET))(nullptr);
		}

		::System::Void _CloseAndReopenUIConquest_b__1(UIConquest* arg)
		{
			((::System::Void(*)(UIConquest*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS219_0__CLOSEANDREOPENUICONQUEST_B__1_OFFSET))(arg, nullptr);
		}

	};

