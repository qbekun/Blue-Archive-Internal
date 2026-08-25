#pragma once
#include "unitysdk.h"

class CampaignTask;
namespace MX::Campaign { class Strategy; }

#define <PROCESSSTRATEGYANDDISPLAYINFO>D__94_.CTOR_OFFSET UNITYSDK_OFFSET(0x1FFE010)
#define <PROCESSSTRATEGYANDDISPLAYINFO>D__94_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x20051D0)
#define <PROCESSSTRATEGYANDDISPLAYINFO>D__94_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x20051E0)
#define <PROCESSSTRATEGYANDDISPLAYINFO>D__94_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x2005720)
#define <PROCESSSTRATEGYANDDISPLAYINFO>D__94_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x2005730)
#define <PROCESSSTRATEGYANDDISPLAYINFO>D__94_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x2005780)

	inline static constexpr unsigned int <ProcessStrategyAndDisplayInfo>d__94_TypeDefinitionIndex = 3111;

	class <ProcessStrategyAndDisplayInfo>d__94 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		CampaignTask* __4__this; // 0x20
		::MX::Campaign::Strategy* _strategyObject_5__2; // 0x28

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <PROCESSSTRATEGYANDDISPLAYINFO>D__94_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <PROCESSSTRATEGYANDDISPLAYINFO>D__94_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <PROCESSSTRATEGYANDDISPLAYINFO>D__94_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <PROCESSSTRATEGYANDDISPLAYINFO>D__94_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <PROCESSSTRATEGYANDDISPLAYINFO>D__94_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <PROCESSSTRATEGYANDDISPLAYINFO>D__94_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

