#pragma once
#include "unitysdk.h"

class UIArenaSetting;
namespace MX::GameLogic::DBModel { class ArenaUserDB; }

#define UIPOPUP_ARENA_CHAREDIT_OPPONENTSETTING_SETDATA_OFFSET UNITYSDK_OFFSET(0x254F880)
#define UIPOPUP_ARENA_CHAREDIT_OPPONENTSETTING_.CTOR_OFFSET UNITYSDK_OFFSET(0x254F8E0)

	inline static constexpr unsigned int UIPopup_Arena_CharEdit_OpponentSetting_TypeDefinitionIndex = 6092;

	class UIPopup_Arena_CharEdit_OpponentSetting : public Il2CppObject
	{
	public:
		UIArenaSetting* arenaSetting; // 0x18

		::System::Void SetData(::MX::GameLogic::DBModel::ArenaUserDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ArenaUserDB*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ARENA_CHAREDIT_OPPONENTSETTING_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ARENA_CHAREDIT_OPPONENTSETTING_.CTOR_OFFSET))(nullptr);
		}

	};

