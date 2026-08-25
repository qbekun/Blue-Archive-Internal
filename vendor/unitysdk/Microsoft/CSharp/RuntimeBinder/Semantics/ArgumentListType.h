#pragma once
#include "../../../../unitysdk.h"

namespace Microsoft::CSharp::RuntimeBinder::Semantics { class ArgumentListType; }

#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_ARGUMENTLISTTYPE_.CTOR_OFFSET UNITYSDK_OFFSET(0x90D97F0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_ARGUMENTLISTTYPE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x90D9810)

namespace Microsoft::CSharp::RuntimeBinder::Semantics
{
	inline static constexpr unsigned int ArgumentListType_TypeDefinitionIndex = 34591;

	class ArgumentListType : public Il2CppObject
	{
	public:
		::Microsoft::CSharp::RuntimeBinder::Semantics::ArgumentListType* Instance; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_ARGUMENTLISTTYPE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_ARGUMENTLISTTYPE_.CCTOR_OFFSET))(nullptr);
		}

	};
}

