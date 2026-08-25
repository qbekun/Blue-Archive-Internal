#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class CafeInteractionExcel; }
namespace FlatData { class BubbleType; }
namespace FlatData { class ParcelType; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }
namespace FlatBuffers { class VectorOffset; }

#define MX_DATA_EXCEL_CAFEINTERACTIONEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x19F8740)
#define MX_DATA_EXCEL_CAFEINTERACTIONEXCEL_GETROOTASCAFEINTERACTIONEXCEL_OFFSET UNITYSDK_OFFSET(0x19F8750)
#define MX_DATA_EXCEL_CAFEINTERACTIONEXCEL_GETROOTASCAFEINTERACTIONEXCEL_OFFSET UNITYSDK_OFFSET(0x19F87B0)
#define MX_DATA_EXCEL_CAFEINTERACTIONEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x19F8840)
#define MX_DATA_EXCEL_CAFEINTERACTIONEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x19F8810)
#define MX_DATA_EXCEL_CAFEINTERACTIONEXCEL_GET_CHARACTERID_OFFSET UNITYSDK_OFFSET(0x19F8860)
#define MX_DATA_EXCEL_CAFEINTERACTIONEXCEL_GET_IGNOREIFUNOBTAINED_OFFSET UNITYSDK_OFFSET(0x19F88B0)
#define MX_DATA_EXCEL_CAFEINTERACTIONEXCEL_GET_IGNOREIFUNOBTAINEDSTARTDATE_OFFSET UNITYSDK_OFFSET(0x19F8900)
#define MX_DATA_EXCEL_CAFEINTERACTIONEXCEL_GETIGNOREIFUNOBTAINEDSTARTDATEBYTES_OFFSET UNITYSDK_OFFSET(0x19F8940)
#define MX_DATA_EXCEL_CAFEINTERACTIONEXCEL_GET_IGNOREIFUNOBTAINEDENDDATE_OFFSET UNITYSDK_OFFSET(0x19F8960)
#define MX_DATA_EXCEL_CAFEINTERACTIONEXCEL_GETIGNOREIFUNOBTAINEDENDDATEBYTES_OFFSET UNITYSDK_OFFSET(0x19F89A0)
#define MX_DATA_EXCEL_CAFEINTERACTIONEXCEL_BUBBLETYPE_OFFSET UNITYSDK_OFFSET(0x19F89C0)
#define MX_DATA_EXCEL_CAFEINTERACTIONEXCEL_GET_BUBBLETYPELENGTH_OFFSET UNITYSDK_OFFSET(0x19F8A20)
#define MX_DATA_EXCEL_CAFEINTERACTIONEXCEL_GETBUBBLETYPEBYTES_OFFSET UNITYSDK_OFFSET(0x19F8A60)
#define MX_DATA_EXCEL_CAFEINTERACTIONEXCEL_BUBBLEDURATION_OFFSET UNITYSDK_OFFSET(0x19F8A80)
#define MX_DATA_EXCEL_CAFEINTERACTIONEXCEL_GET_BUBBLEDURATIONLENGTH_OFFSET UNITYSDK_OFFSET(0x19F8AE0)
#define MX_DATA_EXCEL_CAFEINTERACTIONEXCEL_GETBUBBLEDURATIONBYTES_OFFSET UNITYSDK_OFFSET(0x19F8B20)
#define MX_DATA_EXCEL_CAFEINTERACTIONEXCEL_GET_FAVOREMOTICONREWARDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x19F8B40)
#define MX_DATA_EXCEL_CAFEINTERACTIONEXCEL_GET_FAVOREMOTICONREWARDID_OFFSET UNITYSDK_OFFSET(0x19F8B90)
#define MX_DATA_EXCEL_CAFEINTERACTIONEXCEL_GET_FAVOREMOTICONREWARDAMOUNT_OFFSET UNITYSDK_OFFSET(0x19F8BE0)
#define MX_DATA_EXCEL_CAFEINTERACTIONEXCEL_CAFECHARACTERSTATE_OFFSET UNITYSDK_OFFSET(0x19F8C30)
#define MX_DATA_EXCEL_CAFEINTERACTIONEXCEL_GET_CAFECHARACTERSTATELENGTH_OFFSET UNITYSDK_OFFSET(0x19F8C80)
#define MX_DATA_EXCEL_CAFEINTERACTIONEXCEL_CREATECAFEINTERACTIONEXCEL_OFFSET UNITYSDK_OFFSET(0x19F8CC0)
#define MX_DATA_EXCEL_CAFEINTERACTIONEXCEL_STARTCAFEINTERACTIONEXCEL_OFFSET UNITYSDK_OFFSET(0x19F90C0)
#define MX_DATA_EXCEL_CAFEINTERACTIONEXCEL_ADDCHARACTERID_OFFSET UNITYSDK_OFFSET(0x19F8EF0)
#define MX_DATA_EXCEL_CAFEINTERACTIONEXCEL_ADDIGNOREIFUNOBTAINED_OFFSET UNITYSDK_OFFSET(0x19F9040)
#define MX_DATA_EXCEL_CAFEINTERACTIONEXCEL_ADDIGNOREIFUNOBTAINEDSTARTDATE_OFFSET UNITYSDK_OFFSET(0x19F9010)
#define MX_DATA_EXCEL_CAFEINTERACTIONEXCEL_ADDIGNOREIFUNOBTAINEDENDDATE_OFFSET UNITYSDK_OFFSET(0x19F8FE0)
#define MX_DATA_EXCEL_CAFEINTERACTIONEXCEL_ADDBUBBLETYPE_OFFSET UNITYSDK_OFFSET(0x19F8FB0)
#define MX_DATA_EXCEL_CAFEINTERACTIONEXCEL_CREATEBUBBLETYPEVECTOR_OFFSET UNITYSDK_OFFSET(0x19F90E0)
#define MX_DATA_EXCEL_CAFEINTERACTIONEXCEL_STARTBUBBLETYPEVECTOR_OFFSET UNITYSDK_OFFSET(0x19F9170)
#define MX_DATA_EXCEL_CAFEINTERACTIONEXCEL_ADDBUBBLEDURATION_OFFSET UNITYSDK_OFFSET(0x19F8F80)
#define MX_DATA_EXCEL_CAFEINTERACTIONEXCEL_CREATEBUBBLEDURATIONVECTOR_OFFSET UNITYSDK_OFFSET(0x19F91B0)
#define MX_DATA_EXCEL_CAFEINTERACTIONEXCEL_STARTBUBBLEDURATIONVECTOR_OFFSET UNITYSDK_OFFSET(0x19F9240)
#define MX_DATA_EXCEL_CAFEINTERACTIONEXCEL_ADDFAVOREMOTICONREWARDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x19F8F50)
#define MX_DATA_EXCEL_CAFEINTERACTIONEXCEL_ADDFAVOREMOTICONREWARDID_OFFSET UNITYSDK_OFFSET(0x19F8EC0)
#define MX_DATA_EXCEL_CAFEINTERACTIONEXCEL_ADDFAVOREMOTICONREWARDAMOUNT_OFFSET UNITYSDK_OFFSET(0x19F8E90)
#define MX_DATA_EXCEL_CAFEINTERACTIONEXCEL_ADDCAFECHARACTERSTATE_OFFSET UNITYSDK_OFFSET(0x19F8F20)
#define MX_DATA_EXCEL_CAFEINTERACTIONEXCEL_CREATECAFECHARACTERSTATEVECTOR_OFFSET UNITYSDK_OFFSET(0x19F9280)
#define MX_DATA_EXCEL_CAFEINTERACTIONEXCEL_STARTCAFECHARACTERSTATEVECTOR_OFFSET UNITYSDK_OFFSET(0x19F9310)
#define MX_DATA_EXCEL_CAFEINTERACTIONEXCEL_ENDCAFEINTERACTIONEXCEL_OFFSET UNITYSDK_OFFSET(0x19F9070)
#define MX_DATA_EXCEL_CAFEINTERACTIONEXCEL_FINISHCAFEINTERACTIONEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x19F9350)
#define MX_DATA_EXCEL_CAFEINTERACTIONEXCEL_FINISHSIZEPREFIXEDCAFEINTERACTIONEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x19F9370)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int CafeInteractionExcel_TypeDefinitionIndex = 16840;

	class CafeInteractionExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAFEINTERACTIONEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::CafeInteractionExcel* GetRootAsCafeInteractionExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::CafeInteractionExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAFEINTERACTIONEXCEL_GETROOTASCAFEINTERACTIONEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::CafeInteractionExcel* GetRootAsCafeInteractionExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::CafeInteractionExcel* arg)
		{
			return (return (::MX::Data::Excel::CafeInteractionExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::CafeInteractionExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAFEINTERACTIONEXCEL_GETROOTASCAFEINTERACTIONEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAFEINTERACTIONEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::CafeInteractionExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::CafeInteractionExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAFEINTERACTIONEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_CharacterId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAFEINTERACTIONEXCEL_GET_CHARACTERID_OFFSET))(nullptr);
		}

		::System::Boolean get_IgnoreIfUnobtained()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAFEINTERACTIONEXCEL_GET_IGNOREIFUNOBTAINED_OFFSET))(nullptr);
		}

		::System::String* get_IgnoreIfUnobtainedStartDate()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAFEINTERACTIONEXCEL_GET_IGNOREIFUNOBTAINEDSTARTDATE_OFFSET))(nullptr);
		}

		Il2CppObject* GetIgnoreIfUnobtainedStartDateBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAFEINTERACTIONEXCEL_GETIGNOREIFUNOBTAINEDSTARTDATEBYTES_OFFSET))(nullptr);
		}

		::System::String* get_IgnoreIfUnobtainedEndDate()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAFEINTERACTIONEXCEL_GET_IGNOREIFUNOBTAINEDENDDATE_OFFSET))(nullptr);
		}

		Il2CppObject* GetIgnoreIfUnobtainedEndDateBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAFEINTERACTIONEXCEL_GETIGNOREIFUNOBTAINEDENDDATEBYTES_OFFSET))(nullptr);
		}

		::FlatData::BubbleType* BubbleType(::System::Int32 arg)
		{
			return (return (::FlatData::BubbleType*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAFEINTERACTIONEXCEL_BUBBLETYPE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_BubbleTypeLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAFEINTERACTIONEXCEL_GET_BUBBLETYPELENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetBubbleTypeBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAFEINTERACTIONEXCEL_GETBUBBLETYPEBYTES_OFFSET))(nullptr);
		}

		::System::Int64 BubbleDuration(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAFEINTERACTIONEXCEL_BUBBLEDURATION_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_BubbleDurationLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAFEINTERACTIONEXCEL_GET_BUBBLEDURATIONLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetBubbleDurationBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAFEINTERACTIONEXCEL_GETBUBBLEDURATIONBYTES_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* get_FavorEmoticonRewardParcelType()
		{
			return (return (::FlatData::ParcelType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAFEINTERACTIONEXCEL_GET_FAVOREMOTICONREWARDPARCELTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_FavorEmoticonRewardId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAFEINTERACTIONEXCEL_GET_FAVOREMOTICONREWARDID_OFFSET))(nullptr);
		}

		::System::Int64 get_FavorEmoticonRewardAmount()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAFEINTERACTIONEXCEL_GET_FAVOREMOTICONREWARDAMOUNT_OFFSET))(nullptr);
		}

		::System::String* CafeCharacterState(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAFEINTERACTIONEXCEL_CAFECHARACTERSTATE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_CafeCharacterStateLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAFEINTERACTIONEXCEL_GET_CAFECHARACTERSTATELENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* CreateCafeInteractionExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Boolean arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatData::ParcelType* arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatBuffers::VectorOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Boolean, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatData::ParcelType*, ::System::Int64, ::System::Int64, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAFEINTERACTIONEXCEL_CREATECAFEINTERACTIONEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartCafeInteractionExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAFEINTERACTIONEXCEL_STARTCAFEINTERACTIONEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddCharacterId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAFEINTERACTIONEXCEL_ADDCHARACTERID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddIgnoreIfUnobtained(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAFEINTERACTIONEXCEL_ADDIGNOREIFUNOBTAINED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddIgnoreIfUnobtainedStartDate(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAFEINTERACTIONEXCEL_ADDIGNOREIFUNOBTAINEDSTARTDATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddIgnoreIfUnobtainedEndDate(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAFEINTERACTIONEXCEL_ADDIGNOREIFUNOBTAINEDENDDATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddBubbleType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAFEINTERACTIONEXCEL_ADDBUBBLETYPE_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateBubbleTypeVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAFEINTERACTIONEXCEL_CREATEBUBBLETYPEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartBubbleTypeVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAFEINTERACTIONEXCEL_STARTBUBBLETYPEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddBubbleDuration(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAFEINTERACTIONEXCEL_ADDBUBBLEDURATION_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateBubbleDurationVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAFEINTERACTIONEXCEL_CREATEBUBBLEDURATIONVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartBubbleDurationVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAFEINTERACTIONEXCEL_STARTBUBBLEDURATIONVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddFavorEmoticonRewardParcelType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ParcelType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ParcelType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAFEINTERACTIONEXCEL_ADDFAVOREMOTICONREWARDPARCELTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddFavorEmoticonRewardId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAFEINTERACTIONEXCEL_ADDFAVOREMOTICONREWARDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddFavorEmoticonRewardAmount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAFEINTERACTIONEXCEL_ADDFAVOREMOTICONREWARDAMOUNT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCafeCharacterState(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAFEINTERACTIONEXCEL_ADDCAFECHARACTERSTATE_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateCafeCharacterStateVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAFEINTERACTIONEXCEL_CREATECAFECHARACTERSTATEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartCafeCharacterStateVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAFEINTERACTIONEXCEL_STARTCAFECHARACTERSTATEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndCafeInteractionExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAFEINTERACTIONEXCEL_ENDCAFEINTERACTIONEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishCafeInteractionExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAFEINTERACTIONEXCEL_FINISHCAFEINTERACTIONEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedCafeInteractionExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAFEINTERACTIONEXCEL_FINISHSIZEPREFIXEDCAFEINTERACTIONEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

