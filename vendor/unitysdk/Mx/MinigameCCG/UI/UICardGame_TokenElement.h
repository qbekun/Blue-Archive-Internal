#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class Color; }
namespace FlatData { class ParcelType; }

#define MX_MINIGAMECCG_UI_UICARDGAME_TOKENELEMENT_SETCOLOR_OFFSET UNITYSDK_OFFSET(0x1E25E20)
#define MX_MINIGAMECCG_UI_UICARDGAME_TOKENELEMENT_SETTEXT_OFFSET UNITYSDK_OFFSET(0x1E25E50)
#define MX_MINIGAMECCG_UI_UICARDGAME_TOKENELEMENT_SETDATA_OFFSET UNITYSDK_OFFSET(0x1E22880)
#define MX_MINIGAMECCG_UI_UICARDGAME_TOKENELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E25E70)

namespace MX::MinigameCCG::UI
{
	inline static constexpr unsigned int UICardGame_TokenElement_TypeDefinitionIndex = 20868;

	class UICardGame_TokenElement : public Il2CppObject
	{
	public:
		UISprite* icon; // 0x18
		UILabel* label; // 0x20

		::System::Void SetColor(::UnityEngine::Color* arg)
		{
			((::System::Void(*)(::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_TOKENELEMENT_SETCOLOR_OFFSET))(arg, nullptr);
		}

		::System::Void SetText(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_TOKENELEMENT_SETTEXT_OFFSET))(str, nullptr);
		}

		::System::Void SetData(::FlatData::ParcelType* arg, ::System::Int64 arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatData::ParcelType*, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_TOKENELEMENT_SETDATA_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_TOKENELEMENT_.CTOR_OFFSET))(nullptr);
		}

	};
}

