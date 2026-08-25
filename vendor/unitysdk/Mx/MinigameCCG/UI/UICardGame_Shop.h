#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class GameObject; }
namespace MX::MinigameCCG::UI { class UICardGame_TokenElement; }
namespace MX::MinigameCCG::UI { class UICardGame_Shop_ScrollViewController; }
namespace MX::MinigameCCG::UI { class UICardGame_Shop_NodeLine; }
namespace MX::MinigameCCG::UI { class UICardGame_Shop_Node; }
namespace MX::Data::Excel { class MinigameCCGInfoExcel; }
namespace MX::NetworkProtocol { class MiniGameCCGBuyPerkResponse; }

#define MX_MINIGAMECCG_UI_UICARDGAME_SHOP_ONCLICKBACK_OFFSET UNITYSDK_OFFSET(0x1E21950)
#define MX_MINIGAMECCG_UI_UICARDGAME_SHOP__ONCLICKPURCHASE_B__32_0_OFFSET UNITYSDK_OFFSET(0x1E219E0)
#define MX_MINIGAMECCG_UI_UICARDGAME_SHOP_WAITANDMOVESCROLL_OFFSET UNITYSDK_OFFSET(0x1E227E0)
#define MX_MINIGAMECCG_UI_UICARDGAME_SHOP_REFRESHPERKINFO_OFFSET UNITYSDK_OFFSET(0x1E21BE0)
#define MX_MINIGAMECCG_UI_UICARDGAME_SHOP_GET_CURRENTSELECTEDPERKID_OFFSET UNITYSDK_OFFSET(0x1E23180)
#define MX_MINIGAMECCG_UI_UICARDGAME_SHOP_CO_LOADING_OFFSET UNITYSDK_OFFSET(0x1E23190)
#define MX_MINIGAMECCG_UI_UICARDGAME_SHOP_SETTEXTCOLOR_OFFSET UNITYSDK_OFFSET(0x1E23220)
#define MX_MINIGAMECCG_UI_UICARDGAME_SHOP_START_OFFSET UNITYSDK_OFFSET(0x1E232C0)
#define MX_MINIGAMECCG_UI_UICARDGAME_SHOP_SELECTNODE_OFFSET UNITYSDK_OFFSET(0x1E235C0)
#define MX_MINIGAMECCG_UI_UICARDGAME_SHOP_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1E23710)
#define MX_MINIGAMECCG_UI_UICARDGAME_SHOP___N__0_OFFSET UNITYSDK_OFFSET(0x1E23750)
#define MX_MINIGAMECCG_UI_UICARDGAME_SHOP_SETPERKONOFFBUTTON_OFFSET UNITYSDK_OFFSET(0x1E22D30)
#define MX_MINIGAMECCG_UI_UICARDGAME_SHOP_ONOPENED_OFFSET UNITYSDK_OFFSET(0x1E23760)
#define MX_MINIGAMECCG_UI_UICARDGAME_SHOP_ONCLICKPERKONOFF_OFFSET UNITYSDK_OFFSET(0x1E244F0)
#define MX_MINIGAMECCG_UI_UICARDGAME_SHOP_ONCLICKPURCHASE_OFFSET UNITYSDK_OFFSET(0x1E24B90)
#define MX_MINIGAMECCG_UI_UICARDGAME_SHOP_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E24D80)
#define MX_MINIGAMECCG_UI_UICARDGAME_SHOP_CHECKOPENCOLLECTIONPOPUP_OFFSET UNITYSDK_OFFSET(0x1E221E0)

namespace MX::MinigameCCG::UI
{
	inline static constexpr unsigned int UICardGame_Shop_TypeDefinitionIndex = 20862;

	class UICardGame_Shop : public Il2CppObject
	{
	public:
		::System::String* openAnimationClipName; // 0xD8
		MXButton* backButton; // 0xE0
		MXButton* perkOnOffBtn; // 0xE8
		UILabel* perkOnOffLabel; // 0xF0
		UISprite* perkOnOffBg; // 0xF8
		::UnityEngine::GameObject* perkLock; // 0x100
		::UnityEngine::GameObject* nodeInfo; // 0x108
		::UnityEngine::GameObject* nodeInfoEmpty; // 0x110
		UILabel* nodeNameLabel; // 0x118
		UILabel* nodeDescLabel; // 0x120
		::MX::MinigameCCG::UI::UICardGame_TokenElement* ownedToken; // 0x128
		MXButton* purchaseEnabledButton; // 0x130
		::MX::MinigameCCG::UI::UICardGame_TokenElement* purchaseEnabledButtonToken; // 0x138
		MXButton* purchaseDisabledButton; // 0x140
		::MX::MinigameCCG::UI::UICardGame_TokenElement* purchaseDisabledButtonToken; // 0x148
		::UnityEngine::GameObject* paidStamp; // 0x150
		::MX::MinigameCCG::UI::UICardGame_Shop_ScrollViewController* scrollView; // 0x158
		::MX::MinigameCCG::UI::UICardGame_Shop_NodeLine* nodeLine; // 0x160
		::MX::MinigameCCG::UI::UICardGame_Shop_Node* curSelectedNode; // 0x168
		::System::Int64 selectedPerkId; // 0x170
		::MX::Data::Excel::MinigameCCGInfoExcel* infoExcel; // 0x178

		::System::Void OnClickBack()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_SHOP_ONCLICKBACK_OFFSET))(nullptr);
		}

		::System::Void _OnClickPurchase_b__32_0(::MX::NetworkProtocol::MiniGameCCGBuyPerkResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::MiniGameCCGBuyPerkResponse*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_SHOP__ONCLICKPURCHASE_B__32_0_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* WaitAndMoveScroll(::System::Int32 arg)
		{
			return (return (::System::Collections::IEnumerator*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_SHOP_WAITANDMOVESCROLL_OFFSET))(arg, nullptr);
		}

		::System::Void RefreshPerkInfo()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_SHOP_REFRESHPERKINFO_OFFSET))(nullptr);
		}

		::System::Int64 get_CurrentSelectedPerkId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_SHOP_GET_CURRENTSELECTEDPERKID_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_Loading()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_SHOP_CO_LOADING_OFFSET))(nullptr);
		}

		::System::Void SetTextColor(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_SHOP_SETTEXTCOLOR_OFFSET))(str, str, nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_SHOP_START_OFFSET))(nullptr);
		}

		::System::Void SelectNode(::MX::MinigameCCG::UI::UICardGame_Shop_Node* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::UI::UICardGame_Shop_Node*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_SHOP_SELECTNODE_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_SHOP_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* __n__0()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_SHOP___N__0_OFFSET))(nullptr);
		}

		::System::Void SetPerkOnOffButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_SHOP_SETPERKONOFFBUTTON_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_SHOP_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickPerkOnOff()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_SHOP_ONCLICKPERKONOFF_OFFSET))(nullptr);
		}

		::System::Void OnClickPurchase()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_SHOP_ONCLICKPURCHASE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_SHOP_.CTOR_OFFSET))(nullptr);
		}

		::System::Void CheckOpenCollectionPopup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_SHOP_CHECKOPENCOLLECTIONPOPUP_OFFSET))(nullptr);
		}

	};
}

