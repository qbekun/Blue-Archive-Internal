#pragma once
#include "../../unitysdk.h"

#define SYSTEM_DYNAMIC_EXPANDOCLASS_.CTOR_OFFSET UNITYSDK_OFFSET(0x96B7150)
#define SYSTEM_DYNAMIC_EXPANDOCLASS_.CTOR_OFFSET UNITYSDK_OFFSET(0x96B7210)
#define SYSTEM_DYNAMIC_EXPANDOCLASS_FINDNEWCLASS_OFFSET UNITYSDK_OFFSET(0x96B7250)
#define SYSTEM_DYNAMIC_EXPANDOCLASS_GETTRANSITIONLIST_OFFSET UNITYSDK_OFFSET(0x96B76D0)
#define SYSTEM_DYNAMIC_EXPANDOCLASS_GETVALUEINDEX_OFFSET UNITYSDK_OFFSET(0x96B7800)
#define SYSTEM_DYNAMIC_EXPANDOCLASS_GETVALUEINDEXCASESENSITIVE_OFFSET UNITYSDK_OFFSET(0x96B7B30)
#define SYSTEM_DYNAMIC_EXPANDOCLASS_GETVALUEINDEXCASEINSENSITIVE_OFFSET UNITYSDK_OFFSET(0x96B7890)
#define SYSTEM_DYNAMIC_EXPANDOCLASS_GET_KEYS_OFFSET UNITYSDK_OFFSET(0x96B7C30)
#define SYSTEM_DYNAMIC_EXPANDOCLASS_.CCTOR_OFFSET UNITYSDK_OFFSET(0x96B7C40)

namespace System::Dynamic
{
	inline static constexpr unsigned int ExpandoClass_TypeDefinitionIndex = 33549;

	class ExpandoClass : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* _keys; // 0x10
		::System::Int32 _hashCode; // 0x18
		Il2CppObject* _transitions; // 0x20
		::System::Dynamic::ExpandoClass* Empty; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOCLASS_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOCLASS_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Dynamic::ExpandoClass* FindNewClass(::System::String* str)
		{
			return (return (::System::Dynamic::ExpandoClass*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOCLASS_FINDNEWCLASS_OFFSET))(str, nullptr);
		}

		Il2CppObject* GetTransitionList(::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOCLASS_GETTRANSITIONLIST_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetValueIndex(::System::String* str, ::System::Boolean arg, ::System::Dynamic::ExpandoObject* arg)
		{
			return (return (::System::Int32(*)(::System::String*, ::System::Boolean, ::System::Dynamic::ExpandoObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOCLASS_GETVALUEINDEX_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Int32 GetValueIndexCaseSensitive(::System::String* str)
		{
			return (return (::System::Int32(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOCLASS_GETVALUEINDEXCASESENSITIVE_OFFSET))(str, nullptr);
		}

		::System::Int32 GetValueIndexCaseInsensitive(::System::String* str, ::System::Dynamic::ExpandoObject* arg)
		{
			return (return (::System::Int32(*)(::System::String*, ::System::Dynamic::ExpandoObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOCLASS_GETVALUEINDEXCASEINSENSITIVE_OFFSET))(str, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_Keys()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOCLASS_GET_KEYS_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOCLASS_.CCTOR_OFFSET))(nullptr);
		}

	};
}

