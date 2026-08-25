#pragma once
#include "../../../unitysdk.h"

namespace MX::MinigameCCG::UI { class UICardGame_Log_TurnInfo_Element; }
namespace MX::MinigameCCG::UI { class UICardGame_Log_Element; }
namespace MX::MinigameCCG { class ILogData; }

#define MX_MINIGAMECCG_UI_UICARDGAME_LOG_UNIT_GET_LOGHEIGHT_OFFSET UNITYSDK_OFFSET(0x1DF0B70)
#define MX_MINIGAMECCG_UI_UICARDGAME_LOG_UNIT_SETLOG_OFFSET UNITYSDK_OFFSET(0x1DEECF0)
#define MX_MINIGAMECCG_UI_UICARDGAME_LOG_UNIT_ISVISIBLE_OFFSET UNITYSDK_OFFSET(0x1DF0B80)
#define MX_MINIGAMECCG_UI_UICARDGAME_LOG_UNIT_GETHEIGHT_OFFSET UNITYSDK_OFFSET(0x1DF0C40)
#define MX_MINIGAMECCG_UI_UICARDGAME_LOG_UNIT_GET_TURNTITLEHEIGHT_OFFSET UNITYSDK_OFFSET(0x1DF0CB0)
#define MX_MINIGAMECCG_UI_UICARDGAME_LOG_UNIT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DF0CC0)

namespace MX::MinigameCCG::UI
{
	inline static constexpr unsigned int UICardGame_Log_Unit_TypeDefinitionIndex = 20709;

	class UICardGame_Log_Unit : public Il2CppObject
	{
	public:
		::MX::MinigameCCG::UI::UICardGame_Log_TurnInfo_Element* turnInfo; // 0x50
		::MX::MinigameCCG::UI::UICardGame_Log_Element* logInfo; // 0x58
		::System::Int32 turnTitleHeight; // 0x60
		::System::Int32 logHeight; // 0x64
		::MX::MinigameCCG::ILogData* logdata; // 0x68

		::System::Int32 get_LogHeight()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_LOG_UNIT_GET_LOGHEIGHT_OFFSET))(nullptr);
		}

		::System::Void SetLog(::MX::MinigameCCG::ILogData* arg, UIScrollView* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::ILogData*, UIScrollView*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_LOG_UNIT_SETLOG_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsVisible()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_LOG_UNIT_ISVISIBLE_OFFSET))(nullptr);
		}

		::System::Int32 GetHeight()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_LOG_UNIT_GETHEIGHT_OFFSET))(nullptr);
		}

		::System::Int32 get_TurnTitleHeight()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_LOG_UNIT_GET_TURNTITLEHEIGHT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_LOG_UNIT_.CTOR_OFFSET))(nullptr);
		}

	};
}

