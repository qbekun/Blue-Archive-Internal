#pragma once
#include "../../../unitysdk.h"

#define MX_GAMEDATA_REPOSITORY_READERBASE_.CTOR_OFFSET UNITYSDK_OFFSET(0x17F9CE0)
#define MX_GAMEDATA_REPOSITORY_READERBASE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_GAMEDATA_REPOSITORY_READERBASE_LOAD_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_GAMEDATA_REPOSITORY_READERBASE_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MX::GameData::Repository
{
	inline static constexpr unsigned int ReaderBase_TypeDefinitionIndex = 15662;

	class ReaderBase : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_READERBASE_.CTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_READERBASE_GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Int32 Load()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_READERBASE_LOAD_OFFSET))(nullptr);
		}

		::System::Type* get_Type()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_READERBASE_GET_TYPE_OFFSET))(nullptr);
		}

	};
}

