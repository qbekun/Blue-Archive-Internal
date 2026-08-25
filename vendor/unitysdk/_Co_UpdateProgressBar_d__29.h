#pragma once
#include "unitysdk.h"

class UIAcademyScheduleProgress;
namespace UnityEngine { class WaitForEndOfFrame; }

#define <CO_UPDATEPROGRESSBAR>D__29_.CTOR_OFFSET UNITYSDK_OFFSET(0x21E1150)
#define <CO_UPDATEPROGRESSBAR>D__29_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x21E1570)
#define <CO_UPDATEPROGRESSBAR>D__29_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x21E1580)
#define <CO_UPDATEPROGRESSBAR>D__29_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x21E1810)
#define <CO_UPDATEPROGRESSBAR>D__29_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x21E1820)
#define <CO_UPDATEPROGRESSBAR>D__29_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x21E1870)

	inline static constexpr unsigned int <Co_UpdateProgressBar>d__29_TypeDefinitionIndex = 4225;

	class <Co_UpdateProgressBar>d__29 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		UIAcademyScheduleProgress* __4__this; // 0x20
		::UnityEngine::WaitForEndOfFrame* _waitForEndOfFrame_5__2; // 0x28

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <CO_UPDATEPROGRESSBAR>D__29_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_UPDATEPROGRESSBAR>D__29_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_UPDATEPROGRESSBAR>D__29_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_UPDATEPROGRESSBAR>D__29_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_UPDATEPROGRESSBAR>D__29_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_UPDATEPROGRESSBAR>D__29_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

