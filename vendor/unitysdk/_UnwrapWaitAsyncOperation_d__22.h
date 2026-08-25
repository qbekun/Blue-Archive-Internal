#pragma once
#include "unitysdk.h"

namespace UnityEngine { class AsyncOperation; }

#define <UNWRAPWAITASYNCOPERATION>D__22_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DD0520)
#define <UNWRAPWAITASYNCOPERATION>D__22_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x9DD1C40)
#define <UNWRAPWAITASYNCOPERATION>D__22_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9DD1C50)
#define <UNWRAPWAITASYNCOPERATION>D__22_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x9DD1CB0)
#define <UNWRAPWAITASYNCOPERATION>D__22_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x9DD1CC0)
#define <UNWRAPWAITASYNCOPERATION>D__22_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x9DD1D10)

	inline static constexpr unsigned int <UnwrapWaitAsyncOperation>d__22_TypeDefinitionIndex = 35845;

	class <UnwrapWaitAsyncOperation>d__22 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::UnityEngine::AsyncOperation* asyncOperation; // 0x20

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <UNWRAPWAITASYNCOPERATION>D__22_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <UNWRAPWAITASYNCOPERATION>D__22_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <UNWRAPWAITASYNCOPERATION>D__22_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <UNWRAPWAITASYNCOPERATION>D__22_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <UNWRAPWAITASYNCOPERATION>D__22_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <UNWRAPWAITASYNCOPERATION>D__22_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

