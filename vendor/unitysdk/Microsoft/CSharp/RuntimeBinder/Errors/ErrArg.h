#pragma once
#include "../../../../unitysdk.h"

namespace Microsoft::CSharp::RuntimeBinder::Errors { class ErrArgKind; }
namespace Microsoft::CSharp::RuntimeBinder::Errors { class ErrArgFlags; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class SYMKIND; }
namespace Microsoft::CSharp::RuntimeBinder::Syntax { class Name; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class Symbol; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class CType; }
namespace Microsoft::CSharp::RuntimeBinder::Errors { class MethPropWithInstMemo; }
namespace Microsoft::CSharp::RuntimeBinder::Errors { class SymWithTypeMemo; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class SymWithType; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class MethPropWithInst; }
namespace Microsoft::CSharp::RuntimeBinder::Errors { class ErrArg; }

#define MICROSOFT_CSHARP_RUNTIMEBINDER_ERRORS_ERRARG_.CTOR_OFFSET UNITYSDK_OFFSET(0x90E15E0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_ERRORS_ERRARG_.CTOR_OFFSET UNITYSDK_OFFSET(0x90E15F0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_ERRORS_ERRARG_.CTOR_OFFSET UNITYSDK_OFFSET(0x90E1620)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_ERRORS_ERRARG_.CTOR_OFFSET UNITYSDK_OFFSET(0x90E1660)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_ERRORS_ERRARG_.CTOR_OFFSET UNITYSDK_OFFSET(0x90E16A0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_ERRORS_ERRARG_.CTOR_OFFSET UNITYSDK_OFFSET(0x90E16E0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_ERRORS_ERRARG_.CTOR_OFFSET UNITYSDK_OFFSET(0x90E1720)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_ERRORS_ERRARG_.CTOR_OFFSET UNITYSDK_OFFSET(0x90E1760)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_ERRORS_ERRARG_.CTOR_OFFSET UNITYSDK_OFFSET(0x90E17A0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_ERRORS_ERRARG_.CTOR_OFFSET UNITYSDK_OFFSET(0x90E1860)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_ERRORS_ERRARG_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x90E1930)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_ERRORS_ERRARG_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x90E1990)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_ERRORS_ERRARG_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x90E1A00)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_ERRORS_ERRARG_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x90E1A70)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_ERRORS_ERRARG_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x90E1AE0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_ERRORS_ERRARG_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x90E1B50)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_ERRORS_ERRARG_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x90E1BB0)

namespace Microsoft::CSharp::RuntimeBinder::Errors
{
	inline static constexpr unsigned int ErrArg_TypeDefinitionIndex = 34627;

	class ErrArg : public Il2CppObject
	{
	public:
		::Microsoft::CSharp::RuntimeBinder::Errors::ErrArgKind* eak; // 0x10
		::Microsoft::CSharp::RuntimeBinder::Errors::ErrArgFlags* eaf; // 0x14
		::System::Int32 n; // 0x18
		::Microsoft::CSharp::RuntimeBinder::Semantics::SYMKIND* sk; // 0x1C
		::Microsoft::CSharp::RuntimeBinder::Syntax::Name* name; // 0x20
		::Microsoft::CSharp::RuntimeBinder::Semantics::Symbol* sym; // 0x28
		::System::String* psz; // 0x30
		::Microsoft::CSharp::RuntimeBinder::Semantics::CType* pType; // 0x38
		::Microsoft::CSharp::RuntimeBinder::Errors::MethPropWithInstMemo* mpwiMemo; // 0x40
		::Microsoft::CSharp::RuntimeBinder::Errors::SymWithTypeMemo* swtMemo; // 0x48

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_ERRORS_ERRARG_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_ERRORS_ERRARG_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::Microsoft::CSharp::RuntimeBinder::Syntax::Name* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Syntax::Name*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_ERRORS_ERRARG_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_ERRORS_ERRARG_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_ERRORS_ERRARG_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg, ::Microsoft::CSharp::RuntimeBinder::Errors::ErrArgFlags* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::Microsoft::CSharp::RuntimeBinder::Errors::ErrArgFlags*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_ERRORS_ERRARG_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::Microsoft::CSharp::RuntimeBinder::Semantics::Symbol* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::Symbol*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_ERRORS_ERRARG_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::Microsoft::CSharp::RuntimeBinder::Semantics::Symbol* arg, ::Microsoft::CSharp::RuntimeBinder::Errors::ErrArgFlags* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::Symbol*, ::Microsoft::CSharp::RuntimeBinder::Errors::ErrArgFlags*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_ERRORS_ERRARG_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::Microsoft::CSharp::RuntimeBinder::Semantics::SymWithType* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::SymWithType*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_ERRORS_ERRARG_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::Microsoft::CSharp::RuntimeBinder::Semantics::MethPropWithInst* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::MethPropWithInst*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_ERRORS_ERRARG_.CTOR_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Errors::ErrArg* op_Implicit(::System::Int32 arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Errors::ErrArg*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_ERRORS_ERRARG_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Errors::ErrArg* op_Implicit(::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Errors::ErrArg*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_ERRORS_ERRARG_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Errors::ErrArg* op_Implicit(::System::String* str)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Errors::ErrArg*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_ERRORS_ERRARG_OP_IMPLICIT_OFFSET))(str, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Errors::ErrArg* op_Implicit(::Microsoft::CSharp::RuntimeBinder::Syntax::Name* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Errors::ErrArg*(*)(::Microsoft::CSharp::RuntimeBinder::Syntax::Name*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_ERRORS_ERRARG_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Errors::ErrArg* op_Implicit(::Microsoft::CSharp::RuntimeBinder::Semantics::Symbol* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Errors::ErrArg*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::Symbol*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_ERRORS_ERRARG_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Errors::ErrArg* op_Implicit(::Microsoft::CSharp::RuntimeBinder::Semantics::SymWithType* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Errors::ErrArg*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::SymWithType*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_ERRORS_ERRARG_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Errors::ErrArg* op_Implicit(::Microsoft::CSharp::RuntimeBinder::Semantics::MethPropWithInst* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Errors::ErrArg*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::MethPropWithInst*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_ERRORS_ERRARG_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

	};
}

