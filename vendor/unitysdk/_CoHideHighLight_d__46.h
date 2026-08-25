#pragma once
#include "unitysdk.h"

class HexaTileVisual;

#define <COHIDEHIGHLIGHT>D__46_.CTOR_OFFSET UNITYSDK_OFFSET(0xF83730)
#define <COHIDEHIGHLIGHT>D__46_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xF85160)
#define <COHIDEHIGHLIGHT>D__46_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xF85170)
#define <COHIDEHIGHLIGHT>D__46_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xF85230)
#define <COHIDEHIGHLIGHT>D__46_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xF85240)
#define <COHIDEHIGHLIGHT>D__46_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xF85290)

	inline static constexpr unsigned int <CoHideHighLight>d__46_TypeDefinitionIndex = 860;

	class <CoHideHighLight>d__46 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::System::Single sec; // 0x20
		HexaTileVisual* tile; // 0x28

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <COHIDEHIGHLIGHT>D__46_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COHIDEHIGHLIGHT>D__46_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <COHIDEHIGHLIGHT>D__46_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COHIDEHIGHLIGHT>D__46_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COHIDEHIGHLIGHT>D__46_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COHIDEHIGHLIGHT>D__46_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

