#pragma once
#include "../../../../unitysdk.h"

namespace Microsoft::CSharp::RuntimeBinder::Semantics { class CType; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class ACCESSERROR; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class Symbol; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class AggregateType; }
namespace Microsoft::CSharp::RuntimeBinder { class RuntimeBinderException; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class SymWithType; }

#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_CSEMANTICCHECKER_CHECKFORSTATICCLASS_OFFSET UNITYSDK_OFFSET(0x90C8940)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_CSEMANTICCHECKER_CHECKACCESS2_OFFSET UNITYSDK_OFFSET(0x90C89F0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_CSEMANTICCHECKER_CHECKTYPEACCESS_OFFSET UNITYSDK_OFFSET(0x90C9180)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_CSEMANTICCHECKER_CHECKACCESSCORE_OFFSET UNITYSDK_OFFSET(0x90C8B70)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_CSEMANTICCHECKER_CHECKBOGUS_OFFSET UNITYSDK_OFFSET(0x90C9550)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_CSEMANTICCHECKER_REPORTACCESSERROR_OFFSET UNITYSDK_OFFSET(0x90C95C0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_CSEMANTICCHECKER_CHECKACCESS_OFFSET UNITYSDK_OFFSET(0x90C97B0)

namespace Microsoft::CSharp::RuntimeBinder::Semantics
{
	inline static constexpr unsigned int CSemanticChecker_TypeDefinitionIndex = 34527;

	class CSemanticChecker : public Il2CppObject
	{
	public:
		::System::Void CheckForStaticClass(::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_CSEMANTICCHECKER_CHECKFORSTATICCLASS_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::ACCESSERROR* CheckAccess2(::Microsoft::CSharp::RuntimeBinder::Semantics::Symbol* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::Symbol* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::ACCESSERROR*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::Symbol*, ::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::Symbol*, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_CSEMANTICCHECKER_CHECKACCESS2_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean CheckTypeAccess(::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::Symbol* arg)
		{
			return (return (::System::Boolean(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::Symbol*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_CSEMANTICCHECKER_CHECKTYPEACCESS_OFFSET))(arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::ACCESSERROR* CheckAccessCore(::Microsoft::CSharp::RuntimeBinder::Semantics::Symbol* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::Symbol* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::ACCESSERROR*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::Symbol*, ::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::Symbol*, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_CSEMANTICCHECKER_CHECKACCESSCORE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean CheckBogus(::Microsoft::CSharp::RuntimeBinder::Semantics::Symbol* arg)
		{
			return (return (::System::Boolean(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::Symbol*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_CSEMANTICCHECKER_CHECKBOGUS_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::RuntimeBinderException* ReportAccessError(::Microsoft::CSharp::RuntimeBinder::Semantics::SymWithType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::Symbol* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::RuntimeBinderException*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::SymWithType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::Symbol*, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_CSEMANTICCHECKER_REPORTACCESSERROR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean CheckAccess(::Microsoft::CSharp::RuntimeBinder::Semantics::Symbol* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::Symbol* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg)
		{
			return (return (::System::Boolean(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::Symbol*, ::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::Symbol*, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_CSEMANTICCHECKER_CHECKACCESS_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};
}

