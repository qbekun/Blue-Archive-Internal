#pragma once
#include "../../../unitysdk.h"

namespace MX::GameData::Repository { class CustomMemoryPackFileRepository; }
namespace MX::AppData::Repository { class CustomMemoryPackSQLiteRepository; }

#define MX_GAMEDATA_REPOSITORY_CUSTOMREPOSITORY_INITTYPEMAP_OFFSET UNITYSDK_OFFSET(0x17F40D0)
#define MX_GAMEDATA_REPOSITORY_CUSTOMREPOSITORY_TRYGETREPOSITORY_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_GAMEDATA_REPOSITORY_CUSTOMREPOSITORY_ENUMERATEALL_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_GAMEDATA_REPOSITORY_CUSTOMREPOSITORY_TRYGETVALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_GAMEDATA_REPOSITORY_CUSTOMREPOSITORY_LOAD_OFFSET UNITYSDK_OFFSET(0x17F4330)
#define MX_GAMEDATA_REPOSITORY_CUSTOMREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x17F4370)
#define MX_GAMEDATA_REPOSITORY_CUSTOMREPOSITORY_GETVALUEORDEFAULT_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MX::GameData::Repository
{
	inline static constexpr unsigned int CustomRepository_TypeDefinitionIndex = 15623;

	class CustomRepository : public Il2CppObject
	{
	public:
		::MX::GameData::Repository::CustomMemoryPackFileRepository* _memoryPackFileRepository; // 0x10
		::MX::AppData::Repository::CustomMemoryPackSQLiteRepository* _memoryPackSQLiteRepository; // 0x18
		Il2CppObject* _typeMap; // 0x20

		::System::Void InitTypeMap()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_CUSTOMREPOSITORY_INITTYPEMAP_OFFSET))(nullptr);
		}

		::System::Boolean TryGetRepository(Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_CUSTOMREPOSITORY_TRYGETREPOSITORY_OFFSET))(arg, nullptr);
		}

		Il2CppObject* EnumerateAll()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_CUSTOMREPOSITORY_ENUMERATEALL_OFFSET))(nullptr);
		}

		::System::Boolean TryGetValue(Il2CppObject* arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_CUSTOMREPOSITORY_TRYGETVALUE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Load(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_CUSTOMREPOSITORY_LOAD_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_CUSTOMREPOSITORY_.CTOR_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetValueOrDefault(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_CUSTOMREPOSITORY_GETVALUEORDEFAULT_OFFSET))(arg, nullptr);
		}

	};
}

