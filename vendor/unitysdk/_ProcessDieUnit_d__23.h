#pragma once
#include "unitysdk.h"

namespace MX::Campaign::HexaTileMapEvent { class HexaDisplayInfo; }
class HexaEventDisplayer;
class HexaUnitVisual;

#define <PROCESSDIEUNIT>D__23_.CTOR_OFFSET UNITYSDK_OFFSET(0xF707F0)
#define <PROCESSDIEUNIT>D__23_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xF739A0)
#define <PROCESSDIEUNIT>D__23_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xF739B0)
#define <PROCESSDIEUNIT>D__23_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xF73F70)
#define <PROCESSDIEUNIT>D__23_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xF73F80)
#define <PROCESSDIEUNIT>D__23_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xF73FD0)

	inline static constexpr unsigned int <ProcessDieUnit>d__23_TypeDefinitionIndex = 805;

	class <ProcessDieUnit>d__23 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::MX::Campaign::HexaTileMapEvent::HexaDisplayInfo* info; // 0x20
		HexaEventDisplayer* __4__this; // 0x28
		HexaUnitVisual* _unitVisual_5__2; // 0x30

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <PROCESSDIEUNIT>D__23_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <PROCESSDIEUNIT>D__23_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <PROCESSDIEUNIT>D__23_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <PROCESSDIEUNIT>D__23_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <PROCESSDIEUNIT>D__23_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <PROCESSDIEUNIT>D__23_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

