#pragma once
#include "unitysdk.h"

namespace MX::TableBoard { class TBGHexaObjectDB; }
class TBGTileMapVisual;

#define <MAKEENCOUNTER>D__26_.CTOR_OFFSET UNITYSDK_OFFSET(0x208FC80)
#define <MAKEENCOUNTER>D__26_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x2093D20)
#define <MAKEENCOUNTER>D__26_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x2093D30)
#define <MAKEENCOUNTER>D__26_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x2094040)
#define <MAKEENCOUNTER>D__26_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x2094050)
#define <MAKEENCOUNTER>D__26_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x20940A0)

	inline static constexpr unsigned int <MakeEncounter>d__26_TypeDefinitionIndex = 3490;

	class <MakeEncounter>d__26 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::MX::TableBoard::TBGHexaObjectDB* objectDB; // 0x20
		Il2CppObject* completeCallback; // 0x28
		TBGTileMapVisual* __4__this; // 0x30
		::System::Boolean _complete_5__2; // 0x38

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <MAKEENCOUNTER>D__26_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <MAKEENCOUNTER>D__26_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <MAKEENCOUNTER>D__26_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <MAKEENCOUNTER>D__26_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <MAKEENCOUNTER>D__26_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <MAKEENCOUNTER>D__26_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

