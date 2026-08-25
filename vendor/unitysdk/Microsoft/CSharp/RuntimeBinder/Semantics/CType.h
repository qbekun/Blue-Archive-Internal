#pragma once
#include "../../../../unitysdk.h"

namespace Microsoft::CSharp::RuntimeBinder::Semantics { class TypeKind; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class CType; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class FUNDTYPE; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class ConstValKind; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class AggregateType; }
namespace Microsoft::CSharp::RuntimeBinder::Syntax { class PredefinedType; }

#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_CTYPE_.CTOR_OFFSET UNITYSDK_OFFSET(0x90D8150)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_CTYPE_GET_ISWINDOWSRUNTIMETYPE_OFFSET UNITYSDK_OFFSET(0x90DCF80)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_CTYPE_GET_ASSOCIATEDSYSTEMTYPE_OFFSET UNITYSDK_OFFSET(0x90DCFC0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_CTYPE_GET_TYPEKIND_OFFSET UNITYSDK_OFFSET(0x90DCFF0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_CTYPE_GET_BASEORPARAMETERORELEMENTTYPE_OFFSET UNITYSDK_OFFSET(0x90DD000)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_CTYPE_GET_FUNDAMENTALTYPE_OFFSET UNITYSDK_OFFSET(0x90DD010)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_CTYPE_GET_CONSTVALKIND_OFFSET UNITYSDK_OFFSET(0x90DD020)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_CTYPE_GETNAKEDTYPE_OFFSET UNITYSDK_OFFSET(0x90C92A0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_CTYPE_STRIPNUBS_OFFSET UNITYSDK_OFFSET(0x90DD030)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_CTYPE_STRIPNUBS_OFFSET UNITYSDK_OFFSET(0x90DD040)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_CTYPE_GET_ISDELEGATETYPE_OFFSET UNITYSDK_OFFSET(0x90DD050)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_CTYPE_GET_ISSIMPLETYPE_OFFSET UNITYSDK_OFFSET(0x90DD060)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_CTYPE_GET_ISSIMPLEORENUM_OFFSET UNITYSDK_OFFSET(0x90DD070)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_CTYPE_GET_ISSIMPLEORENUMORSTRING_OFFSET UNITYSDK_OFFSET(0x90DD080)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_CTYPE_GET_ISNUMERICTYPE_OFFSET UNITYSDK_OFFSET(0x90DD090)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_CTYPE_GET_ISSTRUCTTYPE_OFFSET UNITYSDK_OFFSET(0x90DD0A0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_CTYPE_GET_ISENUMTYPE_OFFSET UNITYSDK_OFFSET(0x90DD0B0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_CTYPE_GET_ISINTERFACETYPE_OFFSET UNITYSDK_OFFSET(0x90DD0C0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_CTYPE_GET_ISCLASSTYPE_OFFSET UNITYSDK_OFFSET(0x90DD0D0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_CTYPE_GET_UNDERLYINGENUMTYPE_OFFSET UNITYSDK_OFFSET(0x90DD0E0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_CTYPE_ISUNSAFE_OFFSET UNITYSDK_OFFSET(0x90DD110)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_CTYPE_ISPREDEFTYPE_OFFSET UNITYSDK_OFFSET(0x90DD120)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_CTYPE_GET_ISPREDEFINED_OFFSET UNITYSDK_OFFSET(0x90DD130)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_CTYPE_GET_PREDEFINEDTYPE_OFFSET UNITYSDK_OFFSET(0x90DD140)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_CTYPE_GET_ISSTATICCLASS_OFFSET UNITYSDK_OFFSET(0x90DD170)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_CTYPE_GET_ISVALUETYPE_OFFSET UNITYSDK_OFFSET(0x90DD180)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_CTYPE_GET_ISNONNULLABLEVALUETYPE_OFFSET UNITYSDK_OFFSET(0x90DD190)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_CTYPE_GET_ISREFERENCETYPE_OFFSET UNITYSDK_OFFSET(0x90DD1A0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_CTYPE_GETATS_OFFSET UNITYSDK_OFFSET(0x90DD1B0)

