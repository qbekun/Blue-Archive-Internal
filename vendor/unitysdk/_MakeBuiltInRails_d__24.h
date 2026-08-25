#pragma once
#include "unitysdk.h"

class RoadPuzzleTileMap;

#define <MAKEBUILTINRAILS>D__24_.CTOR_OFFSET UNITYSDK_OFFSET(0x2089010)
#define <MAKEBUILTINRAILS>D__24_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x208AE00)
#define <MAKEBUILTINRAILS>D__24_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x208AE10)
#define <MAKEBUILTINRAILS>D__24_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x208B0B0)
#define <MAKEBUILTINRAILS>D__24_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x208B0C0)
#define <MAKEBUILTINRAILS>D__24_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x208B110)

	inline static constexpr unsigned int <MakeBuiltInRails>d__24_TypeDefinitionIndex = 3461;

	class <MakeBuiltInRails>d__24 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		RoadPuzzleTileMap* __4__this; // 0x20

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <MAKEBUILTINRAILS>D__24_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <MAKEBUILTINRAILS>D__24_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <MAKEBUILTINRAILS>D__24_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <MAKEBUILTINRAILS>D__24_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <MAKEBUILTINRAILS>D__24_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <MAKEBUILTINRAILS>D__24_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

