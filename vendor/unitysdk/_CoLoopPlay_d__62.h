#pragma once
#include "unitysdk.h"

class Emoji;
namespace FlatData { class EmojiEvent; }

#define <COLOOPPLAY>D__62_.CTOR_OFFSET UNITYSDK_OFFSET(0x25E5CA0)
#define <COLOOPPLAY>D__62_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x25E68C0)
#define <COLOOPPLAY>D__62_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x25E68D0)
#define <COLOOPPLAY>D__62_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x25E6990)
#define <COLOOPPLAY>D__62_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x25E69A0)
#define <COLOOPPLAY>D__62_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x25E69F0)

	inline static constexpr unsigned int <CoLoopPlay>d__62_TypeDefinitionIndex = 6389;

	class <CoLoopPlay>d__62 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		Emoji* __4__this; // 0x20
		::FlatData::EmojiEvent* emojiEvent; // 0x28
		::System::Boolean mute; // 0x2C
		::System::Int32 loopCount; // 0x30

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <COLOOPPLAY>D__62_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COLOOPPLAY>D__62_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <COLOOPPLAY>D__62_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COLOOPPLAY>D__62_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COLOOPPLAY>D__62_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COLOOPPLAY>D__62_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

