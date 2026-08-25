#pragma once
#include "../../../unitysdk.h"

namespace MXField::Core::Save { class FieldSeasonSaveData; }
namespace MXField::Core::Save { class FieldSceneSaveData; }
namespace MXField::Shared::Model { class FieldInteractionDB; }
namespace MXField::Shared::Model { class FieldQuestDB; }
namespace MXField::Shared::Model { class FieldDateHistoryDB; }
namespace MXField::Shared::Model { class FieldMasteryDB; }
namespace MXField::Core::Save { class FieldClientSaveData; }
namespace MXField::Shared::Model { class FieldSnapshot; }
namespace MXField::Shared::Data { class FieldCurtainCallFreeModeInfo; }

#define MXFIELD_CORE_SAVE_FIELDCLIENTSAVEDATA_SAVEINTERACTION_OFFSET UNITYSDK_OFFSET(0xEDDC10)
#define MXFIELD_CORE_SAVE_FIELDCLIENTSAVEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0xEDDCF0)
#define MXFIELD_CORE_SAVE_FIELDCLIENTSAVEDATA_SAVESCENEDATA_OFFSET UNITYSDK_OFFSET(0xEDDF30)
#define MXFIELD_CORE_SAVE_FIELDCLIENTSAVEDATA_.CCTOR_OFFSET UNITYSDK_OFFSET(0xEDDFB0)
#define MXFIELD_CORE_SAVE_FIELDCLIENTSAVEDATA_SAVESCENARIO_OFFSET UNITYSDK_OFFSET(0xEDE3B0)
#define MXFIELD_CORE_SAVE_FIELDCLIENTSAVEDATA_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0xEDDFC0)
#define MXFIELD_CORE_SAVE_FIELDCLIENTSAVEDATA_SAVECLEARQUEST_OFFSET UNITYSDK_OFFSET(0xEDE4B0)
#define MXFIELD_CORE_SAVE_FIELDCLIENTSAVEDATA_SAVEENDDATE_OFFSET UNITYSDK_OFFSET(0xEDE640)
#define MXFIELD_CORE_SAVE_FIELDCLIENTSAVEDATA_SAVEMASTERY_OFFSET UNITYSDK_OFFSET(0xEDE710)
#define MXFIELD_CORE_SAVE_FIELDCLIENTSAVEDATA_ISDATEMATCH_OFFSET UNITYSDK_OFFSET(0xEDE740)
#define MXFIELD_CORE_SAVE_FIELDCLIENTSAVEDATA_SERIALIZE_OFFSET UNITYSDK_OFFSET(0xEDE770)
#define MXFIELD_CORE_SAVE_FIELDCLIENTSAVEDATA_SAVESTAGEHISTORIES_OFFSET UNITYSDK_OFFSET(0xEDEB20)
#define MXFIELD_CORE_SAVE_FIELDCLIENTSAVEDATA_CREATEREPLAYSAVEDATA_OFFSET UNITYSDK_OFFSET(0xEDECC0)
#define MXFIELD_CORE_SAVE_FIELDCLIENTSAVEDATA_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0xEDF0D0)
#define MXFIELD_CORE_SAVE_FIELDCLIENTSAVEDATA_ISVALID_OFFSET UNITYSDK_OFFSET(0xEDFA80)
#define MXFIELD_CORE_SAVE_FIELDCLIENTSAVEDATA_CREATESCENESAVEDATA_OFFSET UNITYSDK_OFFSET(0xEDFAA0)
#define MXFIELD_CORE_SAVE_FIELDCLIENTSAVEDATA_SAVETIMELINE_OFFSET UNITYSDK_OFFSET(0xEDFD30)
#define MXFIELD_CORE_SAVE_FIELDCLIENTSAVEDATA_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xEDFDF0)
#define MXFIELD_CORE_SAVE_FIELDCLIENTSAVEDATA_CREATEFREEMODESAVEDATA_OFFSET UNITYSDK_OFFSET(0xEE01D0)

namespace MXField::Core::Save
{
	inline static constexpr unsigned int FieldClientSaveData_TypeDefinitionIndex = 10994;

