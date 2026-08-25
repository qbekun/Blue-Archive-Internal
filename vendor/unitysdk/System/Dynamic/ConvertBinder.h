#pragma once
#include "../../unitysdk.h"

#define SYSTEM_DYNAMIC_CONVERTBINDER_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x96B5460)
#define SYSTEM_DYNAMIC_CONVERTBINDER_FALLBACKCONVERT_OFFSET UNITYSDK_OFFSET(0x96B5470)
#define SYSTEM_DYNAMIC_CONVERTBINDER_FALLBACKCONVERT_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_DYNAMIC_CONVERTBINDER_BIND_OFFSET UNITYSDK_OFFSET(0x96B5490)

namespace System::Dynamic
{
	inline static constexpr unsigned int ConvertBinder_TypeDefinitionIndex = 33543;

	class ConvertBinder : public Il2CppObject
	{
	public:
		::System::Type* _Type_k__BackingField; // 0x18

		::System::Type* get_Type()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_CONVERTBINDER_GET_TYPE_OFFSET))(nullptr);
		}

		::System::Dynamic::DynamicMetaObject* FallbackConvert(::System::Dynamic::DynamicMetaObject* arg)
		{
			return (return (::System::Dynamic::DynamicMetaObject*(*)(::System::Dynamic::DynamicMetaObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_CONVERTBINDER_FALLBACKCONVERT_OFFSET))(arg, nullptr);
		}

		::System::Dynamic::DynamicMetaObject* FallbackConvert(::System::Dynamic::DynamicMetaObject* arg, ::System::Dynamic::DynamicMetaObject* arg)
		{
			return (return (::System::Dynamic::DynamicMetaObject*(*)(::System::Dynamic::DynamicMetaObject*, ::System::Dynamic::DynamicMetaObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_CONVERTBINDER_FALLBACKCONVERT_OFFSET))(arg, arg, nullptr);
		}

		::System::Dynamic::DynamicMetaObject* Bind(::System::Dynamic::DynamicMetaObject* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Dynamic::DynamicMetaObject*(*)(::System::Dynamic::DynamicMetaObject*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_CONVERTBINDER_BIND_OFFSET))(arg, arg, nullptr);
		}

	};
}

