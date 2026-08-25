#pragma once
#include "unitysdk.h"

class GraphicsManager;
namespace UnityEngine { class RectInt; }

#define <COFORCEWINDOWASPECT>D__23_.CTOR_OFFSET UNITYSDK_OFFSET(0x20C6640)
#define <COFORCEWINDOWASPECT>D__23_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x20C9DB0)
#define <COFORCEWINDOWASPECT>D__23_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x20C9DC0)
#define <COFORCEWINDOWASPECT>D__23_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x20CA110)
#define <COFORCEWINDOWASPECT>D__23_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x20CA120)
#define <COFORCEWINDOWASPECT>D__23_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x20CA170)

	inline static constexpr unsigned int <CoForceWindowAspect>d__23_TypeDefinitionIndex = 3672;

	class <CoForceWindowAspect>d__23 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		GraphicsManager* __4__this; // 0x20
		::System::Single aspect; // 0x28
		::System::Boolean changedWidth; // 0x2C
		::UnityEngine::RectInt* _expectedRect_5__2; // 0x30
		::System::Int32 _waited_5__3; // 0x40

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <COFORCEWINDOWASPECT>D__23_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COFORCEWINDOWASPECT>D__23_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <COFORCEWINDOWASPECT>D__23_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COFORCEWINDOWASPECT>D__23_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COFORCEWINDOWASPECT>D__23_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COFORCEWINDOWASPECT>D__23_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

