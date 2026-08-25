#pragma once
#include "unitysdk.h"

class UIVictoryCharacterInfo;
class UIVictory;
namespace MX::Data { class CharacterData; }

#define <COUPDATE>D__21_.CTOR_OFFSET UNITYSDK_OFFSET(0xBBD300)
#define <COUPDATE>D__21_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xBBD320)
#define <COUPDATE>D__21_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xBBD330)
#define <COUPDATE>D__21_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xBBD830)
#define <COUPDATE>D__21_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xBBD840)
#define <COUPDATE>D__21_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xBBD890)

	inline static constexpr unsigned int <CoUpdate>d__21_TypeDefinitionIndex = 8604;

	class <CoUpdate>d__21 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		UIVictoryCharacterInfo* __4__this; // 0x20
		UIVictory* _uiVictory_5__2; // 0x28
		::System::Int32 _currentLevel_5__3; // 0x30
		::System::Single _currentExp_5__4; // 0x34
		::MX::Data::CharacterData* _data_5__5; // 0x38
		::System::Int64 _expDiff_5__6; // 0x40
		::System::Int64 _maxExp_5__7; // 0x48
		::System::Single _restExp_5__8; // 0x50

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <COUPDATE>D__21_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COUPDATE>D__21_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <COUPDATE>D__21_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COUPDATE>D__21_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COUPDATE>D__21_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COUPDATE>D__21_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

