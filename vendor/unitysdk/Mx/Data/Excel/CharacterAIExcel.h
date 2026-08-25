#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class CharacterAIExcel; }
namespace FlatData { class EngageType; }
namespace FlatData { class PositioningType; }
namespace FlatBuffers { class FlatBufferBuilder; }

#define MX_DATA_EXCEL_CHARACTERAIEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1A0A950)
#define MX_DATA_EXCEL_CHARACTERAIEXCEL_GETROOTASCHARACTERAIEXCEL_OFFSET UNITYSDK_OFFSET(0x1A0A960)
#define MX_DATA_EXCEL_CHARACTERAIEXCEL_GETROOTASCHARACTERAIEXCEL_OFFSET UNITYSDK_OFFSET(0x1A0A9C0)
#define MX_DATA_EXCEL_CHARACTERAIEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1A0AA50)
#define MX_DATA_EXCEL_CHARACTERAIEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1A0AA20)
#define MX_DATA_EXCEL_CHARACTERAIEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0x1A0AA70)
#define MX_DATA_EXCEL_CHARACTERAIEXCEL_GET_ENGAGETYPE_OFFSET UNITYSDK_OFFSET(0x1A0AAC0)
#define MX_DATA_EXCEL_CHARACTERAIEXCEL_GET_POSITIONING_OFFSET UNITYSDK_OFFSET(0x1A0AB10)
#define MX_DATA_EXCEL_CHARACTERAIEXCEL_GET_CHECKCANUSEAUTOSKILL_OFFSET UNITYSDK_OFFSET(0x1A0AB60)
#define MX_DATA_EXCEL_CHARACTERAIEXCEL_GET_DISTANCEREDUCERATIOOBSTACLEPATH_OFFSET UNITYSDK_OFFSET(0x1A0ABB0)
#define MX_DATA_EXCEL_CHARACTERAIEXCEL_GET_DISTANCEREDUCEOBSTACLEPATH_OFFSET UNITYSDK_OFFSET(0x1A0AC00)
#define MX_DATA_EXCEL_CHARACTERAIEXCEL_GET_DISTANCEREDUCERATIOFORMATIONPATH_OFFSET UNITYSDK_OFFSET(0x1A0AC50)
#define MX_DATA_EXCEL_CHARACTERAIEXCEL_GET_DISTANCEREDUCEFORMATIONPATH_OFFSET UNITYSDK_OFFSET(0x1A0ACA0)
#define MX_DATA_EXCEL_CHARACTERAIEXCEL_GET_MINIMUMPOSITIONGAP_OFFSET UNITYSDK_OFFSET(0x1A0ACF0)
#define MX_DATA_EXCEL_CHARACTERAIEXCEL_GET_CANUSEOBSTACLEOFKNEELMOTION_OFFSET UNITYSDK_OFFSET(0x1A0AD40)
#define MX_DATA_EXCEL_CHARACTERAIEXCEL_GET_CANUSEOBSTACLEOFSTANDMOTION_OFFSET UNITYSDK_OFFSET(0x1A0AD90)
#define MX_DATA_EXCEL_CHARACTERAIEXCEL_GET_HASTARGETSWITCHINGMOTION_OFFSET UNITYSDK_OFFSET(0x1A0ADE0)
#define MX_DATA_EXCEL_CHARACTERAIEXCEL_CREATECHARACTERAIEXCEL_OFFSET UNITYSDK_OFFSET(0x1A0AE30)
#define MX_DATA_EXCEL_CHARACTERAIEXCEL_STARTCHARACTERAIEXCEL_OFFSET UNITYSDK_OFFSET(0x1A0B2F0)
#define MX_DATA_EXCEL_CHARACTERAIEXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0x1A0B150)
#define MX_DATA_EXCEL_CHARACTERAIEXCEL_ADDENGAGETYPE_OFFSET UNITYSDK_OFFSET(0x1A0B1B0)
#define MX_DATA_EXCEL_CHARACTERAIEXCEL_ADDPOSITIONING_OFFSET UNITYSDK_OFFSET(0x1A0B180)
#define MX_DATA_EXCEL_CHARACTERAIEXCEL_ADDCHECKCANUSEAUTOSKILL_OFFSET UNITYSDK_OFFSET(0x1A0B270)
#define MX_DATA_EXCEL_CHARACTERAIEXCEL_ADDDISTANCEREDUCERATIOOBSTACLEPATH_OFFSET UNITYSDK_OFFSET(0x1A0B120)
#define MX_DATA_EXCEL_CHARACTERAIEXCEL_ADDDISTANCEREDUCEOBSTACLEPATH_OFFSET UNITYSDK_OFFSET(0x1A0B0F0)
#define MX_DATA_EXCEL_CHARACTERAIEXCEL_ADDDISTANCEREDUCERATIOFORMATIONPATH_OFFSET UNITYSDK_OFFSET(0x1A0B0C0)
#define MX_DATA_EXCEL_CHARACTERAIEXCEL_ADDDISTANCEREDUCEFORMATIONPATH_OFFSET UNITYSDK_OFFSET(0x1A0B090)
#define MX_DATA_EXCEL_CHARACTERAIEXCEL_ADDMINIMUMPOSITIONGAP_OFFSET UNITYSDK_OFFSET(0x1A0B060)
#define MX_DATA_EXCEL_CHARACTERAIEXCEL_ADDCANUSEOBSTACLEOFKNEELMOTION_OFFSET UNITYSDK_OFFSET(0x1A0B240)
#define MX_DATA_EXCEL_CHARACTERAIEXCEL_ADDCANUSEOBSTACLEOFSTANDMOTION_OFFSET UNITYSDK_OFFSET(0x1A0B210)
#define MX_DATA_EXCEL_CHARACTERAIEXCEL_ADDHASTARGETSWITCHINGMOTION_OFFSET UNITYSDK_OFFSET(0x1A0B1E0)
#define MX_DATA_EXCEL_CHARACTERAIEXCEL_ENDCHARACTERAIEXCEL_OFFSET UNITYSDK_OFFSET(0x1A0B2A0)
#define MX_DATA_EXCEL_CHARACTERAIEXCEL_FINISHCHARACTERAIEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1A0B310)
#define MX_DATA_EXCEL_CHARACTERAIEXCEL_FINISHSIZEPREFIXEDCHARACTERAIEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1A0B330)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int CharacterAIExcel_TypeDefinitionIndex = 16917;

	class CharacterAIExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERAIEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::CharacterAIExcel* GetRootAsCharacterAIExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::CharacterAIExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERAIEXCEL_GETROOTASCHARACTERAIEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::CharacterAIExcel* GetRootAsCharacterAIExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::CharacterAIExcel* arg)
		{
			return (return (::MX::Data::Excel::CharacterAIExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::CharacterAIExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERAIEXCEL_GETROOTASCHARACTERAIEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERAIEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::CharacterAIExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::CharacterAIExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERAIEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERAIEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::FlatData::EngageType* get_EngageType()
		{
			return (return (::FlatData::EngageType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERAIEXCEL_GET_ENGAGETYPE_OFFSET))(nullptr);
		}

		::FlatData::PositioningType* get_Positioning()
		{
			return (return (::FlatData::PositioningType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERAIEXCEL_GET_POSITIONING_OFFSET))(nullptr);
		}

		::System::Boolean get_CheckCanUseAutoSkill()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERAIEXCEL_GET_CHECKCANUSEAUTOSKILL_OFFSET))(nullptr);
		}

		::System::Int64 get_DistanceReduceRatioObstaclePath()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERAIEXCEL_GET_DISTANCEREDUCERATIOOBSTACLEPATH_OFFSET))(nullptr);
		}

		::System::Int64 get_DistanceReduceObstaclePath()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERAIEXCEL_GET_DISTANCEREDUCEOBSTACLEPATH_OFFSET))(nullptr);
		}

		::System::Int64 get_DistanceReduceRatioFormationPath()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERAIEXCEL_GET_DISTANCEREDUCERATIOFORMATIONPATH_OFFSET))(nullptr);
		}

		::System::Int64 get_DistanceReduceFormationPath()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERAIEXCEL_GET_DISTANCEREDUCEFORMATIONPATH_OFFSET))(nullptr);
		}

		::System::Int64 get_MinimumPositionGap()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERAIEXCEL_GET_MINIMUMPOSITIONGAP_OFFSET))(nullptr);
		}

		::System::Boolean get_CanUseObstacleOfKneelMotion()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERAIEXCEL_GET_CANUSEOBSTACLEOFKNEELMOTION_OFFSET))(nullptr);
		}

		::System::Boolean get_CanUseObstacleOfStandMotion()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERAIEXCEL_GET_CANUSEOBSTACLEOFSTANDMOTION_OFFSET))(nullptr);
		}

		::System::Boolean get_HasTargetSwitchingMotion()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERAIEXCEL_GET_HASTARGETSWITCHINGMOTION_OFFSET))(nullptr);
		}

		Il2CppObject* CreateCharacterAIExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::FlatData::EngageType* arg, ::FlatData::PositioningType* arg, ::System::Boolean arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::FlatData::EngageType*, ::FlatData::PositioningType*, ::System::Boolean, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERAIEXCEL_CREATECHARACTERAIEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartCharacterAIExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERAIEXCEL_STARTCHARACTERAIEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERAIEXCEL_ADDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEngageType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::EngageType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::EngageType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERAIEXCEL_ADDENGAGETYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPositioning(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::PositioningType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::PositioningType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERAIEXCEL_ADDPOSITIONING_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCheckCanUseAutoSkill(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERAIEXCEL_ADDCHECKCANUSEAUTOSKILL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDistanceReduceRatioObstaclePath(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERAIEXCEL_ADDDISTANCEREDUCERATIOOBSTACLEPATH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDistanceReduceObstaclePath(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERAIEXCEL_ADDDISTANCEREDUCEOBSTACLEPATH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDistanceReduceRatioFormationPath(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERAIEXCEL_ADDDISTANCEREDUCERATIOFORMATIONPATH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDistanceReduceFormationPath(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERAIEXCEL_ADDDISTANCEREDUCEFORMATIONPATH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddMinimumPositionGap(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERAIEXCEL_ADDMINIMUMPOSITIONGAP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCanUseObstacleOfKneelMotion(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERAIEXCEL_ADDCANUSEOBSTACLEOFKNEELMOTION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCanUseObstacleOfStandMotion(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERAIEXCEL_ADDCANUSEOBSTACLEOFSTANDMOTION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddHasTargetSwitchingMotion(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERAIEXCEL_ADDHASTARGETSWITCHINGMOTION_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndCharacterAIExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERAIEXCEL_ENDCHARACTERAIEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishCharacterAIExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERAIEXCEL_FINISHCHARACTERAIEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedCharacterAIExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERAIEXCEL_FINISHSIZEPREFIXEDCHARACTERAIEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

