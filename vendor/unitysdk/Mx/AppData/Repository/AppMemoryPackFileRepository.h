#pragma once
#include "../../../unitysdk.h"

namespace MX::GameData::Repository { class ReaderBase; }

#define MX_APPDATA_REPOSITORY_APPMEMORYPACKFILEREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1CD56E0)
#define MX_APPDATA_REPOSITORY_APPMEMORYPACKFILEREPOSITORY_TRYGETREPOSITORY_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_APPDATA_REPOSITORY_APPMEMORYPACKFILEREPOSITORY_TRYGETVALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_APPDATA_REPOSITORY_APPMEMORYPACKFILEREPOSITORY_LOAD_OFFSET UNITYSDK_OFFSET(0x1CD5880)
#define MX_APPDATA_REPOSITORY_APPMEMORYPACKFILEREPOSITORY_GETVALUEORDEFAULT_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_APPDATA_REPOSITORY_APPMEMORYPACKFILEREPOSITORY_ENUMERATEALL_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_APPDATA_REPOSITORY_APPMEMORYPACKFILEREPOSITORY_REGISTERREADER_OFFSET UNITYSDK_OFFSET(0x1CD57E0)

namespace MX::AppData::Repository
{
	inline static constexpr unsigned int AppMemoryPackFileRepository_TypeDefinitionIndex = 19845;

	class AppMemoryPackFileRepository : public Il2CppObject
	{
	public:
		Il2CppObject* _dictionary; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_APPDATA_REPOSITORY_APPMEMORYPACKFILEREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean TryGetRepository(Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_APPDATA_REPOSITORY_APPMEMORYPACKFILEREPOSITORY_TRYGETREPOSITORY_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetValue(Il2CppObject* arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_APPDATA_REPOSITORY_APPMEMORYPACKFILEREPOSITORY_TRYGETVALUE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Load(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_APPDATA_REPOSITORY_APPMEMORYPACKFILEREPOSITORY_LOAD_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetValueOrDefault(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_APPDATA_REPOSITORY_APPMEMORYPACKFILEREPOSITORY_GETVALUEORDEFAULT_OFFSET))(arg, nullptr);
		}

		Il2CppObject* EnumerateAll()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_APPDATA_REPOSITORY_APPMEMORYPACKFILEREPOSITORY_ENUMERATEALL_OFFSET))(nullptr);
		}

		::System::Void RegisterReader(::System::Type* arg, ::MX::GameData::Repository::ReaderBase* arg)
		{
			((::System::Void(*)(::System::Type*, ::MX::GameData::Repository::ReaderBase*, ::PVOID))((::PBYTE)hIl2Cpp + MX_APPDATA_REPOSITORY_APPMEMORYPACKFILEREPOSITORY_REGISTERREADER_OFFSET))(arg, arg, nullptr);
		}

	};
}

