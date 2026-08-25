#pragma once
#include "unitysdk.h"

class MinigameCommandChangeGlobalSpeed;

#define <LERPGLOBALSPEED>D__6_.CTOR_OFFSET UNITYSDK_OFFSET(0xD12820)
#define <LERPGLOBALSPEED>D__6_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xD128D0)
#define <LERPGLOBALSPEED>D__6_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xD128E0)
#define <LERPGLOBALSPEED>D__6_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xD12A30)
#define <LERPGLOBALSPEED>D__6_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xD12A40)
#define <LERPGLOBALSPEED>D__6_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xD12A90)

	inline static constexpr unsigned int <LerpGlobalSpeed>d__6_TypeDefinitionIndex = 632;

	class <LerpGlobalSpeed>d__6 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		MinigameCommandChangeGlobalSpeed* __4__this; // 0x20
		::System::Single duration; // 0x28
		::System::Single _targetSpeed_5__2; // 0x2C
		::System::Single _f_5__3; // 0x30

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <LERPGLOBALSPEED>D__6_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <LERPGLOBALSPEED>D__6_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <LERPGLOBALSPEED>D__6_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <LERPGLOBALSPEED>D__6_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <LERPGLOBALSPEED>D__6_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <LERPGLOBALSPEED>D__6_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

