#pragma once
#include "../../../../unitysdk.h"

namespace Microsoft::CSharp::RuntimeBinder::Semantics { class CType; }

#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRTYPEOF_.CTOR_OFFSET UNITYSDK_OFFSET(0x90D1480)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRTYPEOF_GET_SOURCETYPE_OFFSET UNITYSDK_OFFSET(0x90D14D0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRTYPEOF_GET_OBJECT_OFFSET UNITYSDK_OFFSET(0x90D14E0)

namespace Microsoft::CSharp::RuntimeBinder::Semantics
{
	inline static constexpr unsigned int ExprTypeOf_TypeDefinitionIndex = 34580;

	class ExprTypeOf : public Il2CppObject
	{
	public:
		::Microsoft::CSharp::RuntimeBinder::Semantics::CType* _SourceType_k__BackingField; // 0x40

		::System::Void .ctor(::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRTYPEOF_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::CType* get_SourceType()
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::CType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRTYPEOF_GET_SOURCETYPE_OFFSET))(nullptr);
		}

		::System::Object* get_Object()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRTYPEOF_GET_OBJECT_OFFSET))(nullptr);
		}

	};
}

