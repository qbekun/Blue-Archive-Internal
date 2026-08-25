#pragma once
#include "../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace FlatData { class WeekDungeonFindGiftRewardExcel; }
namespace FlatData { class ParcelType; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }
namespace FlatBuffers { class VectorOffset; }

#define FLATDATA_WEEKDUNGEONFINDGIFTREWARDEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0xD63730)
#define FLATDATA_WEEKDUNGEONFINDGIFTREWARDEXCEL_GETROOTASWEEKDUNGEONFINDGIFTREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0xD63740)
#define FLATDATA_WEEKDUNGEONFINDGIFTREWARDEXCEL_GETROOTASWEEKDUNGEONFINDGIFTREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0xD637A0)
#define FLATDATA_WEEKDUNGEONFINDGIFTREWARDEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0xD63800)
#define FLATDATA_WEEKDUNGEONFINDGIFTREWARDEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0xD634A0)
#define FLATDATA_WEEKDUNGEONFINDGIFTREWARDEXCEL_GET_STAGEREWARDID_OFFSET UNITYSDK_OFFSET(0xD63820)
#define FLATDATA_WEEKDUNGEONFINDGIFTREWARDEXCEL_GET_DEVNAME_OFFSET UNITYSDK_OFFSET(0xD63870)
#define FLATDATA_WEEKDUNGEONFINDGIFTREWARDEXCEL_GETDEVNAMEBYTES_OFFSET UNITYSDK_OFFSET(0xD638B0)
#define FLATDATA_WEEKDUNGEONFINDGIFTREWARDEXCEL_REWARDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0xD638D0)
#define FLATDATA_WEEKDUNGEONFINDGIFTREWARDEXCEL_GET_REWARDPARCELTYPELENGTH_OFFSET UNITYSDK_OFFSET(0xD63930)
#define FLATDATA_WEEKDUNGEONFINDGIFTREWARDEXCEL_GETREWARDPARCELTYPEBYTES_OFFSET UNITYSDK_OFFSET(0xD63970)
#define FLATDATA_WEEKDUNGEONFINDGIFTREWARDEXCEL_REWARDPARCELID_OFFSET UNITYSDK_OFFSET(0xD63990)
#define FLATDATA_WEEKDUNGEONFINDGIFTREWARDEXCEL_GET_REWARDPARCELIDLENGTH_OFFSET UNITYSDK_OFFSET(0xD639F0)
#define FLATDATA_WEEKDUNGEONFINDGIFTREWARDEXCEL_GETREWARDPARCELIDBYTES_OFFSET UNITYSDK_OFFSET(0xD63A30)
#define FLATDATA_WEEKDUNGEONFINDGIFTREWARDEXCEL_REWARDPARCELAMOUNT_OFFSET UNITYSDK_OFFSET(0xD63A50)
#define FLATDATA_WEEKDUNGEONFINDGIFTREWARDEXCEL_GET_REWARDPARCELAMOUNTLENGTH_OFFSET UNITYSDK_OFFSET(0xD63AB0)
#define FLATDATA_WEEKDUNGEONFINDGIFTREWARDEXCEL_GETREWARDPARCELAMOUNTBYTES_OFFSET UNITYSDK_OFFSET(0xD63AF0)
#define FLATDATA_WEEKDUNGEONFINDGIFTREWARDEXCEL_REWARDPARCELPROBABILITY_OFFSET UNITYSDK_OFFSET(0xD63B10)
#define FLATDATA_WEEKDUNGEONFINDGIFTREWARDEXCEL_GET_REWARDPARCELPROBABILITYLENGTH_OFFSET UNITYSDK_OFFSET(0xD63B70)
#define FLATDATA_WEEKDUNGEONFINDGIFTREWARDEXCEL_GETREWARDPARCELPROBABILITYBYTES_OFFSET UNITYSDK_OFFSET(0xD63BB0)
#define FLATDATA_WEEKDUNGEONFINDGIFTREWARDEXCEL_DROPITEMMODELPREFABPATH_OFFSET UNITYSDK_OFFSET(0xD63BD0)
#define FLATDATA_WEEKDUNGEONFINDGIFTREWARDEXCEL_GET_DROPITEMMODELPREFABPATHLENGTH_OFFSET UNITYSDK_OFFSET(0xD63C20)
#define FLATDATA_WEEKDUNGEONFINDGIFTREWARDEXCEL_CREATEWEEKDUNGEONFINDGIFTREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0xD63C60)
#define FLATDATA_WEEKDUNGEONFINDGIFTREWARDEXCEL_STARTWEEKDUNGEONFINDGIFTREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0xD63F50)
#define FLATDATA_WEEKDUNGEONFINDGIFTREWARDEXCEL_ADDSTAGEREWARDID_OFFSET UNITYSDK_OFFSET(0xD63DB0)
#define FLATDATA_WEEKDUNGEONFINDGIFTREWARDEXCEL_ADDDEVNAME_OFFSET UNITYSDK_OFFSET(0xD63ED0)
#define FLATDATA_WEEKDUNGEONFINDGIFTREWARDEXCEL_ADDREWARDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0xD63EA0)
#define FLATDATA_WEEKDUNGEONFINDGIFTREWARDEXCEL_CREATEREWARDPARCELTYPEVECTOR_OFFSET UNITYSDK_OFFSET(0xD63F70)
#define FLATDATA_WEEKDUNGEONFINDGIFTREWARDEXCEL_STARTREWARDPARCELTYPEVECTOR_OFFSET UNITYSDK_OFFSET(0xD64000)
#define FLATDATA_WEEKDUNGEONFINDGIFTREWARDEXCEL_ADDREWARDPARCELID_OFFSET UNITYSDK_OFFSET(0xD63E70)
#define FLATDATA_WEEKDUNGEONFINDGIFTREWARDEXCEL_CREATEREWARDPARCELIDVECTOR_OFFSET UNITYSDK_OFFSET(0xD64040)
#define FLATDATA_WEEKDUNGEONFINDGIFTREWARDEXCEL_STARTREWARDPARCELIDVECTOR_OFFSET UNITYSDK_OFFSET(0xD640D0)
#define FLATDATA_WEEKDUNGEONFINDGIFTREWARDEXCEL_ADDREWARDPARCELAMOUNT_OFFSET UNITYSDK_OFFSET(0xD63E40)
#define FLATDATA_WEEKDUNGEONFINDGIFTREWARDEXCEL_CREATEREWARDPARCELAMOUNTVECTOR_OFFSET UNITYSDK_OFFSET(0xD64110)
#define FLATDATA_WEEKDUNGEONFINDGIFTREWARDEXCEL_STARTREWARDPARCELAMOUNTVECTOR_OFFSET UNITYSDK_OFFSET(0xD641A0)
#define FLATDATA_WEEKDUNGEONFINDGIFTREWARDEXCEL_ADDREWARDPARCELPROBABILITY_OFFSET UNITYSDK_OFFSET(0xD63E10)
#define FLATDATA_WEEKDUNGEONFINDGIFTREWARDEXCEL_CREATEREWARDPARCELPROBABILITYVECTOR_OFFSET UNITYSDK_OFFSET(0xD641E0)
#define FLATDATA_WEEKDUNGEONFINDGIFTREWARDEXCEL_STARTREWARDPARCELPROBABILITYVECTOR_OFFSET UNITYSDK_OFFSET(0xD64270)
#define FLATDATA_WEEKDUNGEONFINDGIFTREWARDEXCEL_ADDDROPITEMMODELPREFABPATH_OFFSET UNITYSDK_OFFSET(0xD63DE0)
#define FLATDATA_WEEKDUNGEONFINDGIFTREWARDEXCEL_CREATEDROPITEMMODELPREFABPATHVECTOR_OFFSET UNITYSDK_OFFSET(0xD642B0)
#define FLATDATA_WEEKDUNGEONFINDGIFTREWARDEXCEL_STARTDROPITEMMODELPREFABPATHVECTOR_OFFSET UNITYSDK_OFFSET(0xD64340)
#define FLATDATA_WEEKDUNGEONFINDGIFTREWARDEXCEL_ENDWEEKDUNGEONFINDGIFTREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0xD63F00)

