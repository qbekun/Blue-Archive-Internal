#pragma once
#include "unitysdk.h"

class ConquestTileVisual;
class ConquestEventDisplayer;
class <>c__DisplayClass25_0;

#define <PLAYEROSIONONTILE>D__25_.CTOR_OFFSET UNITYSDK_OFFSET(0x1BDF350)
#define <PLAYEROSIONONTILE>D__25_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x1BDF370)
#define <PLAYEROSIONONTILE>D__25_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1BDF380)
#define <PLAYEROSIONONTILE>D__25_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1BDF960)
#define <PLAYEROSIONONTILE>D__25_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x1BDF970)
#define <PLAYEROSIONONTILE>D__25_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1BDF9C0)

	inline static constexpr unsigned int <PlayErosionOnTile>d__25_TypeDefinitionIndex = 1495;

	class <PlayErosionOnTile>d__25 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		ConquestTileVisual* tileVisual; // 0x20
		ConquestEventDisplayer* __4__this; // 0x28
		<>c__DisplayClass25_0* __8__1; // 0x30
		::System::Action* onEnd; // 0x38

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <PLAYEROSIONONTILE>D__25_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYEROSIONONTILE>D__25_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYEROSIONONTILE>D__25_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYEROSIONONTILE>D__25_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYEROSIONONTILE>D__25_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <PLAYEROSIONONTILE>D__25_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

