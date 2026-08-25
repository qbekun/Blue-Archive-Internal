#pragma once
#include "../../../../unitysdk.h"

namespace Microsoft::CSharp::RuntimeBinder::Semantics { class FieldSymbol; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class AggregateType; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class CType; }

#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRFIELDINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x90CF5C0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRFIELDINFO_GET_FIELD_OFFSET UNITYSDK_OFFSET(0x90CF620)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRFIELDINFO_GET_FIELDTYPE_OFFSET UNITYSDK_OFFSET(0x90CF630)

namespace Microsoft::CSharp::RuntimeBinder::Semantics
{
	inline static constexpr unsigned int ExprFieldInfo_TypeDefinitionIndex = 34571;

	class ExprFieldInfo : public Il2CppObject
	{
	public:
		::Microsoft::CSharp::RuntimeBinder::Semantics::FieldSymbol* _Field_k__BackingField; // 0x40
		::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType* _FieldType_k__BackingField; // 0x48

		::System::Void .ctor(::Microsoft::CSharp::RuntimeBinder::Semantics::FieldSymbol* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::FieldSymbol*, ::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRFIELDINFO_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::FieldSymbol* get_Field()
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::FieldSymbol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRFIELDINFO_GET_FIELD_OFFSET))(nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType* get_FieldType()
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPRFIELDINFO_GET_FIELDTYPE_OFFSET))(nullptr);
		}

	};
}

