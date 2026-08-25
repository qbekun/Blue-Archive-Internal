#pragma once
#include "../../../unitysdk.h"

namespace MX::Data::Excel { class MinigameCCGInfoExcel; }
namespace MX::Data::Excel { class MinigameCCGPerkExcel; }
namespace UnityEngine { class Color; }

#define MX_MINIGAMECCG_UI_UICARDGAME_SHOP_NODE_REFRESHNODE_OFFSET UNITYSDK_OFFSET(0x1E22980)
#define MX_MINIGAMECCG_UI_UICARDGAME_SHOP_NODE_ONCLICKNODE_OFFSET UNITYSDK_OFFSET(0x1E253E0)
#define MX_MINIGAMECCG_UI_UICARDGAME_SHOP_NODE_GET_ROW_OFFSET UNITYSDK_OFFSET(0x1E25500)
#define MX_MINIGAMECCG_UI_UICARDGAME_SHOP_NODE_SET_ROW_OFFSET UNITYSDK_OFFSET(0x1E25510)
#define MX_MINIGAMECCG_UI_UICARDGAME_SHOP_NODE_ONDESELECT_OFFSET UNITYSDK_OFFSET(0x1E236B0)
#define MX_MINIGAMECCG_UI_UICARDGAME_SHOP_NODE_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1E25520)
#define MX_MINIGAMECCG_UI_UICARDGAME_SHOP_NODE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E25670)
#define MX_MINIGAMECCG_UI_UICARDGAME_SHOP_NODE_GET_PERKID_OFFSET UNITYSDK_OFFSET(0x1E23700)
#define MX_MINIGAMECCG_UI_UICARDGAME_SHOP_NODE_ONSELECT_OFFSET UNITYSDK_OFFSET(0x1E244A0)
#define MX_MINIGAMECCG_UI_UICARDGAME_SHOP_NODE_START_OFFSET UNITYSDK_OFFSET(0x1E25680)

namespace MX::MinigameCCG::UI
{
	inline static constexpr unsigned int UICardGame_Shop_Node_TypeDefinitionIndex = 20863;

	class UICardGame_Shop_Node : public Il2CppObject
	{
	public:
		::System::Int32 _Row_k__BackingField; // 0x18
		::MX::Data::Excel::MinigameCCGInfoExcel* infoExcel; // 0x20
		::MX::Data::Excel::MinigameCCGPerkExcel* perkExcel; // 0x30
		UISprite* lockSpr; // 0x40
		UISprite* selectedSpr; // 0x48
		UISprite* circleSpr; // 0x50
		UITexture* iconSpr; // 0x58
		UISprite* stampSpr; // 0x60
		UISprite* tokenSpr; // 0x68
		UILabel* tokenLabel; // 0x70
		::UnityEngine::Color* iconNormalColor; // 0x78
		::UnityEngine::Color* iconPaidColor; // 0x88
		MXButton* btn; // 0x98

		::System::Void RefreshNode()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_SHOP_NODE_REFRESHNODE_OFFSET))(nullptr);
		}

		::System::Void OnClickNode()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_SHOP_NODE_ONCLICKNODE_OFFSET))(nullptr);
		}

		::System::Int32 get_Row()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_SHOP_NODE_GET_ROW_OFFSET))(nullptr);
		}

		::System::Void set_Row(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_SHOP_NODE_SET_ROW_OFFSET))(arg, nullptr);
		}

		::System::Void OnDeselect()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_SHOP_NODE_ONDESELECT_OFFSET))(nullptr);
		}

		::System::Void Initialize(::System::Int32 arg, ::MX::Data::Excel::MinigameCCGInfoExcel* arg, ::MX::Data::Excel::MinigameCCGPerkExcel* arg)
		{
			((::System::Void(*)(::System::Int32, ::MX::Data::Excel::MinigameCCGInfoExcel*, ::MX::Data::Excel::MinigameCCGPerkExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_SHOP_NODE_INITIALIZE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_SHOP_NODE_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_PerkId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_SHOP_NODE_GET_PERKID_OFFSET))(nullptr);
		}

		::System::Void OnSelect()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_SHOP_NODE_ONSELECT_OFFSET))(nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_SHOP_NODE_START_OFFSET))(nullptr);
		}

	};
}

