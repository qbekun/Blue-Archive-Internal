#pragma once
#include "../../unitysdk.h"

#define SYSTEM_DYNAMIC_GETMEMBERBINDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x96BE060)
#define SYSTEM_DYNAMIC_GETMEMBERBINDER_GET_RETURNTYPE_OFFSET UNITYSDK_OFFSET(0x96BE110)
#define SYSTEM_DYNAMIC_GETMEMBERBINDER_GET_NAME_OFFSET UNITYSDK_OFFSET(0x96BE170)
#define SYSTEM_DYNAMIC_GETMEMBERBINDER_GET_IGNORECASE_OFFSET UNITYSDK_OFFSET(0x96BE180)
#define SYSTEM_DYNAMIC_GETMEMBERBINDER_FALLBACKGETMEMBER_OFFSET UNITYSDK_OFFSET(0x96BCA30)
#define SYSTEM_DYNAMIC_GETMEMBERBINDER_FALLBACKGETMEMBER_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_DYNAMIC_GETMEMBERBINDER_BIND_OFFSET UNITYSDK_OFFSET(0x96BE190)
#define SYSTEM_DYNAMIC_GETMEMBERBINDER_GET_ISSTANDARDBINDER_OFFSET UNITYSDK_OFFSET(0x96BE2B0)

namespace System::Dynamic
{
	inline static constexpr unsigned int GetMemberBinder_TypeDefinitionIndex = 33563;

	class GetMemberBinder : public Il2CppObject
	{
	public:
		::System::String* _Name_k__BackingField; // 0x18
		::System::Boolean _IgnoreCase_k__BackingField; // 0x20

		::System::Void .ctor(::System::String* str, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_GETMEMBERBINDER_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::Type* get_ReturnType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_GETMEMBERBINDER_GET_RETURNTYPE_OFFSET))(nullptr);
		}

		::System::String* get_Name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_GETMEMBERBINDER_GET_NAME_OFFSET))(nullptr);
		}

		::System::Boolean get_IgnoreCase()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_GETMEMBERBINDER_GET_IGNORECASE_OFFSET))(nullptr);
		}

		::System::Dynamic::DynamicMetaObject* FallbackGetMember(::System::Dynamic::DynamicMetaObject* arg)
		{
			return (return (::System::Dynamic::DynamicMetaObject*(*)(::System::Dynamic::DynamicMetaObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_GETMEMBERBINDER_FALLBACKGETMEMBER_OFFSET))(arg, nullptr);
		}

		::System::Dynamic::DynamicMetaObject* FallbackGetMember(::System::Dynamic::DynamicMetaObject* arg, ::System::Dynamic::DynamicMetaObject* arg)
		{
			return (return (::System::Dynamic::DynamicMetaObject*(*)(::System::Dynamic::DynamicMetaObject*, ::System::Dynamic::DynamicMetaObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_GETMEMBERBINDER_FALLBACKGETMEMBER_OFFSET))(arg, arg, nullptr);
		}

		::System::Dynamic::DynamicMetaObject* Bind(::System::Dynamic::DynamicMetaObject* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Dynamic::DynamicMetaObject*(*)(::System::Dynamic::DynamicMetaObject*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_GETMEMBERBINDER_BIND_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean get_IsStandardBinder()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_GETMEMBERBINDER_GET_ISSTANDARDBINDER_OFFSET))(nullptr);
		}

	};
}

