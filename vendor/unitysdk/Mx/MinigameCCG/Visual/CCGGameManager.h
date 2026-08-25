#pragma once
#include "../../../unitysdk.h"

namespace MX::MinigameCCG { class CCGGame; }
namespace MX::MinigameCCG::AI { class CCGAIData; }
namespace Cysharp::Threading::Tasks { class UniTask; }
namespace MX::NetworkProtocol { class ErrorPacket; }
namespace MX::NetworkProtocol { class MiniGameCCGCompleteGameResponse; }
namespace MX::MinigameCCG::Visual { class CCGCardManager; }

#define MX_MINIGAMECCG_VISUAL_CCGGAMEMANAGER_BGMPLAY_OFFSET UNITYSDK_OFFSET(0x1E912E0)
#define MX_MINIGAMECCG_VISUAL_CCGGAMEMANAGER_INTERRUPT_OFFSET UNITYSDK_OFFSET(0x1E91470)
#define MX_MINIGAMECCG_VISUAL_CCGGAMEMANAGER_GET_GAME_OFFSET UNITYSDK_OFFSET(0x1E914C0)
#define MX_MINIGAMECCG_VISUAL_CCGGAMEMANAGER_GET_CCGOBJECT_OFFSET UNITYSDK_OFFSET(0x1E914D0)
#define MX_MINIGAMECCG_VISUAL_CCGGAMEMANAGER_SET_CANCELLATIONTOKENSOURCE_OFFSET UNITYSDK_OFFSET(0x1E91550)
#define MX_MINIGAMECCG_VISUAL_CCGGAMEMANAGER_PRELOADPOOLOBJECT_OFFSET UNITYSDK_OFFSET(0x1E91560)
#define MX_MINIGAMECCG_VISUAL_CCGGAMEMANAGER_STARTGAME_OFFSET UNITYSDK_OFFSET(0x1E916E0)
#define MX_MINIGAMECCG_VISUAL_CCGGAMEMANAGER_ENDGAME_OFFSET UNITYSDK_OFFSET(0x1E91860)
#define MX_MINIGAMECCG_VISUAL_CCGGAMEMANAGER_RELEASEGAMEDATA_OFFSET UNITYSDK_OFFSET(0x1E919F0)
#define MX_MINIGAMECCG_VISUAL_CCGGAMEMANAGER_GET_CANCELLATIONTOKENSOURCE_OFFSET UNITYSDK_OFFSET(0x1E91B70)
#define MX_MINIGAMECCG_VISUAL_CCGGAMEMANAGER_ERRORENDSTAGE_OFFSET UNITYSDK_OFFSET(0x1E91B80)
#define MX_MINIGAMECCG_VISUAL_CCGGAMEMANAGER_PREPAREFORGAME_OFFSET UNITYSDK_OFFSET(0x1E91CE0)
#define MX_MINIGAMECCG_VISUAL_CCGGAMEMANAGER__ENDGAME_G__COMPLETEGAMERESPONSE|22_0_OFFSET UNITYSDK_OFFSET(0x1E91ED0)
#define MX_MINIGAMECCG_VISUAL_CCGGAMEMANAGER_CREATEGAME_OFFSET UNITYSDK_OFFSET(0x1E92020)
#define MX_MINIGAMECCG_VISUAL_CCGGAMEMANAGER_GET_CARDMGR_OFFSET UNITYSDK_OFFSET(0x1E93060)
#define MX_MINIGAMECCG_VISUAL_CCGGAMEMANAGER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1E930E0)
#define MX_MINIGAMECCG_VISUAL_CCGGAMEMANAGER_PRELOADUI_OFFSET UNITYSDK_OFFSET(0x1E93130)
#define MX_MINIGAMECCG_VISUAL_CCGGAMEMANAGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E932D0)
#define MX_MINIGAMECCG_VISUAL_CCGGAMEMANAGER_ISVALIDCANCELLATIONTOKENSOURCE_OFFSET UNITYSDK_OFFSET(0x1E82D00)

namespace MX::MinigameCCG::Visual
{
	inline static constexpr unsigned int CCGGameManager_TypeDefinitionIndex = 21209;

