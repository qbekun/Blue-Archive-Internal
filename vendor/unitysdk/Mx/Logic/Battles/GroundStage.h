#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Battles { class GroundGlobal; }
namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::Battles { class GroundFormation; }
namespace MX::Logic::Battles { class GroundSection; }

#define MX_LOGIC_BATTLES_GROUNDSTAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x136FB70)
#define MX_LOGIC_BATTLES_GROUNDSTAGE_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x136FBF0)
#define MX_LOGIC_BATTLES_GROUNDSTAGE_GETFORMATIONBYSECTIONINDEX_OFFSET UNITYSDK_OFFSET(0x136FCA0)
#define MX_LOGIC_BATTLES_GROUNDSTAGE_STARTFORMATION_OFFSET UNITYSDK_OFFSET(0x136FE70)
#define MX_LOGIC_BATTLES_GROUNDSTAGE_GETSECTION_OFFSET UNITYSDK_OFFSET(0x136FEC0)
#define MX_LOGIC_BATTLES_GROUNDSTAGE_GET_CURMAPSECTION_OFFSET UNITYSDK_OFFSET(0x136FF90)
#define MX_LOGIC_BATTLES_GROUNDSTAGE_START_OFFSET UNITYSDK_OFFSET(0x136FFA0)
#define MX_LOGIC_BATTLES_GROUNDSTAGE_SECTIONSTART_OFFSET UNITYSDK_OFFSET(0x136FFC0)
#define MX_LOGIC_BATTLES_GROUNDSTAGE_GETGROUNDFORMATIONS_OFFSET UNITYSDK_OFFSET(0x1370030)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int GroundStage_TypeDefinitionIndex = 14367;

	class GroundStage : public Il2CppObject
	{
	public:
		::System::String* GridVersion; // 0x10
		::MX::Logic::Battles::GroundGlobal* Global; // 0x18
		Il2CppObject* Sections; // 0x20
		Il2CppObject* Formations; // 0x28
		Il2CppObject* EnemyFormations; // 0x30
		Il2CppObject* TemporaryCanUseSkillAreas; // 0x38
		::System::Int32 CurSectionID; // 0x40
		::MX::Logic::Battles::Battle* battle; // 0x48

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDSTAGE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Initialize(::MX::Logic::Battles::Battle* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDSTAGE_INITIALIZE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetFormationBySectionIndex(::System::Int32 arg, Il2CppObject* arg2)
		{
			return ((Il2CppObject*(*)(::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDSTAGE_GETFORMATIONBYSECTIONINDEX_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Logic::Battles::GroundFormation* StartFormation(Il2CppObject* arg)
		{
			return ((::MX::Logic::Battles::GroundFormation*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDSTAGE_STARTFORMATION_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Battles::GroundSection* GetSection(::System::Int32 arg)
		{
			return ((::MX::Logic::Battles::GroundSection*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDSTAGE_GETSECTION_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Battles::GroundSection* get_CurMapSection()
		{
			return ((::MX::Logic::Battles::GroundSection*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDSTAGE_GET_CURMAPSECTION_OFFSET))(nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDSTAGE_START_OFFSET))(nullptr);
		}

		::System::Void SectionStart(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDSTAGE_SECTIONSTART_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetGroundFormations(::System::Boolean arg)
		{
			return ((Il2CppObject*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_GROUNDSTAGE_GETGROUNDFORMATIONS_OFFSET))(arg, nullptr);
		}

	};
}

