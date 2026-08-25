#pragma once
#include "../../../unitysdk.h"

namespace MX::MinigameCCG::UI { class UICardGame_Shop_NodeLine; }
namespace MX::MinigameCCG::UI { class UICardGameShopScrollViewRow; }

#define MX_MINIGAMECCG_UI_UICARDGAME_SHOP_SCROLLVIEWELEMENT_SETDATA_OFFSET UNITYSDK_OFFSET(0x1E25B30)
#define MX_MINIGAMECCG_UI_UICARDGAME_SHOP_SCROLLVIEWELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E25DE0)

namespace MX::MinigameCCG::UI
{
	inline static constexpr unsigned int UICardGame_Shop_ScrollViewElement_TypeDefinitionIndex = 20867;

	class UICardGame_Shop_ScrollViewElement : public ::System::Xml::Serialization::XmlAnyElementAttribute
	{
	public:
		::System::Int32 Row; // 0x28
		Il2CppObject* nodeObjs; // 0x30
		::MX::MinigameCCG::UI::UICardGame_Shop_NodeLine* nodeLine; // 0x38
		UIGrid* nodeGrid; // 0x40

		::System::Void SetData(::MX::MinigameCCG::UI::UICardGameShopScrollViewRow* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::UI::UICardGameShopScrollViewRow*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_SHOP_SCROLLVIEWELEMENT_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_SHOP_SCROLLVIEWELEMENT_.CTOR_OFFSET))(nullptr);
		}

	};
}

