#pragma once
#include "unitysdk.h"

namespace BoardGame { class Concentration_FlipCards; }
namespace BoardGame { class UIConcentrationBoard; }
class <>c__DisplayClass34_0;
namespace BoardGame { class UIConcentrationCard; }

#define <PLAYFLIPANIMATION>D__34_.CTOR_OFFSET UNITYSDK_OFFSET(0xE0C280)
#define <PLAYFLIPANIMATION>D__34_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xE0FE10)
#define <PLAYFLIPANIMATION>D__34_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xE0FE20)
#define <PLAYFLIPANIMATION>D__34_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xE10400)
#define <PLAYFLIPANIMATION>D__34_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xE10410)
#define <PLAYFLIPANIMATION>D__34_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xE10460)

	inline static constexpr unsigned int <PlayFlipAnimation>d__34_TypeDefinitionIndex = 10283;

	class <PlayFlipAnimation>d__34 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::BoardGame::Concentration_FlipCards* flipdata; // 0x20
		::BoardGame::UIConcentrationBoard* __4__this; // 0x28
		<>c__DisplayClass34_0* __8__1; // 0x30
		::BoardGame::UIConcentrationCard* _firstCard_5__2; // 0x38
		::BoardGame::UIConcentrationCard* _secondCard_5__3; // 0x40

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <PLAYFLIPANIMATION>D__34_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYFLIPANIMATION>D__34_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYFLIPANIMATION>D__34_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYFLIPANIMATION>D__34_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYFLIPANIMATION>D__34_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYFLIPANIMATION>D__34_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

