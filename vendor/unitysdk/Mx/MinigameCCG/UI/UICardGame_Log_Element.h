#pragma once
#include "../../../unitysdk.h"

namespace MX::MinigameCCG::UI { class UICardGame_Log_SourceTargetPlatform; }
namespace MX::MinigameCCG::UI { class UICardGame_Log_SourceOnlyPlatform; }
namespace MX::MinigameCCG { class LogData; }

#define MX_MINIGAMECCG_UI_UICARDGAME_LOG_ELEMENT_SETSPRITETEMPLATE_OFFSET UNITYSDK_OFFSET(0x1DEDD50)
#define MX_MINIGAMECCG_UI_UICARDGAME_LOG_ELEMENT_GETLOGTYPE_OFFSET UNITYSDK_OFFSET(0x1DEDE00)
#define MX_MINIGAMECCG_UI_UICARDGAME_LOG_ELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DEDF50)
#define MX_MINIGAMECCG_UI_UICARDGAME_LOG_ELEMENT_SETDATA_OFFSET UNITYSDK_OFFSET(0x1DEDF60)

namespace MX::MinigameCCG::UI
{
	inline static constexpr unsigned int UICardGame_Log_Element_TypeDefinitionIndex = 20701;

	class UICardGame_Log_Element : public Il2CppObject
	{
	public:
		::MX::MinigameCCG::UI::UICardGame_Log_SourceTargetPlatform* sourceTargetPlatform; // 0x20
		::MX::MinigameCCG::UI::UICardGame_Log_SourceOnlyPlatform* sourceOnlyPlatform; // 0x28
		UILabel* logLabel; // 0x30
		UISprite* frame; // 0x38
		UICardGame_Log_Element_Type* logType; // 0x40

		::System::Void SetSpriteTemplate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_LOG_ELEMENT_SETSPRITETEMPLATE_OFFSET))(nullptr);
		}

		UICardGame_Log_Element_Type* GetLogType(::MX::MinigameCCG::LogData* arg)
		{
			return (return (UICardGame_Log_Element_Type*(*)(::MX::MinigameCCG::LogData*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_LOG_ELEMENT_GETLOGTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_LOG_ELEMENT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetData(::MX::MinigameCCG::LogData* arg, UIScrollView* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::LogData*, UIScrollView*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_LOG_ELEMENT_SETDATA_OFFSET))(arg, arg, nullptr);
		}

	};
}

