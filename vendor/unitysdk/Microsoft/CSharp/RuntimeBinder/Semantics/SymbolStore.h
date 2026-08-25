#pragma once
#include "../../../../unitysdk.h"

namespace Microsoft::CSharp::RuntimeBinder::Semantics { class Symbol; }
namespace Microsoft::CSharp::RuntimeBinder::Syntax { class Name; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class ParentSymbol; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class symbmask_t; }

#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_SYMBOLSTORE_LOOKUPSYM_OFFSET UNITYSDK_OFFSET(0x90CC870)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_SYMBOLSTORE_INSERTCHILD_OFFSET UNITYSDK_OFFSET(0x90CBC90)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_SYMBOLSTORE_INSERTCHILDNOGROW_OFFSET UNITYSDK_OFFSET(0x90CDA00)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_SYMBOLSTORE_FINDCORRECTKIND_OFFSET UNITYSDK_OFFSET(0x90CD9C0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_SYMBOLSTORE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x90CDBE0)

namespace Microsoft::CSharp::RuntimeBinder::Semantics
{
	inline static constexpr unsigned int SymbolStore_TypeDefinitionIndex = 34550;

	class SymbolStore : public Il2CppObject
	{
	public:
		Il2CppObject* s_dictionary; // 0x0

		::Microsoft::CSharp::RuntimeBinder::Semantics::Symbol* LookupSym(::Microsoft::CSharp::RuntimeBinder::Syntax::Name* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::ParentSymbol* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::symbmask_t* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Symbol*(*)(::Microsoft::CSharp::RuntimeBinder::Syntax::Name*, ::Microsoft::CSharp::RuntimeBinder::Semantics::ParentSymbol*, ::Microsoft::CSharp::RuntimeBinder::Semantics::symbmask_t*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_SYMBOLSTORE_LOOKUPSYM_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void InsertChild(::Microsoft::CSharp::RuntimeBinder::Semantics::ParentSymbol* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::Symbol* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ParentSymbol*, ::Microsoft::CSharp::RuntimeBinder::Semantics::Symbol*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_SYMBOLSTORE_INSERTCHILD_OFFSET))(arg, arg, nullptr);
		}

		::System::Void InsertChildNoGrow(::Microsoft::CSharp::RuntimeBinder::Semantics::Symbol* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::Symbol*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_SYMBOLSTORE_INSERTCHILDNOGROW_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::Symbol* FindCorrectKind(::Microsoft::CSharp::RuntimeBinder::Semantics::Symbol* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::symbmask_t* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Symbol*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::Symbol*, ::Microsoft::CSharp::RuntimeBinder::Semantics::symbmask_t*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_SYMBOLSTORE_FINDCORRECTKIND_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_SYMBOLSTORE_.CCTOR_OFFSET))(nullptr);
		}

	};
}