namespace Microsoft::CSharp::RuntimeBinder::Semantics
{
	inline static constexpr unsigned int CType_TypeDefinitionIndex = 34601;

	class CType : public Il2CppObject
	{
	public:
		::Microsoft::CSharp::RuntimeBinder::Semantics::TypeKind* _TypeKind_k__BackingField; // 0x10

		::System::Void .ctor(::Microsoft::CSharp::RuntimeBinder::Semantics::TypeKind* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::TypeKind*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_CTYPE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsWindowsRuntimeType()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_CTYPE_GET_ISWINDOWSRUNTIMETYPE_OFFSET))(nullptr);
		}

		::System::Type* get_AssociatedSystemType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_CTYPE_GET_ASSOCIATEDSYSTEMTYPE_OFFSET))(nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::TypeKind* get_TypeKind()
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::TypeKind*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_CTYPE_GET_TYPEKIND_OFFSET))(nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::CType* get_BaseOrParameterOrElementType()
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::CType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_CTYPE_GET_BASEORPARAMETERORELEMENTTYPE_OFFSET))(nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::FUNDTYPE* get_FundamentalType()
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::FUNDTYPE*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_CTYPE_GET_FUNDAMENTALTYPE_OFFSET))(nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::ConstValKind* get_ConstValKind()
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::ConstValKind*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_CTYPE_GET_CONSTVALKIND_OFFSET))(nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::CType* GetNakedType(::System::Boolean arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::CType*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_CTYPE_GETNAKEDTYPE_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::CType* StripNubs()
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::CType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_CTYPE_STRIPNUBS_OFFSET))(nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::CType* StripNubs(bool&* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::CType*(*)(bool&*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_CTYPE_STRIPNUBS_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsDelegateType()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_CTYPE_GET_ISDELEGATETYPE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsSimpleType()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_CTYPE_GET_ISSIMPLETYPE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsSimpleOrEnum()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_CTYPE_GET_ISSIMPLEORENUM_OFFSET))(nullptr);
		}

		::System::Boolean get_IsSimpleOrEnumOrString()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_CTYPE_GET_ISSIMPLEORENUMORSTRING_OFFSET))(nullptr);
		}

		::System::Boolean get_IsNumericType()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_CTYPE_GET_ISNUMERICTYPE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsStructType()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_CTYPE_GET_ISSTRUCTTYPE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsEnumType()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_CTYPE_GET_ISENUMTYPE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsInterfaceType()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_CTYPE_GET_ISINTERFACETYPE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsClassType()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_CTYPE_GET_ISCLASSTYPE_OFFSET))(nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType* get_UnderlyingEnumType()
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_CTYPE_GET_UNDERLYINGENUMTYPE_OFFSET))(nullptr);
		}

		::System::Boolean IsUnsafe()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_CTYPE_ISUNSAFE_OFFSET))(nullptr);
		}

		::System::Boolean IsPredefType(::Microsoft::CSharp::RuntimeBinder::Syntax::PredefinedType* arg)
		{
			return (return (::System::Boolean(*)(::Microsoft::CSharp::RuntimeBinder::Syntax::PredefinedType*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_CTYPE_ISPREDEFTYPE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsPredefined()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_CTYPE_GET_ISPREDEFINED_OFFSET))(nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Syntax::PredefinedType* get_PredefinedType()
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Syntax::PredefinedType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_CTYPE_GET_PREDEFINEDTYPE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsStaticClass()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_CTYPE_GET_ISSTATICCLASS_OFFSET))(nullptr);
		}

		::System::Boolean get_IsValueType()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_CTYPE_GET_ISVALUETYPE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsNonNullableValueType()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_CTYPE_GET_ISNONNULLABLEVALUETYPE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsReferenceType()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_CTYPE_GET_ISREFERENCETYPE_OFFSET))(nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType* GetAts()
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_CTYPE_GETATS_OFFSET))(nullptr);
		}

	};
}

