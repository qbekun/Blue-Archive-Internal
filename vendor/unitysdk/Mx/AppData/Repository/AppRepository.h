#pragma once
#include "../../../unitysdk.h"

namespace MX::AppData::Repository { class AppMemoryPackSQLiteRepository; }
namespace MX::AppData::Repository { class AppMemoryPackFileRepository; }
namespace MX::AppSystem::ServiceLocator { class BaseAppProfile; }

#define MX_APPDATA_REPOSITORY_APPREPOSITORY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1CD5F70)
#define MX_APPDATA_REPOSITORY_APPREPOSITORY_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x1CD5FC0)
#define MX_APPDATA_REPOSITORY_APPREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1CD5FD0)
#define MX_APPDATA_REPOSITORY_APPREPOSITORY_DISABLE_OFFSET UNITYSDK_OFFSET(0x1CD6360)
#define MX_APPDATA_REPOSITORY_APPREPOSITORY_GETVALUEORDEFAULT_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_APPDATA_REPOSITORY_APPREPOSITORY_RESET_OFFSET UNITYSDK_OFFSET(0x1CD6370)
#define MX_APPDATA_REPOSITORY_APPREPOSITORY_TRYGETREPOSITORY_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_APPDATA_REPOSITORY_APPREPOSITORY_ENUMERATEALL_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_APPDATA_REPOSITORY_APPREPOSITORY_TRYGETVALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_APPDATA_REPOSITORY_APPREPOSITORY_UPDATE_OFFSET UNITYSDK_OFFSET(0x1CD6380)
#define MX_APPDATA_REPOSITORY_APPREPOSITORY_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1CD6390)
#define MX_APPDATA_REPOSITORY_APPREPOSITORY_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1CD63A0)
#define MX_APPDATA_REPOSITORY_APPREPOSITORY_ENABLE_OFFSET UNITYSDK_OFFSET(0x1CD63B0)
#define MX_APPDATA_REPOSITORY_APPREPOSITORY_GET_CONFIGURATIONPROFILE_OFFSET UNITYSDK_OFFSET(0x1CD63C0)
#define MX_APPDATA_REPOSITORY_APPREPOSITORY_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1CD63D0)
#define MX_APPDATA_REPOSITORY_APPREPOSITORY_DESTROY_OFFSET UNITYSDK_OFFSET(0x1CD63E0)
#define MX_APPDATA_REPOSITORY_APPREPOSITORY_INITTYPEMAP_OFFSET UNITYSDK_OFFSET(0x1CD6080)
#define MX_APPDATA_REPOSITORY_APPREPOSITORY_LOAD_OFFSET UNITYSDK_OFFSET(0x1CD63F0)

namespace MX::AppData::Repository
{
	inline static constexpr unsigned int AppRepository_TypeDefinitionIndex = 19847;

	class AppRepository : public Il2CppObject
	{
	public:
		::MX::AppData::Repository::AppMemoryPackSQLiteRepository* _memoryPackSqLiteRepository; // 0x10
		::MX::AppData::Repository::AppMemoryPackFileRepository* _memoryPackFileRepository; // 0x18
		Il2CppObject* _typeMap; // 0x20
		::System::String* _Name_k__BackingField; // 0x28
		::System::UInt32 _Priority_k__BackingField; // 0x30
		::MX::AppSystem::ServiceLocator::BaseAppProfile* _ConfigurationProfile_k__BackingField; // 0x38

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_APPDATA_REPOSITORY_APPREPOSITORY_DISPOSE_OFFSET))(nullptr);
		}

		::System::UInt32 get_Priority()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_APPDATA_REPOSITORY_APPREPOSITORY_GET_PRIORITY_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_APPDATA_REPOSITORY_APPREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Disable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_APPDATA_REPOSITORY_APPREPOSITORY_DISABLE_OFFSET))(nullptr);
		}

		Il2CppObject* GetValueOrDefault(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_APPDATA_REPOSITORY_APPREPOSITORY_GETVALUEORDEFAULT_OFFSET))(arg, nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_APPDATA_REPOSITORY_APPREPOSITORY_RESET_OFFSET))(nullptr);
		}

		::System::Boolean TryGetRepository(Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_APPDATA_REPOSITORY_APPREPOSITORY_TRYGETREPOSITORY_OFFSET))(arg, nullptr);
		}

		Il2CppObject* EnumerateAll()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_APPDATA_REPOSITORY_APPREPOSITORY_ENUMERATEALL_OFFSET))(nullptr);
		}

		::System::Boolean TryGetValue(Il2CppObject* arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_APPDATA_REPOSITORY_APPREPOSITORY_TRYGETVALUE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_APPDATA_REPOSITORY_APPREPOSITORY_UPDATE_OFFSET))(nullptr);
		}

		::System::String* get_Name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_APPDATA_REPOSITORY_APPREPOSITORY_GET_NAME_OFFSET))(nullptr);
		}

		::System::Void LateUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_APPDATA_REPOSITORY_APPREPOSITORY_LATEUPDATE_OFFSET))(nullptr);
		}

		::System::Void Enable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_APPDATA_REPOSITORY_APPREPOSITORY_ENABLE_OFFSET))(nullptr);
		}

		::MX::AppSystem::ServiceLocator::BaseAppProfile* get_ConfigurationProfile()
		{
			return (return (::MX::AppSystem::ServiceLocator::BaseAppProfile*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_APPDATA_REPOSITORY_APPREPOSITORY_GET_CONFIGURATIONPROFILE_OFFSET))(nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_APPDATA_REPOSITORY_APPREPOSITORY_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void Destroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_APPDATA_REPOSITORY_APPREPOSITORY_DESTROY_OFFSET))(nullptr);
		}

		::System::Void InitTypeMap()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_APPDATA_REPOSITORY_APPREPOSITORY_INITTYPEMAP_OFFSET))(nullptr);
		}

		::System::Void Load(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_APPDATA_REPOSITORY_APPREPOSITORY_LOAD_OFFSET))(arg, nullptr);
		}

	};
}

