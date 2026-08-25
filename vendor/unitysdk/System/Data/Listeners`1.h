#pragma once
#include "../../unitysdk.h"

#define SYSTEM_DATA_LISTENERS`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_DATA_LISTENERS`1_GET_HASLISTENERS_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_DATA_LISTENERS`1_ADD_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_DATA_LISTENERS`1_INDEXOFREFERENCE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_DATA_LISTENERS`1_REMOVE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_DATA_LISTENERS`1_NOTIFY_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_DATA_LISTENERS`1_REMOVENULLLISTENERS_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Data
{
	inline static constexpr unsigned int Listeners`1_TypeDefinitionIndex = 32299;

	class Listeners`1 : public Il2CppObject
	{
	public:
		Il2CppObject* _listeners; // 0x0
		Il2CppObject* _filter; // 0x0
		::System::Int32 _objectID; // 0x0
		::System::Int32 _listenerReaderCount; // 0x0

		::System::Void .ctor(::System::Int32 arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_LISTENERS`1_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean get_HasListeners()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_LISTENERS`1_GET_HASLISTENERS_OFFSET))(nullptr);
		}

		::System::Void Add(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_LISTENERS`1_ADD_OFFSET))(arg, nullptr);
		}

		::System::Int32 IndexOfReference(Il2CppObject* arg)
		{
			return (return (::System::Int32(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_LISTENERS`1_INDEXOFREFERENCE_OFFSET))(arg, nullptr);
		}

		::System::Void Remove(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_LISTENERS`1_REMOVE_OFFSET))(arg, nullptr);
		}

		::System::Void Notify(Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_LISTENERS`1_NOTIFY_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void RemoveNullListeners(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_LISTENERS`1_REMOVENULLLISTENERS_OFFSET))(arg, nullptr);
		}

	};
}

