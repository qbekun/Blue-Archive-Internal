#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class GameObject; }
namespace MX::Data::Excel { class MinigameCCGLevelNodeExcel; }
namespace MX::NetworkProtocol { class MiniGameCCGEnterStageResponse; }

#define MX_MINIGAMECCG_UI_UICARDGAME_MAP_NODE_GET_CCGOBJECT_OFFSET UNITYSDK_OFFSET(0x1E0A8E0)
#define MX_MINIGAMECCG_UI_UICARDGAME_MAP_NODE_SETDATA_OFFSET UNITYSDK_OFFSET(0x1E0A960)
#define MX_MINIGAMECCG_UI_UICARDGAME_MAP_NODE__ONCLICKNODE_B__11_4_OFFSET UNITYSDK_OFFSET(0x1E0ACD0)
#define MX_MINIGAMECCG_UI_UICARDGAME_MAP_NODE_ONCLICKNODE_OFFSET UNITYSDK_OFFSET(0x1E0AD60)
#define MX_MINIGAMECCG_UI_UICARDGAME_MAP_NODE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E0B540)
#define MX_MINIGAMECCG_UI_UICARDGAME_MAP_NODE_AWAKE_OFFSET UNITYSDK_OFFSET(0x1E0B550)
#define MX_MINIGAMECCG_UI_UICARDGAME_MAP_NODE__ONCLICKNODE_G__ENTER|11_0_OFFSET UNITYSDK_OFFSET(0x1E0B3F0)
#define MX_MINIGAMECCG_UI_UICARDGAME_MAP_NODE_SETKEYMAPPING_OFFSET UNITYSDK_OFFSET(0x1E0B670)
#define MX_MINIGAMECCG_UI_UICARDGAME_MAP_NODE_HIDEKEYMAPPING_OFFSET UNITYSDK_OFFSET(0x1E0AC50)
#define MX_MINIGAMECCG_UI_UICARDGAME_MAP_NODE__ONCLICKNODE_B__11_2_OFFSET UNITYSDK_OFFSET(0x1E0B780)

namespace MX::MinigameCCG::UI
{
	inline static constexpr unsigned int UICardGame_Map_Node_TypeDefinitionIndex = 20782;

	class UICardGame_Map_Node : public Il2CppObject
	{
	public:
		UITexture* icon; // 0x18
		::UnityEngine::GameObject* clearIcon; // 0x20
		MXButton* nodeBtn; // 0x28
		::UnityEngine::GameObject* dim; // 0x30
		::MX::Data::Excel::MinigameCCGLevelNodeExcel* nodeExcel; // 0x38
		::System::Boolean canEnter; // 0x48
		::System::Boolean isLock; // 0x49

		MinigameCCGObject* get_ccgObject()
		{
			return (return (MinigameCCGObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_MAP_NODE_GET_CCGOBJECT_OFFSET))(nullptr);
		}

		::System::Void SetData(::MX::Data::Excel::MinigameCCGLevelNodeExcel* arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::MX::Data::Excel::MinigameCCGLevelNodeExcel*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_MAP_NODE_SETDATA_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void _OnClickNode_b__11_4()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_MAP_NODE__ONCLICKNODE_B__11_4_OFFSET))(nullptr);
		}

		::System::Void OnClickNode()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_MAP_NODE_ONCLICKNODE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_MAP_NODE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_MAP_NODE_AWAKE_OFFSET))(nullptr);
		}

		::System::Void _OnClickNode_g__Enter|11_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_MAP_NODE__ONCLICKNODE_G__ENTER|11_0_OFFSET))(nullptr);
		}

		::System::Void SetKeyMapping(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_MAP_NODE_SETKEYMAPPING_OFFSET))(str, nullptr);
		}

		::System::Void HideKeyMapping()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_MAP_NODE_HIDEKEYMAPPING_OFFSET))(nullptr);
		}

		::System::Void _OnClickNode_b__11_2(::MX::NetworkProtocol::MiniGameCCGEnterStageResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::MiniGameCCGEnterStageResponse*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_MAP_NODE__ONCLICKNODE_B__11_2_OFFSET))(arg, nullptr);
		}

	};
}

