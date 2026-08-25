#pragma once
#include "../../../unitysdk.h"

#define MX_GAMEDATA_REPOSITORY_IREPOSITORY_LOAD_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_GAMEDATA_REPOSITORY_IREPOSITORY_ENUMERATEALL_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MX::GameData::Repository
{
	inline static constexpr unsigned int IRepository_TypeDefinitionIndex = 15625;

	class IRepository : public Il2CppObject
	{
	public:
		::System::Void Load(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_IREPOSITORY_LOAD_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerable* EnumerateAll()
		{
			return (return (::System::Collections::IEnumerable*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_IREPOSITORY_ENUMERATEALL_OFFSET))(nullptr);
		}

	};
}

