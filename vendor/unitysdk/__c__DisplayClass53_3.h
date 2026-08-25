#pragma once
#include "unitysdk.h"

namespace MX::GameLogic::DBModel { class EventContentTreasureCell; }
class UITreasureObject;

#define <>C__DISPLAYCLASS53_3_.CTOR_OFFSET UNITYSDK_OFFSET(0x24C7520)
#define <>C__DISPLAYCLASS53_3__REFRESHTREASUREOBJECTS_B__5_OFFSET UNITYSDK_OFFSET(0x24CB4D0)

	inline static constexpr unsigned int <>c__DisplayClass53_3_TypeDefinitionIndex = 5915;

	class <>c__DisplayClass53_3 : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::EventContentTreasureCell* cell; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS53_3_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _RefreshTreasureObjects_b__5(UITreasureObject* arg)
		{
			return ((::System::Boolean(*)(UITreasureObject*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS53_3__REFRESHTREASUREOBJECTS_B__5_OFFSET))(arg, nullptr);
		}

	};

