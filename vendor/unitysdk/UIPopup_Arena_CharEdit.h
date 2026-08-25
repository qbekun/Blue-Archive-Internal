#pragma once
#include "unitysdk.h"

class UIPopup_Arena_CharEdit_OpponentSetting;
namespace MX::GameLogic::DBModel { class ArenaUserDB; }

#define UIPOPUP_ARENA_CHAREDIT_.CTOR_OFFSET UNITYSDK_OFFSET(0x254F4F0)
#define UIPOPUP_ARENA_CHAREDIT_GET_OPPONENTSETTING_OFFSET UNITYSDK_OFFSET(0x254F660)
#define UIPOPUP_ARENA_CHAREDIT_SETOPPONENT_OFFSET UNITYSDK_OFFSET(0x254F6D0)

	inline static constexpr unsigned int UIPopup_Arena_CharEdit_TypeDefinitionIndex = 6091;

	class UIPopup_Arena_CharEdit : public Il2CppObject
	{
	public:
		UIPopup_Arena_CharEdit_OpponentSetting* _opponentSetting; // 0x208

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ARENA_CHAREDIT_.CTOR_OFFSET))(nullptr);
		}

		UIPopup_Arena_CharEdit_OpponentSetting* get_opponentSetting()
		{
			return ((UIPopup_Arena_CharEdit_OpponentSetting*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ARENA_CHAREDIT_GET_OPPONENTSETTING_OFFSET))(nullptr);
		}

		::System::Void SetOpponent(::MX::GameLogic::DBModel::ArenaUserDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ArenaUserDB*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ARENA_CHAREDIT_SETOPPONENT_OFFSET))(arg, nullptr);
		}

	};

