#pragma once
#include "../../../../unitysdk.h"

namespace Microsoft::CSharp::RuntimeBinder::Semantics { class PREDEFMETH; }
namespace Microsoft::CSharp::RuntimeBinder::Syntax { class PredefinedType; }
namespace Microsoft::CSharp::RuntimeBinder::Syntax { class PredefinedName; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class MethodCallingConventionEnum; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class ACCESS; }

#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_PREDEFINEDMETHODINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x90C4050)

namespace Microsoft::CSharp::RuntimeBinder::Semantics
{
	inline static constexpr unsigned int PredefinedMethodInfo_TypeDefinitionIndex = 34523;

	class PredefinedMethodInfo : public Il2CppObject
	{
	public:
		::Microsoft::CSharp::RuntimeBinder::Semantics::PREDEFMETH* method; // 0x10
		::Microsoft::CSharp::RuntimeBinder::Syntax::PredefinedType* type; // 0x14
		::Microsoft::CSharp::RuntimeBinder::Syntax::PredefinedName* name; // 0x18
		::Microsoft::CSharp::RuntimeBinder::Semantics::MethodCallingConventionEnum* callingConvention; // 0x1C
		::Microsoft::CSharp::RuntimeBinder::Semantics::ACCESS* access; // 0x20
		::System::Int32 cTypeVars; // 0x24
		::Il2CppArray<::System::Object*>* signature; // 0x28

		::System::Void .ctor(::Microsoft::CSharp::RuntimeBinder::Semantics::PREDEFMETH* arg, ::Microsoft::CSharp::RuntimeBinder::Syntax::PredefinedType* arg, ::Microsoft::CSharp::RuntimeBinder::Syntax::PredefinedName* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::MethodCallingConventionEnum* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::ACCESS* arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::PREDEFMETH*, ::Microsoft::CSharp::RuntimeBinder::Syntax::PredefinedType*, ::Microsoft::CSharp::RuntimeBinder::Syntax::PredefinedName*, ::Microsoft::CSharp::RuntimeBinder::Semantics::MethodCallingConventionEnum*, ::Microsoft::CSharp::RuntimeBinder::Semantics::ACCESS*, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_PREDEFINEDMETHODINFO_.CTOR_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

	};
}

