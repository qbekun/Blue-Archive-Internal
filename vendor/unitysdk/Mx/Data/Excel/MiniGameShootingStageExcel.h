#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class MiniGameShootingStageExcel; }
namespace FlatData { class Difficulty; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }
namespace FlatBuffers { class StringOffset; }

#define MX_DATA_EXCEL_MINIGAMESHOOTINGSTAGEEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1BFCF20)
#define MX_DATA_EXCEL_MINIGAMESHOOTINGSTAGEEXCEL_GETROOTASMINIGAMESHOOTINGSTAGEEXCEL_OFFSET UNITYSDK_OFFSET(0x1BFCF30)
#define MX_DATA_EXCEL_MINIGAMESHOOTINGSTAGEEXCEL_GETROOTASMINIGAMESHOOTINGSTAGEEXCEL_OFFSET UNITYSDK_OFFSET(0x1BFCF90)
#define MX_DATA_EXCEL_MINIGAMESHOOTINGSTAGEEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1BFD020)
#define MX_DATA_EXCEL_MINIGAMESHOOTINGSTAGEEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1BFCFF0)
#define MX_DATA_EXCEL_MINIGAMESHOOTINGSTAGEEXCEL_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x1BFD040)
#define MX_DATA_EXCEL_MINIGAMESHOOTINGSTAGEEXCEL_BGMID_OFFSET UNITYSDK_OFFSET(0x1BFD090)
#define MX_DATA_EXCEL_MINIGAMESHOOTINGSTAGEEXCEL_GET_BGMIDLENGTH_OFFSET UNITYSDK_OFFSET(0x1BFD0F0)
#define MX_DATA_EXCEL_MINIGAMESHOOTINGSTAGEEXCEL_GETBGMIDBYTES_OFFSET UNITYSDK_OFFSET(0x1BFD130)
#define MX_DATA_EXCEL_MINIGAMESHOOTINGSTAGEEXCEL_GET_COSTGOODSID_OFFSET UNITYSDK_OFFSET(0x1BFD150)
#define MX_DATA_EXCEL_MINIGAMESHOOTINGSTAGEEXCEL_GET_DIFFICULTY_OFFSET UNITYSDK_OFFSET(0x1BFD1A0)
#define MX_DATA_EXCEL_MINIGAMESHOOTINGSTAGEEXCEL_GET_DESIGNLEVEL_OFFSET UNITYSDK_OFFSET(0x1BFD1F0)
#define MX_DATA_EXCEL_MINIGAMESHOOTINGSTAGEEXCEL_GETDESIGNLEVELBYTES_OFFSET UNITYSDK_OFFSET(0x1BFD230)
#define MX_DATA_EXCEL_MINIGAMESHOOTINGSTAGEEXCEL_GET_ARTLEVEL_OFFSET UNITYSDK_OFFSET(0x1BFD250)
#define MX_DATA_EXCEL_MINIGAMESHOOTINGSTAGEEXCEL_GETARTLEVELBYTES_OFFSET UNITYSDK_OFFSET(0x1BFD290)
#define MX_DATA_EXCEL_MINIGAMESHOOTINGSTAGEEXCEL_GET_STARTBATTLEDURATION_OFFSET UNITYSDK_OFFSET(0x1BFD2B0)
#define MX_DATA_EXCEL_MINIGAMESHOOTINGSTAGEEXCEL_GET_DEFAULTBATTLEDURATION_OFFSET UNITYSDK_OFFSET(0x1BFD300)
#define MX_DATA_EXCEL_MINIGAMESHOOTINGSTAGEEXCEL_GET_DEFAULTLOGICEFFECT_OFFSET UNITYSDK_OFFSET(0x1BFD350)
#define MX_DATA_EXCEL_MINIGAMESHOOTINGSTAGEEXCEL_GETDEFAULTLOGICEFFECTBYTES_OFFSET UNITYSDK_OFFSET(0x1BFD390)
#define MX_DATA_EXCEL_MINIGAMESHOOTINGSTAGEEXCEL_GET_CAMERASIZERATE_OFFSET UNITYSDK_OFFSET(0x1BFD3B0)
#define MX_DATA_EXCEL_MINIGAMESHOOTINGSTAGEEXCEL_GET_EVENTCONTENTSTAGEREWARDID_OFFSET UNITYSDK_OFFSET(0x1BFD400)
#define MX_DATA_EXCEL_MINIGAMESHOOTINGSTAGEEXCEL_CREATEMINIGAMESHOOTINGSTAGEEXCEL_OFFSET UNITYSDK_OFFSET(0x1BFD450)
#define MX_DATA_EXCEL_MINIGAMESHOOTINGSTAGEEXCEL_STARTMINIGAMESHOOTINGSTAGEEXCEL_OFFSET UNITYSDK_OFFSET(0x1BFD8B0)
#define MX_DATA_EXCEL_MINIGAMESHOOTINGSTAGEEXCEL_ADDUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1BFD710)
#define MX_DATA_EXCEL_MINIGAMESHOOTINGSTAGEEXCEL_ADDBGMID_OFFSET UNITYSDK_OFFSET(0x1BFD830)
#define MX_DATA_EXCEL_MINIGAMESHOOTINGSTAGEEXCEL_CREATEBGMIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1BFD8D0)
#define MX_DATA_EXCEL_MINIGAMESHOOTINGSTAGEEXCEL_STARTBGMIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1BFD960)
#define MX_DATA_EXCEL_MINIGAMESHOOTINGSTAGEEXCEL_ADDCOSTGOODSID_OFFSET UNITYSDK_OFFSET(0x1BFD6E0)
#define MX_DATA_EXCEL_MINIGAMESHOOTINGSTAGEEXCEL_ADDDIFFICULTY_OFFSET UNITYSDK_OFFSET(0x1BFD800)
#define MX_DATA_EXCEL_MINIGAMESHOOTINGSTAGEEXCEL_ADDDESIGNLEVEL_OFFSET UNITYSDK_OFFSET(0x1BFD7D0)
#define MX_DATA_EXCEL_MINIGAMESHOOTINGSTAGEEXCEL_ADDARTLEVEL_OFFSET UNITYSDK_OFFSET(0x1BFD7A0)
#define MX_DATA_EXCEL_MINIGAMESHOOTINGSTAGEEXCEL_ADDSTARTBATTLEDURATION_OFFSET UNITYSDK_OFFSET(0x1BFD6B0)
#define MX_DATA_EXCEL_MINIGAMESHOOTINGSTAGEEXCEL_ADDDEFAULTBATTLEDURATION_OFFSET UNITYSDK_OFFSET(0x1BFD680)
#define MX_DATA_EXCEL_MINIGAMESHOOTINGSTAGEEXCEL_ADDDEFAULTLOGICEFFECT_OFFSET UNITYSDK_OFFSET(0x1BFD770)
#define MX_DATA_EXCEL_MINIGAMESHOOTINGSTAGEEXCEL_ADDCAMERASIZERATE_OFFSET UNITYSDK_OFFSET(0x1BFD740)
#define MX_DATA_EXCEL_MINIGAMESHOOTINGSTAGEEXCEL_ADDEVENTCONTENTSTAGEREWARDID_OFFSET UNITYSDK_OFFSET(0x1BFD650)
#define MX_DATA_EXCEL_MINIGAMESHOOTINGSTAGEEXCEL_ENDMINIGAMESHOOTINGSTAGEEXCEL_OFFSET UNITYSDK_OFFSET(0x1BFD860)
#define MX_DATA_EXCEL_MINIGAMESHOOTINGSTAGEEXCEL_FINISHMINIGAMESHOOTINGSTAGEEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1BFD9A0)
#define MX_DATA_EXCEL_MINIGAMESHOOTINGSTAGEEXCEL_FINISHSIZEPREFIXEDMINIGAMESHOOTINGSTAGEEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1BFD9C0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int MiniGameShootingStageExcel_TypeDefinitionIndex = 18845;

	class MiniGameShootingStageExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMESHOOTINGSTAGEEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::MiniGameShootingStageExcel* GetRootAsMiniGameShootingStageExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::MiniGameShootingStageExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMESHOOTINGSTAGEEXCEL_GETROOTASMINIGAMESHOOTINGSTAGEEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::MiniGameShootingStageExcel* GetRootAsMiniGameShootingStageExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::MiniGameShootingStageExcel* arg)
		{
			return (return (::MX::Data::Excel::MiniGameShootingStageExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::MiniGameShootingStageExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMESHOOTINGSTAGEEXCEL_GETROOTASMINIGAMESHOOTINGSTAGEEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMESHOOTINGSTAGEEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::MiniGameShootingStageExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::MiniGameShootingStageExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMESHOOTINGSTAGEEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_UniqueId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMESHOOTINGSTAGEEXCEL_GET_UNIQUEID_OFFSET))(nullptr);
		}

		::System::Int64 BgmId(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMESHOOTINGSTAGEEXCEL_BGMID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_BgmIdLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMESHOOTINGSTAGEEXCEL_GET_BGMIDLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetBgmIdBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMESHOOTINGSTAGEEXCEL_GETBGMIDBYTES_OFFSET))(nullptr);
		}

		::System::Int64 get_CostGoodsId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMESHOOTINGSTAGEEXCEL_GET_COSTGOODSID_OFFSET))(nullptr);
		}

		::FlatData::Difficulty* get_Difficulty()
		{
			return (return (::FlatData::Difficulty*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMESHOOTINGSTAGEEXCEL_GET_DIFFICULTY_OFFSET))(nullptr);
		}

		::System::String* get_DesignLevel()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMESHOOTINGSTAGEEXCEL_GET_DESIGNLEVEL_OFFSET))(nullptr);
		}

		Il2CppObject* GetDesignLevelBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMESHOOTINGSTAGEEXCEL_GETDESIGNLEVELBYTES_OFFSET))(nullptr);
		}

		::System::String* get_ArtLevel()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMESHOOTINGSTAGEEXCEL_GET_ARTLEVEL_OFFSET))(nullptr);
		}

		Il2CppObject* GetArtLevelBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMESHOOTINGSTAGEEXCEL_GETARTLEVELBYTES_OFFSET))(nullptr);
		}

		::System::Int64 get_StartBattleDuration()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMESHOOTINGSTAGEEXCEL_GET_STARTBATTLEDURATION_OFFSET))(nullptr);
		}

		::System::Int64 get_DefaultBattleDuration()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMESHOOTINGSTAGEEXCEL_GET_DEFAULTBATTLEDURATION_OFFSET))(nullptr);
		}

		::System::String* get_DefaultLogicEffect()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMESHOOTINGSTAGEEXCEL_GET_DEFAULTLOGICEFFECT_OFFSET))(nullptr);
		}

		Il2CppObject* GetDefaultLogicEffectBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMESHOOTINGSTAGEEXCEL_GETDEFAULTLOGICEFFECTBYTES_OFFSET))(nullptr);
		}

		::System::Single get_CameraSizeRate()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMESHOOTINGSTAGEEXCEL_GET_CAMERASIZERATE_OFFSET))(nullptr);
		}

		::System::Int64 get_EventContentStageRewardId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMESHOOTINGSTAGEEXCEL_GET_EVENTCONTENTSTAGEREWARDID_OFFSET))(nullptr);
		}

		Il2CppObject* CreateMiniGameShootingStageExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::FlatBuffers::VectorOffset* arg, ::System::Int64 arg, ::FlatData::Difficulty* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatBuffers::StringOffset* arg, ::System::Single arg, ::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::FlatBuffers::VectorOffset*, ::System::Int64, ::FlatData::Difficulty*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::System::Int64, ::System::Int64, ::FlatBuffers::StringOffset*, ::System::Single, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMESHOOTINGSTAGEEXCEL_CREATEMINIGAMESHOOTINGSTAGEEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartMiniGameShootingStageExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMESHOOTINGSTAGEEXCEL_STARTMINIGAMESHOOTINGSTAGEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddUniqueId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMESHOOTINGSTAGEEXCEL_ADDUNIQUEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddBgmId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMESHOOTINGSTAGEEXCEL_ADDBGMID_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateBgmIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMESHOOTINGSTAGEEXCEL_CREATEBGMIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartBgmIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMESHOOTINGSTAGEEXCEL_STARTBGMIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCostGoodsId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMESHOOTINGSTAGEEXCEL_ADDCOSTGOODSID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDifficulty(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::Difficulty* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::Difficulty*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMESHOOTINGSTAGEEXCEL_ADDDIFFICULTY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDesignLevel(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMESHOOTINGSTAGEEXCEL_ADDDESIGNLEVEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddArtLevel(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMESHOOTINGSTAGEEXCEL_ADDARTLEVEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStartBattleDuration(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMESHOOTINGSTAGEEXCEL_ADDSTARTBATTLEDURATION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDefaultBattleDuration(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMESHOOTINGSTAGEEXCEL_ADDDEFAULTBATTLEDURATION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDefaultLogicEffect(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMESHOOTINGSTAGEEXCEL_ADDDEFAULTLOGICEFFECT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCameraSizeRate(::FlatBuffers::FlatBufferBuilder* arg, ::System::Single arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMESHOOTINGSTAGEEXCEL_ADDCAMERASIZERATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEventContentStageRewardId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMESHOOTINGSTAGEEXCEL_ADDEVENTCONTENTSTAGEREWARDID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndMiniGameShootingStageExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMESHOOTINGSTAGEEXCEL_ENDMINIGAMESHOOTINGSTAGEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishMiniGameShootingStageExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMESHOOTINGSTAGEEXCEL_FINISHMINIGAMESHOOTINGSTAGEEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedMiniGameShootingStageExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMESHOOTINGSTAGEEXCEL_FINISHSIZEPREFIXEDMINIGAMESHOOTINGSTAGEEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

