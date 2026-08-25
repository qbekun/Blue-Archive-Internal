#pragma once
#include "../../../unitysdk.h"

namespace MX::Visual::Battles { class BattleSceneHandler; }
namespace MX::NetworkProtocol { class ErrorPacket; }
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }

#define MX_VISUAL_BATTLES_SINGLERAIDENDINGSUBSCENE_ADVANCE_OFFSET UNITYSDK_OFFSET(0x1D7F310)
#define MX_VISUAL_BATTLES_SINGLERAIDENDINGSUBSCENE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D7F320)
#define MX_VISUAL_BATTLES_SINGLERAIDENDINGSUBSCENE_EXIT_OFFSET UNITYSDK_OFFSET(0x1D7F330)
#define MX_VISUAL_BATTLES_SINGLERAIDENDINGSUBSCENE_LEAVE_OFFSET UNITYSDK_OFFSET(0x1D7F450)
#define MX_VISUAL_BATTLES_SINGLERAIDENDINGSUBSCENE_ERRORACTION_OFFSET UNITYSDK_OFFSET(0x1D7F550)
#define MX_VISUAL_BATTLES_SINGLERAIDENDINGSUBSCENE_ENTER_OFFSET UNITYSDK_OFFSET(0x1D7F6E0)
#define MX_VISUAL_BATTLES_SINGLERAIDENDINGSUBSCENE_SENDRAIDEND_OFFSET UNITYSDK_OFFSET(0x1D7F840)
#define MX_VISUAL_BATTLES_SINGLERAIDENDINGSUBSCENE_CHANGESTATE_OFFSET UNITYSDK_OFFSET(0x1D7FA20)
#define MX_VISUAL_BATTLES_SINGLERAIDENDINGSUBSCENE_COEXIT_OFFSET UNITYSDK_OFFSET(0x1D7F3F0)

namespace MX::Visual::Battles
{
	inline static constexpr unsigned int SingleRaidEndingSubScene_TypeDefinitionIndex = 20334;

	class SingleRaidEndingSubScene : public Il2CppObject
	{
	public:
		::System::Void Advance()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SINGLERAIDENDINGSUBSCENE_ADVANCE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Visual::Battles::BattleSceneHandler* arg)
		{
			((::System::Void(*)(::MX::Visual::Battles::BattleSceneHandler*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SINGLERAIDENDINGSUBSCENE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Exit()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SINGLERAIDENDINGSUBSCENE_EXIT_OFFSET))(nullptr);
		}

		::System::Void Leave()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SINGLERAIDENDINGSUBSCENE_LEAVE_OFFSET))(nullptr);
		}

		::System::Boolean ErrorAction(::MX::NetworkProtocol::ErrorPacket* arg)
		{
			return (return (::System::Boolean(*)(::MX::NetworkProtocol::ErrorPacket*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SINGLERAIDENDINGSUBSCENE_ERRORACTION_OFFSET))(arg, nullptr);
		}

		::System::Void Enter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SINGLERAIDENDINGSUBSCENE_ENTER_OFFSET))(nullptr);
		}

		::System::Void SendRaidEnd(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SINGLERAIDENDINGSUBSCENE_SENDRAIDEND_OFFSET))(arg, nullptr);
		}

		::System::Boolean ChangeState(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return (return (::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SINGLERAIDENDINGSUBSCENE_CHANGESTATE_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* CoExit()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_SINGLERAIDENDINGSUBSCENE_COEXIT_OFFSET))(nullptr);
		}

	};
}

