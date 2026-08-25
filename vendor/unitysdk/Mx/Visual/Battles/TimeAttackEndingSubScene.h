#pragma once
#include "../../../unitysdk.h"

namespace MX::NetworkProtocol { class ErrorPacket; }
namespace MX::Visual::Battles { class BattleSceneHandler; }
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }

#define MX_VISUAL_BATTLES_TIMEATTACKENDINGSUBSCENE_SENDTIMEATTACKDUNGEONEND_OFFSET UNITYSDK_OFFSET(0x1D86B20)
#define MX_VISUAL_BATTLES_TIMEATTACKENDINGSUBSCENE_ERRORACTION_OFFSET UNITYSDK_OFFSET(0x1D86E10)
#define MX_VISUAL_BATTLES_TIMEATTACKENDINGSUBSCENE_ENTER_OFFSET UNITYSDK_OFFSET(0x1D86F90)
#define MX_VISUAL_BATTLES_TIMEATTACKENDINGSUBSCENE_ADVANCE_OFFSET UNITYSDK_OFFSET(0x1D870F0)
#define MX_VISUAL_BATTLES_TIMEATTACKENDINGSUBSCENE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D87100)
#define MX_VISUAL_BATTLES_TIMEATTACKENDINGSUBSCENE_CHANGESTATE_OFFSET UNITYSDK_OFFSET(0x1D87110)
#define MX_VISUAL_BATTLES_TIMEATTACKENDINGSUBSCENE_EXIT_OFFSET UNITYSDK_OFFSET(0x1D871A0)
#define MX_VISUAL_BATTLES_TIMEATTACKENDINGSUBSCENE_COEXIT_OFFSET UNITYSDK_OFFSET(0x1D87260)
#define MX_VISUAL_BATTLES_TIMEATTACKENDINGSUBSCENE_LEAVE_OFFSET UNITYSDK_OFFSET(0x1D872E0)

namespace MX::Visual::Battles
{
	inline static constexpr unsigned int TimeAttackEndingSubScene_TypeDefinitionIndex = 20347;

	class TimeAttackEndingSubScene : public Il2CppObject
	{
	public:
		::System::Void SendTimeAttackDungeonEnd(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_TIMEATTACKENDINGSUBSCENE_SENDTIMEATTACKDUNGEONEND_OFFSET))(arg, nullptr);
		}

		::System::Boolean ErrorAction(::MX::NetworkProtocol::ErrorPacket* arg)
		{
			return (return (::System::Boolean(*)(::MX::NetworkProtocol::ErrorPacket*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_TIMEATTACKENDINGSUBSCENE_ERRORACTION_OFFSET))(arg, nullptr);
		}

		::System::Void Enter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_TIMEATTACKENDINGSUBSCENE_ENTER_OFFSET))(nullptr);
		}

		::System::Void Advance()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_TIMEATTACKENDINGSUBSCENE_ADVANCE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Visual::Battles::BattleSceneHandler* arg)
		{
			((::System::Void(*)(::MX::Visual::Battles::BattleSceneHandler*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_TIMEATTACKENDINGSUBSCENE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean ChangeState(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return (return (::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_TIMEATTACKENDINGSUBSCENE_CHANGESTATE_OFFSET))(arg, nullptr);
		}

		::System::Void Exit()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_TIMEATTACKENDINGSUBSCENE_EXIT_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoExit()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_TIMEATTACKENDINGSUBSCENE_COEXIT_OFFSET))(nullptr);
		}

		::System::Void Leave()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_TIMEATTACKENDINGSUBSCENE_LEAVE_OFFSET))(nullptr);
		}

	};
}

