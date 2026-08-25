#pragma once
#include "../../../unitysdk.h"

namespace MX::MinigameCCG::UI { class UICardGame_CardGroup; }
namespace UnityEngine { class GameObject; }
namespace MX::MinigameCCG { class LogData; }

#define MX_MINIGAMECCG_UI_UICARDGAME_LOG_SOURCETARGETPLATFORM_SETICONPATHANDBGPATH_OFFSET UNITYSDK_OFFSET(0x1DF0530)
#define MX_MINIGAMECCG_UI_UICARDGAME_LOG_SOURCETARGETPLATFORM_SETTEXTCOLOR_OFFSET UNITYSDK_OFFSET(0x1DF0880)
#define MX_MINIGAMECCG_UI_UICARDGAME_LOG_SOURCETARGETPLATFORM_SETDATA_OFFSET UNITYSDK_OFFSET(0x1DEE550)
#define MX_MINIGAMECCG_UI_UICARDGAME_LOG_SOURCETARGETPLATFORM_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DF0920)

namespace MX::MinigameCCG::UI
{
	inline static constexpr unsigned int UICardGame_Log_SourceTargetPlatform_TypeDefinitionIndex = 20707;

	class UICardGame_Log_SourceTargetPlatform : public Il2CppObject
	{
	public:
		UIGrid* grid; // 0x18
		::MX::MinigameCCG::UI::UICardGame_CardGroup* source; // 0x20
		Il2CppObject* targets; // 0x28
		UISprite* icon; // 0x30
		::UnityEngine::GameObject* defaultArrowIcon; // 0x38
		UISprite* iconBg; // 0x40
		UILabel* valueLabel; // 0x48

		::System::Void SetIconPathAndBgPath(::MX::MinigameCCG::LogData* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::LogData*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_LOG_SOURCETARGETPLATFORM_SETICONPATHANDBGPATH_OFFSET))(arg, nullptr);
		}

		::System::Void SetTextColor(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_LOG_SOURCETARGETPLATFORM_SETTEXTCOLOR_OFFSET))(str, str, nullptr);
		}

		::System::Void SetData(::MX::MinigameCCG::LogData* arg, UIScrollView* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::LogData*, UIScrollView*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_LOG_SOURCETARGETPLATFORM_SETDATA_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_LOG_SOURCETARGETPLATFORM_.CTOR_OFFSET))(nullptr);
		}

	};
}

