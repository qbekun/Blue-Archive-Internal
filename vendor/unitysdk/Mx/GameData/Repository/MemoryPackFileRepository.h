#pragma once
#include "../../../unitysdk.h"

namespace MX::GameData::Repository { class ReaderBase; }

#define MX_GAMEDATA_REPOSITORY_MEMORYPACKFILEREPOSITORY_GETVALUEORDEFAULT_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_GAMEDATA_REPOSITORY_MEMORYPACKFILEREPOSITORY_ENUMERATEALL_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_GAMEDATA_REPOSITORY_MEMORYPACKFILEREPOSITORY_TRYGETVALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_GAMEDATA_REPOSITORY_MEMORYPACKFILEREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x17F3BF0)
#define MX_GAMEDATA_REPOSITORY_MEMORYPACKFILEREPOSITORY_TRYGETREPOSITORY_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_GAMEDATA_REPOSITORY_MEMORYPACKFILEREPOSITORY_LOAD_OFFSET UNITYSDK_OFFSET(0x17F3700)
#define MX_GAMEDATA_REPOSITORY_MEMORYPACKFILEREPOSITORY_REGISTERREADER_OFFSET UNITYSDK_OFFSET(0x17F9C40)

namespace MX::GameData::Repository
{
	inline static constexpr unsigned int MemoryPackFileRepository_TypeDefinitionIndex = 15661;

	class MemoryPackFileRepository : public Il2CppObject
	{
	public:
		Il2CppObject* _dictionary; // 0x10

		Il2CppObject* GetValueOrDefault(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_MEMORYPACKFILEREPOSITORY_GETVALUEORDEFAULT_OFFSET))(arg, nullptr);
		}

		Il2CppObject* EnumerateAll()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_MEMORYPACKFILEREPOSITORY_ENUMERATEALL_OFFSET))(nullptr);
		}

		::System::Boolean TryGetValue(Il2CppObject* arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_MEMORYPACKFILEREPOSITORY_TRYGETVALUE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_MEMORYPACKFILEREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean TryGetRepository(Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_MEMORYPACKFILEREPOSITORY_TRYGETREPOSITORY_OFFSET))(arg, nullptr);
		}

		::System::Void Load(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_MEMORYPACKFILEREPOSITORY_LOAD_OFFSET))(arg, nullptr);
		}

		::System::Void RegisterReader(::System::Type* arg, ::MX::GameData::Repository::ReaderBase* arg)
		{
			((::System::Void(*)(::System::Type*, ::MX::GameData::Repository::ReaderBase*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_MEMORYPACKFILEREPOSITORY_REGISTERREADER_OFFSET))(arg, arg, nullptr);
		}

	};
}

