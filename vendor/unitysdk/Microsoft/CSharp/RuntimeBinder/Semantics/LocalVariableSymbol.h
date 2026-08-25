#pragma once
#include "../../../../unitysdk.h"

namespace Microsoft::CSharp::RuntimeBinder::Semantics { class ExprWrap; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class CType; }

#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_LOCALVARIABLESYMBOL_SETTYPE_OFFSET UNITYSDK_OFFSET(0x90CAA60)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_LOCALVARIABLESYMBOL_GETTYPE_OFFSET UNITYSDK_OFFSET(0x90CAA70)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_LOCALVARIABLESYMBOL_.CTOR_OFFSET UNITYSDK_OFFSET(0x90CAA80)

namespace Microsoft::CSharp::RuntimeBinder::Semantics
{
	inline static constexpr unsigned int LocalVariableSymbol_TypeDefinitionIndex = 34533;

	class LocalVariableSymbol : public Il2CppObject
	{
	public:
		::Microsoft::CSharp::RuntimeBinder::Semantics::ExprWrap* wrap; // 0x40

		::System::Void SetType(::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_LOCALVARIABLESYMBOL_SETTYPE_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::CType* GetType()
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::CType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_LOCALVARIABLESYMBOL_GETTYPE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_LOCALVARIABLESYMBOL_.CTOR_OFFSET))(nullptr);
		}

	};
}

