#pragma once
#include "../../unitysdk.h"

#define NPA_EDITOR_IPERSISTENTDATACACHE_SETSTRING_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_IPERSISTENTDATACACHE_SETINT_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_IPERSISTENTDATACACHE_SETFLOAT_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_IPERSISTENTDATACACHE_GETSTRING_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_IPERSISTENTDATACACHE_GETINT_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_IPERSISTENTDATACACHE_GETFLOAT_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_IPERSISTENTDATACACHE_DELETEKEY_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_IPERSISTENTDATACACHE_DELETEALL_OFFSET UNITYSDK_OFFSET(0x000000)

namespace NPA::Editor
{
	inline static constexpr unsigned int IPersistentDataCache_TypeDefinitionIndex = 26274;

	class IPersistentDataCache : public Il2CppObject
	{
	public:
		::System::Void SetString(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_IPERSISTENTDATACACHE_SETSTRING_OFFSET))(str, str, nullptr);
		}

		::System::Void SetInt(::System::String* str, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_IPERSISTENTDATACACHE_SETINT_OFFSET))(str, arg, nullptr);
		}

		::System::Void SetFloat(::System::String* str, ::System::Single arg)
		{
			((::System::Void(*)(::System::String*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_IPERSISTENTDATACACHE_SETFLOAT_OFFSET))(str, arg, nullptr);
		}

		::System::String* GetString(::System::String* str, ::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_IPERSISTENTDATACACHE_GETSTRING_OFFSET))(str, str, nullptr);
		}

		::System::Int32 GetInt(::System::String* str, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_IPERSISTENTDATACACHE_GETINT_OFFSET))(str, arg, nullptr);
		}

		::System::Single GetFloat(::System::String* str, ::System::Single arg)
		{
			return (return (::System::Single(*)(::System::String*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_IPERSISTENTDATACACHE_GETFLOAT_OFFSET))(str, arg, nullptr);
		}

		::System::Boolean DeleteKey(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_IPERSISTENTDATACACHE_DELETEKEY_OFFSET))(str, nullptr);
		}

		::System::Void DeleteAll()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_IPERSISTENTDATACACHE_DELETEALL_OFFSET))(nullptr);
		}

	};
}

