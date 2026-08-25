#pragma once
#include "../../../../unitysdk.h"

namespace Microsoft::CSharp::RuntimeBinder::Semantics { class ExpressionKind; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class CType; }

#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRWITHTYPE_.CTOR_OFFSET UNITYSDK_OFFSET(0x90CDEF0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRWITHTYPE_TYPESAREEQUAL_OFFSET UNITYSDK_OFFSET(0x90CF110)

namespace Microsoft::CSharp::RuntimeBinder::Semantics
{
	inline static constexpr unsigned int ExprWithType_TypeDefinitionIndex = 34568;

	class ExprWithType : public Il2CppObject
	{
	public:
		::System::Void .ctor(::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionKind* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionKind*, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRWITHTYPE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TypesAreEqual(::System::Type* arg, ::System::Type* arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRWITHTYPE_TYPESAREEQUAL_OFFSET))(arg, arg, nullptr);
		}

	};
}

