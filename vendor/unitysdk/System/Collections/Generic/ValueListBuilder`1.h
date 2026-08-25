#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_COLLECTIONS_GENERIC_VALUELISTBUILDER`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_GENERIC_VALUELISTBUILDER`1_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_GENERIC_VALUELISTBUILDER`1_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_GENERIC_VALUELISTBUILDER`1_APPEND_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_GENERIC_VALUELISTBUILDER`1_ASSPAN_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_GENERIC_VALUELISTBUILDER`1_DISPOSE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_GENERIC_VALUELISTBUILDER`1_GROW_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COLLECTIONS_GENERIC_VALUELISTBUILDER`1_POP_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Collections::Generic
{
	inline static constexpr unsigned int ValueListBuilder`1_TypeDefinitionIndex = 29585;

	class ValueListBuilder`1 : public Il2CppObject
	{
	public:
		Il2CppObject* _span; // 0x0
		::Il2CppArray<::System::Object*>* _arrayFromPool; // 0x0
		::System::Int32 _pos; // 0x0

		::System::Void .ctor(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_VALUELISTBUILDER`1_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Length()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_VALUELISTBUILDER`1_GET_LENGTH_OFFSET))(nullptr);
		}

		Il2CppObject&* get_Item(::System::Int32 arg)
		{
			return (return (Il2CppObject&*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_VALUELISTBUILDER`1_GET_ITEM_OFFSET))(arg, nullptr);
		}

		::System::Void Append(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_VALUELISTBUILDER`1_APPEND_OFFSET))(arg, nullptr);
		}

		Il2CppObject* AsSpan()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_VALUELISTBUILDER`1_ASSPAN_OFFSET))(nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_VALUELISTBUILDER`1_DISPOSE_OFFSET))(nullptr);
		}

		::System::Void Grow()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_VALUELISTBUILDER`1_GROW_OFFSET))(nullptr);
		}

		Il2CppObject* Pop()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_VALUELISTBUILDER`1_POP_OFFSET))(nullptr);
		}

	};
}

