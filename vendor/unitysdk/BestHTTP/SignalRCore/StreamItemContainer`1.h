#pragma once
#include "../../unitysdk.h"

#define BESTHTTP_SIGNALRCORE_STREAMITEMCONTAINER`1_GET_LASTADDED_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SIGNALRCORE_STREAMITEMCONTAINER`1_GET_ITEMS_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SIGNALRCORE_STREAMITEMCONTAINER`1_ADDITEM_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SIGNALRCORE_STREAMITEMCONTAINER`1_SET_ITEMS_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SIGNALRCORE_STREAMITEMCONTAINER`1_SET_LASTADDED_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SIGNALRCORE_STREAMITEMCONTAINER`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)

namespace BestHTTP::SignalRCore
{
	inline static constexpr unsigned int StreamItemContainer`1_TypeDefinitionIndex = 21426;

	class StreamItemContainer`1 : public Il2CppObject
	{
	public:
		::System::Int64 id; // 0x0
		Il2CppObject* _Items_k__BackingField; // 0x0
		Il2CppObject* _LastAdded_k__BackingField; // 0x0
		::System::Boolean IsCanceled; // 0x0

		Il2CppObject* get_LastAdded()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_STREAMITEMCONTAINER`1_GET_LASTADDED_OFFSET))(nullptr);
		}

		Il2CppObject* get_Items()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_STREAMITEMCONTAINER`1_GET_ITEMS_OFFSET))(nullptr);
		}

		::System::Void AddItem(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_STREAMITEMCONTAINER`1_ADDITEM_OFFSET))(arg, nullptr);
		}

		::System::Void set_Items(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_STREAMITEMCONTAINER`1_SET_ITEMS_OFFSET))(arg, nullptr);
		}

		::System::Void set_LastAdded(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_STREAMITEMCONTAINER`1_SET_LASTADDED_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SIGNALRCORE_STREAMITEMCONTAINER`1_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