	class FieldClientSaveData : public Il2CppObject
	{
	public:
		::MXField::Core::Save::FieldSeasonSaveData* SeasonSaveData; // 0x10
		::MXField::Core::Save::FieldSceneSaveData* SceneSaveData; // 0x18
		Il2CppObject* ClearQuestDBs; // 0x20
		Il2CppObject* DailyQuestDBs; // 0x28
		Il2CppObject* EndDateIds; // 0x30
		Il2CppObject* InteractionDBs; // 0x38
		Il2CppObject* StageHistories; // 0x40
		Il2CppObject* EnteredWorldMapIds; // 0x48
		Il2CppObject* ScenarioHistories; // 0x50
		Il2CppObject* TimelineHistories; // 0x58
		::System::Int64 OpenDate; // 0x60
		::System::Boolean IsReplayData; // 0x68
		::System::Boolean IsFreeMode; // 0x69
		::System::Boolean IsNarrativeMode; // 0x6A

		::System::Void SaveInteraction(::MXField::Shared::Model::FieldInteractionDB* arg)
		{
			((::System::Void(*)(::MXField::Shared::Model::FieldInteractionDB*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_SAVE_FIELDCLIENTSAVEDATA_SAVEINTERACTION_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_SAVE_FIELDCLIENTSAVEDATA_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void SaveSceneData(::System::Int64 arg, ::System::Int64 arg2, ::System::Boolean arg3)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_SAVE_FIELDCLIENTSAVEDATA_SAVESCENEDATA_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_SAVE_FIELDCLIENTSAVEDATA_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void SaveScenario(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_SAVE_FIELDCLIENTSAVEDATA_SAVESCENARIO_OFFSET))(arg, nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_SAVE_FIELDCLIENTSAVEDATA_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void SaveClearQuest(::MXField::Shared::Model::FieldQuestDB* arg)
		{
			((::System::Void(*)(::MXField::Shared::Model::FieldQuestDB*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_SAVE_FIELDCLIENTSAVEDATA_SAVECLEARQUEST_OFFSET))(arg, nullptr);
		}

		::System::Void SaveEndDate(::MXField::Shared::Model::FieldDateHistoryDB* arg)
		{
			((::System::Void(*)(::MXField::Shared::Model::FieldDateHistoryDB*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_SAVE_FIELDCLIENTSAVEDATA_SAVEENDDATE_OFFSET))(arg, nullptr);
		}

		::System::Void SaveMastery(::MXField::Shared::Model::FieldMasteryDB* arg)
		{
			((::System::Void(*)(::MXField::Shared::Model::FieldMasteryDB*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_SAVE_FIELDCLIENTSAVEDATA_SAVEMASTERY_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsDateMatch(::System::Int64 arg, ::System::Int64 arg2)
		{
			return ((::System::Boolean(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_SAVE_FIELDCLIENTSAVEDATA_ISDATEMATCH_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MXField::Core::Save::FieldClientSaveData&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MXField::Core::Save::FieldClientSaveData&*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_SAVE_FIELDCLIENTSAVEDATA_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SaveStageHistories()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_SAVE_FIELDCLIENTSAVEDATA_SAVESTAGEHISTORIES_OFFSET))(nullptr);
		}

		::MXField::Core::Save::FieldClientSaveData* CreateReplaySaveData(::System::Int64 arg)
		{
			return ((::MXField::Core::Save::FieldClientSaveData*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_SAVE_FIELDCLIENTSAVEDATA_CREATEREPLAYSAVEDATA_OFFSET))(arg, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MXField::Core::Save::FieldClientSaveData&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MXField::Core::Save::FieldClientSaveData&*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_SAVE_FIELDCLIENTSAVEDATA_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_SAVE_FIELDCLIENTSAVEDATA_ISVALID_OFFSET))(nullptr);
		}

		::MXField::Core::Save::FieldSceneSaveData* CreateSceneSaveData(::MXField::Shared::Model::FieldSnapshot* arg, ::System::Int64 arg2)
		{
			return ((::MXField::Core::Save::FieldSceneSaveData*(*)(::MXField::Shared::Model::FieldSnapshot*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_SAVE_FIELDCLIENTSAVEDATA_CREATESCENESAVEDATA_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SaveTimeline(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_SAVE_FIELDCLIENTSAVEDATA_SAVETIMELINE_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize(::MXField::Shared::Model::FieldSnapshot* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::MXField::Shared::Model::FieldSnapshot*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_SAVE_FIELDCLIENTSAVEDATA_INITIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::MXField::Core::Save::FieldClientSaveData* CreateFreeModeSaveData(::MXField::Shared::Data::FieldCurtainCallFreeModeInfo* arg)
		{
			return ((::MXField::Core::Save::FieldClientSaveData*(*)(::MXField::Shared::Data::FieldCurtainCallFreeModeInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_SAVE_FIELDCLIENTSAVEDATA_CREATEFREEMODESAVEDATA_OFFSET))(arg, nullptr);
		}

	};
}

