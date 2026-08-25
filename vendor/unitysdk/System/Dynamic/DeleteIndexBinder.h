#pragma once
#include "../../unitysdk.h"

#define SYSTEM_DYNAMIC_DELETEINDEXBINDER_BIND_OFFSET UNITYSDK_OFFSET(0x96B5600)
#define SYSTEM_DYNAMIC_DELETEINDEXBINDER_FALLBACKDELETEINDEX_OFFSET UNITYSDK_OFFSET(0x96B56A0)
#define SYSTEM_DYNAMIC_DELETEINDEXBINDER_FALLBACKDELETEINDEX_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Dynamic
{
	inline static constexpr unsigned int DeleteIndexBinder_TypeDefinitionIndex = 33545;

	class DeleteIndexBinder : public Il2CppObject
	{
	public:
		::System::Dynamic::DynamicMetaObject* Bind(::System::Dynamic::DynamicMetaObject* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Dynamic::DynamicMetaObject*(*)(::System::Dynamic::DynamicMetaObject*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_DELETEINDEXBINDER_BIND_OFFSET))(arg, arg, nullptr);
		}

		::System::Dynamic::DynamicMetaObject* FallbackDeleteIndex(::System::Dynamic::DynamicMetaObject* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Dynamic::DynamicMetaObject*(*)(::System::Dynamic::DynamicMetaObject*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_DELETEINDEXBINDER_FALLBACKDELETEINDEX_OFFSET))(arg, arg, nullptr);
		}

		::System::Dynamic::DynamicMetaObject* FallbackDeleteIndex(::System::Dynamic::DynamicMetaObject* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Dynamic::DynamicMetaObject* arg)
		{
			return (return (::System::Dynamic::DynamicMetaObject*(*)(::System::Dynamic::DynamicMetaObject*, ::Il2CppArray<::System::Object*>*, ::System::Dynamic::DynamicMetaObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_DELETEINDEXBINDER_FALLBACKDELETEINDEX_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

