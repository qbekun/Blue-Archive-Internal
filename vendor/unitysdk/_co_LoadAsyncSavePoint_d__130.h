#pragma once
#include "unitysdk.h"

namespace MXUnderCover { class UCStage; }

#define <CO_LOADASYNCSAVEPOINT>D__130_.CTOR_OFFSET UNITYSDK_OFFSET(0xDB65E0)
#define <CO_LOADASYNCSAVEPOINT>D__130_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xDBACF0)
#define <CO_LOADASYNCSAVEPOINT>D__130_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xDBAD50)
#define <CO_LOADASYNCSAVEPOINT>D__130___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0xDBB4D0)
#define <CO_LOADASYNCSAVEPOINT>D__130_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xDBB520)
#define <CO_LOADASYNCSAVEPOINT>D__130_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xDBB530)
#define <CO_LOADASYNCSAVEPOINT>D__130_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xDBB580)

	inline static constexpr unsigned int <co_LoadAsyncSavePoint>d__130_TypeDefinitionIndex = 9985;

	class <co_LoadAsyncSavePoint>d__130 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::MXUnderCover::UCStage* __4__this; // 0x20
		Il2CppObject* __7__wrap1; // 0x28

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <CO_LOADASYNCSAVEPOINT>D__130_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_LOADASYNCSAVEPOINT>D__130_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_LOADASYNCSAVEPOINT>D__130_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void __m__Finally1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_LOADASYNCSAVEPOINT>D__130___M__FINALLY1_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_LOADASYNCSAVEPOINT>D__130_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_LOADASYNCSAVEPOINT>D__130_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_LOADASYNCSAVEPOINT>D__130_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

