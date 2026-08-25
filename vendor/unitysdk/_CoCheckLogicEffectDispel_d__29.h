#pragma once
#include "unitysdk.h"

class EffectPlayer;
namespace MX::Logic::Skills { class SkillSpecification; }
class ParticleInterrupt;
class <>c__DisplayClass29_0;

#define <COCHECKLOGICEFFECTDISPEL>D__29_.CTOR_OFFSET UNITYSDK_OFFSET(0x1213AA0)
#define <COCHECKLOGICEFFECTDISPEL>D__29_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x121D420)
#define <COCHECKLOGICEFFECTDISPEL>D__29_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x121D430)
#define <COCHECKLOGICEFFECTDISPEL>D__29_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x121D8C0)
#define <COCHECKLOGICEFFECTDISPEL>D__29_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x121D8D0)
#define <COCHECKLOGICEFFECTDISPEL>D__29_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x121D920)

	inline static constexpr unsigned int <CoCheckLogicEffectDispel>d__29_TypeDefinitionIndex = 996;

	class <CoCheckLogicEffectDispel>d__29 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		EffectPlayer* __4__this; // 0x20
		::MX::Logic::Skills::SkillSpecification* skillSpecification; // 0x28
		::System::String* logicEffectGroupId; // 0x30
		ParticleInterrupt* interrupt; // 0x38
		<>c__DisplayClass29_0* __8__1; // 0x40
		::System::Int32 dotIndex; // 0x48
		Il2CppObject* _statChangeEffect_5__2; // 0x50

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <COCHECKLOGICEFFECTDISPEL>D__29_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COCHECKLOGICEFFECTDISPEL>D__29_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <COCHECKLOGICEFFECTDISPEL>D__29_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COCHECKLOGICEFFECTDISPEL>D__29_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COCHECKLOGICEFFECTDISPEL>D__29_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COCHECKLOGICEFFECTDISPEL>D__29_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

