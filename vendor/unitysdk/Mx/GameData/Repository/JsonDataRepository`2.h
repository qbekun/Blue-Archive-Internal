#pragma once
#include "../../../unitysdk.h"

#define MX_GAMEDATA_REPOSITORY_JSONDATAREPOSITORY`2_GET_HASVALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_GAMEDATA_REPOSITORY_JSONDATAREPOSITORY`2_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_GAMEDATA_REPOSITORY_JSONDATAREPOSITORY`2_LOAD_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_GAMEDATA_REPOSITORY_JSONDATAREPOSITORY`2_ADD_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_GAMEDATA_REPOSITORY_JSONDATAREPOSITORY`2_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_GAMEDATA_REPOSITORY_JSONDATAREPOSITORY`2_FIND_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_GAMEDATA_REPOSITORY_JSONDATAREPOSITORY`2_CLEAR_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MX::GameData::Repository
{
	inline static constexpr unsigned int JsonDataRepository`2_TypeDefinitionIndex = 15666;

	class JsonDataRepository`2 : public Il2CppObject
	{
	public:
		Il2CppObject* dataTable; // 0x0
		::System::Boolean IsLoaded; // 0x0
		::System::String* Text; // 0x0
		::System::String* FileName; // 0x0

		::System::Boolean get_HasValue()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_JSONDATAREPOSITORY`2_GET_HASVALUE_OFFSET))(nullptr);
		}

		::System::Int32 get_Count()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_JSONDATAREPOSITORY`2_GET_COUNT_OFFSET))(nullptr);
		}

		::System::Boolean Load(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_JSONDATAREPOSITORY`2_LOAD_OFFSET))(str, nullptr);
		}

		::System::Void Add(Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_JSONDATAREPOSITORY`2_ADD_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_JSONDATAREPOSITORY`2_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* Find(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_JSONDATAREPOSITORY`2_FIND_OFFSET))(arg, nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_JSONDATAREPOSITORY`2_CLEAR_OFFSET))(nullptr);
		}

	};
}

