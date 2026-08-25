#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class InventoryFullErrorPacket; }
class UIPopup_InventoryFull;

#define <>C__DISPLAYCLASS24_5_.CTOR_OFFSET UNITYSDK_OFFSET(0xE29210)
#define <>C__DISPLAYCLASS24_5__HANDLEWEBAPIERROR_B__12_OFFSET UNITYSDK_OFFSET(0xE29A20)

	inline static constexpr unsigned int <>c__DisplayClass24_5_TypeDefinitionIndex = 10398;

	class <>c__DisplayClass24_5 : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::InventoryFullErrorPacket* inventoryFullErrorPacket; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS24_5_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _HandleWebAPIError_b__12(UIPopup_InventoryFull* arg)
		{
			((::System::Void(*)(UIPopup_InventoryFull*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS24_5__HANDLEWEBAPIERROR_B__12_OFFSET))(arg, nullptr);
		}

	};

