#pragma once
#include "unitysdk.h"

class BuffParticle;
class <>c__DisplayClass15_1;
class <>c__DisplayClass15_0;
class <>c__DisplayClass15_2;

#define <CO_EFFECTPROCESS>D__15_.CTOR_OFFSET UNITYSDK_OFFSET(0x10AD570)
#define <CO_EFFECTPROCESS>D__15_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x10AD6E0)
#define <CO_EFFECTPROCESS>D__15_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x10AD6F0)
#define <CO_EFFECTPROCESS>D__15_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x10ADDA0)
#define <CO_EFFECTPROCESS>D__15_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x10ADDB0)
#define <CO_EFFECTPROCESS>D__15_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x10ADE00)

	inline static constexpr unsigned int <co_EffectProcess>d__15_TypeDefinitionIndex = 897;

	class <co_EffectProcess>d__15 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		BuffParticle* __4__this; // 0x20
		<>c__DisplayClass15_1* __8__1; // 0x28
		<>c__DisplayClass15_0* __8__2; // 0x30
		<>c__DisplayClass15_2* __8__3; // 0x38

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <CO_EFFECTPROCESS>D__15_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_EFFECTPROCESS>D__15_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_EFFECTPROCESS>D__15_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_EFFECTPROCESS>D__15_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_EFFECTPROCESS>D__15_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_EFFECTPROCESS>D__15_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

