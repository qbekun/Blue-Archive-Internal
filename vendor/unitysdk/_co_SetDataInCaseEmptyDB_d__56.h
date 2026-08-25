#pragma once
#include "unitysdk.h"

class UICraftDuration;

#define <CO_SETDATAINCASEEMPTYDB>D__56_.CTOR_OFFSET UNITYSDK_OFFSET(0x2387700)
#define <CO_SETDATAINCASEEMPTYDB>D__56_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x2387BB0)
#define <CO_SETDATAINCASEEMPTYDB>D__56_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x2387BC0)
#define <CO_SETDATAINCASEEMPTYDB>D__56_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x2388BD0)
#define <CO_SETDATAINCASEEMPTYDB>D__56_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x2388BE0)
#define <CO_SETDATAINCASEEMPTYDB>D__56_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x2388C30)

	inline static constexpr unsigned int <co_SetDataInCaseEmptyDB>d__56_TypeDefinitionIndex = 5127;

	class <co_SetDataInCaseEmptyDB>d__56 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		UICraftDuration* __4__this; // 0x20

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <CO_SETDATAINCASEEMPTYDB>D__56_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_SETDATAINCASEEMPTYDB>D__56_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_SETDATAINCASEEMPTYDB>D__56_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_SETDATAINCASEEMPTYDB>D__56_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_SETDATAINCASEEMPTYDB>D__56_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_SETDATAINCASEEMPTYDB>D__56_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

