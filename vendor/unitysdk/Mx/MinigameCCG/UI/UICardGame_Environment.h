#pragma once
#include "../../../unitysdk.h"

namespace MX::MinigameCCG { class CCGEntity; }

#define MX_MINIGAMECCG_UI_UICARDGAME_ENVIRONMENT_SETDATA_OFFSET UNITYSDK_OFFSET(0x1DFC250)
#define MX_MINIGAMECCG_UI_UICARDGAME_ENVIRONMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DFC360)

namespace MX::MinigameCCG::UI
{
	inline static constexpr unsigned int UICardGame_Environment_TypeDefinitionIndex = 20738;

	class UICardGame_Environment : public Il2CppObject
	{
	public:
		::System::Void SetData(::MX::MinigameCCG::CCGEntity* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_ENVIRONMENT_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_ENVIRONMENT_.CTOR_OFFSET))(nullptr);
		}

	};
}

