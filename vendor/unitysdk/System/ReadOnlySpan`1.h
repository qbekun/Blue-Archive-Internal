#pragma once
#include "../unitysdk.h"

#define SYSTEM_READONLYSPAN`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_READONLYSPAN`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_READONLYSPAN`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_READONLYSPAN`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_READONLYSPAN`1_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_READONLYSPAN`1_GETPINNABLEREFERENCE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_READONLYSPAN`1_COPYTO_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_READONLYSPAN`1_TRYCOPYTO_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_READONLYSPAN`1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_READONLYSPAN`1_SLICE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_READONLYSPAN`1_SLICE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_READONLYSPAN`1_TOARRAY_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_READONLYSPAN`1_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_READONLYSPAN`1_GET_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_READONLYSPAN`1_EQUALS_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_READONLYSPAN`1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_READONLYSPAN`1_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_READONLYSPAN`1_GET_EMPTY_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System
{
	inline static constexpr unsigned int ReadOnlySpan`1_TypeDefinitionIndex = 23823;

	class ReadOnlySpan`1 : public Il2CppObject
	{
	public:
		Il2CppObject* _pointer; // 0x0
		::System::Int32 _length; // 0x0

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_READONLYSPAN`1_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_READONLYSPAN`1_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Object** arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object**, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_READONLYSPAN`1_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(Il2CppObject&* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(Il2CppObject&*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_READONLYSPAN`1_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject&* get_Item(::System::Int32 arg)
		{
			return (return (Il2CppObject&*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_READONLYSPAN`1_GET_ITEM_OFFSET))(arg, nullptr);
		}

		Il2CppObject&* GetPinnableReference()
		{
			return (return (Il2CppObject&*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_READONLYSPAN`1_GETPINNABLEREFERENCE_OFFSET))(nullptr);
		}

		::System::Void CopyTo(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_READONLYSPAN`1_COPYTO_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryCopyTo(Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_READONLYSPAN`1_TRYCOPYTO_OFFSET))(arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_READONLYSPAN`1_TOSTRING_OFFSET))(nullptr);
		}

		Il2CppObject* Slice(::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_READONLYSPAN`1_SLICE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Slice(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_READONLYSPAN`1_SLICE_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* ToArray()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_READONLYSPAN`1_TOARRAY_OFFSET))(nullptr);
		}

		::System::Int32 get_Length()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_READONLYSPAN`1_GET_LENGTH_OFFSET))(nullptr);
		}

		::System::Boolean get_IsEmpty()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_READONLYSPAN`1_GET_ISEMPTY_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_READONLYSPAN`1_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_READONLYSPAN`1_GETHASHCODE_OFFSET))(nullptr);
		}

		Il2CppObject* op_Implicit(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (Il2CppObject*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_READONLYSPAN`1_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Empty()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_READONLYSPAN`1_GET_EMPTY_OFFSET))(nullptr);
		}

	};
}

