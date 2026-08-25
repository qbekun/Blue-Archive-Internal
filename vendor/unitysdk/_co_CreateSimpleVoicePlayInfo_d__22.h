#pragma once
#include "unitysdk.h"

#define <CO_CREATESIMPLEVOICEPLAYINFO>D__22_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D40870)
#define <CO_CREATESIMPLEVOICEPLAYINFO>D__22_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D40890)
#define <CO_CREATESIMPLEVOICEPLAYINFO>D__22_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1D40950)
#define <CO_CREATESIMPLEVOICEPLAYINFO>D__22___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x1D40F00)
#define <CO_CREATESIMPLEVOICEPLAYINFO>D__22_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1D40FB0)
#define <CO_CREATESIMPLEVOICEPLAYINFO>D__22_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x1D40FC0)
#define <CO_CREATESIMPLEVOICEPLAYINFO>D__22_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1D41010)

	inline static constexpr unsigned int <co_CreateSimpleVoicePlayInfo>d__22_TypeDefinitionIndex = 20111;

	class <co_CreateSimpleVoicePlayInfo>d__22 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		Il2CppObject* hashes; // 0x20
		<>c__DisplayClass22_0* __8__1; // 0x28
		<>c__DisplayClass22_1* __8__2; // 0x30
		Il2CppObject* onComplete; // 0x38
		Il2CppObject* __7__wrap1; // 0x40

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <CO_CREATESIMPLEVOICEPLAYINFO>D__22_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_CREATESIMPLEVOICEPLAYINFO>D__22_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_CREATESIMPLEVOICEPLAYINFO>D__22_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void __m__Finally1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_CREATESIMPLEVOICEPLAYINFO>D__22___M__FINALLY1_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_CREATESIMPLEVOICEPLAYINFO>D__22_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_CREATESIMPLEVOICEPLAYINFO>D__22_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_CREATESIMPLEVOICEPLAYINFO>D__22_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

