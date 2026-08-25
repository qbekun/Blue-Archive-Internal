#pragma once
#include "../../../unitysdk.h"

namespace MX::GameData::Repository { class JsonFileRepository; }
namespace MX::GameData::Repository { class MemoryPackFileRepository; }
namespace MX::AppData::Repository { class MemoryPackSQLiteRepository; }
namespace MX::GameData::Repository { class FlatBufferFileRepository; }

#define MX_GAMEDATA_REPOSITORY_AGGREGATEREPOSITORY_INITTYPEMAP_OFFSET UNITYSDK_OFFSET(0x17F3190)
#define MX_GAMEDATA_REPOSITORY_AGGREGATEREPOSITORY_LOAD_OFFSET UNITYSDK_OFFSET(0x17F3500)
#define MX_GAMEDATA_REPOSITORY_AGGREGATEREPOSITORY_GETVALUEORDEFAULT_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_GAMEDATA_REPOSITORY_AGGREGATEREPOSITORY_ENUMERATEALL_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_GAMEDATA_REPOSITORY_AGGREGATEREPOSITORY_TRYGETREPOSITORY_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_GAMEDATA_REPOSITORY_AGGREGATEREPOSITORY_TRYGETVALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_GAMEDATA_REPOSITORY_AGGREGATEREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x17F3A40)

namespace MX::GameData::Repository
{
	inline static constexpr unsigned int AggregateRepository_TypeDefinitionIndex = 15621;

	class AggregateRepository : public Il2CppObject
	{
	public:
		::MX::GameData::Repository::JsonFileRepository* _jsonFileRepository; // 0x10
		::MX::GameData::Repository::MemoryPackFileRepository* _memoryPackFileRepository; // 0x18
		::MX::AppData::Repository::MemoryPackSQLiteRepository* _memoryPackSQLiteRepository; // 0x20
		::MX::GameData::Repository::FlatBufferFileRepository* _flatBufferFileRepository; // 0x28
		Il2CppObject* _typeMap; // 0x30

		::System::Void InitTypeMap()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_AGGREGATEREPOSITORY_INITTYPEMAP_OFFSET))(nullptr);
		}

		::System::Void Load(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_AGGREGATEREPOSITORY_LOAD_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetValueOrDefault(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_AGGREGATEREPOSITORY_GETVALUEORDEFAULT_OFFSET))(arg, nullptr);
		}

		Il2CppObject* EnumerateAll()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_AGGREGATEREPOSITORY_ENUMERATEALL_OFFSET))(nullptr);
		}

		::System::Boolean TryGetRepository(Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_AGGREGATEREPOSITORY_TRYGETREPOSITORY_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetValue(Il2CppObject* arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_AGGREGATEREPOSITORY_TRYGETVALUE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_AGGREGATEREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

	};
}

