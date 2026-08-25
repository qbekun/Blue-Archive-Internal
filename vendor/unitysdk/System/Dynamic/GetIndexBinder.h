#pragma once
#include "../../unitysdk.h"

#define SYSTEM_DYNAMIC_GETINDEXBINDER_BIND_OFFSET UNITYSDK_OFFSET(0x96BDF60)
#define SYSTEM_DYNAMIC_GETINDEXBINDER_FALLBACKGETINDEX_OFFSET UNITYSDK_OFFSET(0x96BE030)
#define SYSTEM_DYNAMIC_GETINDEXBINDER_FALLBACKGETINDEX_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Dynamic
{
	inline static constexpr unsigned int GetIndexBinder_TypeDefinitionIndex = 33562;

	class GetIndexBinder : public Il2CppObject
	{
	public:
		::System::Dynamic::DynamicMetaObject* Bind(::System::Dynamic::DynamicMetaObject* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Dynamic::DynamicMetaObject*(*)(::System::Dynamic::DynamicMetaObject*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_GETINDEXBINDER_BIND_OFFSET))(arg, arg, nullptr);
		}

		::System::Dynamic::DynamicMetaObject* FallbackGetIndex(::System::Dynamic::DynamicMetaObject* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Dynamic::DynamicMetaObject*(*)(::System::Dynamic::DynamicMetaObject*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_GETINDEXBINDER_FALLBACKGETINDEX_OFFSET))(arg, arg, nullptr);
		}

		::System::Dynamic::DynamicMetaObject* FallbackGetIndex(::System::Dynamic::DynamicMetaObject* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Dynamic::DynamicMetaObject* arg)
		{
			return (return (::System::Dynamic::DynamicMetaObject*(*)(::System::Dynamic::DynamicMetaObject*, ::Il2CppArray<::System::Object*>*, ::System::Dynamic::DynamicMetaObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_GETINDEXBINDER_FALLBACKGETINDEX_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

