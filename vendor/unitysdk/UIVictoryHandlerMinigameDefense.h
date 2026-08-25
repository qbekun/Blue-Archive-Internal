#pragma once
#include "unitysdk.h"

namespace MX::Logic::Data { class BattleTypes; }
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }
namespace FlatData { class ContentType; }
namespace MX::GameLogic::DBModel { class MiniGameDefenseStageHistoryDB; }
namespace MX::NetworkProtocol { class MiniGameDefenseBattleResultResponse; }

#define UIVICTORYHANDLERMINIGAMEDEFENSE_GET_BATTLETYPE_OFFSET UNITYSDK_OFFSET(0xBA9D20)
#define UIVICTORYHANDLERMINIGAMEDEFENSE_HANDLERESULT_OFFSET UNITYSDK_OFFSET(0xBA9D30)
#define UIVICTORYHANDLERMINIGAMEDEFENSE_DETACHLISTENER_OFFSET UNITYSDK_OFFSET(0xBA9D40)
#define UIVICTORYHANDLERMINIGAMEDEFENSE_HANDLECLOSE_OFFSET UNITYSDK_OFFSET(0xBA9D50)
#define UIVICTORYHANDLERMINIGAMEDEFENSE_GET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0xBA9DE0)
#define UIVICTORYHANDLERMINIGAMEDEFENSE__REQUESTRESULT_B__4_1_OFFSET UNITYSDK_OFFSET(0xBA9DF0)
#define UIVICTORYHANDLERMINIGAMEDEFENSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xBA9E20)
#define UIVICTORYHANDLERMINIGAMEDEFENSE_REQUESTRESULT_OFFSET UNITYSDK_OFFSET(0xBA9E30)
#define UIVICTORYHANDLERMINIGAMEDEFENSE_HANDLETOLOBBY_OFFSET UNITYSDK_OFFSET(0xBAA0D0)
#define UIVICTORYHANDLERMINIGAMEDEFENSE_ADDMISSIONPOPUP_OFFSET UNITYSDK_OFFSET(0xBAA160)
#define UIVICTORYHANDLERMINIGAMEDEFENSE__REQUESTRESULT_B__4_0_OFFSET UNITYSDK_OFFSET(0xBAA280)
#define UIVICTORYHANDLERMINIGAMEDEFENSE_ATTACHLISTENER_OFFSET UNITYSDK_OFFSET(0xBAA8E0)

	inline static constexpr unsigned int UIVictoryHandlerMinigameDefense_TypeDefinitionIndex = 8556;

	class UIVictoryHandlerMinigameDefense : public Il2CppObject
	{
	public:
		::MX::Logic::Data::BattleTypes* get_BattleType()
		{
			return ((::MX::Logic::Data::BattleTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVICTORYHANDLERMINIGAMEDEFENSE_GET_BATTLETYPE_OFFSET))(nullptr);
		}

		::System::Boolean HandleResult(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIVICTORYHANDLERMINIGAMEDEFENSE_HANDLERESULT_OFFSET))(arg, nullptr);
		}

		::System::Void DetachListener()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVICTORYHANDLERMINIGAMEDEFENSE_DETACHLISTENER_OFFSET))(nullptr);
		}

		::System::Void HandleClose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVICTORYHANDLERMINIGAMEDEFENSE_HANDLECLOSE_OFFSET))(nullptr);
		}

		::FlatData::ContentType* get_ContentType()
		{
			return ((::FlatData::ContentType*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVICTORYHANDLERMINIGAMEDEFENSE_GET_CONTENTTYPE_OFFSET))(nullptr);
		}

		::System::Boolean _RequestResult_b__4_1(::MX::GameLogic::DBModel::MiniGameDefenseStageHistoryDB* arg)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::MiniGameDefenseStageHistoryDB*, ::PVOID))((::PBYTE)hIl2Cpp + UIVICTORYHANDLERMINIGAMEDEFENSE__REQUESTRESULT_B__4_1_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVICTORYHANDLERMINIGAMEDEFENSE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void RequestResult()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVICTORYHANDLERMINIGAMEDEFENSE_REQUESTRESULT_OFFSET))(nullptr);
		}

		::System::Void HandleToLobby()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVICTORYHANDLERMINIGAMEDEFENSE_HANDLETOLOBBY_OFFSET))(nullptr);
		}

		::System::Void AddMissionPopup(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIVICTORYHANDLERMINIGAMEDEFENSE_ADDMISSIONPOPUP_OFFSET))(arg, nullptr);
		}

		::System::Void _RequestResult_b__4_0(::MX::NetworkProtocol::MiniGameDefenseBattleResultResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::MiniGameDefenseBattleResultResponse*, ::PVOID))((::PBYTE)hIl2Cpp + UIVICTORYHANDLERMINIGAMEDEFENSE__REQUESTRESULT_B__4_0_OFFSET))(arg, nullptr);
		}

		::System::Void AttachListener()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIVICTORYHANDLERMINIGAMEDEFENSE_ATTACHLISTENER_OFFSET))(nullptr);
		}

	};

