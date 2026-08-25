#pragma once
#include "../../../../unitysdk.h"

namespace Microsoft::CSharp::RuntimeBinder::Semantics { class AggregateType; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class AggregateSymbol; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class TypeArray; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class ArrayType; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class CType; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class ParameterModifierType; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class PointerType; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class NullableType; }

#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_TYPETABLE_MAKEKEY_OFFSET UNITYSDK_OFFSET(0x000000)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_TYPETABLE_LOOKUPAGGREGATE_OFFSET UNITYSDK_OFFSET(0x90DD840)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_TYPETABLE_INSERTAGGREGATE_OFFSET UNITYSDK_OFFSET(0x90DD950)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_TYPETABLE_LOOKUPARRAY_OFFSET UNITYSDK_OFFSET(0x90DD6A0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_TYPETABLE_INSERTARRAY_OFFSET UNITYSDK_OFFSET(0x90DD770)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_TYPETABLE_LOOKUPPARAMETERMODIFIER_OFFSET UNITYSDK_OFFSET(0x90DDFF0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_TYPETABLE_INSERTPARAMETERMODIFIER_OFFSET UNITYSDK_OFFSET(0x90DE0C0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_TYPETABLE_LOOKUPPOINTER_OFFSET UNITYSDK_OFFSET(0x90DDC60)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_TYPETABLE_INSERTPOINTER_OFFSET UNITYSDK_OFFSET(0x90DDD20)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_TYPETABLE_LOOKUPNULLABLE_OFFSET UNITYSDK_OFFSET(0x90DDDC0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_TYPETABLE_INSERTNULLABLE_OFFSET UNITYSDK_OFFSET(0x90DDE80)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_TYPETABLE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x90E01F0)

namespace Microsoft::CSharp::RuntimeBinder::Semantics
{
	inline static constexpr unsigned int TypeTable_TypeDefinitionIndex = 34611;

	class TypeTable : public Il2CppObject
	{
	public:
		Il2CppObject* s_aggregateTable; // 0x0
		Il2CppObject* s_arrayTable; // 0x8
		Il2CppObject* s_parameterModifierTable; // 0x10
		Il2CppObject* s_pointerTable; // 0x18
		Il2CppObject* s_nullableTable; // 0x20

		Il2CppObject* MakeKey(Il2CppObject* arg, Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_TYPETABLE_MAKEKEY_OFFSET))(arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType* LookupAggregate(::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateSymbol* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateSymbol*, ::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_TYPETABLE_LOOKUPAGGREGATE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void InsertAggregate(::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateSymbol* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateSymbol*, ::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray*, ::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_TYPETABLE_INSERTAGGREGATE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::ArrayType* LookupArray(::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg, ::System::Int32 arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::ArrayType*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_TYPETABLE_LOOKUPARRAY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void InsertArray(::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg, ::System::Int32 arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::ArrayType* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::System::Int32, ::Microsoft::CSharp::RuntimeBinder::Semantics::ArrayType*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_TYPETABLE_INSERTARRAY_OFFSET))(arg, arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::ParameterModifierType* LookupParameterModifier(::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg, ::System::Boolean arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::ParameterModifierType*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_TYPETABLE_LOOKUPPARAMETERMODIFIER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void InsertParameterModifier(::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg, ::System::Boolean arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::ParameterModifierType* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::System::Boolean, ::Microsoft::CSharp::RuntimeBinder::Semantics::ParameterModifierType*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_TYPETABLE_INSERTPARAMETERMODIFIER_OFFSET))(arg, arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::PointerType* LookupPointer(::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::PointerType*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_TYPETABLE_LOOKUPPOINTER_OFFSET))(arg, nullptr);
		}

		::System::Void InsertPointer(::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::PointerType* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::PointerType*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_TYPETABLE_INSERTPOINTER_OFFSET))(arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::NullableType* LookupNullable(::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::NullableType*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_TYPETABLE_LOOKUPNULLABLE_OFFSET))(arg, nullptr);
		}

		::System::Void InsertNullable(::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::NullableType* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::NullableType*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_TYPETABLE_INSERTNULLABLE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_TYPETABLE_.CCTOR_OFFSET))(nullptr);
		}

	};
}

