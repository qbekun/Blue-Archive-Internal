#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Cache; }

#define UNITYENGINE_CACHE_GET_HANDLE_OFFSET UNITYSDK_OFFSET(0xA1E44F0)
#define UNITYENGINE_CACHE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA1E4500)
#define UNITYENGINE_CACHE_EQUALS_OFFSET UNITYSDK_OFFSET(0xA1E4510)
#define UNITYENGINE_CACHE_EQUALS_OFFSET UNITYSDK_OFFSET(0xA1E4580)
#define UNITYENGINE_CACHE_GET_VALID_OFFSET UNITYSDK_OFFSET(0xA1E4590)
#define UNITYENGINE_CACHE_CACHE_ISVALID_OFFSET UNITYSDK_OFFSET(0xA1E45C0)
#define UNITYENGINE_CACHE_GET_PATH_OFFSET UNITYSDK_OFFSET(0xA1E4600)
#define UNITYENGINE_CACHE_CACHE_GETPATH_OFFSET UNITYSDK_OFFSET(0xA1E4630)
#define UNITYENGINE_CACHE_SET_MAXIMUMAVAILABLESTORAGESPACE_OFFSET UNITYSDK_OFFSET(0xA1E4670)
#define UNITYENGINE_CACHE_CACHE_SETMAXIMUMDISKSPACEAVAILABLE_OFFSET UNITYSDK_OFFSET(0xA1E46B0)
#define UNITYENGINE_CACHE_SET_EXPIRATIONDELAY_OFFSET UNITYSDK_OFFSET(0xA1E46F0)
#define UNITYENGINE_CACHE_CACHE_SETEXPIRATIONDELAY_OFFSET UNITYSDK_OFFSET(0xA1E4730)

namespace UnityEngine
{
	inline static constexpr unsigned int Cache_TypeDefinitionIndex = 30951;

	class Cache : public Il2CppObject
	{
	public:
		::System::Int32 m_Handle; // 0x10

		::System::Int32 get_handle()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CACHE_GET_HANDLE_OFFSET))(nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CACHE_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CACHE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::UnityEngine::Cache* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Cache*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CACHE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_valid()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CACHE_GET_VALID_OFFSET))(nullptr);
		}

		::System::Boolean Cache_IsValid(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CACHE_CACHE_ISVALID_OFFSET))(arg, nullptr);
		}

		::System::String* get_path()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CACHE_GET_PATH_OFFSET))(nullptr);
		}

		::System::String* Cache_GetPath(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CACHE_CACHE_GETPATH_OFFSET))(arg, nullptr);
		}

		::System::Void set_maximumAvailableStorageSpace(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CACHE_SET_MAXIMUMAVAILABLESTORAGESPACE_OFFSET))(arg, nullptr);
		}

		::System::Void Cache_SetMaximumDiskSpaceAvailable(::System::Int32 arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CACHE_CACHE_SETMAXIMUMDISKSPACEAVAILABLE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void set_expirationDelay(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CACHE_SET_EXPIRATIONDELAY_OFFSET))(arg, nullptr);
		}

		::System::Void Cache_SetExpirationDelay(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CACHE_CACHE_SETEXPIRATIONDELAY_OFFSET))(arg, arg, nullptr);
		}

	};
}

