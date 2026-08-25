#pragma once
#include "../../unitysdk.h"

#define SYSTEM_DYNAMIC_CREATEINSTANCEBINDER_FALLBACKCREATEINSTANCE_OFFSET UNITYSDK_OFFSET(0x96B5530)
#define SYSTEM_DYNAMIC_CREATEINSTANCEBINDER_FALLBACKCREATEINSTANCE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_DYNAMIC_CREATEINSTANCEBINDER_BIND_OFFSET UNITYSDK_OFFSET(0x96B5560)

namespace System::Dynamic
{
	inline static constexpr unsigned int CreateInstanceBinder_TypeDefinitionIndex = 33544;

	class CreateInstanceBinder : public Il2CppObject
	{
	public:
		::System::Dynamic::DynamicMetaObject* FallbackCreateInstance(::System::Dynamic::DynamicMetaObject* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Dynamic::DynamicMetaObject*(*)(::System::Dynamic::DynamicMetaObject*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_CREATEINSTANCEBINDER_FALLBACKCREATEINSTANCE_OFFSET))(arg, arg, nullptr);
		}

		::System::Dynamic::DynamicMetaObject* FallbackCreateInstance(::System::Dynamic::DynamicMetaObject* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Dynamic::DynamicMetaObject* arg)
		{
			return (return (::System::Dynamic::DynamicMetaObject*(*)(::System::Dynamic::DynamicMetaObject*, ::Il2CppArray<::System::Object*>*, ::System::Dynamic::DynamicMetaObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_CREATEINSTANCEBINDER_FALLBACKCREATEINSTANCE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Dynamic::DynamicMetaObject* Bind(::System::Dynamic::DynamicMetaObject* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Dynamic::DynamicMetaObject*(*)(::System::Dynamic::DynamicMetaObject*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_CREATEINSTANCEBINDER_BIND_OFFSET))(arg, arg, nullptr);
		}

	};
}

