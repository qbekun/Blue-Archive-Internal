#pragma once
#include "unitysdk.h"

class ParticleInterrupt;
class EffectPlayer;
namespace FlatData { class EffectBone; }
namespace MX::Logic::Coroutine { class WaitForLateUpdate; }

#define <COPLAYENDLOGICEFFECTDELAYED>D__38_.CTOR_OFFSET UNITYSDK_OFFSET(0x13B87B0)
#define <COPLAYENDLOGICEFFECTDELAYED>D__38_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x13B87D0)
#define <COPLAYENDLOGICEFFECTDELAYED>D__38_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x13B87E0)
#define <COPLAYENDLOGICEFFECTDELAYED>D__38_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x13B8920)
#define <COPLAYENDLOGICEFFECTDELAYED>D__38_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x13B8930)
#define <COPLAYENDLOGICEFFECTDELAYED>D__38_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x13B8980)

	inline static constexpr unsigned int <CoPlayEndLogicEffectDelayed>d__38_TypeDefinitionIndex = 1001;

	class <CoPlayEndLogicEffectDelayed>d__38 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		ParticleInterrupt* interruptLoop; // 0x20
		EffectPlayer* __4__this; // 0x28
		::System::String* prefabPath; // 0x30
		::FlatData::EffectBone* effectBone; // 0x38
		::System::Boolean checkEffectCountLimit; // 0x3C
		::MX::Logic::Coroutine::WaitForLateUpdate* _waitFor_5__2; // 0x40

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <COPLAYENDLOGICEFFECTDELAYED>D__38_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYENDLOGICEFFECTDELAYED>D__38_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYENDLOGICEFFECTDELAYED>D__38_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYENDLOGICEFFECTDELAYED>D__38_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYENDLOGICEFFECTDELAYED>D__38_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYENDLOGICEFFECTDELAYED>D__38_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

