#pragma once
#include "unitysdk.h"

namespace UnityEngine { class YieldInstruction; }
class GaugeUIValueReceiver;

#define <CO_INITIALIZE>D__10_.CTOR_OFFSET UNITYSDK_OFFSET(0x25EAE70)
#define <CO_INITIALIZE>D__10_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x25EAFF0)
#define <CO_INITIALIZE>D__10_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x25EB000)
#define <CO_INITIALIZE>D__10_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_UNITYENGINE.YIELDINSTRUCTION_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x25EB240)
#define <CO_INITIALIZE>D__10_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x25EB250)
#define <CO_INITIALIZE>D__10_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x25EB2A0)

	inline static constexpr unsigned int <Co_Initialize>d__10_TypeDefinitionIndex = 6413;

	class <Co_Initialize>d__10 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::UnityEngine::YieldInstruction* __2__current; // 0x18
		GaugeUIValueReceiver* __4__this; // 0x20

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <CO_INITIALIZE>D__10_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_INITIALIZE>D__10_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_INITIALIZE>D__10_MOVENEXT_OFFSET))(nullptr);
		}

		::UnityEngine::YieldInstruction* System.Collections.Generic.IEnumerator_UnityEngine.YieldInstruction_.get_Current()
		{
			return ((::UnityEngine::YieldInstruction*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_INITIALIZE>D__10_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_UNITYENGINE.YIELDINSTRUCTION_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_INITIALIZE>D__10_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_INITIALIZE>D__10_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

