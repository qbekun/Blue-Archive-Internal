#pragma once
#include "../../../../unitysdk.h"

namespace Microsoft::CSharp::RuntimeBinder::Semantics { class Symbol; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class AggregateType; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class TypeArray; }

#define MICROSOFT_CSHARP_RUNTIMEBINDER_ERRORS_METHPROPWITHINSTMEMO_.CTOR_OFFSET UNITYSDK_OFFSET(0x90E15D0)

namespace Microsoft::CSharp::RuntimeBinder::Errors
{
	inline static constexpr unsigned int MethPropWithInstMemo_TypeDefinitionIndex = 34626;

	class MethPropWithInstMemo : public Il2CppObject
	{
	public:
		::Microsoft::CSharp::RuntimeBinder::Semantics::Symbol* sym; // 0x10
		::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType* ats; // 0x18
		::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray* typeArgs; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_ERRORS_METHPROPWITHINSTMEMO_.CTOR_OFFSET))(nullptr);
		}

	};
}