	class CCGGameManager : public ::ToyWebViewShared::Messages::NotifyCursorChange
	{
	public:
		::MX::MinigameCCG::CCGGame* game; // 0x20
		::System::String* scenePath; // 0x0
		::System::String* preloadAssetDataPath; // 0x0
		::MX::MinigameCCG::AI::CCGAIData* aiData; // 0x28
		CCGAssetData* preloadAssetData; // 0x30
		::System::Int64 enemyGroupId; // 0x38
		::System::Threading::CancellationTokenSource* _CancellationTokenSource_k__BackingField; // 0x40

		::System::Void BGMPlay(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGGAMEMANAGER_BGMPLAY_OFFSET))(arg, nullptr);
		}

		::System::Void Interrupt()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGGAMEMANAGER_INTERRUPT_OFFSET))(nullptr);
		}

		::MX::MinigameCCG::CCGGame* get_Game()
		{
			return (return (::MX::MinigameCCG::CCGGame*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGGAMEMANAGER_GET_GAME_OFFSET))(nullptr);
		}

		MinigameCCGObject* get_ccgObject()
		{
			return (return (MinigameCCGObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGGAMEMANAGER_GET_CCGOBJECT_OFFSET))(nullptr);
		}

		::System::Void set_CancellationTokenSource(::System::Threading::CancellationTokenSource* arg)
		{
			((::System::Void(*)(::System::Threading::CancellationTokenSource*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGGAMEMANAGER_SET_CANCELLATIONTOKENSOURCE_OFFSET))(arg, nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* PreloadPoolObject()
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGGAMEMANAGER_PRELOADPOOLOBJECT_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* StartGame()
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGGAMEMANAGER_STARTGAME_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* EndGame(::System::Boolean arg)
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGGAMEMANAGER_ENDGAME_OFFSET))(arg, nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* ReleaseGameData()
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGGAMEMANAGER_RELEASEGAMEDATA_OFFSET))(nullptr);
		}

		::System::Threading::CancellationTokenSource* get_CancellationTokenSource()
		{
			return (return (::System::Threading::CancellationTokenSource*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGGAMEMANAGER_GET_CANCELLATIONTOKENSOURCE_OFFSET))(nullptr);
		}

		::System::Boolean ErrorEndStage(::MX::NetworkProtocol::ErrorPacket* arg)
		{
			return (return (::System::Boolean(*)(::MX::NetworkProtocol::ErrorPacket*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGGAMEMANAGER_ERRORENDSTAGE_OFFSET))(arg, nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* PrepareForGame(::System::Int64 arg, Il2CppObject* arg, ::System::String* str, ::System::Action* arg)
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::System::Int64, Il2CppObject*, ::System::String*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGGAMEMANAGER_PREPAREFORGAME_OFFSET))(arg, arg, str, arg, nullptr);
		}

		::System::Void _EndGame_g__CompleteGameResponse|22_0(::MX::NetworkProtocol::MiniGameCCGCompleteGameResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::MiniGameCCGCompleteGameResponse*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGGAMEMANAGER__ENDGAME_G__COMPLETEGAMERESPONSE|22_0_OFFSET))(arg, nullptr);
		}

		::MX::MinigameCCG::CCGGame* CreateGame(Il2CppObject* arg, ::MX::MinigameCCG::AI::CCGAIData* arg, ::System::Int32 arg)
		{
			return (return (::MX::MinigameCCG::CCGGame*(*)(Il2CppObject*, ::MX::MinigameCCG::AI::CCGAIData*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGGAMEMANAGER_CREATEGAME_OFFSET))(arg, arg, arg, nullptr);
		}

		::MX::MinigameCCG::Visual::CCGCardManager* get_cardMgr()
		{
			return (return (::MX::MinigameCCG::Visual::CCGCardManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGGAMEMANAGER_GET_CARDMGR_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGGAMEMANAGER_ONDISABLE_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* PreloadUI(::System::Action* arg)
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGGAMEMANAGER_PRELOADUI_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGGAMEMANAGER_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean IsValidCancellationTokenSource()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_CCGGAMEMANAGER_ISVALIDCANCELLATIONTOKENSOURCE_OFFSET))(nullptr);
		}

	};
}

