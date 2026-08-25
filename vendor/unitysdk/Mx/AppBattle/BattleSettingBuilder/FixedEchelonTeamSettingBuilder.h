#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class EchelonExtensionType; }
namespace MX::Logic::Data { class TeamSetting; }
namespace MX::Data::Excel { class GroundExcel; }

#define MX_APPBATTLE_BATTLESETTINGBUILDER_FIXEDECHELONTEAMSETTINGBUILDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D2EE80)
#define MX_APPBATTLE_BATTLESETTINGBUILDER_FIXEDECHELONTEAMSETTINGBUILDER_BUILD_OFFSET UNITYSDK_OFFSET(0x1D34260)
#define MX_APPBATTLE_BATTLESETTINGBUILDER_FIXEDECHELONTEAMSETTINGBUILDER_GET_FIXEDECHELONID_OFFSET UNITYSDK_OFFSET(0x1D34790)

namespace MX::AppBattle::BattleSettingBuilder
{
	inline static constexpr unsigned int FixedEchelonTeamSettingBuilder_TypeDefinitionIndex = 20084;

	class FixedEchelonTeamSettingBuilder : public Il2CppObject
	{
	public:
		::System::Int64 fixedEchelonId; // 0x10
		::System::Int32 echelonNumber; // 0x18
		::FlatData::EchelonExtensionType* echelonExtensionType; // 0x1C

		::System::Void .ctor(::System::Int64 arg, ::System::Int32 arg, ::FlatData::EchelonExtensionType* arg)
		{
			((::System::Void(*)(::System::Int64, ::System::Int32, ::FlatData::EchelonExtensionType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_APPBATTLE_BATTLESETTINGBUILDER_FIXEDECHELONTEAMSETTINGBUILDER_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::MX::Logic::Data::TeamSetting* Build(::MX::Data::Excel::GroundExcel* arg)
		{
			return (return (::MX::Logic::Data::TeamSetting*(*)(::MX::Data::Excel::GroundExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_APPBATTLE_BATTLESETTINGBUILDER_FIXEDECHELONTEAMSETTINGBUILDER_BUILD_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_FixedEchelonId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_APPBATTLE_BATTLESETTINGBUILDER_FIXEDECHELONTEAMSETTINGBUILDER_GET_FIXEDECHELONID_OFFSET))(nullptr);
		}

	};
}

