#pragma once
#include "../../../../unitysdk.h"

namespace Microsoft::CSharp::RuntimeBinder::Semantics { class TypeArray; }

#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_ARGINFOS_.CTOR_OFFSET UNITYSDK_OFFSET(0x90BD420)

namespace Microsoft::CSharp::RuntimeBinder::Semantics
{
	inline static constexpr unsigned int ArgInfos_TypeDefinitionIndex = 34496;

	class ArgInfos : public Il2CppObject
	{
	public:
		::System::Int32 carg; // 0x10
		::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray* types; // 0x18
		Il2CppObject* prgexpr; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_ARGINFOS_.CTOR_OFFSET))(nullptr);
		}

	};
}

