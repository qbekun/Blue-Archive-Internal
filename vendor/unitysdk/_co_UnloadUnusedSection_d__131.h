#pragma once
#include "unitysdk.h"

namespace MXUnderCover { class UCStage; }

#define <CO_UNLOADUNUSEDSECTION>D__131_.CTOR_OFFSET UNITYSDK_OFFSET(0xDB6C10)
#define <CO_UNLOADUNUSEDSECTION>D__131_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xDBB5D0)
#define <CO_UNLOADUNUSEDSECTION>D__131_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xDBB630)
#define <CO_UNLOADUNUSEDSECTION>D__131___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0xDBBB40)
#define <CO_UNLOADUNUSEDSECTION>D__131_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xDBBB90)
#define <CO_UNLOADUNUSEDSECTION>D__131_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xDBBBA0)
#define <CO_UNLOADUNUSEDSECTION>D__131_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xDBBBF0)

	inline static constexpr unsigned int <co_UnloadUnusedSection>d__131_TypeDefinitionIndex = 9987;

	class <co_UnloadUnusedSection>d__131 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::MXUnderCover::UCStage* __4__this; // 0x20
		Il2CppObject* __7__wrap1; // 0x28

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <CO_UNLOADUNUSEDSECTION>D__131_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_UNLOADUNUSEDSECTION>D__131_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_UNLOADUNUSEDSECTION>D__131_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void __m__Finally1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_UNLOADUNUSEDSECTION>D__131___M__FINALLY1_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_UNLOADUNUSEDSECTION>D__131_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_UNLOADUNUSEDSECTION>D__131_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_UNLOADUNUSEDSECTION>D__131_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

