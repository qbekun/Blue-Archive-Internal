#pragma once
#include "unitysdk.h"

namespace Microsoft::CSharp::RuntimeBinder::Semantics { class Expr; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class ExprList; }

#define <TOENUMERABLE>D__1_.CTOR_OFFSET UNITYSDK_OFFSET(0x90BBC40)
#define <TOENUMERABLE>D__1_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x90BBE00)
#define <TOENUMERABLE>D__1_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x90BBE10)
#define <TOENUMERABLE>D__1_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_MICROSOFT.CSHARP.RUNTIMEBINDER.SEMANTICS.EXPR_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x90BBF00)
#define <TOENUMERABLE>D__1_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x90BBF10)
#define <TOENUMERABLE>D__1_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x90BBF60)
#define <TOENUMERABLE>D__1_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_MICROSOFT.CSHARP.RUNTIMEBINDER.SEMANTICS.EXPR_.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x90BBF70)
#define <TOENUMERABLE>D__1_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x90BC010)

	inline static constexpr unsigned int <ToEnumerable>d__1_TypeDefinitionIndex = 34491;

	class <ToEnumerable>d__1 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* __2__current; // 0x18
		::System::Int32 __l__initialThreadId; // 0x20
		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* expr; // 0x28
		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* __3__expr; // 0x30
		::Microsoft::CSharp::RuntimeBinder::Semantics::ExprList* _list_5__2; // 0x38

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <TOENUMERABLE>D__1_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <TOENUMERABLE>D__1_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <TOENUMERABLE>D__1_MOVENEXT_OFFSET))(nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* System.Collections.Generic.IEnumerator_Microsoft.CSharp.RuntimeBinder.Semantics.Expr_.get_Current()
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*(*)(::PVOID))((::PBYTE)hIl2Cpp + <TOENUMERABLE>D__1_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_MICROSOFT.CSHARP.RUNTIMEBINDER.SEMANTICS.EXPR_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <TOENUMERABLE>D__1_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <TOENUMERABLE>D__1_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

		Il2CppObject* System.Collections.Generic.IEnumerable_Microsoft.CSharp.RuntimeBinder.Semantics.Expr_.GetEnumerator()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + <TOENUMERABLE>D__1_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_MICROSOFT.CSHARP.RUNTIMEBINDER.SEMANTICS.EXPR_.GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + <TOENUMERABLE>D__1_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

	};

