#pragma once
#include "../../../unitysdk.h"

class CafeAllowCopyPreset;
namespace FlatData { class ScenarioModeSubTypes; }
namespace MX::GameLogic::DBModel { class OptionDB; }

#define MX_GAMELOGIC_DBMODEL_OPTIONDB_SET_ARENAISANONYMOUS_OFFSET UNITYSDK_OFFSET(0x10059D0)
#define MX_GAMELOGIC_DBMODEL_OPTIONDB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x10059E0)
#define MX_GAMELOGIC_DBMODEL_OPTIONDB_ISVALID_OFFSET UNITYSDK_OFFSET(0x1005AA0)
#define MX_GAMELOGIC_DBMODEL_OPTIONDB_GET_CAFEALLOWCOPY_OFFSET UNITYSDK_OFFSET(0x1005C60)
#define MX_GAMELOGIC_DBMODEL_OPTIONDB_.CTOR_OFFSET UNITYSDK_OFFSET(0x1005C70)
#define MX_GAMELOGIC_DBMODEL_OPTIONDB_ISACCESSIBLESCENARIO_OFFSET UNITYSDK_OFFSET(0x1005C80)
#define MX_GAMELOGIC_DBMODEL_OPTIONDB_SET_CAFEALLOWCOPY_OFFSET UNITYSDK_OFFSET(0x1005C90)
#define MX_GAMELOGIC_DBMODEL_OPTIONDB_GET_ARENAISANONYMOUS_OFFSET UNITYSDK_OFFSET(0x1005CA0)
#define MX_GAMELOGIC_DBMODEL_OPTIONDB_SET_MAINSCENARIOFORCEENTERSERIESID_OFFSET UNITYSDK_OFFSET(0x1005CB0)
#define MX_GAMELOGIC_DBMODEL_OPTIONDB_GET_MAINSCENARIOFORCEENTERSERIESID_OFFSET UNITYSDK_OFFSET(0x1005CC0)
#define MX_GAMELOGIC_DBMODEL_OPTIONDB__ISVALID_B__13_1_OFFSET UNITYSDK_OFFSET(0x1005CD0)
#define MX_GAMELOGIC_DBMODEL_OPTIONDB_ISCHANGED_OFFSET UNITYSDK_OFFSET(0x1005CE0)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int OptionDB_TypeDefinitionIndex = 12673;

	class OptionDB : public Il2CppObject
	{
	public:
		::System::Boolean _ArenaIsAnonymous_k__BackingField; // 0x10
		CafeAllowCopyPreset* _CafeAllowCopy_k__BackingField; // 0x14
		::System::Int32 _MainScenarioForceEnterSeriesId_k__BackingField; // 0x18

		::System::Void set_ArenaIsAnonymous(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_OPTIONDB_SET_ARENAISANONYMOUS_OFFSET))(arg, nullptr);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_OPTIONDB_TOSTRING_OFFSET))(nullptr);
		}

		::System::Boolean IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_OPTIONDB_ISVALID_OFFSET))(nullptr);
		}

		CafeAllowCopyPreset* get_CafeAllowCopy()
		{
			return ((CafeAllowCopyPreset*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_OPTIONDB_GET_CAFEALLOWCOPY_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_OPTIONDB_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean IsAccessibleScenario(::FlatData::ScenarioModeSubTypes* arg)
		{
			return ((::System::Boolean(*)(::FlatData::ScenarioModeSubTypes*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_OPTIONDB_ISACCESSIBLESCENARIO_OFFSET))(arg, nullptr);
		}

		::System::Void set_CafeAllowCopy(CafeAllowCopyPreset* arg)
		{
			((::System::Void(*)(CafeAllowCopyPreset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_OPTIONDB_SET_CAFEALLOWCOPY_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_ArenaIsAnonymous()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_OPTIONDB_GET_ARENAISANONYMOUS_OFFSET))(nullptr);
		}

		::System::Void set_MainScenarioForceEnterSeriesId(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_OPTIONDB_SET_MAINSCENARIOFORCEENTERSERIESID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_MainScenarioForceEnterSeriesId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_OPTIONDB_GET_MAINSCENARIOFORCEENTERSERIESID_OFFSET))(nullptr);
		}

		::System::Boolean _IsValid_b__13_1(::System::Int32 arg)
		{
			return ((::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_OPTIONDB__ISVALID_B__13_1_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsChanged(::MX::GameLogic::DBModel::OptionDB* arg)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::OptionDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_OPTIONDB_ISCHANGED_OFFSET))(arg, nullptr);
		}

	};
}

