#pragma once
#include "unitysdk.h"

class InteractiveWorldRaidCharacter;

#define <ONVERTEXSTAY>D__48_.CTOR_OFFSET UNITYSDK_OFFSET(0x25A2000)
#define <ONVERTEXSTAY>D__48_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x25A22E0)
#define <ONVERTEXSTAY>D__48_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x25A22F0)
#define <ONVERTEXSTAY>D__48_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x25A2400)
#define <ONVERTEXSTAY>D__48_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x25A2410)
#define <ONVERTEXSTAY>D__48_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x25A2460)

	inline static constexpr unsigned int <OnVertexStay>d__48_TypeDefinitionIndex = 325;

	class <OnVertexStay>d__48 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		InteractiveWorldRaidCharacter* __4__this; // 0x20
		::System::Boolean needTimerReset; // 0x28

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <ONVERTEXSTAY>D__48_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <ONVERTEXSTAY>D__48_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <ONVERTEXSTAY>D__48_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <ONVERTEXSTAY>D__48_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <ONVERTEXSTAY>D__48_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <ONVERTEXSTAY>D__48_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

