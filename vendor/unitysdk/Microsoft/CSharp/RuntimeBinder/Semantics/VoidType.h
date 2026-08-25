#pragma once
#include "../../../../unitysdk.h"

namespace Microsoft::CSharp::RuntimeBinder::Semantics { class VoidType; }
namespace Microsoft::CSharp::RuntimeBinder::Syntax { class PredefinedType; }

#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_VOIDTYPE_.CTOR_OFFSET UNITYSDK_OFFSET(0x90E0420)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_VOIDTYPE_ISPREDEFTYPE_OFFSET UNITYSDK_OFFSET(0x90E0440)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_VOIDTYPE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x90E0450)

namespace Microsoft::CSharp::RuntimeBinder::Semantics
{
	inline static constexpr unsigned int VoidType_TypeDefinitionIndex = 34612;

	class VoidType : public Il2CppObject
	{
	public:
		::Microsoft::CSharp::RuntimeBinder::Semantics::VoidType* Instance; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_VOIDTYPE_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean IsPredefType(::Microsoft::CSharp::RuntimeBinder::Syntax::PredefinedType* arg)
		{
			return (return (::System::Boolean(*)(::Microsoft::CSharp::RuntimeBinder::Syntax::PredefinedType*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_VOIDTYPE_ISPREDEFTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_VOIDTYPE_.CCTOR_OFFSET))(nullptr);
		}

	};
}

