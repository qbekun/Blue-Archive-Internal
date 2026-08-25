#pragma once
#include "../../unitysdk.h"

#define SYSTEM_DYNAMIC_SETINDEXBINDER_GET_RETURNTYPE_OFFSET UNITYSDK_OFFSET(0x96BE620)
#define SYSTEM_DYNAMIC_SETINDEXBINDER_BIND_OFFSET UNITYSDK_OFFSET(0x96BE680)
#define SYSTEM_DYNAMIC_SETINDEXBINDER_FALLBACKSETINDEX_OFFSET UNITYSDK_OFFSET(0x96BE830)
#define SYSTEM_DYNAMIC_SETINDEXBINDER_FALLBACKSETINDEX_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Dynamic
{
	inline static constexpr unsigned int SetIndexBinder_TypeDefinitionIndex = 33567;

	class SetIndexBinder : public Il2CppObject
	{
	public:
		::System::Type* get_ReturnType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_SETINDEXBINDER_GET_RETURNTYPE_OFFSET))(nullptr);
		}

		::System::Dynamic::DynamicMetaObject* Bind(::System::Dynamic::DynamicMetaObject* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Dynamic::DynamicMetaObject*(*)(::System::Dynamic::DynamicMetaObject*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_SETINDEXBINDER_BIND_OFFSET))(arg, arg, nullptr);
		}

		::System::Dynamic::DynamicMetaObject* FallbackSetIndex(::System::Dynamic::DynamicMetaObject* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Dynamic::DynamicMetaObject* arg)
		{
			return (return (::System::Dynamic::DynamicMetaObject*(*)(::System::Dynamic::DynamicMetaObject*, ::Il2CppArray<::System::Object*>*, ::System::Dynamic::DynamicMetaObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_SETINDEXBINDER_FALLBACKSETINDEX_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Dynamic::DynamicMetaObject* FallbackSetIndex(::System::Dynamic::DynamicMetaObject* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Dynamic::DynamicMetaObject* arg, ::System::Dynamic::DynamicMetaObject* arg)
		{
			return (return (::System::Dynamic::DynamicMetaObject*(*)(::System::Dynamic::DynamicMetaObject*, ::Il2CppArray<::System::Object*>*, ::System::Dynamic::DynamicMetaObject*, ::System::Dynamic::DynamicMetaObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_SETINDEXBINDER_FALLBACKSETINDEX_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};
}

