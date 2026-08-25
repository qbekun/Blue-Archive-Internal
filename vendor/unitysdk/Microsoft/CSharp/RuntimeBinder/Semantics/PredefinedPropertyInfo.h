#pragma once
#include "../../../../unitysdk.h"

namespace Microsoft::CSharp::RuntimeBinder::Semantics { class PREDEFPROP; }
namespace Microsoft::CSharp::RuntimeBinder::Syntax { class PredefinedName; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class PREDEFMETH; }

#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_PREDEFINEDPROPERTYINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x90C40D0)

namespace Microsoft::CSharp::RuntimeBinder::Semantics
{
	inline static constexpr unsigned int PredefinedPropertyInfo_TypeDefinitionIndex = 34524;

	class PredefinedPropertyInfo : public Il2CppObject
	{
	public:
		::Microsoft::CSharp::RuntimeBinder::Semantics::PREDEFPROP* property; // 0x10
		::Microsoft::CSharp::RuntimeBinder::Syntax::PredefinedName* name; // 0x14
		::Microsoft::CSharp::RuntimeBinder::Semantics::PREDEFMETH* getter; // 0x18

		::System::Void .ctor(::Microsoft::CSharp::RuntimeBinder::Semantics::PREDEFPROP* arg, ::Microsoft::CSharp::RuntimeBinder::Syntax::PredefinedName* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::PREDEFMETH* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::PREDEFPROP*, ::Microsoft::CSharp::RuntimeBinder::Syntax::PredefinedName*, ::Microsoft::CSharp::RuntimeBinder::Semantics::PREDEFMETH*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_PREDEFINEDPROPERTYINFO_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

