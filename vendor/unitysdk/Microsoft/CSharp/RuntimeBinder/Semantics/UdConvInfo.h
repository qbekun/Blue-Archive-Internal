#pragma once
#include "../../../../unitysdk.h"

namespace Microsoft::CSharp::RuntimeBinder::Semantics { class MethWithType; }

#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_UDCONVINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x90BD3F0)

namespace Microsoft::CSharp::RuntimeBinder::Semantics
{
	inline static constexpr unsigned int UdConvInfo_TypeDefinitionIndex = 34495;

	class UdConvInfo : public Il2CppObject
	{
	public:
		::Microsoft::CSharp::RuntimeBinder::Semantics::MethWithType* Meth; // 0x10
		::System::Boolean SrcImplicit; // 0x18
		::System::Boolean DstImplicit; // 0x19

		::System::Void .ctor(::Microsoft::CSharp::RuntimeBinder::Semantics::MethWithType* arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::MethWithType*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_UDCONVINFO_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

