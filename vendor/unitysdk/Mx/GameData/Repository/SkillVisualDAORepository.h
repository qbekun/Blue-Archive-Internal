#pragma once
#include "../../../unitysdk.h"

namespace MX::AppData::DAO::Battle { class SkillVisualDAO&; }
namespace MX::AppData::DAO::Battle { class SkillVisualDAO; }
namespace MX::GameData::Repository { class SkillVisualEffectDataDBSchema; }

#define MX_GAMEDATA_REPOSITORY_SKILLVISUALDAOREPOSITORY_TRYGETVALUE_OFFSET UNITYSDK_OFFSET(0x17F1A70)
#define MX_GAMEDATA_REPOSITORY_SKILLVISUALDAOREPOSITORY_INITIALIZEINTERNAL_OFFSET UNITYSDK_OFFSET(0x17F1E30)
#define MX_GAMEDATA_REPOSITORY_SKILLVISUALDAOREPOSITORY_PARSE_OFFSET UNITYSDK_OFFSET(0x17F1E40)
#define MX_GAMEDATA_REPOSITORY_SKILLVISUALDAOREPOSITORY_TRYGETSKILLVISUALDATA_OFFSET UNITYSDK_OFFSET(0x17F1AB0)
#define MX_GAMEDATA_REPOSITORY_SKILLVISUALDAOREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x17F1ED0)
#define MX_GAMEDATA_REPOSITORY_SKILLVISUALDAOREPOSITORY_CLEAR_OFFSET UNITYSDK_OFFSET(0x17F2040)
#define MX_GAMEDATA_REPOSITORY_SKILLVISUALDAOREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x17F2050)

namespace MX::GameData::Repository
{
	inline static constexpr unsigned int SkillVisualDAORepository_TypeDefinitionIndex = 15617;

	class SkillVisualDAORepository : public ::Assets::_MX::Program::Scripts::Network::NetworkSender
	{
	public:
		Il2CppObject* lruCache; // 0x30

		::System::Boolean TryGetValue(::System::String* str, ::MX::AppData::DAO::Battle::SkillVisualDAO&* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::MX::AppData::DAO::Battle::SkillVisualDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_SKILLVISUALDAOREPOSITORY_TRYGETVALUE_OFFSET))(str, arg, nullptr);
		}

		::System::Void InitializeInternal()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_SKILLVISUALDAOREPOSITORY_INITIALIZEINTERNAL_OFFSET))(nullptr);
		}

		::MX::AppData::DAO::Battle::SkillVisualDAO* Parse(::MX::GameData::Repository::SkillVisualEffectDataDBSchema* arg)
		{
			return (return (::MX::AppData::DAO::Battle::SkillVisualDAO*(*)(::MX::GameData::Repository::SkillVisualEffectDataDBSchema*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_SKILLVISUALDAOREPOSITORY_PARSE_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetSkillVisualData(::System::String* str, ::MX::AppData::DAO::Battle::SkillVisualDAO&* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::MX::AppData::DAO::Battle::SkillVisualDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_SKILLVISUALDAOREPOSITORY_TRYGETSKILLVISUALDATA_OFFSET))(str, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_SKILLVISUALDAOREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_SKILLVISUALDAOREPOSITORY_CLEAR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_SKILLVISUALDAOREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

	};
}

