#pragma once
#include "unitysdk.h"

namespace MX::MinigameShooting { class Character; }

#define <WAITFORSKILLCOROUTINE>D__90_.CTOR_OFFSET UNITYSDK_OFFSET(0x1459100)
#define <WAITFORSKILLCOROUTINE>D__90_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x1459120)
#define <WAITFORSKILLCOROUTINE>D__90_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1459130)
#define <WAITFORSKILLCOROUTINE>D__90_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x14591D0)
#define <WAITFORSKILLCOROUTINE>D__90_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x14591E0)
#define <WAITFORSKILLCOROUTINE>D__90_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1459230)

	inline static constexpr unsigned int <WaitForSkillCoroutine>d__90_TypeDefinitionIndex = 15029;

	class <WaitForSkillCoroutine>d__90 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::MX::MinigameShooting::Character* __4__this; // 0x20
		::System::Action* callback; // 0x28

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <WAITFORSKILLCOROUTINE>D__90_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <WAITFORSKILLCOROUTINE>D__90_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <WAITFORSKILLCOROUTINE>D__90_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <WAITFORSKILLCOROUTINE>D__90_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <WAITFORSKILLCOROUTINE>D__90_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <WAITFORSKILLCOROUTINE>D__90_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

