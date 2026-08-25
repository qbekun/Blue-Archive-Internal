#pragma once
#include "../unitysdk.h"

#define BOARDGAME_CONCENTRATION_OPENPOPUP_SET_OPENPOPUPACTION_OFFSET UNITYSDK_OFFSET(0xE0B840)
#define BOARDGAME_CONCENTRATION_OPENPOPUP_GET_OPENPOPUPACTION_OFFSET UNITYSDK_OFFSET(0xE0B850)
#define BOARDGAME_CONCENTRATION_OPENPOPUP_.CTOR_OFFSET UNITYSDK_OFFSET(0xE0B860)

namespace BoardGame
{
	inline static constexpr unsigned int Concentration_OpenPopup_TypeDefinitionIndex = 10274;

	class Concentration_OpenPopup : public Il2CppObject
	{
	public:
		Il2CppObject* _OpenPopupAction_k__BackingField; // 0x38

		::System::Void set_OpenPopupAction(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_CONCENTRATION_OPENPOPUP_SET_OPENPOPUPACTION_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_OpenPopupAction()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_CONCENTRATION_OPENPOPUP_GET_OPENPOPUPACTION_OFFSET))(nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_CONCENTRATION_OPENPOPUP_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

