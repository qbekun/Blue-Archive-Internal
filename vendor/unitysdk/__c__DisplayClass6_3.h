#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class InventoryFullErrorPacket; }
class UIPopup_InventoryFull;

#define <>C__DISPLAYCLASS6_3_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F82060)
#define <>C__DISPLAYCLASS6_3__HANDLEMESSAGE_B__7_OFFSET UNITYSDK_OFFSET(0x1F82070)

	inline static constexpr unsigned int <>c__DisplayClass6_3_TypeDefinitionIndex = 2613;

	class <>c__DisplayClass6_3 : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::InventoryFullErrorPacket* inventoryFullErrorPacket; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS6_3_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _HandleMessage_b__7(UIPopup_InventoryFull* arg)
		{
			((::System::Void(*)(UIPopup_InventoryFull*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS6_3__HANDLEMESSAGE_B__7_OFFSET))(arg, nullptr);
		}

	};

