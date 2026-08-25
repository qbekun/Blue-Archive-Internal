#pragma once
#include "../unitysdk.h"

#define SYSTEM_MEMORY`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_MEMORY`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_MEMORY`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_MEMORY`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_MEMORY`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_MEMORY`1_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_MEMORY`1_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_MEMORY`1_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_MEMORY`1_GET_EMPTY_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_MEMORY`1_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_MEMORY`1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_MEMORY`1_SLICE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_MEMORY`1_SLICE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_MEMORY`1_GET_SPAN_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_MEMORY`1_PIN_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_MEMORY`1_TOARRAY_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_MEMORY`1_EQUALS_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_MEMORY`1_EQUALS_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_MEMORY`1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_MEMORY`1_COMBINEHASHCODES_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_MEMORY`1_COMBINEHASHCODES_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System
{
	inline static constexpr unsigned int Memory`1_TypeDefinitionIndex = 23796;

	class Memory`1 : public Il2CppObject
	{
	public:
		::System::Object* _object; // 0x0
		::System::Int32 _index; // 0x0
		::System::Int32 _length; // 0x0
		::System::Int32 RemoveFlagsBitMask; // 0x0

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MEMORY`1_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MEMORY`1_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MEMORY`1_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MEMORY`1_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MEMORY`1_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* op_Implicit(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (Il2CppObject*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MEMORY`1_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		Il2CppObject* op_Implicit(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MEMORY`1_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		Il2CppObject* op_Implicit(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MEMORY`1_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Empty()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MEMORY`1_GET_EMPTY_OFFSET))(nullptr);
		}

		::System::Int32 get_Length()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MEMORY`1_GET_LENGTH_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MEMORY`1_TOSTRING_OFFSET))(nullptr);
		}

		Il2CppObject* Slice(::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MEMORY`1_SLICE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Slice(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MEMORY`1_SLICE_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* get_Span()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MEMORY`1_GET_SPAN_OFFSET))(nullptr);
		}

		::System::Buffers::MemoryHandle* Pin()
		{
			return (return (::System::Buffers::MemoryHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MEMORY`1_PIN_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* ToArray()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MEMORY`1_TOARRAY_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MEMORY`1_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MEMORY`1_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MEMORY`1_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Int32 CombineHashCodes(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MEMORY`1_COMBINEHASHCODES_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 CombineHashCodes(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MEMORY`1_COMBINEHASHCODES_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

