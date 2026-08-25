#pragma once
#include "../../../unitysdk.h"

namespace MX::Visual::Battles { class BattleSceneHandler; }
namespace MX::NetworkProtocol { class ErrorPacket; }

#define MX_VISUAL_BATTLES_MULTIFLOORRAIDENDINGSUBSCENE_EXIT_OFFSET UNITYSDK_OFFSET(0x1D784F0)
#define MX_VISUAL_BATTLES_MULTIFLOORRAIDENDINGSUBSCENE_CHANGESTATE_OFFSET UNITYSDK_OFFSET(0x1D78610)
#define MX_VISUAL_BATTLES_MULTIFLOORRAIDENDINGSUBSCENE_COEXIT_OFFSET UNITYSDK_OFFSET(0x1D785B0)
#define MX_VISUAL_BATTLES_MULTIFLOORRAIDENDINGSUBSCENE_ENTER_OFFSET UNITYSDK_OFFSET(0x1D786F0)
#define MX_VISUAL_BATTLES_MULTIFLOORRAIDENDINGSUBSCENE_ADVANCE_OFFSET UNITYSDK_OFFSET(0x1D78A10)
#define MX_VISUAL_BATTLES_MULTIFLOORRAIDENDINGSUBSCENE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D75C10)
#define MX_VISUAL_BATTLES_MULTIFLOORRAIDENDINGSUBSCENE_LEAVE_OFFSET UNITYSDK_OFFSET(0x1D78A20)
#define MX_VISUAL_BATTLES_MULTIFLOORRAIDENDINGSUBSCENE_ERRORACTION_OFFSET UNITYSDK_OFFSET(0x1D78A30)

namespace MX::Visual::Battles
{
	inline static constexpr unsigned int MultiFloorRaidEndingSubScene_TypeDefinitionIndex = 20314;

	class MultiFloorRaidEndingSubScene : public Il2CppObject
	{
	public:
		::System::Void Exit()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_MULTIFLOORRAIDENDINGSUBSCENE_EXIT_OFFSET))(nullptr);
		}

		::System::Void ChangeState()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_MULTIFLOORRAIDENDINGSUBSCENE_CHANGESTATE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoExit()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_MULTIFLOORRAIDENDINGSUBSCENE_COEXIT_OFFSET))(nullptr);
		}

		::System::Void Enter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_MULTIFLOORRAIDENDINGSUBSCENE_ENTER_OFFSET))(nullptr);
		}

		::System::Void Advance()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_MULTIFLOORRAIDENDINGSUBSCENE_ADVANCE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Visual::Battles::BattleSceneHandler* arg)
		{
			((::System::Void(*)(::MX::Visual::Battles::BattleSceneHandler*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_MULTIFLOORRAIDENDINGSUBSCENE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Leave()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_MULTIFLOORRAIDENDINGSUBSCENE_LEAVE_OFFSET))(nullptr);
		}

		::System::Boolean ErrorAction(::MX::NetworkProtocol::ErrorPacket* arg)
		{
			return (return (::System::Boolean(*)(::MX::NetworkProtocol::ErrorPacket*, ::PVOID))((::PBYTE)hIl2Cpp + MX_VISUAL_BATTLES_MULTIFLOORRAIDENDINGSUBSCENE_ERRORACTION_OFFSET))(arg, nullptr);
		}

	};
}

