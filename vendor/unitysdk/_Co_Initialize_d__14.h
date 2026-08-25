#pragma once
#include "unitysdk.h"

namespace UnityEngine { class YieldInstruction; }
class HeaterMeshGlowSetting;

#define <CO_INITIALIZE>D__14_.CTOR_OFFSET UNITYSDK_OFFSET(0x13BCD00)
#define <CO_INITIALIZE>D__14_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x13BD3E0)
#define <CO_INITIALIZE>D__14_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x13BD3F0)
#define <CO_INITIALIZE>D__14_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_UNITYENGINE.YIELDINSTRUCTION_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x13BD670)
#define <CO_INITIALIZE>D__14_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x13BD680)
#define <CO_INITIALIZE>D__14_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x13BD6D0)

	inline static constexpr unsigned int <Co_Initialize>d__14_TypeDefinitionIndex = 1018;

	class <Co_Initialize>d__14 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::UnityEngine::YieldInstruction* __2__current; // 0x18
		HeaterMeshGlowSetting* __4__this; // 0x20

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <CO_INITIALIZE>D__14_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_INITIALIZE>D__14_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_INITIALIZE>D__14_MOVENEXT_OFFSET))(nullptr);
		}

		::UnityEngine::YieldInstruction* System.Collections.Generic.IEnumerator_UnityEngine.YieldInstruction_.get_Current()
		{
			return ((::UnityEngine::YieldInstruction*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_INITIALIZE>D__14_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_UNITYENGINE.YIELDINSTRUCTION_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_INITIALIZE>D__14_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_INITIALIZE>D__14_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

