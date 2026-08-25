#pragma once
#include "../../../unitysdk.h"

namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }
namespace MX::Visual::Battles { class BattleSceneHandler; }
namespace MX::NetworkProtocol { class ErrorPacket; }

#define MX_VISUAL_BATTLES_WORLDRAIDENDINGSUBSCENE_LEAVE_OFFSET UNITYSDK_OFFSET(0x1D87880)
#define MX_VISUAL_BATTLES_WORLDRAIDENDINGSUBSCENE_CHANGESTATE_OFFSET UNITYSDK_OFFSET(0x1D87980)
#define MX_VISUAL_BATTLES_WORLDRAIDENDINGSUBSCENE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D87AA0)
#define MX_VISUAL_BATTLES_WORLDRAIDENDINGSUBSCENE_EXIT_OFFSET UNITYSDK_OFFSET(0x1D87AB0)
#define MX_VISUAL_BATTLES_WORLDRAIDENDINGSUBSCENE_SENDRAIDEND_OFFSET UNITYSDK_OFFSET(0x1D87BD0)
#define MX_VISUAL_BATTLES_WORLDRAIDENDINGSUBSCENE_COEXIT_OFFSET UNITYSDK_OFFSET(0x1D87B70)
#define MX_VISUAL_BATTLES_WORLDRAIDENDINGSUBSCENE_ENTER_OFFSET UNITYSDK_OFFSET(0x1D87DD0)
#define MX_VISUAL_BATTLES_WORLDRAIDENDINGSUBSCENE_ADVANCE_OFFSET UNITYSDK_OFFSET(0x1D87F30)
#define MX_VISUAL_BATTLES_WORLDRAIDENDINGSUBSCENE_ERRORACTION_OFFSET UNITYSDK_OFFSET(0x1D87F40)

namespace MX::Visual::Battles
{
	inline static constexpr unsigned int WorldRaidEndingSubScene_TypeDefinitionIndex = 20351;

	class WorldRaidEndingSubScene : public Il2CppObject
	{
	public:
		::System::Void Leave()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_WORLDRAIDENDINGSUBSCENE_LEAVE_OFFSET))(nullptr);
		}

		::System::Boolean ChangeState(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return (return (::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_WORLDRAIDENDINGSUBSCENE_CHANGESTATE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Visual::Battles::BattleSceneHandler* arg)
		{
			((::System::Void(*)(::MX::Visual::Battles::BattleSceneHandler*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_WORLDRAIDENDINGSUBSCENE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Exit()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_WORLDRAIDENDINGSUBSCENE_EXIT_OFFSET))(nullptr);
		}

		::System::Void SendRaidEnd(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_WORLDRAIDENDINGSUBSCENE_SENDRAIDEND_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* CoExit()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_WORLDRAIDENDINGSUBSCENE_COEXIT_OFFSET))(nullptr);
		}

		::System::Void Enter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_WORLDRAIDENDINGSUBSCENE_ENTER_OFFSET))(nullptr);
		}

		::System::Void Advance()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_WORLDRAIDENDINGSUBSCENE_ADVANCE_OFFSET))(nullptr);
		}

		::System::Boolean ErrorAction(::MX::NetworkProtocol::ErrorPacket* arg)
		{
			return (return (::System::Boolean(*)(::MX::NetworkProtocol::ErrorPacket*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_WORLDRAIDENDINGSUBSCENE_ERRORACTION_OFFSET))(arg, nullptr);
		}

	};
}

