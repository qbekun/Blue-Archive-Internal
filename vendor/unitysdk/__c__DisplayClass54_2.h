#pragma once
#include "unitysdk.h"

namespace MX::GameLogic::DBModel { class EventContentTreasureCell; }
class UITreasureObject;

#define <>C__DISPLAYCLASS54_2_.CTOR_OFFSET UNITYSDK_OFFSET(0x24CBC30)
#define <>C__DISPLAYCLASS54_2__FLIPTREASUREOBJECTS_B__1_OFFSET UNITYSDK_OFFSET(0x24CBC40)

	inline static constexpr unsigned int <>c__DisplayClass54_2_TypeDefinitionIndex = 5919;

	class <>c__DisplayClass54_2 : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::EventContentTreasureCell* hintCell; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS54_2_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _FlipTreasureObjects_b__1(UITreasureObject* arg)
		{
			return ((::System::Boolean(*)(UITreasureObject*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS54_2__FLIPTREASUREOBJECTS_B__1_OFFSET))(arg, nullptr);
		}

	};

