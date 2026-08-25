#pragma once
#include "../../../../unitysdk.h"

namespace Microsoft::CSharp::RuntimeBinder::Semantics { class AggregateType; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class CType; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class FUNDTYPE; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class ConstValKind; }

#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_NULLABLETYPE_.CTOR_OFFSET UNITYSDK_OFFSET(0x90D9C50)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_NULLABLETYPE_GETATS_OFFSET UNITYSDK_OFFSET(0x90D9C90)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_NULLABLETYPE_STRIPNUBS_OFFSET UNITYSDK_OFFSET(0x90DA0D0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_NULLABLETYPE_STRIPNUBS_OFFSET UNITYSDK_OFFSET(0x90DA0E0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_NULLABLETYPE_GET_UNDERLYINGTYPE_OFFSET UNITYSDK_OFFSET(0x90DA0F0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_NULLABLETYPE_GET_ISVALUETYPE_OFFSET UNITYSDK_OFFSET(0x90DA100)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_NULLABLETYPE_GET_ISSTRUCTTYPE_OFFSET UNITYSDK_OFFSET(0x90DA110)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_NULLABLETYPE_GET_ASSOCIATEDSYSTEMTYPE_OFFSET UNITYSDK_OFFSET(0x90DA120)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_NULLABLETYPE_GET_BASEORPARAMETERORELEMENTTYPE_OFFSET UNITYSDK_OFFSET(0x90DA230)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_NULLABLETYPE_GET_FUNDAMENTALTYPE_OFFSET UNITYSDK_OFFSET(0x90DA240)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_NULLABLETYPE_GET_CONSTVALKIND_OFFSET UNITYSDK_OFFSET(0x90DA250)

namespace Microsoft::CSharp::RuntimeBinder::Semantics
{
	inline static constexpr unsigned int NullableType_TypeDefinitionIndex = 34595;

	class NullableType : public Il2CppObject
	{
	public:
		::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType* _ats; // 0x18
		::Microsoft::CSharp::RuntimeBinder::Semantics::CType* _UnderlyingType_k__BackingField; // 0x20

		::System::Void .ctor(::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_NULLABLETYPE_.CTOR_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType* GetAts()
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_NULLABLETYPE_GETATS_OFFSET))(nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::CType* StripNubs()
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::CType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_NULLABLETYPE_STRIPNUBS_OFFSET))(nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::CType* StripNubs(bool&* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::CType*(*)(bool&*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_NULLABLETYPE_STRIPNUBS_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::CType* get_UnderlyingType()
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::CType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_NULLABLETYPE_GET_UNDERLYINGTYPE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsValueType()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_NULLABLETYPE_GET_ISVALUETYPE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsStructType()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_NULLABLETYPE_GET_ISSTRUCTTYPE_OFFSET))(nullptr);
		}

		::System::Type* get_AssociatedSystemType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_NULLABLETYPE_GET_ASSOCIATEDSYSTEMTYPE_OFFSET))(nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::CType* get_BaseOrParameterOrElementType()
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::CType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_NULLABLETYPE_GET_BASEORPARAMETERORELEMENTTYPE_OFFSET))(nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::FUNDTYPE* get_FundamentalType()
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::FUNDTYPE*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_NULLABLETYPE_GET_FUNDAMENTALTYPE_OFFSET))(nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::ConstValKind* get_ConstValKind()
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::ConstValKind*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_NULLABLETYPE_GET_CONSTVALKIND_OFFSET))(nullptr);
		}

	};
}

