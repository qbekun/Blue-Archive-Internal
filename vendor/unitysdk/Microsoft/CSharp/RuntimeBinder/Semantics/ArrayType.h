#pragma once
#include "../../../../unitysdk.h"

namespace Microsoft::CSharp::RuntimeBinder::Semantics { class CType; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class FUNDTYPE; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class ConstValKind; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class AggregateType; }

#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_ARRAYTYPE_.CTOR_OFFSET UNITYSDK_OFFSET(0x90D9890)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_ARRAYTYPE_GET_RANK_OFFSET UNITYSDK_OFFSET(0x90D98E0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_ARRAYTYPE_GET_ISSZARRAY_OFFSET UNITYSDK_OFFSET(0x90D98F0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_ARRAYTYPE_GET_ELEMENTTYPE_OFFSET UNITYSDK_OFFSET(0x90D9900)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_ARRAYTYPE_GET_BASEELEMENTTYPE_OFFSET UNITYSDK_OFFSET(0x90D9910)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_ARRAYTYPE_GET_ISREFERENCETYPE_OFFSET UNITYSDK_OFFSET(0x90D9970)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_ARRAYTYPE_ISUNSAFE_OFFSET UNITYSDK_OFFSET(0x90D9980)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_ARRAYTYPE_GET_ASSOCIATEDSYSTEMTYPE_OFFSET UNITYSDK_OFFSET(0x90D9A20)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_ARRAYTYPE_GET_BASEORPARAMETERORELEMENTTYPE_OFFSET UNITYSDK_OFFSET(0x90D9AA0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_ARRAYTYPE_GET_FUNDAMENTALTYPE_OFFSET UNITYSDK_OFFSET(0x90D9AB0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_ARRAYTYPE_GET_CONSTVALKIND_OFFSET UNITYSDK_OFFSET(0x90D9AC0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_ARRAYTYPE_GETATS_OFFSET UNITYSDK_OFFSET(0x90D9AD0)

namespace Microsoft::CSharp::RuntimeBinder::Semantics
{
	inline static constexpr unsigned int ArrayType_TypeDefinitionIndex = 34592;

	class ArrayType : public Il2CppObject
	{
	public:
		::System::Int32 _Rank_k__BackingField; // 0x18
		::System::Boolean _IsSZArray_k__BackingField; // 0x1C
		::Microsoft::CSharp::RuntimeBinder::Semantics::CType* _ElementType_k__BackingField; // 0x20

		::System::Void .ctor(::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg, ::System::Int32 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_ARRAYTYPE_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 get_Rank()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_ARRAYTYPE_GET_RANK_OFFSET))(nullptr);
		}

		::System::Boolean get_IsSZArray()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_ARRAYTYPE_GET_ISSZARRAY_OFFSET))(nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::CType* get_ElementType()
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::CType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_ARRAYTYPE_GET_ELEMENTTYPE_OFFSET))(nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::CType* get_BaseElementType()
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::CType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_ARRAYTYPE_GET_BASEELEMENTTYPE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsReferenceType()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_ARRAYTYPE_GET_ISREFERENCETYPE_OFFSET))(nullptr);
		}

		::System::Boolean IsUnsafe()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_ARRAYTYPE_ISUNSAFE_OFFSET))(nullptr);
		}

		::System::Type* get_AssociatedSystemType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_ARRAYTYPE_GET_ASSOCIATEDSYSTEMTYPE_OFFSET))(nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::CType* get_BaseOrParameterOrElementType()
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::CType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_ARRAYTYPE_GET_BASEORPARAMETERORELEMENTTYPE_OFFSET))(nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::FUNDTYPE* get_FundamentalType()
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::FUNDTYPE*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_ARRAYTYPE_GET_FUNDAMENTALTYPE_OFFSET))(nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::ConstValKind* get_ConstValKind()
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::ConstValKind*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_ARRAYTYPE_GET_CONSTVALKIND_OFFSET))(nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType* GetAts()
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_ARRAYTYPE_GETATS_OFFSET))(nullptr);
		}

	};
}

