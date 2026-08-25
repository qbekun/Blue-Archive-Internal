#pragma once
#include "../../../unitysdk.h"

namespace MX::MinigameCCG::UI { class UICardGame_MapNodeLine; }
namespace MX::MinigameCCG::UI { class UICardGameMapScrollViewColumn; }
namespace MX::Data::Excel { class MinigameCCGLevelNodeExcel; }

#define MX_MINIGAMECCG_UI_UICARDGAME_MAP_NODEGROUP_SCROLLVIEWELEMENT_SETDATA_OFFSET UNITYSDK_OFFSET(0x1E0D3B0)
#define MX_MINIGAMECCG_UI_UICARDGAME_MAP_NODEGROUP_SCROLLVIEWELEMENT_SETUIKEY_OFFSET UNITYSDK_OFFSET(0x1E0DBC0)
#define MX_MINIGAMECCG_UI_UICARDGAME_MAP_NODEGROUP_SCROLLVIEWELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E0DCF0)
#define MX_MINIGAMECCG_UI_UICARDGAME_MAP_NODEGROUP_SCROLLVIEWELEMENT_ISNEXTOFLASTNODE_OFFSET UNITYSDK_OFFSET(0x1E0DB60)

namespace MX::MinigameCCG::UI
{
	inline static constexpr unsigned int UICardGame_Map_NodeGroup_ScrollViewElement_TypeDefinitionIndex = 20787;

	class UICardGame_Map_NodeGroup_ScrollViewElement : public ::System::Xml::Serialization::XmlAnyAttributeAttribute
	{
	public:
		UIGrid* grid; // 0x28
		Il2CppObject* nodes; // 0x30
		::MX::MinigameCCG::UI::UICardGame_MapNodeLine* nodeLine; // 0x38
		Il2CppObject* MXUIKeyIdList; // 0x40

		::System::Void SetData(::MX::MinigameCCG::UI::UICardGameMapScrollViewColumn* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::UI::UICardGameMapScrollViewColumn*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_MAP_NODEGROUP_SCROLLVIEWELEMENT_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void SetUIKey(::MX::MinigameCCG::UI::UICardGameMapScrollViewColumn* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::UI::UICardGameMapScrollViewColumn*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_MAP_NODEGROUP_SCROLLVIEWELEMENT_SETUIKEY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_MAP_NODEGROUP_SCROLLVIEWELEMENT_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean IsNextOfLastNode(::MX::Data::Excel::MinigameCCGLevelNodeExcel* arg, ::System::Int64 arg)
		{
			return (return (::System::Boolean(*)(::MX::Data::Excel::MinigameCCGLevelNodeExcel*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_MAP_NODEGROUP_SCROLLVIEWELEMENT_ISNEXTOFLASTNODE_OFFSET))(arg, arg, nullptr);
		}

	};
}

