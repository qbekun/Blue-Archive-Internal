#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class MiniGameTBGThemaRewardExcel; }
namespace FlatData { class MiniGameTBGThemaRewardType; }
namespace FlatData { class ParcelType; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }

#define MX_DATA_EXCEL_MINIGAMETBGTHEMAREWARDEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1C0D440)
#define MX_DATA_EXCEL_MINIGAMETBGTHEMAREWARDEXCEL_GETROOTASMINIGAMETBGTHEMAREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1C0D450)
#define MX_DATA_EXCEL_MINIGAMETBGTHEMAREWARDEXCEL_GETROOTASMINIGAMETBGTHEMAREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1C0D4B0)
#define MX_DATA_EXCEL_MINIGAMETBGTHEMAREWARDEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1C0D540)
#define MX_DATA_EXCEL_MINIGAMETBGTHEMAREWARDEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1C0D510)
#define MX_DATA_EXCEL_MINIGAMETBGTHEMAREWARDEXCEL_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1C0D560)
#define MX_DATA_EXCEL_MINIGAMETBGTHEMAREWARDEXCEL_GET_THEMAROUND_OFFSET UNITYSDK_OFFSET(0x1C0D5B0)
#define MX_DATA_EXCEL_MINIGAMETBGTHEMAREWARDEXCEL_GET_THEMAUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1C0D600)
#define MX_DATA_EXCEL_MINIGAMETBGTHEMAREWARDEXCEL_GET_ISLOOP_OFFSET UNITYSDK_OFFSET(0x1C0D650)
#define MX_DATA_EXCEL_MINIGAMETBGTHEMAREWARDEXCEL_GET_MINIGAMETBGTHEMAREWARDTYPE_OFFSET UNITYSDK_OFFSET(0x1C0D6A0)
#define MX_DATA_EXCEL_MINIGAMETBGTHEMAREWARDEXCEL_REWARDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1C0D6F0)
#define MX_DATA_EXCEL_MINIGAMETBGTHEMAREWARDEXCEL_GET_REWARDPARCELTYPELENGTH_OFFSET UNITYSDK_OFFSET(0x1C0D750)
#define MX_DATA_EXCEL_MINIGAMETBGTHEMAREWARDEXCEL_GETREWARDPARCELTYPEBYTES_OFFSET UNITYSDK_OFFSET(0x1C0D790)
#define MX_DATA_EXCEL_MINIGAMETBGTHEMAREWARDEXCEL_REWARDPARCELID_OFFSET UNITYSDK_OFFSET(0x1C0D7B0)
#define MX_DATA_EXCEL_MINIGAMETBGTHEMAREWARDEXCEL_GET_REWARDPARCELIDLENGTH_OFFSET UNITYSDK_OFFSET(0x1C0D810)
#define MX_DATA_EXCEL_MINIGAMETBGTHEMAREWARDEXCEL_GETREWARDPARCELIDBYTES_OFFSET UNITYSDK_OFFSET(0x1C0D850)
#define MX_DATA_EXCEL_MINIGAMETBGTHEMAREWARDEXCEL_REWARDPARCELAMOUNT_OFFSET UNITYSDK_OFFSET(0x1C0D870)
#define MX_DATA_EXCEL_MINIGAMETBGTHEMAREWARDEXCEL_GET_REWARDPARCELAMOUNTLENGTH_OFFSET UNITYSDK_OFFSET(0x1C0D8D0)
#define MX_DATA_EXCEL_MINIGAMETBGTHEMAREWARDEXCEL_GETREWARDPARCELAMOUNTBYTES_OFFSET UNITYSDK_OFFSET(0x1C0D910)
#define MX_DATA_EXCEL_MINIGAMETBGTHEMAREWARDEXCEL_CREATEMINIGAMETBGTHEMAREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1C0D930)
#define MX_DATA_EXCEL_MINIGAMETBGTHEMAREWARDEXCEL_STARTMINIGAMETBGTHEMAREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1C0DC80)
#define MX_DATA_EXCEL_MINIGAMETBGTHEMAREWARDEXCEL_ADDEVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1C0DAB0)
#define MX_DATA_EXCEL_MINIGAMETBGTHEMAREWARDEXCEL_ADDTHEMAROUND_OFFSET UNITYSDK_OFFSET(0x1C0DBD0)
#define MX_DATA_EXCEL_MINIGAMETBGTHEMAREWARDEXCEL_ADDTHEMAUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1C0DBA0)
#define MX_DATA_EXCEL_MINIGAMETBGTHEMAREWARDEXCEL_ADDISLOOP_OFFSET UNITYSDK_OFFSET(0x1C0DC00)
#define MX_DATA_EXCEL_MINIGAMETBGTHEMAREWARDEXCEL_ADDMINIGAMETBGTHEMAREWARDTYPE_OFFSET UNITYSDK_OFFSET(0x1C0DB70)
#define MX_DATA_EXCEL_MINIGAMETBGTHEMAREWARDEXCEL_ADDREWARDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1C0DB40)
#define MX_DATA_EXCEL_MINIGAMETBGTHEMAREWARDEXCEL_CREATEREWARDPARCELTYPEVECTOR_OFFSET UNITYSDK_OFFSET(0x1C0DCA0)
#define MX_DATA_EXCEL_MINIGAMETBGTHEMAREWARDEXCEL_STARTREWARDPARCELTYPEVECTOR_OFFSET UNITYSDK_OFFSET(0x1C0DD30)
#define MX_DATA_EXCEL_MINIGAMETBGTHEMAREWARDEXCEL_ADDREWARDPARCELID_OFFSET UNITYSDK_OFFSET(0x1C0DB10)
#define MX_DATA_EXCEL_MINIGAMETBGTHEMAREWARDEXCEL_CREATEREWARDPARCELIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1C0DD70)
#define MX_DATA_EXCEL_MINIGAMETBGTHEMAREWARDEXCEL_STARTREWARDPARCELIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1C0DE00)
#define MX_DATA_EXCEL_MINIGAMETBGTHEMAREWARDEXCEL_ADDREWARDPARCELAMOUNT_OFFSET UNITYSDK_OFFSET(0x1C0DAE0)
#define MX_DATA_EXCEL_MINIGAMETBGTHEMAREWARDEXCEL_CREATEREWARDPARCELAMOUNTVECTOR_OFFSET UNITYSDK_OFFSET(0x1C0DE40)
#define MX_DATA_EXCEL_MINIGAMETBGTHEMAREWARDEXCEL_STARTREWARDPARCELAMOUNTVECTOR_OFFSET UNITYSDK_OFFSET(0x1C0DED0)
#define MX_DATA_EXCEL_MINIGAMETBGTHEMAREWARDEXCEL_ENDMINIGAMETBGTHEMAREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1C0DC30)
#define MX_DATA_EXCEL_MINIGAMETBGTHEMAREWARDEXCEL_FINISHMINIGAMETBGTHEMAREWARDEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C0DF10)
#define MX_DATA_EXCEL_MINIGAMETBGTHEMAREWARDEXCEL_FINISHSIZEPREFIXEDMINIGAMETBGTHEMAREWARDEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C0DF30)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int MiniGameTBGThemaRewardExcel_TypeDefinitionIndex = 18915;

	class MiniGameTBGThemaRewardExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGTHEMAREWARDEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::MiniGameTBGThemaRewardExcel* GetRootAsMiniGameTBGThemaRewardExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::MiniGameTBGThemaRewardExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGTHEMAREWARDEXCEL_GETROOTASMINIGAMETBGTHEMAREWARDEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::MiniGameTBGThemaRewardExcel* GetRootAsMiniGameTBGThemaRewardExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::MiniGameTBGThemaRewardExcel* arg)
		{
			return (return (::MX::Data::Excel::MiniGameTBGThemaRewardExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::MiniGameTBGThemaRewardExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGTHEMAREWARDEXCEL_GETROOTASMINIGAMETBGTHEMAREWARDEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGTHEMAREWARDEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::MiniGameTBGThemaRewardExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::MiniGameTBGThemaRewardExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGTHEMAREWARDEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGTHEMAREWARDEXCEL_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Int32 get_ThemaRound()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGTHEMAREWARDEXCEL_GET_THEMAROUND_OFFSET))(nullptr);
		}

		::System::Int32 get_ThemaUniqueId()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGTHEMAREWARDEXCEL_GET_THEMAUNIQUEID_OFFSET))(nullptr);
		}

		::System::Boolean get_IsLoop()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGTHEMAREWARDEXCEL_GET_ISLOOP_OFFSET))(nullptr);
		}

		::FlatData::MiniGameTBGThemaRewardType* get_MiniGameTBGThemaRewardType()
		{
			return (return (::FlatData::MiniGameTBGThemaRewardType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGTHEMAREWARDEXCEL_GET_MINIGAMETBGTHEMAREWARDTYPE_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* RewardParcelType(::System::Int32 arg)
		{
			return (return (::FlatData::ParcelType*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGTHEMAREWARDEXCEL_REWARDPARCELTYPE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_RewardParcelTypeLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGTHEMAREWARDEXCEL_GET_REWARDPARCELTYPELENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetRewardParcelTypeBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGTHEMAREWARDEXCEL_GETREWARDPARCELTYPEBYTES_OFFSET))(nullptr);
		}

		::System::Int64 RewardParcelId(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGTHEMAREWARDEXCEL_REWARDPARCELID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_RewardParcelIdLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGTHEMAREWARDEXCEL_GET_REWARDPARCELIDLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetRewardParcelIdBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGTHEMAREWARDEXCEL_GETREWARDPARCELIDBYTES_OFFSET))(nullptr);
		}

		::System::Int32 RewardParcelAmount(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGTHEMAREWARDEXCEL_REWARDPARCELAMOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_RewardParcelAmountLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGTHEMAREWARDEXCEL_GET_REWARDPARCELAMOUNTLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetRewardParcelAmountBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGTHEMAREWARDEXCEL_GETREWARDPARCELAMOUNTBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateMiniGameTBGThemaRewardExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Boolean arg, ::FlatData::MiniGameTBGThemaRewardType* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int32, ::System::Int32, ::System::Boolean, ::FlatData::MiniGameTBGThemaRewardType*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGTHEMAREWARDEXCEL_CREATEMINIGAMETBGTHEMAREWARDEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartMiniGameTBGThemaRewardExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGTHEMAREWARDEXCEL_STARTMINIGAMETBGTHEMAREWARDEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddEventContentId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGTHEMAREWARDEXCEL_ADDEVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddThemaRound(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGTHEMAREWARDEXCEL_ADDTHEMAROUND_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddThemaUniqueId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGTHEMAREWARDEXCEL_ADDTHEMAUNIQUEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddIsLoop(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGTHEMAREWARDEXCEL_ADDISLOOP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddMiniGameTBGThemaRewardType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::MiniGameTBGThemaRewardType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::MiniGameTBGThemaRewardType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGTHEMAREWARDEXCEL_ADDMINIGAMETBGTHEMAREWARDTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardParcelType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGTHEMAREWARDEXCEL_ADDREWARDPARCELTYPE_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateRewardParcelTypeVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGTHEMAREWARDEXCEL_CREATEREWARDPARCELTYPEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartRewardParcelTypeVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGTHEMAREWARDEXCEL_STARTREWARDPARCELTYPEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardParcelId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGTHEMAREWARDEXCEL_ADDREWARDPARCELID_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateRewardParcelIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGTHEMAREWARDEXCEL_CREATEREWARDPARCELIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartRewardParcelIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGTHEMAREWARDEXCEL_STARTREWARDPARCELIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardParcelAmount(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGTHEMAREWARDEXCEL_ADDREWARDPARCELAMOUNT_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateRewardParcelAmountVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGTHEMAREWARDEXCEL_CREATEREWARDPARCELAMOUNTVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartRewardParcelAmountVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGTHEMAREWARDEXCEL_STARTREWARDPARCELAMOUNTVECTOR_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndMiniGameTBGThemaRewardExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGTHEMAREWARDEXCEL_ENDMINIGAMETBGTHEMAREWARDEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishMiniGameTBGThemaRewardExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGTHEMAREWARDEXCEL_FINISHMINIGAMETBGTHEMAREWARDEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedMiniGameTBGThemaRewardExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGTHEMAREWARDEXCEL_FINISHSIZEPREFIXEDMINIGAMETBGTHEMAREWARDEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

