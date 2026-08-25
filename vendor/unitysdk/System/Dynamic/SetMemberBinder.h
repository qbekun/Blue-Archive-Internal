#pragma once
#include "../../unitysdk.h"

#define SYSTEM_DYNAMIC_SETMEMBERBINDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x96BE860)
#define SYSTEM_DYNAMIC_SETMEMBERBINDER_GET_RETURNTYPE_OFFSET UNITYSDK_OFFSET(0x96BE910)
#define SYSTEM_DYNAMIC_SETMEMBERBINDER_GET_NAME_OFFSET UNITYSDK_OFFSET(0x96BE970)
#define SYSTEM_DYNAMIC_SETMEMBERBINDER_GET_IGNORECASE_OFFSET UNITYSDK_OFFSET(0x96BE980)
#define SYSTEM_DYNAMIC_SETMEMBERBINDER_BIND_OFFSET UNITYSDK_OFFSET(0x96BE990)
#define SYSTEM_DYNAMIC_SETMEMBERBINDER_GET_ISSTANDARDBINDER_OFFSET UNITYSDK_OFFSET(0x96BEA80)
#define SYSTEM_DYNAMIC_SETMEMBERBINDER_FALLBACKSETMEMBER_OFFSET UNITYSDK_OFFSET(0x96BEA90)
#define SYSTEM_DYNAMIC_SETMEMBERBINDER_FALLBACKSETMEMBER_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Dynamic
{
	inline static constexpr unsigned int SetMemberBinder_TypeDefinitionIndex = 33568;

	class SetMemberBinder : public Il2CppObject
	{
	public:
		::System::String* _Name_k__BackingField; // 0x18
		::System::Boolean _IgnoreCase_k__BackingField; // 0x20

		::System::Void .ctor(::System::String* str, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_SETMEMBERBINDER_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::Type* get_ReturnType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_SETMEMBERBINDER_GET_RETURNTYPE_OFFSET))(nullptr);
		}

		::System::String* get_Name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_SETMEMBERBINDER_GET_NAME_OFFSET))(nullptr);
		}

		::System::Boolean get_IgnoreCase()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_SETMEMBERBINDER_GET_IGNORECASE_OFFSET))(nullptr);
		}

		::System::Dynamic::DynamicMetaObject* Bind(::System::Dynamic::DynamicMetaObject* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Dynamic::DynamicMetaObject*(*)(::System::Dynamic::DynamicMetaObject*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_SETMEMBERBINDER_BIND_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean get_IsStandardBinder()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_SETMEMBERBINDER_GET_ISSTANDARDBINDER_OFFSET))(nullptr);
		}

		::System::Dynamic::DynamicMetaObject* FallbackSetMember(::System::Dynamic::DynamicMetaObject* arg, ::System::Dynamic::DynamicMetaObject* arg)
		{
			return (return (::System::Dynamic::DynamicMetaObject*(*)(::System::Dynamic::DynamicMetaObject*, ::System::Dynamic::DynamicMetaObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_SETMEMBERBINDER_FALLBACKSETMEMBER_OFFSET))(arg, arg, nullptr);
		}

		::System::Dynamic::DynamicMetaObject* FallbackSetMember(::System::Dynamic::DynamicMetaObject* arg, ::System::Dynamic::DynamicMetaObject* arg, ::System::Dynamic::DynamicMetaObject* arg)
		{
			return (return (::System::Dynamic::DynamicMetaObject*(*)(::System::Dynamic::DynamicMetaObject*, ::System::Dynamic::DynamicMetaObject*, ::System::Dynamic::DynamicMetaObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_SETMEMBERBINDER_FALLBACKSETMEMBER_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

