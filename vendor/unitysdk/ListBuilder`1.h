#pragma once
#include "unitysdk.h"

#define LISTBUILDER`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define LISTBUILDER`1_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x000000)
#define LISTBUILDER`1_TOARRAY_OFFSET UNITYSDK_OFFSET(0x000000)
#define LISTBUILDER`1_COPYTO_OFFSET UNITYSDK_OFFSET(0x000000)
#define LISTBUILDER`1_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x000000)
#define LISTBUILDER`1_ADD_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int ListBuilder`1_TypeDefinitionIndex = 23938;

	class ListBuilder`1 : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* _items; // 0x0
		Il2CppObject* _item; // 0x0
		::System::Int32 _count; // 0x0
		::System::Int32 _capacity; // 0x0

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + LISTBUILDER`1_.CTOR_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Item(::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + LISTBUILDER`1_GET_ITEM_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* ToArray()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LISTBUILDER`1_TOARRAY_OFFSET))(nullptr);
		}

		::System::Void CopyTo(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + LISTBUILDER`1_COPYTO_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 get_Count()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LISTBUILDER`1_GET_COUNT_OFFSET))(nullptr);
		}

		::System::Void Add(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + LISTBUILDER`1_ADD_OFFSET))(arg, nullptr);
		}

	};

