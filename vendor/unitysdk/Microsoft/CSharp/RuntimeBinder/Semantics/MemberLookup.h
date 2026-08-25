#pragma once
#include "../../../../unitysdk.h"

namespace Microsoft::CSharp::RuntimeBinder::Semantics { class CType; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class ParentSymbol; }
namespace Microsoft::CSharp::RuntimeBinder::Syntax { class Name; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class MemLookFlags; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class SymWithType; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class AggregateType; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class Symbol; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class AggregateType&; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class TypeArray; }
namespace Microsoft::CSharp::RuntimeBinder { class RuntimeBinderException; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class Expr; }

#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_MEMBERLOOKUP_RECORDTYPE_OFFSET UNITYSDK_OFFSET(0x90BD440)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_MEMBERLOOKUP_SEARCHSINGLETYPE_OFFSET UNITYSDK_OFFSET(0x90BD5A0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_MEMBERLOOKUP_ISDYNAMICMEMBER_OFFSET UNITYSDK_OFFSET(0x90BE040)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_MEMBERLOOKUP_LOOKUPINCLASS_OFFSET UNITYSDK_OFFSET(0x90BE3B0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_MEMBERLOOKUP_LOOKUPININTERFACES_OFFSET UNITYSDK_OFFSET(0x90BE490)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_MEMBERLOOKUP_REPORTBOGUS_OFFSET UNITYSDK_OFFSET(0x90BE700)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_MEMBERLOOKUP_ISDELEGATETYPE_OFFSET UNITYSDK_OFFSET(0x90BDFB0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_MEMBERLOOKUP_.CTOR_OFFSET UNITYSDK_OFFSET(0x90BEB30)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_MEMBERLOOKUP_LOOKUP_OFFSET UNITYSDK_OFFSET(0x90BED40)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_MEMBERLOOKUP_FERROR_OFFSET UNITYSDK_OFFSET(0x90BEFC0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_MEMBERLOOKUP_SWTFIRST_OFFSET UNITYSDK_OFFSET(0x90BEFF0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_MEMBERLOOKUP_REPORTERRORS_OFFSET UNITYSDK_OFFSET(0x90BF000)

namespace Microsoft::CSharp::RuntimeBinder::Semantics
{
	inline static constexpr unsigned int MemberLookup_TypeDefinitionIndex = 34511;

	class MemberLookup : public Il2CppObject
	{
	public:
		::Microsoft::CSharp::RuntimeBinder::Semantics::CType* _typeSrc; // 0x10
		::Microsoft::CSharp::RuntimeBinder::Semantics::CType* _typeQual; // 0x18
		::Microsoft::CSharp::RuntimeBinder::Semantics::ParentSymbol* _symWhere; // 0x20
		::Microsoft::CSharp::RuntimeBinder::Syntax::Name* _name; // 0x28
		::System::Int32 _arity; // 0x30
		::Microsoft::CSharp::RuntimeBinder::Semantics::MemLookFlags* _flags; // 0x34
		Il2CppObject* _rgtypeStart; // 0x38
		Il2CppObject* _prgtype; // 0x40
		::System::Int32 _csym; // 0x48
		::Microsoft::CSharp::RuntimeBinder::Semantics::SymWithType* _swtFirst; // 0x50
		Il2CppObject* _methPropWithTypeList; // 0x58
		::Microsoft::CSharp::RuntimeBinder::Semantics::SymWithType* _swtAmbig; // 0x60
		::Microsoft::CSharp::RuntimeBinder::Semantics::SymWithType* _swtInaccess; // 0x68
		::Microsoft::CSharp::RuntimeBinder::Semantics::SymWithType* _swtBad; // 0x70
		::Microsoft::CSharp::RuntimeBinder::Semantics::SymWithType* _swtBogus; // 0x78
		::Microsoft::CSharp::RuntimeBinder::Semantics::SymWithType* _swtBadArity; // 0x80
		::System::Boolean _fMulti; // 0x88

		::System::Void RecordType(::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::Symbol* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::Symbol*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_MEMBERLOOKUP_RECORDTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean SearchSingleType(::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType* arg, bool&* arg)
		{
			return (return (::System::Boolean(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType*, bool&*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_MEMBERLOOKUP_SEARCHSINGLETYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsDynamicMember(::Microsoft::CSharp::RuntimeBinder::Semantics::Symbol* arg)
		{
			return (return (::System::Boolean(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::Symbol*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_MEMBERLOOKUP_ISDYNAMICMEMBER_OFFSET))(arg, nullptr);
		}

		::System::Boolean LookupInClass(::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType&* arg)
		{
			return (return (::System::Boolean(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType&*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_MEMBERLOOKUP_LOOKUPINCLASS_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean LookupInInterfaces(::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray* arg)
		{
			return (return (::System::Boolean(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_MEMBERLOOKUP_LOOKUPININTERFACES_OFFSET))(arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::RuntimeBinderException* ReportBogus(::Microsoft::CSharp::RuntimeBinder::Semantics::SymWithType* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::RuntimeBinderException*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::SymWithType*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_MEMBERLOOKUP_REPORTBOGUS_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsDelegateType(::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType* arg)
		{
			return (return (::System::Boolean(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_MEMBERLOOKUP_ISDELEGATETYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_MEMBERLOOKUP_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean Lookup(::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::ParentSymbol* arg, ::Microsoft::CSharp::RuntimeBinder::Syntax::Name* arg, ::System::Int32 arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::MemLookFlags* arg)
		{
			return (return (::System::Boolean(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::Expr*, ::Microsoft::CSharp::RuntimeBinder::Semantics::ParentSymbol*, ::Microsoft::CSharp::RuntimeBinder::Syntax::Name*, ::System::Int32, ::Microsoft::CSharp::RuntimeBinder::Semantics::MemLookFlags*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_MEMBERLOOKUP_LOOKUP_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean FError()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_MEMBERLOOKUP_FERROR_OFFSET))(nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::SymWithType* SwtFirst()
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::SymWithType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_MEMBERLOOKUP_SWTFIRST_OFFSET))(nullptr);
		}

		::System::Exception* ReportErrors()
		{
			return (return (::System::Exception*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_MEMBERLOOKUP_REPORTERRORS_OFFSET))(nullptr);
		}

	};
}

