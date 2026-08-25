#pragma once
#include "../../../../unitysdk.h"

namespace Microsoft::CSharp::RuntimeBinder::Semantics { class MethodGroupType; }

#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHODGROUPTYPE_.CTOR_OFFSET UNITYSDK_OFFSET(0x90D9AE0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHODGROUPTYPE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x90D9B00)

namespace Microsoft::CSharp::RuntimeBinder::Semantics
{
	inline static constexpr unsigned int MethodGroupType_TypeDefinitionIndex = 34593;

	class MethodGroupType : public Il2CppObject
	{
	public:
		::Microsoft::CSharp::RuntimeBinder::Semantics::MethodGroupType* Instance; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHODGROUPTYPE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHODGROUPTYPE_.CCTOR_OFFSET))(nullptr);
		}

	};
}

