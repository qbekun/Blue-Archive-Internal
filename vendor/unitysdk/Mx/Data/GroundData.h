#pragma once
#include "../../unitysdk.h"

namespace FlatData { class TacticEntityType; }
namespace UnityEngine { class Vector3; }
namespace MX::Data::Excel { class GroundExcel&; }
namespace MX::Data::Excel { class GroundExcel; }
namespace FlatData { class ShowSkillCutIn&; }
namespace FlatData { class ObstacleCoverType; }

#define MX_DATA_GROUNDDATA_PREPAREINITIALDATA_OFFSET UNITYSDK_OFFSET(0x18DFE00)
#define MX_DATA_GROUNDDATA_GETCHARACTERLEVEL_OFFSET UNITYSDK_OFFSET(0x18E0920)
#define MX_DATA_GROUNDDATA_INITIALIZECOMMON_OFFSET UNITYSDK_OFFSET(0x18E0A00)
#define MX_DATA_GROUNDDATA_GETEMOJISCALE_OFFSET UNITYSDK_OFFSET(0x18E0AA0)
#define MX_DATA_GROUNDDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x18E0C50)
#define MX_DATA_GROUNDDATA_GET_GROUNDIDS_OFFSET UNITYSDK_OFFSET(0x18E0D50)
#define MX_DATA_GROUNDDATA_GETSKILLLOGSCALE_OFFSET UNITYSDK_OFFSET(0x18E0E90)
#define MX_DATA_GROUNDDATA_TRYGETMODULEREWARD_OFFSET UNITYSDK_OFFSET(0x18E0FE0)
#define MX_DATA_GROUNDDATA_TRYGETVALUE_OFFSET UNITYSDK_OFFSET(0x18E0BF0)
#define MX_DATA_GROUNDDATA_GET_OFFSET UNITYSDK_OFFSET(0x18E1050)
#define MX_DATA_GROUNDDATA_TRYGETSHOWNPCSKILLCUTIN_OFFSET UNITYSDK_OFFSET(0x18E10B0)
#define MX_DATA_GROUNDDATA_GETHPBARSCALE_OFFSET UNITYSDK_OFFSET(0x18E1130)
#define MX_DATA_GROUNDDATA_GETOBSTACLELEVEL_OFFSET UNITYSDK_OFFSET(0x18E1280)
#define MX_DATA_GROUNDDATA_GETCHARACTERGRADE_OFFSET UNITYSDK_OFFSET(0x18E12F0)
#define MX_DATA_GROUNDDATA_GROUNDEXCELENUMERATOR_OFFSET UNITYSDK_OFFSET(0x18E13D0)

namespace MX::Data
{
	inline static constexpr unsigned int GroundData_TypeDefinitionIndex = 16141;

	class GroundData : public Il2CppObject
	{
	public:
		Il2CppObject* dic; // 0x28
		Il2CppObject* moduleRewards; // 0x30
		Il2CppObject* displayedModuleRewards; // 0x38

		::System::Void PrepareInitialData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GROUNDDATA_PREPAREINITIALDATA_OFFSET))(nullptr);
		}

		::System::Int64 GetCharacterLevel(::System::Int64 arg, ::FlatData::TacticEntityType* arg, ::System::Boolean arg)
		{
			return (return (::System::Int64(*)(::System::Int64, ::FlatData::TacticEntityType*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GROUNDDATA_GETCHARACTERLEVEL_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void InitializeCommon()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GROUNDDATA_INITIALIZECOMMON_OFFSET))(nullptr);
		}

		::UnityEngine::Vector3* GetEmojiScale(::System::Int64 arg)
		{
			return (return (::UnityEngine::Vector3*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GROUNDDATA_GETEMOJISCALE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GROUNDDATA_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* get_GroundIds()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GROUNDDATA_GET_GROUNDIDS_OFFSET))(nullptr);
		}

		::UnityEngine::Vector3* GetSkillLogScale(::System::Int64 arg)
		{
			return (return (::UnityEngine::Vector3*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GROUNDDATA_GETSKILLLOGSCALE_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetModuleReward(::System::String* str, Il2CppObject&* arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::System::String*, Il2CppObject&*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GROUNDDATA_TRYGETMODULEREWARD_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Boolean TryGetValue(::System::Int64 arg, ::MX::Data::Excel::GroundExcel&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::MX::Data::Excel::GroundExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GROUNDDATA_TRYGETVALUE_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::GroundExcel* Get(::System::Int64 arg)
		{
			return (return (::MX::Data::Excel::GroundExcel*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GROUNDDATA_GET_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetShowNPCSKillCutIn(::System::Int64 arg, ::FlatData::ShowSkillCutIn&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::FlatData::ShowSkillCutIn&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GROUNDDATA_TRYGETSHOWNPCSKILLCUTIN_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Vector3* GetHpBarScale(::System::Int64 arg)
		{
			return (return (::UnityEngine::Vector3*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GROUNDDATA_GETHPBARSCALE_OFFSET))(arg, nullptr);
		}

		::System::Int64 GetObstacleLevel(::System::Int64 arg, ::FlatData::ObstacleCoverType* arg)
		{
			return (return (::System::Int64(*)(::System::Int64, ::FlatData::ObstacleCoverType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GROUNDDATA_GETOBSTACLELEVEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 GetCharacterGrade(::System::Int64 arg, ::FlatData::TacticEntityType* arg, ::System::Boolean arg)
		{
			return (return (::System::Int64(*)(::System::Int64, ::FlatData::TacticEntityType*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GROUNDDATA_GETCHARACTERGRADE_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* GroundExcelEnumerator()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GROUNDDATA_GROUNDEXCELENUMERATOR_OFFSET))(nullptr);
		}

	};
}

