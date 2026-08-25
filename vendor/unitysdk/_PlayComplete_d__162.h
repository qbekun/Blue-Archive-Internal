#pragma once
#include "unitysdk.h"

class UIConquest;
class <>c__DisplayClass162_0;
namespace UnityEngine { class WaitUntil; }

#define <PLAYCOMPLETE>D__162_.CTOR_OFFSET UNITYSDK_OFFSET(0x235C740)
#define <PLAYCOMPLETE>D__162_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x235E6F0)
#define <PLAYCOMPLETE>D__162_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x235E700)
#define <PLAYCOMPLETE>D__162_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x235ECC0)
#define <PLAYCOMPLETE>D__162_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x235ECD0)
#define <PLAYCOMPLETE>D__162_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x235ED20)

	inline static constexpr unsigned int <PlayComplete>d__162_TypeDefinitionIndex = 5032;

	class <PlayComplete>d__162 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::System::Boolean isTileComplete; // 0x20
		UIConquest* __4__this; // 0x28
		<>c__DisplayClass162_0* __8__1; // 0x30
		::System::Action* onFinish; // 0x38
		::UnityEngine::WaitUntil* _waitUntil_5__2; // 0x40

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <PLAYCOMPLETE>D__162_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYCOMPLETE>D__162_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYCOMPLETE>D__162_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYCOMPLETE>D__162_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYCOMPLETE>D__162_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYCOMPLETE>D__162_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

