#pragma once
#include "../../../../unitysdk.h"

namespace Microsoft::CSharp::RuntimeBinder::Semantics { class CType; }

#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRZEROINIT_.CTOR_OFFSET UNITYSDK_OFFSET(0x90D7100)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRZEROINIT_GET_OBJECT_OFFSET UNITYSDK_OFFSET(0x90D7140)

namespace Microsoft::CSharp::RuntimeBinder::Semantics
{
	inline static constexpr unsigned int ExprZeroInit_TypeDefinitionIndex = 34586;

	class ExprZeroInit : public Il2CppObject
	{
	public:
		::System::Void .ctor(::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRZEROINIT_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Object* get_Object()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRZEROINIT_GET_OBJECT_OFFSET))(nullptr);
		}

	};
}

