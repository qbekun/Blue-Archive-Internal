#pragma once
#include "unitysdk.h"

class UITexture;
class UILabel;
namespace UnityEngine { class GameObject; }
namespace MX::Data { class EventContentTreasureItem; }

#define UITREASUREITEMSLOT__REFRESHITEMSLOT_B__6_0_OFFSET UNITYSDK_OFFSET(0x24CE6B0)
#define UITREASUREITEMSLOT_SETDISABLE_OFFSET UNITYSDK_OFFSET(0x24CE6D0)
#define UITREASUREITEMSLOT_REFRESHITEMSLOT_OFFSET UNITYSDK_OFFSET(0x24CE6F0)
#define UITREASUREITEMSLOT_SETDATA_OFFSET UNITYSDK_OFFSET(0x24CE860)
#define UITREASUREITEMSLOT_.CTOR_OFFSET UNITYSDK_OFFSET(0x24CEA10)

	inline static constexpr unsigned int UITreasureItemSlot_TypeDefinitionIndex = 5935;

	class UITreasureItemSlot : public Il2CppObject
	{
	public:
		UITexture* treasureTexture; // 0x18
		UILabel* treasureAmountLabel; // 0x20
		::UnityEngine::GameObject* disableRoot; // 0x28
		UITexture* treasureSizeIconTexture; // 0x30
		::MX::Data::EventContentTreasureItem* treasureItem; // 0x38

		::System::Boolean _RefreshItemSlot_b__6_0(::System::Int64 arg)
		{
			return ((::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UITREASUREITEMSLOT__REFRESHITEMSLOT_B__6_0_OFFSET))(arg, nullptr);
		}

		::System::Void SetDisable(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UITREASUREITEMSLOT_SETDISABLE_OFFSET))(arg, nullptr);
		}

		::System::Void RefreshItemSlot(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UITREASUREITEMSLOT_REFRESHITEMSLOT_OFFSET))(arg, nullptr);
		}

		::System::Void SetData(::MX::Data::EventContentTreasureItem* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::MX::Data::EventContentTreasureItem*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UITREASUREITEMSLOT_SETDATA_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITREASUREITEMSLOT_.CTOR_OFFSET))(nullptr);
		}

	};

