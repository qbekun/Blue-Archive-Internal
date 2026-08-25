#pragma once
#include "../../../../unitysdk.h"

namespace Microsoft::CSharp::RuntimeBinder::Semantics { class AggregateType; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class TypeArray; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class MethodSymbol; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class AggKindEnum; }
namespace Microsoft::CSharp::RuntimeBinder::Syntax { class PredefinedType; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class AggregateSymbol; }

#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_AGGREGATESYMBOL_GETBASEAGG_OFFSET UNITYSDK_OFFSET(0x90C9A60)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_AGGREGATESYMBOL_GETTHISTYPE_OFFSET UNITYSDK_OFFSET(0x90C9A80)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_AGGREGATESYMBOL_FINDBASEAGG_OFFSET UNITYSDK_OFFSET(0x90C9510)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_AGGREGATESYMBOL_ISNESTED_OFFSET UNITYSDK_OFFSET(0x90C9BD0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_AGGREGATESYMBOL_GETOUTERAGG_OFFSET UNITYSDK_OFFSET(0x90C93A0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_AGGREGATESYMBOL_ISPREDEFAGG_OFFSET UNITYSDK_OFFSET(0x90C9D80)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_AGGREGATESYMBOL_AGGKIND_OFFSET UNITYSDK_OFFSET(0x90C9DA0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_AGGREGATESYMBOL_SETAGGKIND_OFFSET UNITYSDK_OFFSET(0x90C9DB0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_AGGREGATESYMBOL_ISCLASS_OFFSET UNITYSDK_OFFSET(0x90C9DD0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_AGGREGATESYMBOL_ISDELEGATE_OFFSET UNITYSDK_OFFSET(0x90C9DE0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_AGGREGATESYMBOL_ISINTERFACE_OFFSET UNITYSDK_OFFSET(0x90C9DF0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_AGGREGATESYMBOL_ISSTRUCT_OFFSET UNITYSDK_OFFSET(0x90C9E00)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_AGGREGATESYMBOL_ISENUM_OFFSET UNITYSDK_OFFSET(0x90C9E10)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_AGGREGATESYMBOL_ISVALUETYPE_OFFSET UNITYSDK_OFFSET(0x90C9E20)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_AGGREGATESYMBOL_ISREFTYPE_OFFSET UNITYSDK_OFFSET(0x90C9E40)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_AGGREGATESYMBOL_ISSTATIC_OFFSET UNITYSDK_OFFSET(0x90C9E50)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_AGGREGATESYMBOL_ISABSTRACT_OFFSET UNITYSDK_OFFSET(0x90C9E70)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_AGGREGATESYMBOL_SETABSTRACT_OFFSET UNITYSDK_OFFSET(0x90C9E80)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_AGGREGATESYMBOL_ISPREDEFINED_OFFSET UNITYSDK_OFFSET(0x90C9E90)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_AGGREGATESYMBOL_SETPREDEFINED_OFFSET UNITYSDK_OFFSET(0x90C9EA0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_AGGREGATESYMBOL_GETPREDEFTYPE_OFFSET UNITYSDK_OFFSET(0x90C9EB0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_AGGREGATESYMBOL_SETPREDEFTYPE_OFFSET UNITYSDK_OFFSET(0x90C9EC0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_AGGREGATESYMBOL_ISSEALED_OFFSET UNITYSDK_OFFSET(0x90C9ED0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_AGGREGATESYMBOL_SETSEALED_OFFSET UNITYSDK_OFFSET(0x90C9EE0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_AGGREGATESYMBOL_HASCONVERSION_OFFSET UNITYSDK_OFFSET(0x90C9EF0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_AGGREGATESYMBOL_SETHASCONVERSION_OFFSET UNITYSDK_OFFSET(0x90C9FF0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_AGGREGATESYMBOL_HASPUBNOARGCTOR_OFFSET UNITYSDK_OFFSET(0x90CA040)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_AGGREGATESYMBOL_SETHASPUBNOARGCTOR_OFFSET UNITYSDK_OFFSET(0x90CA050)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_AGGREGATESYMBOL_ISSKIPUDOPS_OFFSET UNITYSDK_OFFSET(0x90CA060)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_AGGREGATESYMBOL_SETSKIPUDOPS_OFFSET UNITYSDK_OFFSET(0x90CA070)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_AGGREGATESYMBOL_GETTYPEVARS_OFFSET UNITYSDK_OFFSET(0x90CA080)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_AGGREGATESYMBOL_SETTYPEVARS_OFFSET UNITYSDK_OFFSET(0x90CA090)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_AGGREGATESYMBOL_GETTYPEVARSALL_OFFSET UNITYSDK_OFFSET(0x90CA2D0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_AGGREGATESYMBOL_GETBASECLASS_OFFSET UNITYSDK_OFFSET(0x90CA2E0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_AGGREGATESYMBOL_SETBASECLASS_OFFSET UNITYSDK_OFFSET(0x90CA2F0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_AGGREGATESYMBOL_GETUNDERLYINGTYPE_OFFSET UNITYSDK_OFFSET(0x90CA300)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_AGGREGATESYMBOL_SETUNDERLYINGTYPE_OFFSET UNITYSDK_OFFSET(0x90CA310)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_AGGREGATESYMBOL_GETIFACES_OFFSET UNITYSDK_OFFSET(0x90CA320)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_AGGREGATESYMBOL_SETIFACES_OFFSET UNITYSDK_OFFSET(0x90CA330)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_AGGREGATESYMBOL_GETIFACESALL_OFFSET UNITYSDK_OFFSET(0x90CA340)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_AGGREGATESYMBOL_SETIFACESALL_OFFSET UNITYSDK_OFFSET(0x90CA350)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_AGGREGATESYMBOL_GETFIRSTUDCONVERSION_OFFSET UNITYSDK_OFFSET(0x90CA360)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_AGGREGATESYMBOL_SETFIRSTUDCONVERSION_OFFSET UNITYSDK_OFFSET(0x90CA370)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_AGGREGATESYMBOL_INTERNALSVISIBLETO_OFFSET UNITYSDK_OFFSET(0x90CA390)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_AGGREGATESYMBOL_.CTOR_OFFSET UNITYSDK_OFFSET(0x90CA7C0)

