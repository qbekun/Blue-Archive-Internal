#pragma once
#include "../../../unitysdk.h"

namespace MX::GameData::Repository { class ReaderConfig; }
namespace MX::Data::Excel { class CharacterExcel&; }

#define MX_APPDATA_REPOSITORY_CHARACTEREXCELASSETREADER_LOAD_OFFSET UNITYSDK_OFFSET(0x1CD6430)
#define MX_APPDATA_REPOSITORY_CHARACTEREXCELASSETREADER_TRYGETVALUE_OFFSET UNITYSDK_OFFSET(0x1CD6440)
#define MX_APPDATA_REPOSITORY_CHARACTEREXCELASSETREADER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1CD5180)
#define MX_APPDATA_REPOSITORY_CHARACTEREXCELASSETREADER_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1CD64A0)

namespace MX::AppData::Repository
{
	inline static constexpr unsigned int CharacterExcelAssetReader_TypeDefinitionIndex = 19849;

	class CharacterExcelAssetReader : public <>c__DisplayClass5_0
	{
	public:
		Il2CppObject* _dict; // 0x10
		::MX::GameData::Repository::ReaderConfig* _config; // 0x18

		::System::Int32 Load()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_APPDATA_REPOSITORY_CHARACTEREXCELASSETREADER_LOAD_OFFSET))(nullptr);
		}

		::System::Boolean TryGetValue(::System::Int64 arg, ::MX::Data::Excel::CharacterExcel&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::MX::Data::Excel::CharacterExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_APPDATA_REPOSITORY_CHARACTEREXCELASSETREADER_TRYGETVALUE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::MX::GameData::Repository::ReaderConfig* arg)
		{
			((::System::Void(*)(::MX::GameData::Repository::ReaderConfig*, ::PVOID))((::PBYTE)hIl2Cpp + MX_APPDATA_REPOSITORY_CHARACTEREXCELASSETREADER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_APPDATA_REPOSITORY_CHARACTEREXCELASSETREADER_GETENUMERATOR_OFFSET))(nullptr);
		}

	};
}

