#pragma once
#include "../../unitysdk.h"

namespace FlatData { class StageTopography; }

#define MX_DATA_IFIELDSTAGE_GET_STAGETOPOGRAPHY_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_IFIELDSTAGE_GET_SKIPFORMATIONSETTINGS_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_IFIELDSTAGE_GET_GROUNDID_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_IFIELDSTAGE_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_IFIELDSTAGE_GET_FIXEDECHELONID_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_IFIELDSTAGE_GET_SEASONID_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_IFIELDSTAGE_GET_BGMID_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MX::Data
{
	inline static constexpr unsigned int IFieldStage_TypeDefinitionIndex = 15842;

	class IFieldStage : public Il2CppObject
	{
	public:
		::FlatData::StageTopography* get_StageTopography()
		{
			return (return (::FlatData::StageTopography*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_IFIELDSTAGE_GET_STAGETOPOGRAPHY_OFFSET))(nullptr);
		}

		::System::Boolean get_SkipFormationSettings()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_IFIELDSTAGE_GET_SKIPFORMATIONSETTINGS_OFFSET))(nullptr);
		}

		::System::Int64 get_GroundId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_IFIELDSTAGE_GET_GROUNDID_OFFSET))(nullptr);
		}

		::System::Int64 get_UniqueId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_IFIELDSTAGE_GET_UNIQUEID_OFFSET))(nullptr);
		}

		::System::Int64 get_FixedEchelonId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_IFIELDSTAGE_GET_FIXEDECHELONID_OFFSET))(nullptr);
		}

		::System::Int64 get_SeasonId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_IFIELDSTAGE_GET_SEASONID_OFFSET))(nullptr);
		}

		::System::Int64 get_BGMId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_IFIELDSTAGE_GET_BGMID_OFFSET))(nullptr);
		}

	};
}

