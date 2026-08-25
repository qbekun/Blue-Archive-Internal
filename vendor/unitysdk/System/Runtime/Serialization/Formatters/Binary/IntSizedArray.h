#pragma once
#include "../../../../../unitysdk.h"

#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_INTSIZEDARRAY_.CTOR_OFFSET UNITYSDK_OFFSET(0x9216690)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_INTSIZEDARRAY_.CTOR_OFFSET UNITYSDK_OFFSET(0x92211C0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_INTSIZEDARRAY_CLONE_OFFSET UNITYSDK_OFFSET(0x92212D0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_INTSIZEDARRAY_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x9216710)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_INTSIZEDARRAY_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x9216770)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_INTSIZEDARRAY_INCREASECAPACITY_OFFSET UNITYSDK_OFFSET(0x9221330)

namespace System::Runtime::Serialization::Formatters::Binary
{
	inline static constexpr unsigned int IntSizedArray_TypeDefinitionIndex = 24670;

	class IntSizedArray : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* objects; // 0x10
		::Il2CppArray<::System::Object*>* negObjects; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_INTSIZEDARRAY_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Runtime::Serialization::Formatters::Binary::IntSizedArray* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::Formatters::Binary::IntSizedArray*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_INTSIZEDARRAY_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Object* Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_INTSIZEDARRAY_CLONE_OFFSET))(nullptr);
		}

		::System::Int32 get_Item(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_INTSIZEDARRAY_GET_ITEM_OFFSET))(arg, nullptr);
		}

		::System::Void set_Item(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_INTSIZEDARRAY_SET_ITEM_OFFSET))(arg, arg, nullptr);
		}

		::System::Void IncreaseCapacity(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_INTSIZEDARRAY_INCREASECAPACITY_OFFSET))(arg, nullptr);
		}

	};
}

