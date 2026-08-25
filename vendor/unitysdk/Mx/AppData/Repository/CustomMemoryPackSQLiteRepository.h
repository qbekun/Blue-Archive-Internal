#pragma once
#include "../../../unitysdk.h"

namespace MX::GameData::Repository { class IRepository; }

#define MX_APPDATA_REPOSITORY_CUSTOMMEMORYPACKSQLITEREPOSITORY_GETVALUEORDEFAULT_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_APPDATA_REPOSITORY_CUSTOMMEMORYPACKSQLITEREPOSITORY_LOAD_OFFSET UNITYSDK_OFFSET(0x1CD6540)
#define MX_APPDATA_REPOSITORY_CUSTOMMEMORYPACKSQLITEREPOSITORY_TRYGETREPOSITORY_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_APPDATA_REPOSITORY_CUSTOMMEMORYPACKSQLITEREPOSITORY_ENUMERATEALL_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_APPDATA_REPOSITORY_CUSTOMMEMORYPACKSQLITEREPOSITORY_REGISTERREADER_OFFSET UNITYSDK_OFFSET(0x1CD6840)
#define MX_APPDATA_REPOSITORY_CUSTOMMEMORYPACKSQLITEREPOSITORY_TRYGETVALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_APPDATA_REPOSITORY_CUSTOMMEMORYPACKSQLITEREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1CD68E0)

namespace MX::AppData::Repository
{
	inline static constexpr unsigned int CustomMemoryPackSQLiteRepository_TypeDefinitionIndex = 19852;

	class CustomMemoryPackSQLiteRepository : public Il2CppObject
	{
	public:
		Il2CppObject* _dictionary; // 0x10

		Il2CppObject* GetValueOrDefault(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_APPDATA_REPOSITORY_CUSTOMMEMORYPACKSQLITEREPOSITORY_GETVALUEORDEFAULT_OFFSET))(arg, nullptr);
		}

		::System::Void Load(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_APPDATA_REPOSITORY_CUSTOMMEMORYPACKSQLITEREPOSITORY_LOAD_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetRepository(Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_APPDATA_REPOSITORY_CUSTOMMEMORYPACKSQLITEREPOSITORY_TRYGETREPOSITORY_OFFSET))(arg, nullptr);
		}

		Il2CppObject* EnumerateAll()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_APPDATA_REPOSITORY_CUSTOMMEMORYPACKSQLITEREPOSITORY_ENUMERATEALL_OFFSET))(nullptr);
		}

		::System::Void RegisterReader(::System::Type* arg, ::MX::GameData::Repository::IRepository* arg)
		{
			((::System::Void(*)(::System::Type*, ::MX::GameData::Repository::IRepository*, ::PVOID))((::PBYTE)hIl2Cpp + MX_APPDATA_REPOSITORY_CUSTOMMEMORYPACKSQLITEREPOSITORY_REGISTERREADER_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetValue(Il2CppObject* arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_APPDATA_REPOSITORY_CUSTOMMEMORYPACKSQLITEREPOSITORY_TRYGETVALUE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_APPDATA_REPOSITORY_CUSTOMMEMORYPACKSQLITEREPOSITORY_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

