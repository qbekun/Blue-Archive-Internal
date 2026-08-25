#pragma once
#include "unitysdk.h"

class SpineDragIK;
class <>c__DisplayClass27_0;

#define <COMOVEBONE>D__27_.CTOR_OFFSET UNITYSDK_OFFSET(0x20E8880)
#define <COMOVEBONE>D__27_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x20E9290)
#define <COMOVEBONE>D__27_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x20E92A0)
#define <COMOVEBONE>D__27_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x20E9970)
#define <COMOVEBONE>D__27_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x20E9980)
#define <COMOVEBONE>D__27_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x20E99D0)

	inline static constexpr unsigned int <CoMoveBone>d__27_TypeDefinitionIndex = 3791;

	class <CoMoveBone>d__27 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		SpineDragIK* __4__this; // 0x20
		<>c__DisplayClass27_0* __8__1; // 0x28
		::System::Single _sqrDist_5__2; // 0x30
		::System::Single _currentFollowDragSpeed_5__3; // 0x34
		::System::Single _currentFollowReleaseSpeed_5__4; // 0x38

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <COMOVEBONE>D__27_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COMOVEBONE>D__27_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <COMOVEBONE>D__27_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COMOVEBONE>D__27_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COMOVEBONE>D__27_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COMOVEBONE>D__27_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

