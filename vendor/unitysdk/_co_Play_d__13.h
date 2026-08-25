#pragma once
#include "unitysdk.h"

class WidgetCharacterDialogEmoji;
class Input;
class CoroutineCancellationToken;
namespace MX::Data { class CharacterDialogEmojiInfo; }
class WidgetCharacterDialogEmojiElement;

#define <CO_PLAY>D__13_.CTOR_OFFSET UNITYSDK_OFFSET(0xC24300)
#define <CO_PLAY>D__13_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xC26620)
#define <CO_PLAY>D__13_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xC266F0)
#define <CO_PLAY>D__13___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0xC278F0)
#define <CO_PLAY>D__13_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xC279A0)
#define <CO_PLAY>D__13_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xC279B0)
#define <CO_PLAY>D__13_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xC27A00)

	inline static constexpr unsigned int <co_Play>d__13_TypeDefinitionIndex = 8891;

	class <co_Play>d__13 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		WidgetCharacterDialogEmoji* __4__this; // 0x20
		Input* input; // 0x28
		::System::Boolean unscaled; // 0x30
		::System::Action* onCompleted; // 0x38
		CoroutineCancellationToken* _cancellationToken_5__2; // 0x40
		Il2CppObject* __7__wrap2; // 0x48
		::MX::Data::CharacterDialogEmojiInfo* _info_5__4; // 0x50
		WidgetCharacterDialogEmojiElement* _elementUI_5__5; // 0x58

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <CO_PLAY>D__13_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_PLAY>D__13_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_PLAY>D__13_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void __m__Finally1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_PLAY>D__13___M__FINALLY1_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_PLAY>D__13_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_PLAY>D__13_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_PLAY>D__13_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

