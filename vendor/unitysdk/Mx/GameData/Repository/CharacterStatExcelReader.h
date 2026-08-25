#pragma once
#include "../../../unitysdk.h"

namespace MX::GameData::Repository { class ReaderConfig; }
namespace MX::Data::Excel { class CharacterStatExcel&; }

#define MX_GAMEDATA_REPOSITORY_CHARACTERSTATEXCELREADER_.CTOR_OFFSET UNITYSDK_OFFSET(0x17F8440)
#define MX_GAMEDATA_REPOSITORY_CHARACTERSTATEXCELREADER_TRYGETVALUE_OFFSET UNITYSDK_OFFSET(0x17F84F0)
#define MX_GAMEDATA_REPOSITORY_CHARACTERSTATEXCELREADER_LOAD_OFFSET UNITYSDK_OFFSET(0x17F8550)
#define MX_GAMEDATA_REPOSITORY_CHARACTERSTATEXCELREADER_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x17F8560)

namespace MX::GameData::Repository
{
	inline static constexpr unsigned int CharacterStatExcelReader_TypeDefinitionIndex = 15643;

	class CharacterStatExcelReader : public <>c__DisplayClass12_0
	{
	public:
		Il2CppObject* _dict; // 0x10
		::MX::GameData::Repository::ReaderConfig* _config; // 0x18

		::System::Void .ctor(::MX::GameData::Repository::ReaderConfig* arg)
		{
			((::System::Void(*)(::MX::GameData::Repository::ReaderConfig*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_CHARACTERSTATEXCELREADER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetValue(::System::Int64 arg, ::MX::Data::Excel::CharacterStatExcel&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::MX::Data::Excel::CharacterStatExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_CHARACTERSTATEXCELREADER_TRYGETVALUE_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 Load()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_CHARACTERSTATEXCELREADER_LOAD_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_CHARACTERSTATEXCELREADER_GETENUMERATOR_OFFSET))(nullptr);
		}

	};
}

