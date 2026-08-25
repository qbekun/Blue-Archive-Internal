#pragma once
#include "unitysdk.h"

class UILabel;
class MinigameCCGObject;

#define UIPOPUP_MINIGAMESWEEPCARDGAMERECORD_GET_CCGOBJECT_OFFSET UNITYSDK_OFFSET(0x2099570)
#define UIPOPUP_MINIGAMESWEEPCARDGAMERECORD_SETDATA_OFFSET UNITYSDK_OFFSET(0x2098E40)
#define UIPOPUP_MINIGAMESWEEPCARDGAMERECORD_.CTOR_OFFSET UNITYSDK_OFFSET(0x2099600)

	inline static constexpr unsigned int UIPopup_MiniGameSweepCardGameRecord_TypeDefinitionIndex = 3516;

	class UIPopup_MiniGameSweepCardGameRecord : public Il2CppObject
	{
	public:
		UILabel* stageLabel; // 0x18

		MinigameCCGObject* get_ccgObject()
		{
			return ((MinigameCCGObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MINIGAMESWEEPCARDGAMERECORD_GET_CCGOBJECT_OFFSET))(nullptr);
		}

		::System::Void SetData(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MINIGAMESWEEPCARDGAMERECORD_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MINIGAMESWEEPCARDGAMERECORD_.CTOR_OFFSET))(nullptr);
		}

	};

