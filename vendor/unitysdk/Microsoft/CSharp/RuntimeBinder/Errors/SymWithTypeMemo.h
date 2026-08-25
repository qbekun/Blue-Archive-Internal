#pragma once
#include "../../../../unitysdk.h"

namespace Microsoft::CSharp::RuntimeBinder::Semantics { class Symbol; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class AggregateType; }

#define MICROSOFT_CSHARP_RUNTIMEBINDER_ERRORS_SYMWITHTYPEMEMO_.CTOR_OFFSET UNITYSDK_OFFSET(0x90E15C0)

namespace Microsoft::CSharp::RuntimeBinder::Errors
{
	inline static constexpr unsigned int SymWithTypeMemo_TypeDefinitionIndex = 34625;

	class SymWithTypeMemo : public Il2CppObject
	{
	public:
		::Microsoft::CSharp::RuntimeBinder::Semantics::Symbol* sym; // 0x10
		::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType* ats; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_ERRORS_SYMWITHTYPEMEMO_.CTOR_OFFSET))(nullptr);
		}

	};
}

