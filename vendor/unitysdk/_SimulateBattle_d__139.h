#pragma once
#include "unitysdk.h"

namespace MX::Logic::Data { class BattleSetting; }
class CampaignTask;
class <>c__DisplayClass139_0;
class ICampaignTacticResultNetworkTask;
namespace MX::Visual::Battles { class O07476af4dccd221a5fe3a591a519011b68f807433c9bfb787ccd65b5a58e7f23; }
namespace MX::Logic::Battles { class Battle; }

#define <SIMULATEBATTLE>D__139_.CTOR_OFFSET UNITYSDK_OFFSET(0x2001D00)
#define <SIMULATEBATTLE>D__139_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x2007BC0)
#define <SIMULATEBATTLE>D__139_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x2007BD0)
#define <SIMULATEBATTLE>D__139_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x2008800)
#define <SIMULATEBATTLE>D__139_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x2008810)
#define <SIMULATEBATTLE>D__139_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x2008860)

	inline static constexpr unsigned int <SimulateBattle>d__139_TypeDefinitionIndex = 3123;

	class <SimulateBattle>d__139 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::MX::Logic::Data::BattleSetting* battleSetting; // 0x20
		CampaignTask* __4__this; // 0x28
		<>c__DisplayClass139_0* __8__1; // 0x30
		ICampaignTacticResultNetworkTask* _task_5__2; // 0x38
		::MX::Visual::Battles::O07476af4dccd221a5fe3a591a519011b68f807433c9bfb787ccd65b5a58e7f23* _logicComponent_5__3; // 0x40
		::System::Int32 _frameMultiplier_5__4; // 0x48
		::MX::Logic::Battles::Battle* _battle_5__5; // 0x50
		::System::Threading::Tasks::Task* _skillLoadTask_5__6; // 0x58

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <SIMULATEBATTLE>D__139_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <SIMULATEBATTLE>D__139_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <SIMULATEBATTLE>D__139_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <SIMULATEBATTLE>D__139_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <SIMULATEBATTLE>D__139_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <SIMULATEBATTLE>D__139_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

