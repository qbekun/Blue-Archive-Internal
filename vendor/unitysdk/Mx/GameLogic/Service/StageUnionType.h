#pragma once
#include "../../../unitysdk.h"

namespace MX::Data { class CampaignStageInfo; }
namespace MX::Data::Excel { class WeekDungeonExcel; }
namespace MX::Data::Excel { class SchoolDungeonStageExcel; }
namespace MX::Data::Excel { class ConquestUnitExcel; }
namespace FlatData { class ContentType; }
namespace MX::GameLogic::Service { class StageUnionType; }

#define MX_GAMELOGIC_SERVICE_STAGEUNIONTYPE_GET_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0xFC7BD0)
#define MX_GAMELOGIC_SERVICE_STAGEUNIONTYPE_GET_ASSTAGEINFO_OFFSET UNITYSDK_OFFSET(0xFC7CC0)
#define MX_GAMELOGIC_SERVICE_STAGEUNIONTYPE_GET_ASWEEKDUNGEONEXCEL_OFFSET UNITYSDK_OFFSET(0xFC7D20)
#define MX_GAMELOGIC_SERVICE_STAGEUNIONTYPE_GET_ASSCHOOLDUNGONEXCEL_OFFSET UNITYSDK_OFFSET(0xFC7D80)
#define MX_GAMELOGIC_SERVICE_STAGEUNIONTYPE_GET_ASCONQUESTUNITEXCEL_OFFSET UNITYSDK_OFFSET(0xFC7DE0)
#define MX_GAMELOGIC_SERVICE_STAGEUNIONTYPE_MATCH_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_GAMELOGIC_SERVICE_STAGEUNIONTYPE_FROMSTAGEUNIQUEID_OFFSET UNITYSDK_OFFSET(0xFC7E40)
#define MX_GAMELOGIC_SERVICE_STAGEUNIONTYPE_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0xFC8500)
#define MX_GAMELOGIC_SERVICE_STAGEUNIONTYPE_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0xFC8300)
#define MX_GAMELOGIC_SERVICE_STAGEUNIONTYPE_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0xFC8380)
#define MX_GAMELOGIC_SERVICE_STAGEUNIONTYPE_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0xFC8400)
#define MX_GAMELOGIC_SERVICE_STAGEUNIONTYPE_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0xFC8480)
#define MX_GAMELOGIC_SERVICE_STAGEUNIONTYPE_.CTOR_OFFSET UNITYSDK_OFFSET(0xFC85A0)

namespace MX::GameLogic::Service
{
	inline static constexpr unsigned int StageUnionType_TypeDefinitionIndex = 12412;

	class StageUnionType : public Il2CppObject
	{
	public:
		::System::Int32 _index; // 0x10
		Il2CppObject* _contentType; // 0x14
		::MX::Data::CampaignStageInfo* _stageInfo; // 0x20
		::MX::Data::Excel::WeekDungeonExcel* _weekDungeonExcel; // 0x28
		::MX::Data::Excel::SchoolDungeonStageExcel* _schoolDungeonStageExcel; // 0x38
		::MX::Data::Excel::ConquestUnitExcel* _conquestUnitExcel; // 0x48

		::FlatData::ContentType* get_ContentType()
		{
			return ((::FlatData::ContentType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_STAGEUNIONTYPE_GET_CONTENTTYPE_OFFSET))(nullptr);
		}

		::MX::Data::CampaignStageInfo* get_AsStageInfo()
		{
			return ((::MX::Data::CampaignStageInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_STAGEUNIONTYPE_GET_ASSTAGEINFO_OFFSET))(nullptr);
		}

		::MX::Data::Excel::WeekDungeonExcel* get_AsWeekDungeonExcel()
		{
			return ((::MX::Data::Excel::WeekDungeonExcel*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_STAGEUNIONTYPE_GET_ASWEEKDUNGEONEXCEL_OFFSET))(nullptr);
		}

		::MX::Data::Excel::SchoolDungeonStageExcel* get_AsSchoolDungonExcel()
		{
			return ((::MX::Data::Excel::SchoolDungeonStageExcel*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_STAGEUNIONTYPE_GET_ASSCHOOLDUNGONEXCEL_OFFSET))(nullptr);
		}

		::MX::Data::Excel::ConquestUnitExcel* get_AsConquestUnitExcel()
		{
			return ((::MX::Data::Excel::ConquestUnitExcel*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_STAGEUNIONTYPE_GET_ASCONQUESTUNITEXCEL_OFFSET))(nullptr);
		}

		Il2CppObject* Match(Il2CppObject* arg, Il2CppObject* arg2, Il2CppObject* arg3, Il2CppObject* arg4)
		{
			return ((Il2CppObject*(*)(Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_STAGEUNIONTYPE_MATCH_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::MX::GameLogic::Service::StageUnionType* FromStageUniqueId(::FlatData::ContentType* arg, ::System::Int64 arg2)
		{
			return ((::MX::GameLogic::Service::StageUnionType*(*)(::FlatData::ContentType*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_STAGEUNIONTYPE_FROMSTAGEUNIQUEID_OFFSET))(arg, arg2, nullptr);
		}

		::MX::GameLogic::Service::StageUnionType* op_Implicit(::FlatData::ContentType* arg)
		{
			return ((::MX::GameLogic::Service::StageUnionType*(*)(::FlatData::ContentType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_STAGEUNIONTYPE_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::Service::StageUnionType* op_Implicit(::MX::Data::CampaignStageInfo* arg)
		{
			return ((::MX::GameLogic::Service::StageUnionType*(*)(::MX::Data::CampaignStageInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_STAGEUNIONTYPE_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::Service::StageUnionType* op_Implicit(::MX::Data::Excel::WeekDungeonExcel* arg)
		{
			return ((::MX::GameLogic::Service::StageUnionType*(*)(::MX::Data::Excel::WeekDungeonExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_STAGEUNIONTYPE_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::Service::StageUnionType* op_Implicit(::MX::Data::Excel::SchoolDungeonStageExcel* arg)
		{
			return ((::MX::GameLogic::Service::StageUnionType*(*)(::MX::Data::Excel::SchoolDungeonStageExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_STAGEUNIONTYPE_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::Service::StageUnionType* op_Implicit(::MX::Data::Excel::ConquestUnitExcel* arg)
		{
			return ((::MX::GameLogic::Service::StageUnionType*(*)(::MX::Data::Excel::ConquestUnitExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_STAGEUNIONTYPE_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_SERVICE_STAGEUNIONTYPE_.CTOR_OFFSET))(nullptr);
		}

	};
}

