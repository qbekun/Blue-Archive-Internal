#pragma once
#include "unitysdk.h"

class HexaEventDisplayer;

#define <PROCESSDISPLAYINFO>D__17_.CTOR_OFFSET UNITYSDK_OFFSET(0xF70700)
#define <PROCESSDISPLAYINFO>D__17_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xF70F90)
#define <PROCESSDISPLAYINFO>D__17_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xF71000)
#define <PROCESSDISPLAYINFO>D__17___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0xF71D60)
#define <PROCESSDISPLAYINFO>D__17_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xF71DB0)
#define <PROCESSDISPLAYINFO>D__17_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xF71DC0)
#define <PROCESSDISPLAYINFO>D__17_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xF71E10)

	inline static constexpr unsigned int <ProcessDisplayInfo>d__17_TypeDefinitionIndex = 798;

	class <ProcessDisplayInfo>d__17 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		HexaEventDisplayer* __4__this; // 0x20
		Il2CppObject* infos; // 0x28
		Il2CppObject* __7__wrap1; // 0x30

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <PROCESSDISPLAYINFO>D__17_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <PROCESSDISPLAYINFO>D__17_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <PROCESSDISPLAYINFO>D__17_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void __m__Finally1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <PROCESSDISPLAYINFO>D__17___M__FINALLY1_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <PROCESSDISPLAYINFO>D__17_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <PROCESSDISPLAYINFO>D__17_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <PROCESSDISPLAYINFO>D__17_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