namespace Microsoft::CSharp::RuntimeBinder::Semantics
{
	inline static constexpr unsigned int AggregateSymbol_TypeDefinitionIndex = 34529;

	class AggregateSymbol : public Il2CppObject
	{
	public:
		::System::Type* AssociatedSystemType; // 0x48
		::System::Reflection::Assembly* AssociatedAssembly; // 0x50
		::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType* _atsInst; // 0x58
		::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType* _pBaseClass; // 0x60
		::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType* _pUnderlyingType; // 0x68
		::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray* _ifaces; // 0x70
		::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray* _ifacesAll; // 0x78
		::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray* _typeVarsThis; // 0x80
		::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray* _typeVarsAll; // 0x88
		::Microsoft::CSharp::RuntimeBinder::Semantics::MethodSymbol* _pConvFirst; // 0x90
		::Microsoft::CSharp::RuntimeBinder::Semantics::AggKindEnum* _aggKind; // 0x98
		::System::Boolean _isPredefined; // 0x9C
		::Microsoft::CSharp::RuntimeBinder::Syntax::PredefinedType* _iPredef; // 0xA0
		::System::Boolean _isAbstract; // 0xA4
		::System::Boolean _isSealed; // 0xA5
		::System::Boolean _hasPubNoArgCtor; // 0xA6
		::System::Boolean _isSkipUDOps; // 0xA7
		Il2CppObject* _hasConversion; // 0xA8

