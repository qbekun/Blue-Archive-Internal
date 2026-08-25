#pragma once
#include "../../unitysdk.h"

#define SYSTEM_RESOURCES_RESOURCESET_.CTOR_OFFSET UNITYSDK_OFFSET(0x9238D10)
#define SYSTEM_RESOURCES_RESOURCESET_.CTOR_OFFSET UNITYSDK_OFFSET(0x922BE80)
#define SYSTEM_RESOURCES_RESOURCESET_COMMONINIT_OFFSET UNITYSDK_OFFSET(0x9238D80)
#define SYSTEM_RESOURCES_RESOURCESET_DISPOSE_OFFSET UNITYSDK_OFFSET(0x922C2C0)
#define SYSTEM_RESOURCES_RESOURCESET_DISPOSE_OFFSET UNITYSDK_OFFSET(0x92343A0)
#define SYSTEM_RESOURCES_RESOURCESET_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x9238DF0)
#define SYSTEM_RESOURCES_RESOURCESET_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x9238E90)
#define SYSTEM_RESOURCES_RESOURCESET_GETENUMERATORHELPER_OFFSET UNITYSDK_OFFSET(0x9238E00)
#define SYSTEM_RESOURCES_RESOURCESET_GETSTRING_OFFSET UNITYSDK_OFFSET(0x9238EA0)
#define SYSTEM_RESOURCES_RESOURCESET_GETSTRING_OFFSET UNITYSDK_OFFSET(0x9239110)
#define SYSTEM_RESOURCES_RESOURCESET_GETOBJECT_OFFSET UNITYSDK_OFFSET(0x92396C0)
#define SYSTEM_RESOURCES_RESOURCESET_GETOBJECT_OFFSET UNITYSDK_OFFSET(0x92396D0)
#define SYSTEM_RESOURCES_RESOURCESET_GETOBJECTINTERNAL_OFFSET UNITYSDK_OFFSET(0x9239030)
#define SYSTEM_RESOURCES_RESOURCESET_GETCASEINSENSITIVEOBJECTINTERNAL_OFFSET UNITYSDK_OFFSET(0x9239380)

namespace System::Resources
{
	inline static constexpr unsigned int ResourceSet_TypeDefinitionIndex = 24826;

	class ResourceSet : public Il2CppObject
	{
	public:
		::System::Resources::IResourceReader* Reader; // 0x10
		::System::Collections::Hashtable* Table; // 0x18
		::System::Collections::Hashtable* _caseInsensitiveTable; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCESET_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCESET_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void CommonInit()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCESET_COMMONINIT_OFFSET))(nullptr);
		}

		::System::Void Dispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCESET_DISPOSE_OFFSET))(arg, nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCESET_DISPOSE_OFFSET))(nullptr);
		}

		::System::Collections::IDictionaryEnumerator* GetEnumerator()
		{
			return (return (::System::Collections::IDictionaryEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCESET_GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCESET_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Collections::IDictionaryEnumerator* GetEnumeratorHelper()
		{
			return (return (::System::Collections::IDictionaryEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCESET_GETENUMERATORHELPER_OFFSET))(nullptr);
		}

		::System::String* GetString(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCESET_GETSTRING_OFFSET))(str, nullptr);
		}

		::System::String* GetString(::System::String* str, ::System::Boolean arg)
		{
			return (return (::System::String*(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCESET_GETSTRING_OFFSET))(str, arg, nullptr);
		}

		::System::Object* GetObject(::System::String* str)
		{
			return (return (::System::Object*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCESET_GETOBJECT_OFFSET))(str, nullptr);
		}

		::System::Object* GetObject(::System::String* str, ::System::Boolean arg)
		{
			return (return (::System::Object*(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCESET_GETOBJECT_OFFSET))(str, arg, nullptr);
		}

		::System::Object* GetObjectInternal(::System::String* str)
		{
			return (return (::System::Object*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCESET_GETOBJECTINTERNAL_OFFSET))(str, nullptr);
		}

		::System::Object* GetCaseInsensitiveObjectInternal(::System::String* str)
		{
			return (return (::System::Object*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCESET_GETCASEINSENSITIVEOBJECTINTERNAL_OFFSET))(str, nullptr);
		}

	};
}

