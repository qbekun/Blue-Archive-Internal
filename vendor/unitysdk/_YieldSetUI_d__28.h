#pragma once
#include "unitysdk.h"

class UIAcademyZoneBase;

#define <YIELDSETUI>D__28_.CTOR_OFFSET UNITYSDK_OFFSET(0x21E66E0)
#define <YIELDSETUI>D__28_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x21E68B0)
#define <YIELDSETUI>D__28_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x21E68C0)
#define <YIELDSETUI>D__28_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x21E6DA0)
#define <YIELDSETUI>D__28_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x21E6DB0)
#define <YIELDSETUI>D__28_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x21E6E00)

	inline static constexpr unsigned int <YieldSetUI>d__28_TypeDefinitionIndex = 4236;

	class <YieldSetUI>d__28 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		UIAcademyZoneBase* __4__this; // 0x20
		::System::Single _aniTime_5__2; // 0x28
		::System::Single _tweenTime_5__3; // 0x2C

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <YIELDSETUI>D__28_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <YIELDSETUI>D__28_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <YIELDSETUI>D__28_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <YIELDSETUI>D__28_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <YIELDSETUI>D__28_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <YIELDSETUI>D__28_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

