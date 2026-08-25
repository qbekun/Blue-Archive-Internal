#pragma once
#include "unitysdk.h"

class StrategyVisual;

#define <COPLAYHOVERDOWNANIMATION>D__37_.CTOR_OFFSET UNITYSDK_OFFSET(0x10A7B40)
#define <COPLAYHOVERDOWNANIMATION>D__37_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x10A7B60)
#define <COPLAYHOVERDOWNANIMATION>D__37_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x10A7B70)
#define <COPLAYHOVERDOWNANIMATION>D__37_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x10A7CC0)
#define <COPLAYHOVERDOWNANIMATION>D__37_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x10A7CD0)
#define <COPLAYHOVERDOWNANIMATION>D__37_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x10A7D20)

	inline static constexpr unsigned int <CoPlayHoverDownAnimation>d__37_TypeDefinitionIndex = 866;

	class <CoPlayHoverDownAnimation>d__37 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		StrategyVisual* __4__this; // 0x20

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <COPLAYHOVERDOWNANIMATION>D__37_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYHOVERDOWNANIMATION>D__37_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYHOVERDOWNANIMATION>D__37_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYHOVERDOWNANIMATION>D__37_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYHOVERDOWNANIMATION>D__37_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYHOVERDOWNANIMATION>D__37_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

