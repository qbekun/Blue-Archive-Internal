#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Animation; }

#define <WAITINTROANIMATIONANDRESTART>D__18_.CTOR_OFFSET UNITYSDK_OFFSET(0xD22140)
#define <WAITINTROANIMATIONANDRESTART>D__18_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xD22840)
#define <WAITINTROANIMATIONANDRESTART>D__18_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xD22850)
#define <WAITINTROANIMATIONANDRESTART>D__18_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xD22A00)
#define <WAITINTROANIMATIONANDRESTART>D__18_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xD22A10)
#define <WAITINTROANIMATIONANDRESTART>D__18_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xD22A60)

	inline static constexpr unsigned int <WaitIntroAnimationAndRestart>d__18_TypeDefinitionIndex = 707;

	class <WaitIntroAnimationAndRestart>d__18 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::UnityEngine::Animation* _introAni_5__2; // 0x20

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <WAITINTROANIMATIONANDRESTART>D__18_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <WAITINTROANIMATIONANDRESTART>D__18_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <WAITINTROANIMATIONANDRESTART>D__18_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <WAITINTROANIMATIONANDRESTART>D__18_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <WAITINTROANIMATIONANDRESTART>D__18_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <WAITINTROANIMATIONANDRESTART>D__18_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

