#pragma once
#include "unitysdk.h"

class ScenarioTask;
class <>c__DisplayClass83_0;

#define <GETUIANDLOADALL>D__83_.CTOR_OFFSET UNITYSDK_OFFSET(0x2032B30)
#define <GETUIANDLOADALL>D__83_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x2034EE0)
#define <GETUIANDLOADALL>D__83_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x2034EF0)
#define <GETUIANDLOADALL>D__83_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x2035320)
#define <GETUIANDLOADALL>D__83_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x2035330)
#define <GETUIANDLOADALL>D__83_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x2035380)

	inline static constexpr unsigned int <GetUIAndLoadAll>d__83_TypeDefinitionIndex = 3225;

	class <GetUIAndLoadAll>d__83 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		ScenarioTask* __4__this; // 0x20
		<>c__DisplayClass83_0* __8__1; // 0x28
		Il2CppObject* resPathList; // 0x30
		::System::Action* callback; // 0x38
		::System::Int32 _totalCount_5__2; // 0x40

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <GETUIANDLOADALL>D__83_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETUIANDLOADALL>D__83_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETUIANDLOADALL>D__83_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETUIANDLOADALL>D__83_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETUIANDLOADALL>D__83_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETUIANDLOADALL>D__83_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

