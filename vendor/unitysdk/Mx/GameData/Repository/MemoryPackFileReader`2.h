#pragma once
#include "../../../unitysdk.h"

#define MX_GAMEDATA_REPOSITORY_MEMORYPACKFILEREADER`2_TRYGETVALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_GAMEDATA_REPOSITORY_MEMORYPACKFILEREADER`2_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_GAMEDATA_REPOSITORY_MEMORYPACKFILEREADER`2_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MX::GameData::Repository
{
	inline static constexpr unsigned int MemoryPackFileReader`2_TypeDefinitionIndex = 15653;

	class MemoryPackFileReader`2 : public Il2CppObject
	{
	public:
		::System::Boolean TryGetValue(Il2CppObject* arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_MEMORYPACKFILEREADER`2_TRYGETVALUE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_MEMORYPACKFILEREADER`2_.CTOR_OFFSET))(nullptr);
		}

		::System::Type* get_Type()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_MEMORYPACKFILEREADER`2_GET_TYPE_OFFSET))(nullptr);
		}

	};
}

