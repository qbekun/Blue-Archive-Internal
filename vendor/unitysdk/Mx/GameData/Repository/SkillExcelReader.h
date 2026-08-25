#pragma once
#include "../../../unitysdk.h"

namespace MX::GameData::Repository { class ReaderConfig; }
namespace MX::Data::Excel { class SkillExcel&; }

#define MX_GAMEDATA_REPOSITORY_SKILLEXCELREADER_LOAD_OFFSET UNITYSDK_OFFSET(0x17F8600)
#define MX_GAMEDATA_REPOSITORY_SKILLEXCELREADER_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x17F8610)
#define MX_GAMEDATA_REPOSITORY_SKILLEXCELREADER_.CTOR_OFFSET UNITYSDK_OFFSET(0x17F86B0)
#define MX_GAMEDATA_REPOSITORY_SKILLEXCELREADER_TRYGETVALUE_OFFSET UNITYSDK_OFFSET(0x17F8760)

namespace MX::GameData::Repository
{
	inline static constexpr unsigned int SkillExcelReader_TypeDefinitionIndex = 15644;

	class SkillExcelReader : public <>c__DisplayClass6_0
	{
	public:
		Il2CppObject* _dict; // 0x10
		::MX::GameData::Repository::ReaderConfig* _config; // 0x18

		::System::Int32 Load()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_SKILLEXCELREADER_LOAD_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_SKILLEXCELREADER_GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::GameData::Repository::ReaderConfig* arg)
		{
			((::System::Void(*)(::MX::GameData::Repository::ReaderConfig*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_SKILLEXCELREADER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetValue(Il2CppObject* arg, ::MX::Data::Excel::SkillExcel&* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::MX::Data::Excel::SkillExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_SKILLEXCELREADER_TRYGETVALUE_OFFSET))(arg, arg, nullptr);
		}

	};
}

