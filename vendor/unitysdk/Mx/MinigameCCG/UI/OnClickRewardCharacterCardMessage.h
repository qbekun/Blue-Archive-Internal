#pragma once
#include "../../../unitysdk.h"

namespace MX::GameLogic::DBModel { class MiniGameCCGCharacterDB; }

#define MX_MINIGAMECCG_UI_ONCLICKREWARDCHARACTERCARDMESSAGE_SET_DB_OFFSET UNITYSDK_OFFSET(0x1E21210)
#define MX_MINIGAMECCG_UI_ONCLICKREWARDCHARACTERCARDMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E21220)
#define MX_MINIGAMECCG_UI_ONCLICKREWARDCHARACTERCARDMESSAGE_GET_DB_OFFSET UNITYSDK_OFFSET(0x1E21250)

namespace MX::MinigameCCG::UI
{
	inline static constexpr unsigned int OnClickRewardCharacterCardMessage_TypeDefinitionIndex = 20852;

	class OnClickRewardCharacterCardMessage : public ::TriInspector::TitleAttribute
	{
	public:
		::MX::GameLogic::DBModel::MiniGameCCGCharacterDB* _DB_k__BackingField; // 0x18

		::System::Void set_DB(::MX::GameLogic::DBModel::MiniGameCCGCharacterDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::MiniGameCCGCharacterDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_ONCLICKREWARDCHARACTERCARDMESSAGE_SET_DB_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::GameLogic::DBModel::MiniGameCCGCharacterDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::MiniGameCCGCharacterDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_ONCLICKREWARDCHARACTERCARDMESSAGE_.CTOR_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::MiniGameCCGCharacterDB* get_DB()
		{
			return (return (::MX::GameLogic::DBModel::MiniGameCCGCharacterDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_ONCLICKREWARDCHARACTERCARDMESSAGE_GET_DB_OFFSET))(nullptr);
		}

	};
}

