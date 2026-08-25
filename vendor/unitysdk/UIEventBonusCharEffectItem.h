#pragma once
#include "unitysdk.h"

class UILabel;
namespace FlatData { class EventContentItemType; }

#define UIEVENTBONUSCHAREFFECTITEM_SETDATA_OFFSET UNITYSDK_OFFSET(0x24776B0)
#define UIEVENTBONUSCHAREFFECTITEM_.CTOR_OFFSET UNITYSDK_OFFSET(0x2479330)

	inline static constexpr unsigned int UIEventBonusCharEffectItem_TypeDefinitionIndex = 5661;

	class UIEventBonusCharEffectItem : public Il2CppObject
	{
	public:
		UILabel* effectTargetLabel; // 0x18
		UILabel* effectValueLabel; // 0x20

		::System::Void SetData(::System::Int64 arg, ::FlatData::EventContentItemType* arg2, ::System::Single arg3)
		{
			((::System::Void(*)(::System::Int64, ::FlatData::EventContentItemType*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTBONUSCHAREFFECTITEM_SETDATA_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTBONUSCHAREFFECTITEM_.CTOR_OFFSET))(nullptr);
		}

	};

