#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class FieldSNSPostExcel; }
namespace FlatData { class FieldSNSPostType; }
namespace FlatBuffers { class FlatBufferBuilder; }

#define MX_DATA_EXCEL_FIELDSNSPOSTEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1B1E220)
#define MX_DATA_EXCEL_FIELDSNSPOSTEXCEL_GETROOTASFIELDSNSPOSTEXCEL_OFFSET UNITYSDK_OFFSET(0x1B1E230)
#define MX_DATA_EXCEL_FIELDSNSPOSTEXCEL_GETROOTASFIELDSNSPOSTEXCEL_OFFSET UNITYSDK_OFFSET(0x1B1E290)
#define MX_DATA_EXCEL_FIELDSNSPOSTEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1B1E320)
#define MX_DATA_EXCEL_FIELDSNSPOSTEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1B1E2F0)
#define MX_DATA_EXCEL_FIELDSNSPOSTEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0x1B1E340)
#define MX_DATA_EXCEL_FIELDSNSPOSTEXCEL_GET_GROUPINTERACTIONID_OFFSET UNITYSDK_OFFSET(0x1B1E390)
#define MX_DATA_EXCEL_FIELDSNSPOSTEXCEL_GET_POSTTYPE_OFFSET UNITYSDK_OFFSET(0x1B1E3E0)
#define MX_DATA_EXCEL_FIELDSNSPOSTEXCEL_GET_SNSPOSTID_OFFSET UNITYSDK_OFFSET(0x1B1E430)
#define MX_DATA_EXCEL_FIELDSNSPOSTEXCEL_GET_ISSEQUENCE_OFFSET UNITYSDK_OFFSET(0x1B1E480)
#define MX_DATA_EXCEL_FIELDSNSPOSTEXCEL_GET_ORDER_OFFSET UNITYSDK_OFFSET(0x1B1E4D0)
#define MX_DATA_EXCEL_FIELDSNSPOSTEXCEL_GET_DELAYTIME_OFFSET UNITYSDK_OFFSET(0x1B1E520)
#define MX_DATA_EXCEL_FIELDSNSPOSTEXCEL_GET_REPOSTMINNUM_OFFSET UNITYSDK_OFFSET(0x1B1E570)
#define MX_DATA_EXCEL_FIELDSNSPOSTEXCEL_GET_REPOSTMAXNUM_OFFSET UNITYSDK_OFFSET(0x1B1E5C0)
#define MX_DATA_EXCEL_FIELDSNSPOSTEXCEL_GET_FAVORMINNUM_OFFSET UNITYSDK_OFFSET(0x1B1E610)
#define MX_DATA_EXCEL_FIELDSNSPOSTEXCEL_GET_FAVORMAXNUM_OFFSET UNITYSDK_OFFSET(0x1B1E660)
#define MX_DATA_EXCEL_FIELDSNSPOSTEXCEL_CREATEFIELDSNSPOSTEXCEL_OFFSET UNITYSDK_OFFSET(0x1B1E6B0)
#define MX_DATA_EXCEL_FIELDSNSPOSTEXCEL_STARTFIELDSNSPOSTEXCEL_OFFSET UNITYSDK_OFFSET(0x1B1EB10)
#define MX_DATA_EXCEL_FIELDSNSPOSTEXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0x1B1EA30)
#define MX_DATA_EXCEL_FIELDSNSPOSTEXCEL_ADDGROUPINTERACTIONID_OFFSET UNITYSDK_OFFSET(0x1B1EA00)
#define MX_DATA_EXCEL_FIELDSNSPOSTEXCEL_ADDPOSTTYPE_OFFSET UNITYSDK_OFFSET(0x1B1EA60)
#define MX_DATA_EXCEL_FIELDSNSPOSTEXCEL_ADDSNSPOSTID_OFFSET UNITYSDK_OFFSET(0x1B1E9D0)
#define MX_DATA_EXCEL_FIELDSNSPOSTEXCEL_ADDISSEQUENCE_OFFSET UNITYSDK_OFFSET(0x1B1EA90)
#define MX_DATA_EXCEL_FIELDSNSPOSTEXCEL_ADDORDER_OFFSET UNITYSDK_OFFSET(0x1B1E9A0)
#define MX_DATA_EXCEL_FIELDSNSPOSTEXCEL_ADDDELAYTIME_OFFSET UNITYSDK_OFFSET(0x1B1E970)
#define MX_DATA_EXCEL_FIELDSNSPOSTEXCEL_ADDREPOSTMINNUM_OFFSET UNITYSDK_OFFSET(0x1B1E940)
#define MX_DATA_EXCEL_FIELDSNSPOSTEXCEL_ADDREPOSTMAXNUM_OFFSET UNITYSDK_OFFSET(0x1B1E910)
#define MX_DATA_EXCEL_FIELDSNSPOSTEXCEL_ADDFAVORMINNUM_OFFSET UNITYSDK_OFFSET(0x1B1E8E0)
#define MX_DATA_EXCEL_FIELDSNSPOSTEXCEL_ADDFAVORMAXNUM_OFFSET UNITYSDK_OFFSET(0x1B1E8B0)
#define MX_DATA_EXCEL_FIELDSNSPOSTEXCEL_ENDFIELDSNSPOSTEXCEL_OFFSET UNITYSDK_OFFSET(0x1B1EAC0)
#define MX_DATA_EXCEL_FIELDSNSPOSTEXCEL_FINISHFIELDSNSPOSTEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1B1EB30)
#define MX_DATA_EXCEL_FIELDSNSPOSTEXCEL_FINISHSIZEPREFIXEDFIELDSNSPOSTEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1B1EB50)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int FieldSNSPostExcel_TypeDefinitionIndex = 17975;

	class FieldSNSPostExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FIELDSNSPOSTEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::FieldSNSPostExcel* GetRootAsFieldSNSPostExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::FieldSNSPostExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FIELDSNSPOSTEXCEL_GETROOTASFIELDSNSPOSTEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::FieldSNSPostExcel* GetRootAsFieldSNSPostExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::FieldSNSPostExcel* arg)
		{
			return (return (::MX::Data::Excel::FieldSNSPostExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::FieldSNSPostExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FIELDSNSPOSTEXCEL_GETROOTASFIELDSNSPOSTEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FIELDSNSPOSTEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::FieldSNSPostExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::FieldSNSPostExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FIELDSNSPOSTEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FIELDSNSPOSTEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::System::Int64 get_GroupInteractionId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FIELDSNSPOSTEXCEL_GET_GROUPINTERACTIONID_OFFSET))(nullptr);
		}

		::FlatData::FieldSNSPostType* get_PostType()
		{
			return (return (::FlatData::FieldSNSPostType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FIELDSNSPOSTEXCEL_GET_POSTTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_SNSPostId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FIELDSNSPOSTEXCEL_GET_SNSPOSTID_OFFSET))(nullptr);
		}

		::System::Boolean get_IsSequence()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FIELDSNSPOSTEXCEL_GET_ISSEQUENCE_OFFSET))(nullptr);
		}

		::System::Int64 get_Order()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FIELDSNSPOSTEXCEL_GET_ORDER_OFFSET))(nullptr);
		}

		::System::Int64 get_DelayTime()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FIELDSNSPOSTEXCEL_GET_DELAYTIME_OFFSET))(nullptr);
		}

		::System::Int64 get_RepostMinNum()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FIELDSNSPOSTEXCEL_GET_REPOSTMINNUM_OFFSET))(nullptr);
		}

		::System::Int64 get_RepostMaxNum()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FIELDSNSPOSTEXCEL_GET_REPOSTMAXNUM_OFFSET))(nullptr);
		}

		::System::Int64 get_FavorMinNum()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FIELDSNSPOSTEXCEL_GET_FAVORMINNUM_OFFSET))(nullptr);
		}

		::System::Int64 get_FavorMaxNum()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FIELDSNSPOSTEXCEL_GET_FAVORMAXNUM_OFFSET))(nullptr);
		}

		Il2CppObject* CreateFieldSNSPostExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatData::FieldSNSPostType* arg, ::System::Int64 arg, ::System::Boolean arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int64, ::FlatData::FieldSNSPostType*, ::System::Int64, ::System::Boolean, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FIELDSNSPOSTEXCEL_CREATEFIELDSNSPOSTEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartFieldSNSPostExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FIELDSNSPOSTEXCEL_STARTFIELDSNSPOSTEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FIELDSNSPOSTEXCEL_ADDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddGroupInteractionId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FIELDSNSPOSTEXCEL_ADDGROUPINTERACTIONID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPostType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::FieldSNSPostType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::FieldSNSPostType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FIELDSNSPOSTEXCEL_ADDPOSTTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddSNSPostId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FIELDSNSPOSTEXCEL_ADDSNSPOSTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddIsSequence(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FIELDSNSPOSTEXCEL_ADDISSEQUENCE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddOrder(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FIELDSNSPOSTEXCEL_ADDORDER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDelayTime(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FIELDSNSPOSTEXCEL_ADDDELAYTIME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRepostMinNum(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FIELDSNSPOSTEXCEL_ADDREPOSTMINNUM_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRepostMaxNum(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FIELDSNSPOSTEXCEL_ADDREPOSTMAXNUM_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddFavorMinNum(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FIELDSNSPOSTEXCEL_ADDFAVORMINNUM_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddFavorMaxNum(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FIELDSNSPOSTEXCEL_ADDFAVORMAXNUM_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndFieldSNSPostExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FIELDSNSPOSTEXCEL_ENDFIELDSNSPOSTEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishFieldSNSPostExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FIELDSNSPOSTEXCEL_FINISHFIELDSNSPOSTEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedFieldSNSPostExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FIELDSNSPOSTEXCEL_FINISHSIZEPREFIXEDFIELDSNSPOSTEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

