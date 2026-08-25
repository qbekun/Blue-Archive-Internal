#pragma once
#include "../../../../../unitysdk.h"

#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_SIZEDARRAY_.CTOR_OFFSET UNITYSDK_OFFSET(0x921B0D0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_SIZEDARRAY_.CTOR_OFFSET UNITYSDK_OFFSET(0x921B230)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_SIZEDARRAY_.CTOR_OFFSET UNITYSDK_OFFSET(0x9220E40)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_SIZEDARRAY_CLONE_OFFSET UNITYSDK_OFFSET(0x9220F10)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_SIZEDARRAY_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x921F800)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_SIZEDARRAY_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x921F710)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_SIZEDARRAY_INCREASECAPACITY_OFFSET UNITYSDK_OFFSET(0x9220F70)

namespace System::Runtime::Serialization::Formatters::Binary
{
	inline static constexpr unsigned int SizedArray_TypeDefinitionIndex = 24669;

	class SizedArray : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* objects; // 0x10
		::Il2CppArray<::System::Object*>* negObjects; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_SIZEDARRAY_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_SIZEDARRAY_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Runtime::Serialization::Formatters::Binary::SizedArray* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::Formatters::Binary::SizedArray*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_SIZEDARRAY_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Object* Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_SIZEDARRAY_CLONE_OFFSET))(nullptr);
		}

		::System::Object* get_Item(::System::Int32 arg)
		{
			return (return (::System::Object*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_SIZEDARRAY_GET_ITEM_OFFSET))(arg, nullptr);
		}

		::System::Void set_Item(::System::Int32 arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_SIZEDARRAY_SET_ITEM_OFFSET))(arg, arg, nullptr);
		}

		::System::Void IncreaseCapacity(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_SIZEDARRAY_INCREASECAPACITY_OFFSET))(arg, nullptr);
		}

	};
}

