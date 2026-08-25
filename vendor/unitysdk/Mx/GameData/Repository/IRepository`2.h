#pragma once
#include "../../../unitysdk.h"

#define MX_GAMEDATA_REPOSITORY_IREPOSITORY`2_TRYGETVALUE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MX::GameData::Repository
{
	inline static constexpr unsigned int IRepository`2_TypeDefinitionIndex = 15624;

	class IRepository`2 : public Il2CppObject
	{
	public:
		::System::Boolean TryGetValue(Il2CppObject* arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_IREPOSITORY`2_TRYGETVALUE_OFFSET))(arg, arg, nullptr);
		}

	};
}

