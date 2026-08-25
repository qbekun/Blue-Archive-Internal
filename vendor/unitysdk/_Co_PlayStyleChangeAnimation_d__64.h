#pragma once
#include "unitysdk.h"

class CharacterEchelon;

#define <CO_PLAYSTYLECHANGEANIMATION>D__64_.CTOR_OFFSET UNITYSDK_OFFSET(0x24D4440)
#define <CO_PLAYSTYLECHANGEANIMATION>D__64_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x24D58E0)
#define <CO_PLAYSTYLECHANGEANIMATION>D__64_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x24D58F0)
#define <CO_PLAYSTYLECHANGEANIMATION>D__64_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x24D6170)
#define <CO_PLAYSTYLECHANGEANIMATION>D__64_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x24D6180)
#define <CO_PLAYSTYLECHANGEANIMATION>D__64_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x24D61D0)

	inline static constexpr unsigned int <Co_PlayStyleChangeAnimation>d__64_TypeDefinitionIndex = 5958;

	class <Co_PlayStyleChangeAnimation>d__64 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		CharacterEchelon* __4__this; // 0x20

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <CO_PLAYSTYLECHANGEANIMATION>D__64_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_PLAYSTYLECHANGEANIMATION>D__64_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_PLAYSTYLECHANGEANIMATION>D__64_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_PLAYSTYLECHANGEANIMATION>D__64_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_PLAYSTYLECHANGEANIMATION>D__64_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_PLAYSTYLECHANGEANIMATION>D__64_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