namespace FlatData
{
	inline static constexpr unsigned int WeekDungeonFindGiftRewardExcel_TypeDefinitionIndex = 9351;

	class WeekDungeonFindGiftRewardExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_WEEKDUNGEONFINDGIFTREWARDEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::FlatData::WeekDungeonFindGiftRewardExcel* GetRootAsWeekDungeonFindGiftRewardExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return ((::FlatData::WeekDungeonFindGiftRewardExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_WEEKDUNGEONFINDGIFTREWARDEXCEL_GETROOTASWEEKDUNGEONFINDGIFTREWARDEXCEL_OFFSET))(arg, nullptr);
		}

		::FlatData::WeekDungeonFindGiftRewardExcel* GetRootAsWeekDungeonFindGiftRewardExcel(::FlatBuffers::ByteBuffer* arg, ::FlatData::WeekDungeonFindGiftRewardExcel* arg2)
		{
			return ((::FlatData::WeekDungeonFindGiftRewardExcel*(*)(::FlatBuffers::ByteBuffer*, ::FlatData::WeekDungeonFindGiftRewardExcel*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_WEEKDUNGEONFINDGIFTREWARDEXCEL_GETROOTASWEEKDUNGEONFINDGIFTREWARDEXCEL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_WEEKDUNGEONFINDGIFTREWARDEXCEL___INIT_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::WeekDungeonFindGiftRewardExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			return ((::FlatData::WeekDungeonFindGiftRewardExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_WEEKDUNGEONFINDGIFTREWARDEXCEL___ASSIGN_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int64 get_StageRewardId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_WEEKDUNGEONFINDGIFTREWARDEXCEL_GET_STAGEREWARDID_OFFSET))(nullptr);
		}

		::System::String* get_DevName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_WEEKDUNGEONFINDGIFTREWARDEXCEL_GET_DEVNAME_OFFSET))(nullptr);
		}

		Il2CppObject* GetDevNameBytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_WEEKDUNGEONFINDGIFTREWARDEXCEL_GETDEVNAMEBYTES_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* RewardParcelType(::System::Int32 arg)
		{
			return ((::FlatData::ParcelType*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_WEEKDUNGEONFINDGIFTREWARDEXCEL_REWARDPARCELTYPE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_RewardParcelTypeLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_WEEKDUNGEONFINDGIFTREWARDEXCEL_GET_REWARDPARCELTYPELENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetRewardParcelTypeBytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_WEEKDUNGEONFINDGIFTREWARDEXCEL_GETREWARDPARCELTYPEBYTES_OFFSET))(nullptr);
		}

		::System::Int64 RewardParcelId(::System::Int32 arg)
		{
			return ((::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_WEEKDUNGEONFINDGIFTREWARDEXCEL_REWARDPARCELID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_RewardParcelIdLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_WEEKDUNGEONFINDGIFTREWARDEXCEL_GET_REWARDPARCELIDLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetRewardParcelIdBytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_WEEKDUNGEONFINDGIFTREWARDEXCEL_GETREWARDPARCELIDBYTES_OFFSET))(nullptr);
		}

		::System::Int64 RewardParcelAmount(::System::Int32 arg)
		{
			return ((::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_WEEKDUNGEONFINDGIFTREWARDEXCEL_REWARDPARCELAMOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_RewardParcelAmountLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_WEEKDUNGEONFINDGIFTREWARDEXCEL_GET_REWARDPARCELAMOUNTLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetRewardParcelAmountBytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_WEEKDUNGEONFINDGIFTREWARDEXCEL_GETREWARDPARCELAMOUNTBYTES_OFFSET))(nullptr);
		}

		::System::Int64 RewardParcelProbability(::System::Int32 arg)
		{
			return ((::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_WEEKDUNGEONFINDGIFTREWARDEXCEL_REWARDPARCELPROBABILITY_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_RewardParcelProbabilityLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_WEEKDUNGEONFINDGIFTREWARDEXCEL_GET_REWARDPARCELPROBABILITYLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetRewardParcelProbabilityBytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_WEEKDUNGEONFINDGIFTREWARDEXCEL_GETREWARDPARCELPROBABILITYBYTES_OFFSET))(nullptr);
		}

		::System::String* DropItemModelPrefabPath(::System::Int32 arg)
		{
			return ((::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_WEEKDUNGEONFINDGIFTREWARDEXCEL_DROPITEMMODELPREFABPATH_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_DropItemModelPrefabPathLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_WEEKDUNGEONFINDGIFTREWARDEXCEL_GET_DROPITEMMODELPREFABPATHLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* CreateWeekDungeonFindGiftRewardExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2, ::FlatBuffers::StringOffset* arg3, ::FlatBuffers::VectorOffset* arg4, ::FlatBuffers::VectorOffset* arg5, ::FlatBuffers::VectorOffset* arg6, ::FlatBuffers::VectorOffset* arg7, ::FlatBuffers::VectorOffset* arg8)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::FlatBuffers::StringOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_WEEKDUNGEONFINDGIFTREWARDEXCEL_CREATEWEEKDUNGEONFINDGIFTREWARDEXCEL_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, nullptr);
		}

		::System::Void StartWeekDungeonFindGiftRewardExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_WEEKDUNGEONFINDGIFTREWARDEXCEL_STARTWEEKDUNGEONFINDGIFTREWARDEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddStageRewardId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_WEEKDUNGEONFINDGIFTREWARDEXCEL_ADDSTAGEREWARDID_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddDevName(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_WEEKDUNGEONFINDGIFTREWARDEXCEL_ADDDEVNAME_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddRewardParcelType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_WEEKDUNGEONFINDGIFTREWARDEXCEL_ADDREWARDPARCELTYPE_OFFSET))(arg, arg2, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateRewardParcelTypeVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_WEEKDUNGEONFINDGIFTREWARDEXCEL_CREATEREWARDPARCELTYPEVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartRewardParcelTypeVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_WEEKDUNGEONFINDGIFTREWARDEXCEL_STARTREWARDPARCELTYPEVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddRewardParcelId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_WEEKDUNGEONFINDGIFTREWARDEXCEL_ADDREWARDPARCELID_OFFSET))(arg, arg2, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateRewardParcelIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_WEEKDUNGEONFINDGIFTREWARDEXCEL_CREATEREWARDPARCELIDVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartRewardParcelIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_WEEKDUNGEONFINDGIFTREWARDEXCEL_STARTREWARDPARCELIDVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddRewardParcelAmount(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_WEEKDUNGEONFINDGIFTREWARDEXCEL_ADDREWARDPARCELAMOUNT_OFFSET))(arg, arg2, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateRewardParcelAmountVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_WEEKDUNGEONFINDGIFTREWARDEXCEL_CREATEREWARDPARCELAMOUNTVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartRewardParcelAmountVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_WEEKDUNGEONFINDGIFTREWARDEXCEL_STARTREWARDPARCELAMOUNTVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddRewardParcelProbability(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_WEEKDUNGEONFINDGIFTREWARDEXCEL_ADDREWARDPARCELPROBABILITY_OFFSET))(arg, arg2, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateRewardParcelProbabilityVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_WEEKDUNGEONFINDGIFTREWARDEXCEL_CREATEREWARDPARCELPROBABILITYVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartRewardParcelProbabilityVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_WEEKDUNGEONFINDGIFTREWARDEXCEL_STARTREWARDPARCELPROBABILITYVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddDropItemModelPrefabPath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_WEEKDUNGEONFINDGIFTREWARDEXCEL_ADDDROPITEMMODELPREFABPATH_OFFSET))(arg, arg2, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateDropItemModelPrefabPathVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_WEEKDUNGEONFINDGIFTREWARDEXCEL_CREATEDROPITEMMODELPREFABPATHVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartDropItemModelPrefabPathVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_WEEKDUNGEONFINDGIFTREWARDEXCEL_STARTDROPITEMMODELPREFABPATHVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* EndWeekDungeonFindGiftRewardExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_WEEKDUNGEONFINDGIFTREWARDEXCEL_ENDWEEKDUNGEONFINDGIFTREWARDEXCEL_OFFSET))(arg, nullptr);
		}

	};
}

