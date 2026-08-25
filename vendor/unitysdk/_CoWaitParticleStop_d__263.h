#pragma once
#include "unitysdk.h"

class CharacterVisual;

#define <COWAITPARTICLESTOP>D__263_.CTOR_OFFSET UNITYSDK_OFFSET(0x120A7F0)
#define <COWAITPARTICLESTOP>D__263_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x120A810)
#define <COWAITPARTICLESTOP>D__263_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x120A820)
#define <COWAITPARTICLESTOP>D__263_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x120AB00)
#define <COWAITPARTICLESTOP>D__263_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x120AB10)
#define <COWAITPARTICLESTOP>D__263_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x120AB60)

	inline static constexpr unsigned int <CoWaitParticleStop>d__263_TypeDefinitionIndex = 968;

	class <CoWaitParticleStop>d__263 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		CharacterVisual* __4__this; // 0x20
		::Il2CppArray<::System::Object*>* __7__wrap1; // 0x28
		::System::Int32 __7__wrap2; // 0x30

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <COWAITPARTICLESTOP>D__263_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COWAITPARTICLESTOP>D__263_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <COWAITPARTICLESTOP>D__263_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COWAITPARTICLESTOP>D__263_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COWAITPARTICLESTOP>D__263_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COWAITPARTICLESTOP>D__263_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

