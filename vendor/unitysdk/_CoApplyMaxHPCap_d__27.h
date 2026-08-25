#pragma once
#include "unitysdk.h"

namespace MX::Logic::Skills::LogicEffects { class MaxHPCapGaugeEffect; }
namespace MX::Logic::Coroutine { class WaitForLateUpdate; }

#define <COAPPLYMAXHPCAP>D__27_.CTOR_OFFSET UNITYSDK_OFFSET(0x141EAC0)
#define <COAPPLYMAXHPCAP>D__27_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x141EAE0)
#define <COAPPLYMAXHPCAP>D__27_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x141EAF0)
#define <COAPPLYMAXHPCAP>D__27_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x141EEA0)
#define <COAPPLYMAXHPCAP>D__27_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x141EEB0)
#define <COAPPLYMAXHPCAP>D__27_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x141EF00)

	inline static constexpr unsigned int <CoApplyMaxHPCap>d__27_TypeDefinitionIndex = 14777;

	class <CoApplyMaxHPCap>d__27 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::MX::Logic::Skills::LogicEffects::MaxHPCapGaugeEffect* __4__this; // 0x20
		::MX::Logic::Coroutine::WaitForLateUpdate* _waitFor_5__2; // 0x28

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <COAPPLYMAXHPCAP>D__27_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COAPPLYMAXHPCAP>D__27_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <COAPPLYMAXHPCAP>D__27_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COAPPLYMAXHPCAP>D__27_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COAPPLYMAXHPCAP>D__27_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COAPPLYMAXHPCAP>D__27_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

