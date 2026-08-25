#pragma once
#include "unitysdk.h"

namespace MX::GameLogic::DBModel { class EventContentTreasureCell; }
class UITreasureObject;

#define <>C__DISPLAYCLASS53_2_.CTOR_OFFSET UNITYSDK_OFFSET(0x24C7510)
#define <>C__DISPLAYCLASS53_2__REFRESHTREASUREOBJECTS_B__3_OFFSET UNITYSDK_OFFSET(0x24CB490)

	inline static constexpr unsigned int <>c__DisplayClass53_2_TypeDefinitionIndex = 5914;

	class <>c__DisplayClass53_2 : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::EventContentTreasureCell* hintCell; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS53_2_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _RefreshTreasureObjects_b__3(UITreasureObject* arg)
		{
			return ((::System::Boolean(*)(UITreasureObject*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS53_2__REFRESHTREASUREOBJECTS_B__3_OFFSET))(arg, nullptr);
		}

	};

