#pragma once
#include "unitysdk.h"

class CharacterEchelon;

#define <CO_PLAYSTYLEAPPEARANIMATION>D__63_.CTOR_OFFSET UNITYSDK_OFFSET(0x24D3B50)
#define <CO_PLAYSTYLEAPPEARANIMATION>D__63_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x24D5430)
#define <CO_PLAYSTYLEAPPEARANIMATION>D__63_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x24D5440)
#define <CO_PLAYSTYLEAPPEARANIMATION>D__63_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x24D5870)
#define <CO_PLAYSTYLEAPPEARANIMATION>D__63_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x24D5880)
#define <CO_PLAYSTYLEAPPEARANIMATION>D__63_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x24D58D0)

	inline static constexpr unsigned int <Co_PlayStyleAppearAnimation>d__63_TypeDefinitionIndex = 5957;

	class <Co_PlayStyleAppearAnimation>d__63 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		CharacterEchelon* __4__this; // 0x20

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <CO_PLAYSTYLEAPPEARANIMATION>D__63_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_PLAYSTYLEAPPEARANIMATION>D__63_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_PLAYSTYLEAPPEARANIMATION>D__63_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_PLAYSTYLEAPPEARANIMATION>D__63_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_PLAYSTYLEAPPEARANIMATION>D__63_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_PLAYSTYLEAPPEARANIMATION>D__63_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

