#pragma once
#include "unitysdk.h"

class UIConquest;
class <>c__DisplayClass143_0;
namespace MX::Data { class ConquestMapExcelData; }

#define <LOADCONQUESTMAPDATA>D__143_.CTOR_OFFSET UNITYSDK_OFFSET(0x2350BB0)
#define <LOADCONQUESTMAPDATA>D__143_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x235D7C0)
#define <LOADCONQUESTMAPDATA>D__143_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x235D7D0)
#define <LOADCONQUESTMAPDATA>D__143_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x235E380)
#define <LOADCONQUESTMAPDATA>D__143_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x235E390)
#define <LOADCONQUESTMAPDATA>D__143_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x235E3E0)

	inline static constexpr unsigned int <LoadConquestMapData>d__143_TypeDefinitionIndex = 5029;

	class <LoadConquestMapData>d__143 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		UIConquest* __4__this; // 0x20
		<>c__DisplayClass143_0* __8__1; // 0x28
		::MX::Data::ConquestMapExcelData* _mapExcelData_5__2; // 0x30

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <LOADCONQUESTMAPDATA>D__143_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <LOADCONQUESTMAPDATA>D__143_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <LOADCONQUESTMAPDATA>D__143_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <LOADCONQUESTMAPDATA>D__143_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <LOADCONQUESTMAPDATA>D__143_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <LOADCONQUESTMAPDATA>D__143_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

