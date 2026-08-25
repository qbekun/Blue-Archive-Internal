#pragma once
#include "unitysdk.h"

class RotateWithInAngle;

#define <ROTATETOFRONT>D__4_.CTOR_OFFSET UNITYSDK_OFFSET(0xCDB830)
#define <ROTATETOFRONT>D__4_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xCDBBC0)
#define <ROTATETOFRONT>D__4_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xCDBBD0)
#define <ROTATETOFRONT>D__4_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xCDBE80)
#define <ROTATETOFRONT>D__4_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xCDBE90)
#define <ROTATETOFRONT>D__4_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xCDBEE0)

	inline static constexpr unsigned int <RotateToFront>d__4_TypeDefinitionIndex = 9173;

	class <RotateToFront>d__4 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		RotateWithInAngle* __4__this; // 0x20
		::System::Single rotationSpeed; // 0x28
		::System::Single _targetAngle_5__2; // 0x2C

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <ROTATETOFRONT>D__4_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <ROTATETOFRONT>D__4_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <ROTATETOFRONT>D__4_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <ROTATETOFRONT>D__4_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <ROTATETOFRONT>D__4_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <ROTATETOFRONT>D__4_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

