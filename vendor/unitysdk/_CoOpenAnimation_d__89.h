#pragma once
#include "unitysdk.h"

class UIEventLobby;
namespace UnityEngine { class Coroutine; }

#define <COOPENANIMATION>D__89_.CTOR_OFFSET UNITYSDK_OFFSET(0x2445ED0)
#define <COOPENANIMATION>D__89_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x2445EF0)
#define <COOPENANIMATION>D__89_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x2445F00)
#define <COOPENANIMATION>D__89_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x24464A0)
#define <COOPENANIMATION>D__89_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x24464B0)
#define <COOPENANIMATION>D__89_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x2446500)

	inline static constexpr unsigned int <CoOpenAnimation>d__89_TypeDefinitionIndex = 5532;

	class <CoOpenAnimation>d__89 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		UIEventLobby* __4__this; // 0x20
		::System::Boolean close; // 0x28
		::System::Action* endAction; // 0x30
		::UnityEngine::Coroutine* _contentOpenAnimationCoroutine_5__2; // 0x38

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <COOPENANIMATION>D__89_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COOPENANIMATION>D__89_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <COOPENANIMATION>D__89_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COOPENANIMATION>D__89_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COOPENANIMATION>D__89_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COOPENANIMATION>D__89_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

