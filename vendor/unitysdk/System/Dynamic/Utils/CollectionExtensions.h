#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_DYNAMIC_UTILS_COLLECTIONEXTENSIONS_ADDFIRST_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_DYNAMIC_UTILS_COLLECTIONEXTENSIONS_ADDFIRST_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_DYNAMIC_UTILS_COLLECTIONEXTENSIONS_ADDLAST_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_DYNAMIC_UTILS_COLLECTIONEXTENSIONS_REMOVEFIRST_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_DYNAMIC_UTILS_COLLECTIONEXTENSIONS_REMOVELAST_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_DYNAMIC_UTILS_COLLECTIONEXTENSIONS_TOREADONLY_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_DYNAMIC_UTILS_COLLECTIONEXTENSIONS_LISTHASHCODE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_DYNAMIC_UTILS_COLLECTIONEXTENSIONS_LISTEQUALS_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Dynamic::Utils
{
	inline static constexpr unsigned int CollectionExtensions_TypeDefinitionIndex = 33572;

	class CollectionExtensions : public Il2CppObject
	{
	public:
		Il2CppObject* AddFirst(Il2CppObject* arg, Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_COLLECTIONEXTENSIONS_ADDFIRST_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* AddFirst(::Il2CppArray<::System::Object*>* arg, Il2CppObject* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_COLLECTIONEXTENSIONS_ADDFIRST_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* AddLast(::Il2CppArray<::System::Object*>* arg, Il2CppObject* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_COLLECTIONEXTENSIONS_ADDLAST_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* RemoveFirst(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_COLLECTIONEXTENSIONS_REMOVEFIRST_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* RemoveLast(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_COLLECTIONEXTENSIONS_REMOVELAST_OFFSET))(arg, nullptr);
		}

		Il2CppObject* ToReadOnly(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_COLLECTIONEXTENSIONS_TOREADONLY_OFFSET))(arg, nullptr);
		}

		::System::Int32 ListHashCode(Il2CppObject* arg)
		{
			return (return (::System::Int32(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_COLLECTIONEXTENSIONS_LISTHASHCODE_OFFSET))(arg, nullptr);
		}

		::System::Boolean ListEquals(Il2CppObject* arg, Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_COLLECTIONEXTENSIONS_LISTEQUALS_OFFSET))(arg, arg, nullptr);
		}

	};
}

