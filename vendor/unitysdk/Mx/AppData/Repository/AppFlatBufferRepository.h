#pragma once
#include "../../../unitysdk.h"

#define MX_APPDATA_REPOSITORY_APPFLATBUFFERREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1CD4E60)
#define MX_APPDATA_REPOSITORY_APPFLATBUFFERREPOSITORY_TRYGETREPOSITORY_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_APPDATA_REPOSITORY_APPFLATBUFFERREPOSITORY_LOAD_OFFSET UNITYSDK_OFFSET(0x1CD5230)
#define MX_APPDATA_REPOSITORY_APPFLATBUFFERREPOSITORY_TRYGETVALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_APPDATA_REPOSITORY_APPFLATBUFFERREPOSITORY_GETVALUEORDEFAULT_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_APPDATA_REPOSITORY_APPFLATBUFFERREPOSITORY_ENUMERATEALL_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MX::AppData::Repository
{
	inline static constexpr unsigned int AppFlatBufferRepository_TypeDefinitionIndex = 19843;

	class AppFlatBufferRepository : public Il2CppObject
	{
	public:
		Il2CppObject* _dictionary; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_APPDATA_REPOSITORY_APPFLATBUFFERREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean TryGetRepository(Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_APPDATA_REPOSITORY_APPFLATBUFFERREPOSITORY_TRYGETREPOSITORY_OFFSET))(arg, nullptr);
		}

		::System::Void Load(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_APPDATA_REPOSITORY_APPFLATBUFFERREPOSITORY_LOAD_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetValue(Il2CppObject* arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_APPDATA_REPOSITORY_APPFLATBUFFERREPOSITORY_TRYGETVALUE_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* GetValueOrDefault(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_APPDATA_REPOSITORY_APPFLATBUFFERREPOSITORY_GETVALUEORDEFAULT_OFFSET))(arg, nullptr);
		}

		Il2CppObject* EnumerateAll()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_APPDATA_REPOSITORY_APPFLATBUFFERREPOSITORY_ENUMERATEALL_OFFSET))(nullptr);
		}

	};
}

