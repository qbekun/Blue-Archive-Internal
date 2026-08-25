#pragma once
#include "unitysdk.h"

namespace MX::GameLogic::DBModel { class EventContentTreasureCell; }
class UITreasureObject;

#define <>C__DISPLAYCLASS53_4_.CTOR_OFFSET UNITYSDK_OFFSET(0x24C7530)
#define <>C__DISPLAYCLASS53_4__REFRESHTREASUREOBJECTS_B__6_OFFSET UNITYSDK_OFFSET(0x24CB510)

	inline static constexpr unsigned int <>c__DisplayClass53_4_TypeDefinitionIndex = 5916;

	class <>c__DisplayClass53_4 : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::EventContentTreasureCell* normalCell; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS53_4_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _RefreshTreasureObjects_b__6(UITreasureObject* arg)
		{
			return ((::System::Boolean(*)(UITreasureObject*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS53_4__REFRESHTREASUREOBJECTS_B__6_OFFSET))(arg, nullptr);
		}

	};

