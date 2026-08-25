#pragma once
#include "unitysdk.h"

class WidgetCharacterDialogEmojiElement;
class <>c__DisplayClass18_0;
class CoroutineCancellationToken;
namespace UnityEngine { class CustomYieldInstruction; }

#define <CO_PLAY>D__18_.CTOR_OFFSET UNITYSDK_OFFSET(0xC27AF0)
#define <CO_PLAY>D__18_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xC28280)
#define <CO_PLAY>D__18_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xC28290)
#define <CO_PLAY>D__18_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xC28870)
#define <CO_PLAY>D__18_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xC28880)
#define <CO_PLAY>D__18_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xC288D0)

	inline static constexpr unsigned int <co_Play>d__18_TypeDefinitionIndex = 8899;

	class <co_Play>d__18 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		WidgetCharacterDialogEmojiElement* __4__this; // 0x20
		<>c__DisplayClass18_0* __8__1; // 0x28
		::System::Boolean unscaled; // 0x30
		CoroutineCancellationToken* cancellationToken; // 0x38
		::UnityEngine::CustomYieldInstruction* _waitForDuration_5__2; // 0x40

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <CO_PLAY>D__18_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_PLAY>D__18_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_PLAY>D__18_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_PLAY>D__18_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_PLAY>D__18_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_PLAY>D__18_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

