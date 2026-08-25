#pragma once
#include "unitysdk.h"

class <>c__DisplayClass94_0;

#define <SHOWNEWCAFEOPEN>D__94_.CTOR_OFFSET UNITYSDK_OFFSET(0x2277200)
#define <SHOWNEWCAFEOPEN>D__94_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x227AB10)
#define <SHOWNEWCAFEOPEN>D__94_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x227AB20)
#define <SHOWNEWCAFEOPEN>D__94_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x227B210)
#define <SHOWNEWCAFEOPEN>D__94_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x227B220)
#define <SHOWNEWCAFEOPEN>D__94_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x227B270)

	inline static constexpr unsigned int <ShowNewCafeOpen>d__94_TypeDefinitionIndex = 4641;

	class <ShowNewCafeOpen>d__94 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		<>c__DisplayClass94_0* __8__1; // 0x20

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <SHOWNEWCAFEOPEN>D__94_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <SHOWNEWCAFEOPEN>D__94_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <SHOWNEWCAFEOPEN>D__94_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <SHOWNEWCAFEOPEN>D__94_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <SHOWNEWCAFEOPEN>D__94_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <SHOWNEWCAFEOPEN>D__94_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

