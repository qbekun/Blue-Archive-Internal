#pragma once
#include "unitysdk.h"

namespace MX::Data { class ItemData; }
namespace MX::GameLogic::Parcel { class ParcelInfo; }
class UIPopup_InventoryFull;

#define <>C__DISPLAYCLASS6_2_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F81E90)
#define <>C__DISPLAYCLASS6_2__HANDLEMESSAGE_B__5_OFFSET UNITYSDK_OFFSET(0x1F81F60)
#define <>C__DISPLAYCLASS6_2__HANDLEMESSAGE_B__6_OFFSET UNITYSDK_OFFSET(0x1F82000)

	inline static constexpr unsigned int <>c__DisplayClass6_2_TypeDefinitionIndex = 2612;

	class <>c__DisplayClass6_2 : public Il2CppObject
	{
	public:
		::MX::Data::ItemData* itemData; // 0x10
		Il2CppObject* consumables; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS6_2_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _HandleMessage_b__5(::MX::GameLogic::Parcel::ParcelInfo* arg)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::Parcel::ParcelInfo*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS6_2__HANDLEMESSAGE_B__5_OFFSET))(arg, nullptr);
		}

		::System::Void _HandleMessage_b__6(UIPopup_InventoryFull* arg)
		{
			((::System::Void(*)(UIPopup_InventoryFull*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS6_2__HANDLEMESSAGE_B__6_OFFSET))(arg, nullptr);
		}

	};

