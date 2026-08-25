#pragma once
#include "../../../unitysdk.h"

namespace MX::MinigameCCG::UI { class UICardGameMapScrollViewColumn; }
namespace UnityEngine { class Color; }
namespace UnityEngine { class GameObject; }
namespace MX::MinigameCCG::UI { class NodeGroupClearStateType; }
namespace MX::MinigameCCG::UI { class NodeGroupClearState; }
namespace MX::MinigameCCG::UI { class UICardGame_Map_NodeLine_VisualSet; }

#define MX_MINIGAMECCG_UI_UICARDGAME_MAPNODELINE_ACTIVELINES_OFFSET UNITYSDK_OFFSET(0x1E09210)
#define MX_MINIGAMECCG_UI_UICARDGAME_MAPNODELINE_SETLINE_OFFSET UNITYSDK_OFFSET(0x1E0A0E0)
#define MX_MINIGAMECCG_UI_UICARDGAME_MAPNODELINE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E0A1E0)
#define MX_MINIGAMECCG_UI_UICARDGAME_MAPNODELINE_ISACTIVELINE_OFFSET UNITYSDK_OFFSET(0x1E0A030)
#define MX_MINIGAMECCG_UI_UICARDGAME_MAPNODELINE_GETNODEGROUPCLEARSTATE_OFFSET UNITYSDK_OFFSET(0x1E09CB0)
#define MX_MINIGAMECCG_UI_UICARDGAME_MAPNODELINE__INITIALIZELINES_G__INACTIVELINE|15_0_OFFSET UNITYSDK_OFFSET(0x1E0A300)
#define MX_MINIGAMECCG_UI_UICARDGAME_MAPNODELINE_SETDATA_OFFSET UNITYSDK_OFFSET(0x1E0A3B0)
#define MX_MINIGAMECCG_UI_UICARDGAME_MAPNODELINE_INITIALIZELINES_OFFSET UNITYSDK_OFFSET(0x1E09C40)

namespace MX::MinigameCCG::UI
{
	inline static constexpr unsigned int UICardGame_MapNodeLine_TypeDefinitionIndex = 20779;

	class UICardGame_MapNodeLine : public Il2CppObject
	{
	public:
		Il2CppObject* lines; // 0x18
		::MX::MinigameCCG::UI::UICardGameMapScrollViewColumn* data; // 0x20
		::System::String* NodeArrow; // 0x58
		::System::String* straightLine; // 0x60
		::System::String* smoothCurveLine; // 0x68
		::System::String* tightCurveLine; // 0x70
		::System::String* on; // 0x78
		::System::String* off; // 0x80
		::UnityEngine::Color* activeLineColor; // 0x88
		::UnityEngine::Color* inactiveLineColor; // 0x98

		::System::Void ActiveLines(::UnityEngine::GameObject* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_MAPNODELINE_ACTIVELINES_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void SetLine(UISprite* arg, ::System::Boolean arg, ::System::String* str)
		{
			((::System::Void(*)(UISprite*, ::System::Boolean, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_MAPNODELINE_SETLINE_OFFSET))(arg, arg, str, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_MAPNODELINE_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean IsActiveLine(::MX::MinigameCCG::UI::NodeGroupClearStateType* arg, ::System::Int64 arg)
		{
			return (return (::System::Boolean(*)(::MX::MinigameCCG::UI::NodeGroupClearStateType*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_MAPNODELINE_ISACTIVELINE_OFFSET))(arg, arg, nullptr);
		}

		::MX::MinigameCCG::UI::NodeGroupClearState* GetNodeGroupClearState(::System::Int64 arg)
		{
			return (return (::MX::MinigameCCG::UI::NodeGroupClearState*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_MAPNODELINE_GETNODEGROUPCLEARSTATE_OFFSET))(arg, nullptr);
		}

		::System::Void _InitializeLines_g__InActiveLine|15_0(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_MAPNODELINE__INITIALIZELINES_G__INACTIVELINE|15_0_OFFSET))(arg, nullptr);
		}

		::System::Void SetData(::MX::MinigameCCG::UI::UICardGameMapScrollViewColumn* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::UI::UICardGameMapScrollViewColumn*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_MAPNODELINE_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void InitializeLines(::MX::MinigameCCG::UI::UICardGame_Map_NodeLine_VisualSet* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::UI::UICardGame_Map_NodeLine_VisualSet*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_UI_UICARDGAME_MAPNODELINE_INITIALIZELINES_OFFSET))(arg, nullptr);
		}

	};
}

