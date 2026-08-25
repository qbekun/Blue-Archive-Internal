#pragma once
#include "../../unitysdk.h"

#define SYSTEM_DYNAMIC_DELETEMEMBERBINDER_GET_NAME_OFFSET UNITYSDK_OFFSET(0x96B56D0)
#define SYSTEM_DYNAMIC_DELETEMEMBERBINDER_GET_IGNORECASE_OFFSET UNITYSDK_OFFSET(0x96B56E0)
#define SYSTEM_DYNAMIC_DELETEMEMBERBINDER_FALLBACKDELETEMEMBER_OFFSET UNITYSDK_OFFSET(0x96B56F0)
#define SYSTEM_DYNAMIC_DELETEMEMBERBINDER_FALLBACKDELETEMEMBER_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_DYNAMIC_DELETEMEMBERBINDER_BIND_OFFSET UNITYSDK_OFFSET(0x96B5710)

namespace System::Dynamic
{
	inline static constexpr unsigned int DeleteMemberBinder_TypeDefinitionIndex = 33546;

	class DeleteMemberBinder : public Il2CppObject
	{
	public:
		::System::String* _Name_k__BackingField; // 0x18
		::System::Boolean _IgnoreCase_k__BackingField; // 0x20

		::System::String* get_Name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_DELETEMEMBERBINDER_GET_NAME_OFFSET))(nullptr);
		}

		::System::Boolean get_IgnoreCase()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_DELETEMEMBERBINDER_GET_IGNORECASE_OFFSET))(nullptr);
		}

		::System::Dynamic::DynamicMetaObject* FallbackDeleteMember(::System::Dynamic::DynamicMetaObject* arg)
		{
			return (return (::System::Dynamic::DynamicMetaObject*(*)(::System::Dynamic::DynamicMetaObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_DELETEMEMBERBINDER_FALLBACKDELETEMEMBER_OFFSET))(arg, nullptr);
		}

		::System::Dynamic::DynamicMetaObject* FallbackDeleteMember(::System::Dynamic::DynamicMetaObject* arg, ::System::Dynamic::DynamicMetaObject* arg)
		{
			return (return (::System::Dynamic::DynamicMetaObject*(*)(::System::Dynamic::DynamicMetaObject*, ::System::Dynamic::DynamicMetaObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_DELETEMEMBERBINDER_FALLBACKDELETEMEMBER_OFFSET))(arg, arg, nullptr);
		}

		::System::Dynamic::DynamicMetaObject* Bind(::System::Dynamic::DynamicMetaObject* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Dynamic::DynamicMetaObject*(*)(::System::Dynamic::DynamicMetaObject*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_DELETEMEMBERBINDER_BIND_OFFSET))(arg, arg, nullptr);
		}

	};
}

