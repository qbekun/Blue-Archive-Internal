#pragma once
#include "unitysdk.h"

class MulliganOpenConditionButtonController;

#define <COPLAYUNLOCKANIMATION>D__16_.CTOR_OFFSET UNITYSDK_OFFSET(0x24E35A0)
#define <COPLAYUNLOCKANIMATION>D__16_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x24E3A00)
#define <COPLAYUNLOCKANIMATION>D__16_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x24E3A10)
#define <COPLAYUNLOCKANIMATION>D__16_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x24E3D40)
#define <COPLAYUNLOCKANIMATION>D__16_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x24E3D50)
#define <COPLAYUNLOCKANIMATION>D__16_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x24E3DA0)

	inline static constexpr unsigned int <CoPlayUnlockAnimation>d__16_TypeDefinitionIndex = 6012;

	class <CoPlayUnlockAnimation>d__16 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		MulliganOpenConditionButtonController* __4__this; // 0x20

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <COPLAYUNLOCKANIMATION>D__16_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYUNLOCKANIMATION>D__16_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYUNLOCKANIMATION>D__16_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYUNLOCKANIMATION>D__16_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYUNLOCKANIMATION>D__16_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYUNLOCKANIMATION>D__16_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

