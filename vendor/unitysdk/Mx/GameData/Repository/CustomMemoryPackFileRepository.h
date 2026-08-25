#pragma once
#include "../../../unitysdk.h"

namespace MX::GameData::Repository { class ReaderBase; }

#define MX_GAMEDATA_REPOSITORY_CUSTOMMEMORYPACKFILEREPOSITORY_LOAD_OFFSET UNITYSDK_OFFSET(0x17F3D70)
#define MX_GAMEDATA_REPOSITORY_CUSTOMMEMORYPACKFILEREPOSITORY_TRYGETVALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_GAMEDATA_REPOSITORY_CUSTOMMEMORYPACKFILEREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x17F3F10)
#define MX_GAMEDATA_REPOSITORY_CUSTOMMEMORYPACKFILEREPOSITORY_ENUMERATEALL_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_GAMEDATA_REPOSITORY_CUSTOMMEMORYPACKFILEREPOSITORY_TRYGETREPOSITORY_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_GAMEDATA_REPOSITORY_CUSTOMMEMORYPACKFILEREPOSITORY_REGISTERREADER_OFFSET UNITYSDK_OFFSET(0x17F4030)
#define MX_GAMEDATA_REPOSITORY_CUSTOMMEMORYPACKFILEREPOSITORY_GETVALUEORDEFAULT_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MX::GameData::Repository
{
	inline static constexpr unsigned int CustomMemoryPackFileRepository_TypeDefinitionIndex = 15622;

	class CustomMemoryPackFileRepository : public Il2CppObject
	{
	public:
		Il2CppObject* _dictionary; // 0x10

		::System::Void Load(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_CUSTOMMEMORYPACKFILEREPOSITORY_LOAD_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetValue(Il2CppObject* arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_CUSTOMMEMORYPACKFILEREPOSITORY_TRYGETVALUE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_CUSTOMMEMORYPACKFILEREPOSITORY_.CTOR_OFFSET))(arg, nullptr);
		}

		Il2CppObject* EnumerateAll()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_CUSTOMMEMORYPACKFILEREPOSITORY_ENUMERATEALL_OFFSET))(nullptr);
		}

		::System::Boolean TryGetRepository(Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_CUSTOMMEMORYPACKFILEREPOSITORY_TRYGETREPOSITORY_OFFSET))(arg, nullptr);
		}

		::System::Void RegisterReader(::System::Type* arg, ::MX::GameData::Repository::ReaderBase* arg)
		{
			((::System::Void(*)(::System::Type*, ::MX::GameData::Repository::ReaderBase*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_CUSTOMMEMORYPACKFILEREPOSITORY_REGISTERREADER_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* GetValueOrDefault(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_CUSTOMMEMORYPACKFILEREPOSITORY_GETVALUEORDEFAULT_OFFSET))(arg, nullptr);
		}

	};
}

