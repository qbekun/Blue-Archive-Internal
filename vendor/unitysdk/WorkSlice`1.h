#pragma once
#include "unitysdk.h"

#define WORKSLICE`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define WORKSLICE`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define WORKSLICE`1_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x000000)
#define WORKSLICE`1_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x000000)
#define WORKSLICE`1_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x000000)
#define WORKSLICE`1_GET_CAPACITY_OFFSET UNITYSDK_OFFSET(0x000000)
#define WORKSLICE`1_SORT_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int WorkSlice`1_TypeDefinitionIndex = 32653;

	class WorkSlice`1 : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* m_Data; // 0x0
		::System::Int32 m_Start; // 0x0
		::System::Int32 m_Length; // 0x0

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + WORKSLICE`1_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + WORKSLICE`1_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* get_Item(::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + WORKSLICE`1_GET_ITEM_OFFSET))(arg, nullptr);
		}

		::System::Void set_Item(::System::Int32 arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + WORKSLICE`1_SET_ITEM_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 get_length()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + WORKSLICE`1_GET_LENGTH_OFFSET))(nullptr);
		}

		::System::Int32 get_capacity()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + WORKSLICE`1_GET_CAPACITY_OFFSET))(nullptr);
		}

		::System::Void Sort(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + WORKSLICE`1_SORT_OFFSET))(arg, nullptr);
		}

	};