		::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateSymbol* GetBaseAgg()
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateSymbol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_AGGREGATESYMBOL_GETBASEAGG_OFFSET))(nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType* getThisType()
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_AGGREGATESYMBOL_GETTHISTYPE_OFFSET))(nullptr);
		}

		::System::Boolean FindBaseAgg(::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateSymbol* arg)
		{
			return (return (::System::Boolean(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateSymbol*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_AGGREGATESYMBOL_FINDBASEAGG_OFFSET))(arg, nullptr);
		}

		::System::Boolean isNested()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_AGGREGATESYMBOL_ISNESTED_OFFSET))(nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateSymbol* GetOuterAgg()
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateSymbol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_AGGREGATESYMBOL_GETOUTERAGG_OFFSET))(nullptr);
		}

		::System::Boolean isPredefAgg(::Microsoft::CSharp::RuntimeBinder::Syntax::PredefinedType* arg)
		{
			return (return (::System::Boolean(*)(::Microsoft::CSharp::RuntimeBinder::Syntax::PredefinedType*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_AGGREGATESYMBOL_ISPREDEFAGG_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::AggKindEnum* AggKind()
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::AggKindEnum*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_AGGREGATESYMBOL_AGGKIND_OFFSET))(nullptr);
		}

		::System::Void SetAggKind(::Microsoft::CSharp::RuntimeBinder::Semantics::AggKindEnum* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::AggKindEnum*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_AGGREGATESYMBOL_SETAGGKIND_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsClass()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_AGGREGATESYMBOL_ISCLASS_OFFSET))(nullptr);
		}

		::System::Boolean IsDelegate()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_AGGREGATESYMBOL_ISDELEGATE_OFFSET))(nullptr);
		}

		::System::Boolean IsInterface()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_AGGREGATESYMBOL_ISINTERFACE_OFFSET))(nullptr);
		}

		::System::Boolean IsStruct()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_AGGREGATESYMBOL_ISSTRUCT_OFFSET))(nullptr);
		}

		::System::Boolean IsEnum()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_AGGREGATESYMBOL_ISENUM_OFFSET))(nullptr);
		}

		::System::Boolean IsValueType()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_AGGREGATESYMBOL_ISVALUETYPE_OFFSET))(nullptr);
		}

		::System::Boolean IsRefType()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_AGGREGATESYMBOL_ISREFTYPE_OFFSET))(nullptr);
		}

		::System::Boolean IsStatic()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_AGGREGATESYMBOL_ISSTATIC_OFFSET))(nullptr);
		}

		::System::Boolean IsAbstract()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_AGGREGATESYMBOL_ISABSTRACT_OFFSET))(nullptr);
		}

		::System::Void SetAbstract(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_AGGREGATESYMBOL_SETABSTRACT_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsPredefined()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_AGGREGATESYMBOL_ISPREDEFINED_OFFSET))(nullptr);
		}

		::System::Void SetPredefined(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_AGGREGATESYMBOL_SETPREDEFINED_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Syntax::PredefinedType* GetPredefType()
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Syntax::PredefinedType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_AGGREGATESYMBOL_GETPREDEFTYPE_OFFSET))(nullptr);
		}

		::System::Void SetPredefType(::Microsoft::CSharp::RuntimeBinder::Syntax::PredefinedType* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Syntax::PredefinedType*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_AGGREGATESYMBOL_SETPREDEFTYPE_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsSealed()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_AGGREGATESYMBOL_ISSEALED_OFFSET))(nullptr);
		}

		::System::Void SetSealed(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_AGGREGATESYMBOL_SETSEALED_OFFSET))(arg, nullptr);
		}

		::System::Boolean HasConversion()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_AGGREGATESYMBOL_HASCONVERSION_OFFSET))(nullptr);
		}

		::System::Void SetHasConversion()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_AGGREGATESYMBOL_SETHASCONVERSION_OFFSET))(nullptr);
		}

		::System::Boolean HasPubNoArgCtor()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_AGGREGATESYMBOL_HASPUBNOARGCTOR_OFFSET))(nullptr);
		}

		::System::Void SetHasPubNoArgCtor(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_AGGREGATESYMBOL_SETHASPUBNOARGCTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsSkipUDOps()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_AGGREGATESYMBOL_ISSKIPUDOPS_OFFSET))(nullptr);
		}

		::System::Void SetSkipUDOps(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_AGGREGATESYMBOL_SETSKIPUDOPS_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray* GetTypeVars()
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_AGGREGATESYMBOL_GETTYPEVARS_OFFSET))(nullptr);
		}

		::System::Void SetTypeVars(::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_AGGREGATESYMBOL_SETTYPEVARS_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray* GetTypeVarsAll()
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_AGGREGATESYMBOL_GETTYPEVARSALL_OFFSET))(nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType* GetBaseClass()
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_AGGREGATESYMBOL_GETBASECLASS_OFFSET))(nullptr);
		}

		::System::Void SetBaseClass(::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_AGGREGATESYMBOL_SETBASECLASS_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType* GetUnderlyingType()
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_AGGREGATESYMBOL_GETUNDERLYINGTYPE_OFFSET))(nullptr);
		}

		::System::Void SetUnderlyingType(::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_AGGREGATESYMBOL_SETUNDERLYINGTYPE_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray* GetIfaces()
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_AGGREGATESYMBOL_GETIFACES_OFFSET))(nullptr);
		}

		::System::Void SetIfaces(::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_AGGREGATESYMBOL_SETIFACES_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray* GetIfacesAll()
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_AGGREGATESYMBOL_GETIFACESALL_OFFSET))(nullptr);
		}

		::System::Void SetIfacesAll(::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_AGGREGATESYMBOL_SETIFACESALL_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::MethodSymbol* GetFirstUDConversion()
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::MethodSymbol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_AGGREGATESYMBOL_GETFIRSTUDCONVERSION_OFFSET))(nullptr);
		}

		::System::Void SetFirstUDConversion(::Microsoft::CSharp::RuntimeBinder::Semantics::MethodSymbol* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::MethodSymbol*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_AGGREGATESYMBOL_SETFIRSTUDCONVERSION_OFFSET))(arg, nullptr);
		}

		::System::Boolean InternalsVisibleTo(::System::Reflection::Assembly* arg)
		{
			return (return (::System::Boolean(*)(::System::Reflection::Assembly*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_AGGREGATESYMBOL_INTERNALSVISIBLETO_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_AGGREGATESYMBOL_.CTOR_OFFSET))(nullptr);
		}

	};
}

