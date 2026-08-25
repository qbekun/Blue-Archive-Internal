#pragma once
#include "unitysdk.h"

namespace MXUnderCover { class UCStage; }

#define <CO_UNLOADALLSECTION>D__132_.CTOR_OFFSET UNITYSDK_OFFSET(0xDB5E60)
#define <CO_UNLOADALLSECTION>D__132_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xDBBC00)
#define <CO_UNLOADALLSECTION>D__132_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xDBBC60)
#define <CO_UNLOADALLSECTION>D__132___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0xDBBFC0)
#define <CO_UNLOADALLSECTION>D__132_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xDBC010)
#define <CO_UNLOADALLSECTION>D__132_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xDBC020)
#define <CO_UNLOADALLSECTION>D__132_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xDBC070)

	inline static constexpr unsigned int <co_UnloadAllSection>d__132_TypeDefinitionIndex = 9988;

	class <co_UnloadAllSection>d__132 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::MXUnderCover::UCStage* __4__this; // 0x20
		Il2CppObject* __7__wrap1; // 0x28

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <CO_UNLOADALLSECTION>D__132_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_UNLOADALLSECTION>D__132_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_UNLOADALLSECTION>D__132_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void __m__Finally1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_UNLOADALLSECTION>D__132___M__FINALLY1_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_UNLOADALLSECTION>D__132_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_UNLOADALLSECTION>D__132_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_UNLOADALLSECTION>D__132_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

