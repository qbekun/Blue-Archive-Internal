#pragma once
#include "../../unitysdk.h"

#define MX_SAVEDATA_SAVEDATAREPOSITORY`2_SAVE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_SAVEDATA_SAVEDATAREPOSITORY`2_CONTAINS_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_SAVEDATA_SAVEDATAREPOSITORY`2_LOAD_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_SAVEDATA_SAVEDATAREPOSITORY`2_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_SAVEDATA_SAVEDATAREPOSITORY`2_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_SAVEDATA_SAVEDATAREPOSITORY`2_GETPATH_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_SAVEDATA_SAVEDATAREPOSITORY`2_CLONE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_SAVEDATA_SAVEDATAREPOSITORY`2_GET_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MX::SaveData
{
	inline static constexpr unsigned int SaveDataRepository`2_TypeDefinitionIndex = 20052;

	class SaveDataRepository`2 : public ::ToyWebViewShared::Messages::ExecuteNativeMethod
	{
	public:
		Il2CppObject* SaveDataTable; // 0x0

		::System::Void Save(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_SAVEDATAREPOSITORY`2_SAVE_OFFSET))(arg, nullptr);
		}

		::System::Boolean Contains()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_SAVEDATAREPOSITORY`2_CONTAINS_OFFSET))(nullptr);
		}

		::System::Void Load()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_SAVEDATAREPOSITORY`2_LOAD_OFFSET))(nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_SAVEDATAREPOSITORY`2_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_SAVEDATAREPOSITORY`2_.CTOR_OFFSET))(nullptr);
		}

		::System::String* GetPath(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_SAVEDATAREPOSITORY`2_GETPATH_OFFSET))(str, nullptr);
		}

		Il2CppObject* Clone()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_SAVEDATAREPOSITORY`2_CLONE_OFFSET))(nullptr);
		}

		Il2CppObject* Get()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_SAVEDATAREPOSITORY`2_GET_OFFSET))(nullptr);
		}

	};
}

