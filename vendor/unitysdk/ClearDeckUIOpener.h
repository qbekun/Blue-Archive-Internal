#pragma once
#include "unitysdk.h"

namespace MX::GameLogic::DBModel { class ClearDeckKey; }

#define CLEARDECKUIOPENER_OPENCLEARDECKUI_OFFSET UNITYSDK_OFFSET(0x26C4080)
#define CLEARDECKUIOPENER_GET_USEASSISTMARK_OFFSET UNITYSDK_OFFSET(0x26C4760)
#define CLEARDECKUIOPENER_OPENCLEARDECKGROUPUI_OFFSET UNITYSDK_OFFSET(0x26C4780)
#define CLEARDECKUIOPENER_SET_DECKKEY_OFFSET UNITYSDK_OFFSET(0x26C4D20)
#define CLEARDECKUIOPENER_OPENUI_OFFSET UNITYSDK_OFFSET(0x26C4D40)
#define CLEARDECKUIOPENER_.CTOR_OFFSET UNITYSDK_OFFSET(0x26C4D50)
#define CLEARDECKUIOPENER_GET_DECKKEY_OFFSET UNITYSDK_OFFSET(0x26C4D90)

	inline static constexpr unsigned int ClearDeckUIOpener_TypeDefinitionIndex = 6970;

	class ClearDeckUIOpener : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::ClearDeckKey* _DeckKey_k__BackingField; // 0x18

		::System::Void OpenClearDeckUI()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLEARDECKUIOPENER_OPENCLEARDECKUI_OFFSET))(nullptr);
		}

		::System::Boolean get_UseAssistMark()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLEARDECKUIOPENER_GET_USEASSISTMARK_OFFSET))(nullptr);
		}

		::System::Void OpenClearDeckGroupUI()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLEARDECKUIOPENER_OPENCLEARDECKGROUPUI_OFFSET))(nullptr);
		}

		::System::Void set_DeckKey(::MX::GameLogic::DBModel::ClearDeckKey* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ClearDeckKey*, ::PVOID))((::PBYTE)hIl2Cpp + CLEARDECKUIOPENER_SET_DECKKEY_OFFSET))(arg, nullptr);
		}

		::System::Void OpenUI()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLEARDECKUIOPENER_OPENUI_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::GameLogic::DBModel::ClearDeckKey* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ClearDeckKey*, ::PVOID))((::PBYTE)hIl2Cpp + CLEARDECKUIOPENER_.CTOR_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::ClearDeckKey* get_DeckKey()
		{
			return ((::MX::GameLogic::DBModel::ClearDeckKey*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLEARDECKUIOPENER_GET_DECKKEY_OFFSET))(nullptr);
		}

	};

