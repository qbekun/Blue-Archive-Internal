#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class BGMExcel; }
namespace FlatData { class Nation; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }

#define MX_DATA_EXCEL_BGMEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x19EDBB0)
#define MX_DATA_EXCEL_BGMEXCEL_GETROOTASBGMEXCEL_OFFSET UNITYSDK_OFFSET(0x19EDBC0)
#define MX_DATA_EXCEL_BGMEXCEL_GETROOTASBGMEXCEL_OFFSET UNITYSDK_OFFSET(0x19EDC20)
#define MX_DATA_EXCEL_BGMEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x19EDCB0)
#define MX_DATA_EXCEL_BGMEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x19EDC80)
#define MX_DATA_EXCEL_BGMEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0x19EDCD0)
#define MX_DATA_EXCEL_BGMEXCEL_NATION_OFFSET UNITYSDK_OFFSET(0x19EDD20)
#define MX_DATA_EXCEL_BGMEXCEL_GET_NATIONLENGTH_OFFSET UNITYSDK_OFFSET(0x19EDD80)
#define MX_DATA_EXCEL_BGMEXCEL_GETNATIONBYTES_OFFSET UNITYSDK_OFFSET(0x19EDDC0)
#define MX_DATA_EXCEL_BGMEXCEL_PATH_OFFSET UNITYSDK_OFFSET(0x19EDDE0)
#define MX_DATA_EXCEL_BGMEXCEL_GET_PATHLENGTH_OFFSET UNITYSDK_OFFSET(0x19EDE30)
#define MX_DATA_EXCEL_BGMEXCEL_VOLUME_OFFSET UNITYSDK_OFFSET(0x19EDE70)
#define MX_DATA_EXCEL_BGMEXCEL_GET_VOLUMELENGTH_OFFSET UNITYSDK_OFFSET(0x19EDED0)
#define MX_DATA_EXCEL_BGMEXCEL_GETVOLUMEBYTES_OFFSET UNITYSDK_OFFSET(0x19EDF10)
#define MX_DATA_EXCEL_BGMEXCEL_LOOPSTARTTIME_OFFSET UNITYSDK_OFFSET(0x19EDF30)
#define MX_DATA_EXCEL_BGMEXCEL_GET_LOOPSTARTTIMELENGTH_OFFSET UNITYSDK_OFFSET(0x19EDF90)
#define MX_DATA_EXCEL_BGMEXCEL_GETLOOPSTARTTIMEBYTES_OFFSET UNITYSDK_OFFSET(0x19EDFD0)
#define MX_DATA_EXCEL_BGMEXCEL_LOOPENDTIME_OFFSET UNITYSDK_OFFSET(0x19EDFF0)
#define MX_DATA_EXCEL_BGMEXCEL_GET_LOOPENDTIMELENGTH_OFFSET UNITYSDK_OFFSET(0x19EE050)
#define MX_DATA_EXCEL_BGMEXCEL_GETLOOPENDTIMEBYTES_OFFSET UNITYSDK_OFFSET(0x19EE090)
#define MX_DATA_EXCEL_BGMEXCEL_LOOPTRANSTIONTIME_OFFSET UNITYSDK_OFFSET(0x19EE0B0)
#define MX_DATA_EXCEL_BGMEXCEL_GET_LOOPTRANSTIONTIMELENGTH_OFFSET UNITYSDK_OFFSET(0x19EE110)
#define MX_DATA_EXCEL_BGMEXCEL_GETLOOPTRANSTIONTIMEBYTES_OFFSET UNITYSDK_OFFSET(0x19EE150)
#define MX_DATA_EXCEL_BGMEXCEL_LOOPOFFSETTIME_OFFSET UNITYSDK_OFFSET(0x19EE170)
#define MX_DATA_EXCEL_BGMEXCEL_GET_LOOPOFFSETTIMELENGTH_OFFSET UNITYSDK_OFFSET(0x19EE1D0)
#define MX_DATA_EXCEL_BGMEXCEL_GETLOOPOFFSETTIMEBYTES_OFFSET UNITYSDK_OFFSET(0x19EE210)
#define MX_DATA_EXCEL_BGMEXCEL_CREATEBGMEXCEL_OFFSET UNITYSDK_OFFSET(0x19EE230)
#define MX_DATA_EXCEL_BGMEXCEL_STARTBGMEXCEL_OFFSET UNITYSDK_OFFSET(0x19EE580)
#define MX_DATA_EXCEL_BGMEXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0x19EE3B0)
#define MX_DATA_EXCEL_BGMEXCEL_ADDNATION_OFFSET UNITYSDK_OFFSET(0x19EE500)
#define MX_DATA_EXCEL_BGMEXCEL_CREATENATIONVECTOR_OFFSET UNITYSDK_OFFSET(0x19EE5A0)
#define MX_DATA_EXCEL_BGMEXCEL_STARTNATIONVECTOR_OFFSET UNITYSDK_OFFSET(0x19EE630)
#define MX_DATA_EXCEL_BGMEXCEL_ADDPATH_OFFSET UNITYSDK_OFFSET(0x19EE4D0)
#define MX_DATA_EXCEL_BGMEXCEL_CREATEPATHVECTOR_OFFSET UNITYSDK_OFFSET(0x19EE670)
#define MX_DATA_EXCEL_BGMEXCEL_STARTPATHVECTOR_OFFSET UNITYSDK_OFFSET(0x19EE700)
#define MX_DATA_EXCEL_BGMEXCEL_ADDVOLUME_OFFSET UNITYSDK_OFFSET(0x19EE4A0)
#define MX_DATA_EXCEL_BGMEXCEL_CREATEVOLUMEVECTOR_OFFSET UNITYSDK_OFFSET(0x19EE740)
#define MX_DATA_EXCEL_BGMEXCEL_STARTVOLUMEVECTOR_OFFSET UNITYSDK_OFFSET(0x19EE7D0)
#define MX_DATA_EXCEL_BGMEXCEL_ADDLOOPSTARTTIME_OFFSET UNITYSDK_OFFSET(0x19EE470)
#define MX_DATA_EXCEL_BGMEXCEL_CREATELOOPSTARTTIMEVECTOR_OFFSET UNITYSDK_OFFSET(0x19EE810)
#define MX_DATA_EXCEL_BGMEXCEL_STARTLOOPSTARTTIMEVECTOR_OFFSET UNITYSDK_OFFSET(0x19EE8A0)
#define MX_DATA_EXCEL_BGMEXCEL_ADDLOOPENDTIME_OFFSET UNITYSDK_OFFSET(0x19EE440)
#define MX_DATA_EXCEL_BGMEXCEL_CREATELOOPENDTIMEVECTOR_OFFSET UNITYSDK_OFFSET(0x19EE8E0)
#define MX_DATA_EXCEL_BGMEXCEL_STARTLOOPENDTIMEVECTOR_OFFSET UNITYSDK_OFFSET(0x19EE970)
#define MX_DATA_EXCEL_BGMEXCEL_ADDLOOPTRANSTIONTIME_OFFSET UNITYSDK_OFFSET(0x19EE410)
#define MX_DATA_EXCEL_BGMEXCEL_CREATELOOPTRANSTIONTIMEVECTOR_OFFSET UNITYSDK_OFFSET(0x19EE9B0)
#define MX_DATA_EXCEL_BGMEXCEL_STARTLOOPTRANSTIONTIMEVECTOR_OFFSET UNITYSDK_OFFSET(0x19EEA40)
#define MX_DATA_EXCEL_BGMEXCEL_ADDLOOPOFFSETTIME_OFFSET UNITYSDK_OFFSET(0x19EE3E0)
#define MX_DATA_EXCEL_BGMEXCEL_CREATELOOPOFFSETTIMEVECTOR_OFFSET UNITYSDK_OFFSET(0x19EEA80)
#define MX_DATA_EXCEL_BGMEXCEL_STARTLOOPOFFSETTIMEVECTOR_OFFSET UNITYSDK_OFFSET(0x19EEB10)
#define MX_DATA_EXCEL_BGMEXCEL_ENDBGMEXCEL_OFFSET UNITYSDK_OFFSET(0x19EE530)
#define MX_DATA_EXCEL_BGMEXCEL_FINISHBGMEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x19EEB50)
#define MX_DATA_EXCEL_BGMEXCEL_FINISHSIZEPREFIXEDBGMEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x19EEB70)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int BGMExcel_TypeDefinitionIndex = 16788;

	class BGMExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BGMEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::BGMExcel* GetRootAsBGMExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::BGMExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BGMEXCEL_GETROOTASBGMEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::BGMExcel* GetRootAsBGMExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::BGMExcel* arg)
		{
			return (return (::MX::Data::Excel::BGMExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::BGMExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BGMEXCEL_GETROOTASBGMEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BGMEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::BGMExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::BGMExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BGMEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BGMEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::FlatData::Nation* Nation(::System::Int32 arg)
		{
			return (return (::FlatData::Nation*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BGMEXCEL_NATION_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_NationLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BGMEXCEL_GET_NATIONLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetNationBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BGMEXCEL_GETNATIONBYTES_OFFSET))(nullptr);
		}

		::System::String* Path(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BGMEXCEL_PATH_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_PathLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BGMEXCEL_GET_PATHLENGTH_OFFSET))(nullptr);
		}

		::System::Single Volume(::System::Int32 arg)
		{
			return (return (::System::Single(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BGMEXCEL_VOLUME_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_VolumeLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BGMEXCEL_GET_VOLUMELENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetVolumeBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BGMEXCEL_GETVOLUMEBYTES_OFFSET))(nullptr);
		}

		::System::Single LoopStartTime(::System::Int32 arg)
		{
			return (return (::System::Single(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BGMEXCEL_LOOPSTARTTIME_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_LoopStartTimeLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BGMEXCEL_GET_LOOPSTARTTIMELENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetLoopStartTimeBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BGMEXCEL_GETLOOPSTARTTIMEBYTES_OFFSET))(nullptr);
		}

		::System::Single LoopEndTime(::System::Int32 arg)
		{
			return (return (::System::Single(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BGMEXCEL_LOOPENDTIME_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_LoopEndTimeLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BGMEXCEL_GET_LOOPENDTIMELENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetLoopEndTimeBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BGMEXCEL_GETLOOPENDTIMEBYTES_OFFSET))(nullptr);
		}

		::System::Single LoopTranstionTime(::System::Int32 arg)
		{
			return (return (::System::Single(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BGMEXCEL_LOOPTRANSTIONTIME_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_LoopTranstionTimeLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BGMEXCEL_GET_LOOPTRANSTIONTIMELENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetLoopTranstionTimeBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BGMEXCEL_GETLOOPTRANSTIONTIMEBYTES_OFFSET))(nullptr);
		}

		::System::Single LoopOffsetTime(::System::Int32 arg)
		{
			return (return (::System::Single(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BGMEXCEL_LOOPOFFSETTIME_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_LoopOffsetTimeLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BGMEXCEL_GET_LOOPOFFSETTIMELENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetLoopOffsetTimeBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BGMEXCEL_GETLOOPOFFSETTIMEBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateBGMExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BGMEXCEL_CREATEBGMEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartBGMExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BGMEXCEL_STARTBGMEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BGMEXCEL_ADDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddNation(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BGMEXCEL_ADDNATION_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateNationVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BGMEXCEL_CREATENATIONVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartNationVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BGMEXCEL_STARTNATIONVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BGMEXCEL_ADDPATH_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreatePathVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BGMEXCEL_CREATEPATHVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartPathVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BGMEXCEL_STARTPATHVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddVolume(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BGMEXCEL_ADDVOLUME_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateVolumeVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BGMEXCEL_CREATEVOLUMEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartVolumeVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BGMEXCEL_STARTVOLUMEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLoopStartTime(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BGMEXCEL_ADDLOOPSTARTTIME_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateLoopStartTimeVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BGMEXCEL_CREATELOOPSTARTTIMEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartLoopStartTimeVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BGMEXCEL_STARTLOOPSTARTTIMEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLoopEndTime(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BGMEXCEL_ADDLOOPENDTIME_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateLoopEndTimeVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BGMEXCEL_CREATELOOPENDTIMEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartLoopEndTimeVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BGMEXCEL_STARTLOOPENDTIMEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLoopTranstionTime(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BGMEXCEL_ADDLOOPTRANSTIONTIME_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateLoopTranstionTimeVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BGMEXCEL_CREATELOOPTRANSTIONTIMEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartLoopTranstionTimeVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BGMEXCEL_STARTLOOPTRANSTIONTIMEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLoopOffsetTime(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BGMEXCEL_ADDLOOPOFFSETTIME_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateLoopOffsetTimeVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BGMEXCEL_CREATELOOPOFFSETTIMEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartLoopOffsetTimeVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BGMEXCEL_STARTLOOPOFFSETTIMEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndBGMExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BGMEXCEL_ENDBGMEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishBGMExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BGMEXCEL_FINISHBGMEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedBGMExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BGMEXCEL_FINISHSIZEPREFIXEDBGMEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

