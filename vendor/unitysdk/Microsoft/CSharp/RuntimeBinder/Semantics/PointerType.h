#pragma once
#include "../../../../unitysdk.h"

namespace Microsoft::CSharp::RuntimeBinder::Semantics { class CType; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class FUNDTYPE; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class ConstValKind; }

#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_POINTERTYPE_.CTOR_OFFSET UNITYSDK_OFFSET(0x90DA320)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_POINTERTYPE_GET_REFERENTTYPE_OFFSET UNITYSDK_OFFSET(0x90DA360)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_POINTERTYPE_ISUNSAFE_OFFSET UNITYSDK_OFFSET(0x90DA370)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_POINTERTYPE_GET_ASSOCIATEDSYSTEMTYPE_OFFSET UNITYSDK_OFFSET(0x90DA380)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_POINTERTYPE_GET_BASEORPARAMETERORELEMENTTYPE_OFFSET UNITYSDK_OFFSET(0x90DA3D0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_POINTERTYPE_GET_FUNDAMENTALTYPE_OFFSET UNITYSDK_OFFSET(0x90DA3E0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_POINTERTYPE_GET_CONSTVALKIND_OFFSET UNITYSDK_OFFSET(0x90DA3F0)

namespace Microsoft::CSharp::RuntimeBinder::Semantics
{
	inline static constexpr unsigned int PointerType_TypeDefinitionIndex = 34597;

	class PointerType : public Il2CppObject
	{
	public:
		::Microsoft::CSharp::RuntimeBinder::Semantics::CType* _ReferentType_k__BackingField; // 0x18

		::System::Void .ctor(::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_POINTERTYPE_.CTOR_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::CType* get_ReferentType()
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::CType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_POINTERTYPE_GET_REFERENTTYPE_OFFSET))(nullptr);
		}

		::System::Boolean IsUnsafe()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_POINTERTYPE_ISUNSAFE_OFFSET))(nullptr);
		}

		::System::Type* get_AssociatedSystemType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_POINTERTYPE_GET_ASSOCIATEDSYSTEMTYPE_OFFSET))(nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::CType* get_BaseOrParameterOrElementType()
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::CType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_POINTERTYPE_GET_BASEORPARAMETERORELEMENTTYPE_OFFSET))(nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::FUNDTYPE* get_FundamentalType()
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::FUNDTYPE*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_POINTERTYPE_GET_FUNDAMENTALTYPE_OFFSET))(nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::ConstValKind* get_ConstValKind()
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::ConstValKind*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_POINTERTYPE_GET_CONSTVALKIND_OFFSET))(nullptr);
		}

	};
}

