#pragma once
#include "../../../unitysdk.h"

#define MX_GAMEDATA_REPOSITORY_IREPOSITORYGROUP_TRYGETVALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_GAMEDATA_REPOSITORY_IREPOSITORYGROUP_GETVALUEORDEFAULT_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_GAMEDATA_REPOSITORY_IREPOSITORYGROUP_LOAD_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_GAMEDATA_REPOSITORY_IREPOSITORYGROUP_TRYGETREPOSITORY_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_GAMEDATA_REPOSITORY_IREPOSITORYGROUP_ENUMERATEALL_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MX::GameData::Repository
{
	inline static constexpr unsigned int IRepositoryGroup_TypeDefinitionIndex = 15648;

	class IRepositoryGroup : public Il2CppObject
	{
	public:
		::System::Boolean TryGetValue(Il2CppObject* arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_IREPOSITORYGROUP_TRYGETVALUE_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* GetValueOrDefault(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_IREPOSITORYGROUP_GETVALUEORDEFAULT_OFFSET))(arg, nullptr);
		}

		::System::Void Load(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_IREPOSITORYGROUP_LOAD_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetRepository(Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_IREPOSITORYGROUP_TRYGETREPOSITORY_OFFSET))(arg, nullptr);
		}

		Il2CppObject* EnumerateAll()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_IREPOSITORYGROUP_ENUMERATEALL_OFFSET))(nullptr);
		}

	};
}

