#pragma once
#include "../../../../unitysdk.h"

namespace Microsoft::CSharp::RuntimeBinder::Semantics { class LocalVariableSymbol; }

#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRLOCAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x90CF6D0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRLOCAL_GET_LOCAL_OFFSET UNITYSDK_OFFSET(0x90CF740)

namespace Microsoft::CSharp::RuntimeBinder::Semantics
{
	inline static constexpr unsigned int ExprLocal_TypeDefinitionIndex = 34573;

	class ExprLocal : public Il2CppObject
	{
	public:
		::Microsoft::CSharp::RuntimeBinder::Semantics::LocalVariableSymbol* _Local_k__BackingField; // 0x40

		::System::Void .ctor(::Microsoft::CSharp::RuntimeBinder::Semantics::LocalVariableSymbol* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::LocalVariableSymbol*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRLOCAL_.CTOR_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::LocalVariableSymbol* get_Local()
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::LocalVariableSymbol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRLOCAL_GET_LOCAL_OFFSET))(nullptr);
		}

	};
}

