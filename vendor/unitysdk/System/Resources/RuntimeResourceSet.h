#pragma once
#include "../../unitysdk.h"

#define SYSTEM_RESOURCES_RUNTIMERESOURCESET_.CTOR_OFFSET UNITYSDK_OFFSET(0x922BD20)
#define SYSTEM_RESOURCES_RUNTIMERESOURCESET_.CTOR_OFFSET UNITYSDK_OFFSET(0x922BFC0)
#define SYSTEM_RESOURCES_RUNTIMERESOURCESET_DISPOSE_OFFSET UNITYSDK_OFFSET(0x922C0D0)
#define SYSTEM_RESOURCES_RUNTIMERESOURCESET_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x922C3B0)
#define SYSTEM_RESOURCES_RUNTIMERESOURCESET_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x922C4C0)
#define SYSTEM_RESOURCES_RUNTIMERESOURCESET_GETENUMERATORHELPER_OFFSET UNITYSDK_OFFSET(0x922C3C0)
#define SYSTEM_RESOURCES_RUNTIMERESOURCESET_GETSTRING_OFFSET UNITYSDK_OFFSET(0x922C4D0)
#define SYSTEM_RESOURCES_RUNTIMERESOURCESET_GETSTRING_OFFSET UNITYSDK_OFFSET(0x922D100)
#define SYSTEM_RESOURCES_RUNTIMERESOURCESET_GETOBJECT_OFFSET UNITYSDK_OFFSET(0x922D170)
#define SYSTEM_RESOURCES_RUNTIMERESOURCESET_GETOBJECT_OFFSET UNITYSDK_OFFSET(0x922D190)
#define SYSTEM_RESOURCES_RUNTIMERESOURCESET_GETOBJECT_OFFSET UNITYSDK_OFFSET(0x922C540)
#define SYSTEM_RESOURCES_RUNTIMERESOURCESET_RESOLVERESOURCELOCATOR_OFFSET UNITYSDK_OFFSET(0x922DC30)

namespace System::Resources
{
	inline static constexpr unsigned int RuntimeResourceSet_TypeDefinitionIndex = 24813;

	class RuntimeResourceSet : public Il2CppObject
	{
	public:
		::System::Int32 Version; // 0x0
		Il2CppObject* _resCache; // 0x28
		::System::Resources::ResourceReader* _defaultReader; // 0x30
		Il2CppObject* _caseInsensitiveTable; // 0x38
		::System::Boolean _haveReadFromReader; // 0x40

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RUNTIMERESOURCESET_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::IO::Stream* arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RUNTIMERESOURCESET_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Dispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RUNTIMERESOURCESET_DISPOSE_OFFSET))(arg, nullptr);
		}

		::System::Collections::IDictionaryEnumerator* GetEnumerator()
		{
			return (return (::System::Collections::IDictionaryEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RUNTIMERESOURCESET_GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RUNTIMERESOURCESET_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Collections::IDictionaryEnumerator* GetEnumeratorHelper()
		{
			return (return (::System::Collections::IDictionaryEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RUNTIMERESOURCESET_GETENUMERATORHELPER_OFFSET))(nullptr);
		}

		::System::String* GetString(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RUNTIMERESOURCESET_GETSTRING_OFFSET))(str, nullptr);
		}

		::System::String* GetString(::System::String* str, ::System::Boolean arg)
		{
			return (return (::System::String*(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RUNTIMERESOURCESET_GETSTRING_OFFSET))(str, arg, nullptr);
		}

		::System::Object* GetObject(::System::String* str)
		{
			return (return (::System::Object*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RUNTIMERESOURCESET_GETOBJECT_OFFSET))(str, nullptr);
		}

		::System::Object* GetObject(::System::String* str, ::System::Boolean arg)
		{
			return (return (::System::Object*(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RUNTIMERESOURCESET_GETOBJECT_OFFSET))(str, arg, nullptr);
		}

		::System::Object* GetObject(::System::String* str, ::System::Boolean arg, ::System::Boolean arg)
		{
			return (return (::System::Object*(*)(::System::String*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RUNTIMERESOURCESET_GETOBJECT_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Object* ResolveResourceLocator(::System::Resources::ResourceLocator* arg, ::System::String* str, Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (::System::Object*(*)(::System::Resources::ResourceLocator*, ::System::String*, Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RUNTIMERESOURCESET_RESOLVERESOURCELOCATOR_OFFSET))(arg, str, arg, arg, nullptr);
		}

	};
}

