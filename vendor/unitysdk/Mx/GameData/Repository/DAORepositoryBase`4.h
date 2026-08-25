#pragma once
#include "../../../unitysdk.h"

#define MX_GAMEDATA_REPOSITORY_DAOREPOSITORYBASE`4_ENUMERATEALL_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_GAMEDATA_REPOSITORY_DAOREPOSITORYBASE`4_TRYGETVALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_GAMEDATA_REPOSITORY_DAOREPOSITORYBASE`4_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_GAMEDATA_REPOSITORY_DAOREPOSITORYBASE`4_LOAD_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MX::GameData::Repository
{
	inline static constexpr unsigned int DAORepositoryBase`4_TypeDefinitionIndex = 15626;

	class DAORepositoryBase`4 : public <>c__DisplayClass125_0
	{
	public:
		::System::Collections::IEnumerable* EnumerateAll()
		{
			return (return (::System::Collections::IEnumerable*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_DAOREPOSITORYBASE`4_ENUMERATEALL_OFFSET))(nullptr);
		}

		::System::Boolean TryGetValue(Il2CppObject* arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_DAOREPOSITORYBASE`4_TRYGETVALUE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_DAOREPOSITORYBASE`4_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Load(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_DAOREPOSITORYBASE`4_LOAD_OFFSET))(arg, nullptr);
		}

	};
}

