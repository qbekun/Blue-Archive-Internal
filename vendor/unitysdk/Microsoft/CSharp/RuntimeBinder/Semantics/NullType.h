#pragma once
#include "../../../../unitysdk.h"

namespace Microsoft::CSharp::RuntimeBinder::Semantics { class NullType; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class FUNDTYPE; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class ConstValKind; }

#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_NULLTYPE_.CTOR_OFFSET UNITYSDK_OFFSET(0x90D9B80)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_NULLTYPE_GET_ISREFERENCETYPE_OFFSET UNITYSDK_OFFSET(0x90D9BA0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_NULLTYPE_GET_FUNDAMENTALTYPE_OFFSET UNITYSDK_OFFSET(0x90D9BB0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_NULLTYPE_GET_CONSTVALKIND_OFFSET UNITYSDK_OFFSET(0x90D9BC0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_NULLTYPE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x90D9BD0)

namespace Microsoft::CSharp::RuntimeBinder::Semantics
{
	inline static constexpr unsigned int NullType_TypeDefinitionIndex = 34594;

	class NullType : public Il2CppObject
	{
	public:
		::Microsoft::CSharp::RuntimeBinder::Semantics::NullType* Instance; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_NULLTYPE_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean get_IsReferenceType()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_NULLTYPE_GET_ISREFERENCETYPE_OFFSET))(nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::FUNDTYPE* get_FundamentalType()
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::FUNDTYPE*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_NULLTYPE_GET_FUNDAMENTALTYPE_OFFSET))(nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::ConstValKind* get_ConstValKind()
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::ConstValKind*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_NULLTYPE_GET_CONSTVALKIND_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_NULLTYPE_.CCTOR_OFFSET))(nullptr);
		}

	};
}

