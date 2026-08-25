#pragma once
#include "../../../unitysdk.h"

namespace MX::GameData::Repository { class IRepository; }

#define MX_APPDATA_REPOSITORY_MEMORYPACKSQLITEREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1CD6A00)
#define MX_APPDATA_REPOSITORY_MEMORYPACKSQLITEREPOSITORY_LOAD_OFFSET UNITYSDK_OFFSET(0x1CD6BF0)
#define MX_APPDATA_REPOSITORY_MEMORYPACKSQLITEREPOSITORY_TRYGETREPOSITORY_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_APPDATA_REPOSITORY_MEMORYPACKSQLITEREPOSITORY_ENUMERATEALL_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_APPDATA_REPOSITORY_MEMORYPACKSQLITEREPOSITORY_TRYGETVALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_APPDATA_REPOSITORY_MEMORYPACKSQLITEREPOSITORY_REGISTERREADER_OFFSET UNITYSDK_OFFSET(0x1CD6B50)
#define MX_APPDATA_REPOSITORY_MEMORYPACKSQLITEREPOSITORY_GETVALUEORDEFAULT_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MX::AppData::Repository
{
	inline static constexpr unsigned int MemoryPackSQLiteRepository_TypeDefinitionIndex = 19853;

	class MemoryPackSQLiteRepository : public Il2CppObject
	{
	public:
		Il2CppObject* _dictionary; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_APPDATA_REPOSITORY_MEMORYPACKSQLITEREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Load(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_APPDATA_REPOSITORY_MEMORYPACKSQLITEREPOSITORY_LOAD_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetRepository(Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_APPDATA_REPOSITORY_MEMORYPACKSQLITEREPOSITORY_TRYGETREPOSITORY_OFFSET))(arg, nullptr);
		}

		Il2CppObject* EnumerateAll()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_APPDATA_REPOSITORY_MEMORYPACKSQLITEREPOSITORY_ENUMERATEALL_OFFSET))(nullptr);
		}

		::System::Boolean TryGetValue(Il2CppObject* arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_APPDATA_REPOSITORY_MEMORYPACKSQLITEREPOSITORY_TRYGETVALUE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void RegisterReader(::System::Type* arg, ::MX::GameData::Repository::IRepository* arg)
		{
			((::System::Void(*)(::System::Type*, ::MX::GameData::Repository::IRepository*, ::PVOID))((::PBYTE)hIl2Cpp + MX_APPDATA_REPOSITORY_MEMORYPACKSQLITEREPOSITORY_REGISTERREADER_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* GetValueOrDefault(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_APPDATA_REPOSITORY_MEMORYPACKSQLITEREPOSITORY_GETVALUEORDEFAULT_OFFSET))(arg, nullptr);
		}

	};
}

