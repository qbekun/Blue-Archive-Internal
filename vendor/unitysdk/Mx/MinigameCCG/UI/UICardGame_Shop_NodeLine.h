#pragma once
#include "../../../unitysdk.h"

#define MX_MINIGAMECCG_UI_UICARDGAME_SHOP_NODELINE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E257B0)
#define MX_MINIGAMECCG_UI_UICARDGAME_SHOP_NODELINE_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1E257C0)

namespace MX::MinigameCCG::UI
{
	inline static constexpr unsigned int UICardGame_Shop_NodeLine_TypeDefinitionIndex = 20864;

	class UICardGame_Shop_NodeLine : public Il2CppObject
	{
	public:
		Il2CppObject* lines; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_SHOP_NODELINE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Initialize(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_SHOP_NODELINE_INITIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};
}

