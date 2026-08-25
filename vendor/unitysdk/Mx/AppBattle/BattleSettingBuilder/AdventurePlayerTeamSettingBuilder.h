#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class EchelonExtensionType; }
namespace MX::Logic::Data { class TeamSetting; }
namespace MX::Data::Excel { class GroundExcel; }

#define MX_APPBATTLE_BATTLESETTINGBUILDER_ADVENTUREPLAYERTEAMSETTINGBUILDER_GET_TEAMID_OFFSET UNITYSDK_OFFSET(0x1D32C30)
#define MX_APPBATTLE_BATTLESETTINGBUILDER_ADVENTUREPLAYERTEAMSETTINGBUILDER_GET_ISFIXEDECHELON_OFFSET UNITYSDK_OFFSET(0x1D32C40)
#define MX_APPBATTLE_BATTLESETTINGBUILDER_ADVENTUREPLAYERTEAMSETTINGBUILDER_GET_ECHELONOBJECT_OFFSET UNITYSDK_OFFSET(0x1D32C50)
#define MX_APPBATTLE_BATTLESETTINGBUILDER_ADVENTUREPLAYERTEAMSETTINGBUILDER_GET_FIXEDECHELONID_OFFSET UNITYSDK_OFFSET(0x1D32C60)
#define MX_APPBATTLE_BATTLESETTINGBUILDER_ADVENTUREPLAYERTEAMSETTINGBUILDER_BUILD_OFFSET UNITYSDK_OFFSET(0x1D32C70)
#define MX_APPBATTLE_BATTLESETTINGBUILDER_ADVENTUREPLAYERTEAMSETTINGBUILDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D2CE80)
#define MX_APPBATTLE_BATTLESETTINGBUILDER_ADVENTUREPLAYERTEAMSETTINGBUILDER_GET_HPINFOS_OFFSET UNITYSDK_OFFSET(0x1D33250)
#define MX_APPBATTLE_BATTLESETTINGBUILDER_ADVENTUREPLAYERTEAMSETTINGBUILDER_GET_EXTENSIONTYPE_OFFSET UNITYSDK_OFFSET(0x1D33260)

namespace MX::AppBattle::BattleSettingBuilder
{
	inline static constexpr unsigned int AdventurePlayerTeamSettingBuilder_TypeDefinitionIndex = 20081;

	class AdventurePlayerTeamSettingBuilder : public Il2CppObject
	{
	public:
		EchelonObject* _echelonObject_k__BackingField; // 0x10
		::System::Int64 _teamId_k__BackingField; // 0x18
		Il2CppObject* _hpInfos_k__BackingField; // 0x20
		::FlatData::EchelonExtensionType* _extensionType_k__BackingField; // 0x28
		::System::Boolean _isFixedEchelon_k__BackingField; // 0x2C

		::System::Int64 get_teamId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_APPBATTLE_BATTLESETTINGBUILDER_ADVENTUREPLAYERTEAMSETTINGBUILDER_GET_TEAMID_OFFSET))(nullptr);
		}

		::System::Boolean get_isFixedEchelon()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_APPBATTLE_BATTLESETTINGBUILDER_ADVENTUREPLAYERTEAMSETTINGBUILDER_GET_ISFIXEDECHELON_OFFSET))(nullptr);
		}

		EchelonObject* get_echelonObject()
		{
			return (return (EchelonObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_APPBATTLE_BATTLESETTINGBUILDER_ADVENTUREPLAYERTEAMSETTINGBUILDER_GET_ECHELONOBJECT_OFFSET))(nullptr);
		}

		::System::Int64 get_FixedEchelonId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_APPBATTLE_BATTLESETTINGBUILDER_ADVENTUREPLAYERTEAMSETTINGBUILDER_GET_FIXEDECHELONID_OFFSET))(nullptr);
		}

		::MX::Logic::Data::TeamSetting* Build(::MX::Data::Excel::GroundExcel* arg)
		{
			return (return (::MX::Logic::Data::TeamSetting*(*)(::MX::Data::Excel::GroundExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_APPBATTLE_BATTLESETTINGBUILDER_ADVENTUREPLAYERTEAMSETTINGBUILDER_BUILD_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(EchelonObject* arg, ::System::Int64 arg, Il2CppObject* arg, ::FlatData::EchelonExtensionType* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(EchelonObject*, ::System::Int64, Il2CppObject*, ::FlatData::EchelonExtensionType*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_APPBATTLE_BATTLESETTINGBUILDER_ADVENTUREPLAYERTEAMSETTINGBUILDER_.CTOR_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		Il2CppObject* get_hpInfos()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_APPBATTLE_BATTLESETTINGBUILDER_ADVENTUREPLAYERTEAMSETTINGBUILDER_GET_HPINFOS_OFFSET))(nullptr);
		}

		::FlatData::EchelonExtensionType* get_extensionType()
		{
			return (return (::FlatData::EchelonExtensionType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_APPBATTLE_BATTLESETTINGBUILDER_ADVENTUREPLAYERTEAMSETTINGBUILDER_GET_EXTENSIONTYPE_OFFSET))(nullptr);
		}

	};
}

