#pragma once
#include "unitysdk.h"

namespace BoardGame { class UIConcentrationBoard; }

#define <PLAYMATCHEDANIMATION>D__36_.CTOR_OFFSET UNITYSDK_OFFSET(0xE0D140)
#define <PLAYMATCHEDANIMATION>D__36_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xE10B80)
#define <PLAYMATCHEDANIMATION>D__36_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xE10B90)
#define <PLAYMATCHEDANIMATION>D__36_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xE10D90)
#define <PLAYMATCHEDANIMATION>D__36_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xE10DA0)
#define <PLAYMATCHEDANIMATION>D__36_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xE10DF0)

	inline static constexpr unsigned int <PlayMatchedAnimation>d__36_TypeDefinitionIndex = 10286;

	class <PlayMatchedAnimation>d__36 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::BoardGame::UIConcentrationBoard* __4__this; // 0x20
		::System::Int32 firstIndex; // 0x28
		::System::Int32 secondIndex; // 0x2C

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <PLAYMATCHEDANIMATION>D__36_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYMATCHEDANIMATION>D__36_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYMATCHEDANIMATION>D__36_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYMATCHEDANIMATION>D__36_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYMATCHEDANIMATION>D__36_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYMATCHEDANIMATION>D__36_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

