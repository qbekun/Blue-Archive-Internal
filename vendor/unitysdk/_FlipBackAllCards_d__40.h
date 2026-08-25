#pragma once
#include "unitysdk.h"

namespace BoardGame { class UIConcentrationBoard; }

#define <FLIPBACKALLCARDS>D__40_.CTOR_OFFSET UNITYSDK_OFFSET(0xE0C560)
#define <FLIPBACKALLCARDS>D__40_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xE11530)
#define <FLIPBACKALLCARDS>D__40_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xE11540)
#define <FLIPBACKALLCARDS>D__40_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xE11E70)
#define <FLIPBACKALLCARDS>D__40_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xE11E80)
#define <FLIPBACKALLCARDS>D__40_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xE11ED0)

	inline static constexpr unsigned int <FlipBackAllCards>d__40_TypeDefinitionIndex = 10290;

	class <FlipBackAllCards>d__40 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::BoardGame::UIConcentrationBoard* __4__this; // 0x20
		::System::Single _waveTimer_5__2; // 0x28
		::System::Int32 _index_5__3; // 0x2C
		::System::Boolean _isFlipped_5__4; // 0x30
		Il2CppObject* _matchedCards_5__5; // 0x38

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <FLIPBACKALLCARDS>D__40_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <FLIPBACKALLCARDS>D__40_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <FLIPBACKALLCARDS>D__40_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <FLIPBACKALLCARDS>D__40_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <FLIPBACKALLCARDS>D__40_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <FLIPBACKALLCARDS>D__40_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

