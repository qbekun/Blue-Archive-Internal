#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class MinigameCCGRewardCardExcel; }
namespace FlatData { class CCGEntityType; }
namespace FlatBuffers { class FlatBufferBuilder; }

#define MX_DATA_EXCEL_MINIGAMECCGREWARDCARDEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1B9F0F0)
#define MX_DATA_EXCEL_MINIGAMECCGREWARDCARDEXCEL_GETROOTASMINIGAMECCGREWARDCARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1B9F100)
#define MX_DATA_EXCEL_MINIGAMECCGREWARDCARDEXCEL_GETROOTASMINIGAMECCGREWARDCARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1B9F160)
#define MX_DATA_EXCEL_MINIGAMECCGREWARDCARDEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1B9F1F0)
#define MX_DATA_EXCEL_MINIGAMECCGREWARDCARDEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1B9F1C0)
#define MX_DATA_EXCEL_MINIGAMECCGREWARDCARDEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0x1B9F210)
#define MX_DATA_EXCEL_MINIGAMECCGREWARDCARDEXCEL_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1B9F260)
#define MX_DATA_EXCEL_MINIGAMECCGREWARDCARDEXCEL_GET_ENTITYTYPE_OFFSET UNITYSDK_OFFSET(0x1B9F2B0)
#define MX_DATA_EXCEL_MINIGAMECCGREWARDCARDEXCEL_GET_CARDID_OFFSET UNITYSDK_OFFSET(0x1B9F300)
#define MX_DATA_EXCEL_MINIGAMECCGREWARDCARDEXCEL_GET_CARDRARITY_OFFSET UNITYSDK_OFFSET(0x1B9F350)
#define MX_DATA_EXCEL_MINIGAMECCGREWARDCARDEXCEL_CREATEMINIGAMECCGREWARDCARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1B9F3A0)
#define MX_DATA_EXCEL_MINIGAMECCGREWARDCARDEXCEL_STARTMINIGAMECCGREWARDCARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1B9F5E0)
#define MX_DATA_EXCEL_MINIGAMECCGREWARDCARDEXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0x1B9F500)
#define MX_DATA_EXCEL_MINIGAMECCGREWARDCARDEXCEL_ADDGROUPID_OFFSET UNITYSDK_OFFSET(0x1B9F4D0)
#define MX_DATA_EXCEL_MINIGAMECCGREWARDCARDEXCEL_ADDENTITYTYPE_OFFSET UNITYSDK_OFFSET(0x1B9F560)
#define MX_DATA_EXCEL_MINIGAMECCGREWARDCARDEXCEL_ADDCARDID_OFFSET UNITYSDK_OFFSET(0x1B9F4A0)
#define MX_DATA_EXCEL_MINIGAMECCGREWARDCARDEXCEL_ADDCARDRARITY_OFFSET UNITYSDK_OFFSET(0x1B9F530)
#define MX_DATA_EXCEL_MINIGAMECCGREWARDCARDEXCEL_ENDMINIGAMECCGREWARDCARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1B9F590)
#define MX_DATA_EXCEL_MINIGAMECCGREWARDCARDEXCEL_FINISHMINIGAMECCGREWARDCARDEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1B9F600)
#define MX_DATA_EXCEL_MINIGAMECCGREWARDCARDEXCEL_FINISHSIZEPREFIXEDMINIGAMECCGREWARDCARDEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1B9F620)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int MinigameCCGRewardCardExcel_TypeDefinitionIndex = 18530;

	class MinigameCCGRewardCardExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGREWARDCARDEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::MinigameCCGRewardCardExcel* GetRootAsMinigameCCGRewardCardExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::MinigameCCGRewardCardExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGREWARDCARDEXCEL_GETROOTASMINIGAMECCGREWARDCARDEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::MinigameCCGRewardCardExcel* GetRootAsMinigameCCGRewardCardExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::MinigameCCGRewardCardExcel* arg)
		{
			return (return (::MX::Data::Excel::MinigameCCGRewardCardExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::MinigameCCGRewardCardExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGREWARDCARDEXCEL_GETROOTASMINIGAMECCGREWARDCARDEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGREWARDCARDEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::MinigameCCGRewardCardExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::MinigameCCGRewardCardExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGREWARDCARDEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGREWARDCARDEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::System::Int64 get_GroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGREWARDCARDEXCEL_GET_GROUPID_OFFSET))(nullptr);
		}

		::FlatData::CCGEntityType* get_EntityType()
		{
			return (return (::FlatData::CCGEntityType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGREWARDCARDEXCEL_GET_ENTITYTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_CardId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGREWARDCARDEXCEL_GET_CARDID_OFFSET))(nullptr);
		}

		::System::Int32 get_CardRarity()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGREWARDCARDEXCEL_GET_CARDRARITY_OFFSET))(nullptr);
		}

		Il2CppObject* CreateMinigameCCGRewardCardExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatData::CCGEntityType* arg, ::System::Int64 arg, ::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int64, ::FlatData::CCGEntityType*, ::System::Int64, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGREWARDCARDEXCEL_CREATEMINIGAMECCGREWARDCARDEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartMinigameCCGRewardCardExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGREWARDCARDEXCEL_STARTMINIGAMECCGREWARDCARDEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGREWARDCARDEXCEL_ADDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGREWARDCARDEXCEL_ADDGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEntityType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::CCGEntityType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::CCGEntityType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGREWARDCARDEXCEL_ADDENTITYTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCardId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGREWARDCARDEXCEL_ADDCARDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCardRarity(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGREWARDCARDEXCEL_ADDCARDRARITY_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndMinigameCCGRewardCardExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGREWARDCARDEXCEL_ENDMINIGAMECCGREWARDCARDEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishMinigameCCGRewardCardExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGREWARDCARDEXCEL_FINISHMINIGAMECCGREWARDCARDEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedMinigameCCGRewardCardExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGREWARDCARDEXCEL_FINISHSIZEPREFIXEDMINIGAMECCGREWARDCARDEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

