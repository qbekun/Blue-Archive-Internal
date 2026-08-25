#pragma once
#include "../../unitysdk.h"

#define SYSTEM_DYNAMIC_INVOKEMEMBERBINDER_GET_RETURNTYPE_OFFSET UNITYSDK_OFFSET(0x96BE4D0)
#define SYSTEM_DYNAMIC_INVOKEMEMBERBINDER_GET_NAME_OFFSET UNITYSDK_OFFSET(0x96BE530)
#define SYSTEM_DYNAMIC_INVOKEMEMBERBINDER_GET_IGNORECASE_OFFSET UNITYSDK_OFFSET(0x96BE540)
#define SYSTEM_DYNAMIC_INVOKEMEMBERBINDER_BIND_OFFSET UNITYSDK_OFFSET(0x96BE550)
#define SYSTEM_DYNAMIC_INVOKEMEMBERBINDER_FALLBACKINVOKEMEMBER_OFFSET UNITYSDK_OFFSET(0x96BCBE0)
#define SYSTEM_DYNAMIC_INVOKEMEMBERBINDER_FALLBACKINVOKEMEMBER_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_DYNAMIC_INVOKEMEMBERBINDER_FALLBACKINVOKE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Dynamic
{
	inline static constexpr unsigned int InvokeMemberBinder_TypeDefinitionIndex = 33566;

	class InvokeMemberBinder : public Il2CppObject
	{
	public:
		::System::String* _Name_k__BackingField; // 0x18
		::System::Boolean _IgnoreCase_k__BackingField; // 0x20

		::System::Type* get_ReturnType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_INVOKEMEMBERBINDER_GET_RETURNTYPE_OFFSET))(nullptr);
		}

		::System::String* get_Name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_INVOKEMEMBERBINDER_GET_NAME_OFFSET))(nullptr);
		}

		::System::Boolean get_IgnoreCase()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_INVOKEMEMBERBINDER_GET_IGNORECASE_OFFSET))(nullptr);
		}

		::System::Dynamic::DynamicMetaObject* Bind(::System::Dynamic::DynamicMetaObject* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Dynamic::DynamicMetaObject*(*)(::System::Dynamic::DynamicMetaObject*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_INVOKEMEMBERBINDER_BIND_OFFSET))(arg, arg, nullptr);
		}

		::System::Dynamic::DynamicMetaObject* FallbackInvokeMember(::System::Dynamic::DynamicMetaObject* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Dynamic::DynamicMetaObject*(*)(::System::Dynamic::DynamicMetaObject*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_INVOKEMEMBERBINDER_FALLBACKINVOKEMEMBER_OFFSET))(arg, arg, nullptr);
		}

		::System::Dynamic::DynamicMetaObject* FallbackInvokeMember(::System::Dynamic::DynamicMetaObject* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Dynamic::DynamicMetaObject* arg)
		{
			return (return (::System::Dynamic::DynamicMetaObject*(*)(::System::Dynamic::DynamicMetaObject*, ::Il2CppArray<::System::Object*>*, ::System::Dynamic::DynamicMetaObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_INVOKEMEMBERBINDER_FALLBACKINVOKEMEMBER_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Dynamic::DynamicMetaObject* FallbackInvoke(::System::Dynamic::DynamicMetaObject* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Dynamic::DynamicMetaObject* arg)
		{
			return (return (::System::Dynamic::DynamicMetaObject*(*)(::System::Dynamic::DynamicMetaObject*, ::Il2CppArray<::System::Object*>*, ::System::Dynamic::DynamicMetaObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_INVOKEMEMBERBINDER_FALLBACKINVOKE_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

