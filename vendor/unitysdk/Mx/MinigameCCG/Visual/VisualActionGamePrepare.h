#pragma once
#include "../../../unitysdk.h"

namespace Cysharp::Threading::Tasks { class UniTask; }
namespace MX::MinigameCCG { class CCGGame; }
namespace MX::MinigameCCG::Visual { class CCGFlowProcessor; }
namespace MX::MinigameCCG::UI { class UICardGame_InGame_HUD; }

#define MX_MINIGAMECCG_VISUAL_VISUALACTIONGAMEPREPARE_PRELOADRESOURCE_OFFSET UNITYSDK_OFFSET(0x1E69640)
#define MX_MINIGAMECCG_VISUAL_VISUALACTIONGAMEPREPARE_RUN_OFFSET UNITYSDK_OFFSET(0x1E697E0)
#define MX_MINIGAMECCG_VISUAL_VISUALACTIONGAMEPREPARE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E69960)
#define MX_MINIGAMECCG_VISUAL_VISUALACTIONGAMEPREPARE__RUN_B__1_0_OFFSET UNITYSDK_OFFSET(0x1E69970)
#define MX_MINIGAMECCG_VISUAL_VISUALACTIONGAMEPREPARE__RUN_B__1_1_OFFSET UNITYSDK_OFFSET(0x1E699B0)
#define MX_MINIGAMECCG_VISUAL_VISUALACTIONGAMEPREPARE__RUN_B__1_2_OFFSET UNITYSDK_OFFSET(0x1E699C0)

namespace MX::MinigameCCG::Visual
{
	inline static constexpr unsigned int VisualActionGamePrepare_TypeDefinitionIndex = 21101;

	class VisualActionGamePrepare : public Il2CppObject
	{
	public:
		::Cysharp::Threading::Tasks::UniTask* PreLoadResource(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_VISUALACTIONGAMEPREPARE_PRELOADRESOURCE_OFFSET))(arg, nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* Run()
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_VISUALACTIONGAMEPREPARE_RUN_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::MinigameCCG::CCGGame* arg, ::MX::MinigameCCG::Visual::CCGFlowProcessor* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGGame*, ::MX::MinigameCCG::Visual::CCGFlowProcessor*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_VISUALACTIONGAMEPREPARE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void _Run_b__1_0(::MX::MinigameCCG::UI::UICardGame_InGame_HUD* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::UI::UICardGame_InGame_HUD*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_VISUALACTIONGAMEPREPARE__RUN_B__1_0_OFFSET))(arg, nullptr);
		}

		::System::Void _Run_b__1_1(::MX::MinigameCCG::UI::UICardGame_InGame_HUD* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::UI::UICardGame_InGame_HUD*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_VISUALACTIONGAMEPREPARE__RUN_B__1_1_OFFSET))(arg, nullptr);
		}

		::System::Boolean _Run_b__1_2()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_VISUALACTIONGAMEPREPARE__RUN_B__1_2_OFFSET))(nullptr);
		}

	};
}

