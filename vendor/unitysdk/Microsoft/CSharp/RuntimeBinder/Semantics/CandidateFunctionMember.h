#pragma once
#include "../../../../unitysdk.h"

namespace Microsoft::CSharp::RuntimeBinder::Semantics { class MethPropWithInst; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class TypeArray; }

#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_CANDIDATEFUNCTIONMEMBER_.CTOR_OFFSET UNITYSDK_OFFSET(0x90B4550)

namespace Microsoft::CSharp::RuntimeBinder::Semantics
{
	inline static constexpr unsigned int CandidateFunctionMember_TypeDefinitionIndex = 34483;

	class CandidateFunctionMember : public Il2CppObject
	{
	public:
		::Microsoft::CSharp::RuntimeBinder::Semantics::MethPropWithInst* mpwi; // 0x10
		::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray* params; // 0x18
		::System::Byte ctypeLift; // 0x20
		::System::Boolean fExpanded; // 0x21

		::System::Void .ctor(::Microsoft::CSharp::RuntimeBinder::Semantics::MethPropWithInst* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray* arg, ::System::Byte arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::MethPropWithInst*, ::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray*, ::System::Byte, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_CANDIDATEFUNCTIONMEMBER_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};
}

