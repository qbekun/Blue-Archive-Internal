#pragma once
#include "../../../unitysdk.h"

#define MX_MINIGAMECCG_UI_UICARDGAME_MAP_NODELINE_VISUALSET_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E0DEE0)

namespace MX::MinigameCCG::UI
{
	inline static constexpr unsigned int UICardGame_Map_NodeLine_VisualSet_TypeDefinitionIndex = 20788;

	class UICardGame_Map_NodeLine_VisualSet : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* Straights; // 0x18
		::Il2CppArray<::System::Object*>* SmoothCurveLine_Uppers; // 0x20
		::Il2CppArray<::System::Object*>* SmoothCurveLine_Lowers; // 0x28
		::Il2CppArray<::System::Object*>* TightCurveLine_Uppers; // 0x30
		::Il2CppArray<::System::Object*>* TightCurveLine_Lowers; // 0x38

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_MAP_NODELINE_VISUALSET_.CTOR_OFFSET))(nullptr);
		}

	};
}

