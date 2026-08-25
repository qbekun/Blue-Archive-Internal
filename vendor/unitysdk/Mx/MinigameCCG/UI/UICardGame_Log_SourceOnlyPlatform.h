#pragma once
#include "../../../unitysdk.h"

namespace MX::MinigameCCG { class LogData; }

#define MX_MINIGAMECCG_UI_UICARDGAME_LOG_SOURCEONLYPLATFORM_SETDATA_OFFSET UNITYSDK_OFFSET(0x1DEE0F0)
#define MX_MINIGAMECCG_UI_UICARDGAME_LOG_SOURCEONLYPLATFORM_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DF0440)

namespace MX::MinigameCCG::UI
{
	inline static constexpr unsigned int UICardGame_Log_SourceOnlyPlatform_TypeDefinitionIndex = 20706;

	class UICardGame_Log_SourceOnlyPlatform : public Il2CppObject
	{
	public:
		UIGrid* grid; // 0x18
		Il2CppObject* targets; // 0x20

		::System::Void SetData(::MX::MinigameCCG::LogData* arg, UIScrollView* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::LogData*, UIScrollView*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_LOG_SOURCEONLYPLATFORM_SETDATA_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_LOG_SOURCEONLYPLATFORM_.CTOR_OFFSET))(nullptr);
		}

	};
}

