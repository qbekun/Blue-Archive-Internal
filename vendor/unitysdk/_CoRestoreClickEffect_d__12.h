#pragma once
#include "unitysdk.h"

class FXTouch;
class TouchEffectCreater;

#define <CORESTORECLICKEFFECT>D__12_.CTOR_OFFSET UNITYSDK_OFFSET(0x219A200)
#define <CORESTORECLICKEFFECT>D__12_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x219AD70)
#define <CORESTORECLICKEFFECT>D__12_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x219AD80)
#define <CORESTORECLICKEFFECT>D__12_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x219AF80)
#define <CORESTORECLICKEFFECT>D__12_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x219AF90)
#define <CORESTORECLICKEFFECT>D__12_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x219AFE0)

	inline static constexpr unsigned int <CoRestoreClickEffect>d__12_TypeDefinitionIndex = 4132;

	class <CoRestoreClickEffect>d__12 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		FXTouch* effect; // 0x20
		TouchEffectCreater* __4__this; // 0x28
		::System::Int32 _count_5__2; // 0x30
		::System::Single _durationFrame_5__3; // 0x34

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <CORESTORECLICKEFFECT>D__12_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CORESTORECLICKEFFECT>D__12_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <CORESTORECLICKEFFECT>D__12_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CORESTORECLICKEFFECT>D__12_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CORESTORECLICKEFFECT>D__12_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CORESTORECLICKEFFECT>D__12_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

