#pragma once
#include "../../../unitysdk.h"

namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }
namespace MX::NetworkProtocol { class ErrorPacket; }
namespace MX::Visual::Battles { class BattleSceneHandler; }

#define MX_VISUAL_BATTLES_ELIMINATERAIDENDINGSUBSCENE_COEXIT_OFFSET UNITYSDK_OFFSET(0x1D76190)
#define MX_VISUAL_BATTLES_ELIMINATERAIDENDINGSUBSCENE_ADVANCE_OFFSET UNITYSDK_OFFSET(0x1D76210)
#define MX_VISUAL_BATTLES_ELIMINATERAIDENDINGSUBSCENE_CHANGESTATE_OFFSET UNITYSDK_OFFSET(0x1D76220)
#define MX_VISUAL_BATTLES_ELIMINATERAIDENDINGSUBSCENE_ERRORACTION_OFFSET UNITYSDK_OFFSET(0x1D76340)
#define MX_VISUAL_BATTLES_ELIMINATERAIDENDINGSUBSCENE_ENTER_OFFSET UNITYSDK_OFFSET(0x1D764D0)
#define MX_VISUAL_BATTLES_ELIMINATERAIDENDINGSUBSCENE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D75BB0)
#define MX_VISUAL_BATTLES_ELIMINATERAIDENDINGSUBSCENE_LEAVE_OFFSET UNITYSDK_OFFSET(0x1D76A20)
#define MX_VISUAL_BATTLES_ELIMINATERAIDENDINGSUBSCENE_SENDRAIDEND_OFFSET UNITYSDK_OFFSET(0x1D76770)
#define MX_VISUAL_BATTLES_ELIMINATERAIDENDINGSUBSCENE_EXIT_OFFSET UNITYSDK_OFFSET(0x1D76B20)

namespace MX::Visual::Battles
{
	inline static constexpr unsigned int EliminateRaidEndingSubScene_TypeDefinitionIndex = 20308;

	class EliminateRaidEndingSubScene : public Il2CppObject
	{
	public:
		::System::Collections::IEnumerator* CoExit()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_ELIMINATERAIDENDINGSUBSCENE_COEXIT_OFFSET))(nullptr);
		}

		::System::Void Advance()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_ELIMINATERAIDENDINGSUBSCENE_ADVANCE_OFFSET))(nullptr);
		}

		::System::Boolean ChangeState(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return (return (::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_ELIMINATERAIDENDINGSUBSCENE_CHANGESTATE_OFFSET))(arg, nullptr);
		}

		::System::Boolean ErrorAction(::MX::NetworkProtocol::ErrorPacket* arg)
		{
			return (return (::System::Boolean(*)(::MX::NetworkProtocol::ErrorPacket*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_ELIMINATERAIDENDINGSUBSCENE_ERRORACTION_OFFSET))(arg, nullptr);
		}

		::System::Void Enter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_ELIMINATERAIDENDINGSUBSCENE_ENTER_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Visual::Battles::BattleSceneHandler* arg)
		{
			((::System::Void(*)(::MX::Visual::Battles::BattleSceneHandler*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_ELIMINATERAIDENDINGSUBSCENE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Leave()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_ELIMINATERAIDENDINGSUBSCENE_LEAVE_OFFSET))(nullptr);
		}

		::System::Void SendRaidEnd(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_ELIMINATERAIDENDINGSUBSCENE_SENDRAIDEND_OFFSET))(arg, nullptr);
		}

		::System::Void Exit()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_ELIMINATERAIDENDINGSUBSCENE_EXIT_OFFSET))(nullptr);
		}

	};
}

