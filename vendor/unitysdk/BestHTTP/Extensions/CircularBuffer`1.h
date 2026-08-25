#pragma once
#include "../../unitysdk.h"

#define BESTHTTP_EXTENSIONS_CIRCULARBUFFER`1_SET_COUNT_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_EXTENSIONS_CIRCULARBUFFER`1_CLEAR_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_EXTENSIONS_CIRCULARBUFFER`1_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_EXTENSIONS_CIRCULARBUFFER`1_ADD_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_EXTENSIONS_CIRCULARBUFFER`1_GET_CAPACITY_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_EXTENSIONS_CIRCULARBUFFER`1_GET_STARTIDX_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_EXTENSIONS_CIRCULARBUFFER`1_GET_ENDIDX_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_EXTENSIONS_CIRCULARBUFFER`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_EXTENSIONS_CIRCULARBUFFER`1_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_EXTENSIONS_CIRCULARBUFFER`1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_EXTENSIONS_CIRCULARBUFFER`1_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_EXTENSIONS_CIRCULARBUFFER`1_SET_CAPACITY_OFFSET UNITYSDK_OFFSET(0x000000)

namespace BestHTTP::Extensions
{
	inline static constexpr unsigned int CircularBuffer`1_TypeDefinitionIndex = 23342;

	class CircularBuffer`1 : public Il2CppObject
	{
	public:
		::System::Int32 _Capacity_k__BackingField; // 0x0
		::System::Int32 _Count_k__BackingField; // 0x0
		::Il2CppArray<::System::Object*>* buffer; // 0x0
		::System::Int32 startIdx; // 0x0
		::System::Int32 endIdx; // 0x0

		::System::Void set_Count(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_EXTENSIONS_CIRCULARBUFFER`1_SET_COUNT_OFFSET))(arg, nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_EXTENSIONS_CIRCULARBUFFER`1_CLEAR_OFFSET))(nullptr);
		}

		::System::Void set_Item(::System::Int32 arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_EXTENSIONS_CIRCULARBUFFER`1_SET_ITEM_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Add(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_EXTENSIONS_CIRCULARBUFFER`1_ADD_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Capacity()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_EXTENSIONS_CIRCULARBUFFER`1_GET_CAPACITY_OFFSET))(nullptr);
		}

		::System::Int32 get_StartIdx()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_EXTENSIONS_CIRCULARBUFFER`1_GET_STARTIDX_OFFSET))(nullptr);
		}

		::System::Int32 get_EndIdx()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_EXTENSIONS_CIRCULARBUFFER`1_GET_ENDIDX_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_EXTENSIONS_CIRCULARBUFFER`1_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Count()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_EXTENSIONS_CIRCULARBUFFER`1_GET_COUNT_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_EXTENSIONS_CIRCULARBUFFER`1_TOSTRING_OFFSET))(nullptr);
		}

		Il2CppObject* get_Item(::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_EXTENSIONS_CIRCULARBUFFER`1_GET_ITEM_OFFSET))(arg, nullptr);
		}

		::System::Void set_Capacity(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_EXTENSIONS_CIRCULARBUFFER`1_SET_CAPACITY_OFFSET))(arg, nullptr);
		}

	};
}

