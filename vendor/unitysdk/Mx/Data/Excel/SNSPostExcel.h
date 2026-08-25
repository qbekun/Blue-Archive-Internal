#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class SNSPostExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }

#define MX_DATA_EXCEL_SNSPOSTEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1C8D380)
#define MX_DATA_EXCEL_SNSPOSTEXCEL_GETROOTASSNSPOSTEXCEL_OFFSET UNITYSDK_OFFSET(0x1C8D390)
#define MX_DATA_EXCEL_SNSPOSTEXCEL_GETROOTASSNSPOSTEXCEL_OFFSET UNITYSDK_OFFSET(0x1C8D3F0)
#define MX_DATA_EXCEL_SNSPOSTEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1C8D480)
#define MX_DATA_EXCEL_SNSPOSTEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1C8D450)
#define MX_DATA_EXCEL_SNSPOSTEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0x1C8D4A0)
#define MX_DATA_EXCEL_SNSPOSTEXCEL_GET_SNSINFOID_OFFSET UNITYSDK_OFFSET(0x1C8D4F0)
#define MX_DATA_EXCEL_SNSPOSTEXCEL_GET_MASTERPOSTID_OFFSET UNITYSDK_OFFSET(0x1C8D540)
#define MX_DATA_EXCEL_SNSPOSTEXCEL_GET_REPOSTSNSPROFILEID_OFFSET UNITYSDK_OFFSET(0x1C8D590)
#define MX_DATA_EXCEL_SNSPOSTEXCEL_GET_SNSPROFILEID_OFFSET UNITYSDK_OFFSET(0x1C8D5E0)
#define MX_DATA_EXCEL_SNSPOSTEXCEL_GET_POSTTEXTLOCALIZEKEY_OFFSET UNITYSDK_OFFSET(0x1C8D630)
#define MX_DATA_EXCEL_SNSPOSTEXCEL_POSTIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x1C8D680)
#define MX_DATA_EXCEL_SNSPOSTEXCEL_GET_POSTIMAGEPATHLENGTH_OFFSET UNITYSDK_OFFSET(0x1C8D6D0)
#define MX_DATA_EXCEL_SNSPOSTEXCEL_GET_REPOSTMINNUM_OFFSET UNITYSDK_OFFSET(0x1C8D710)
#define MX_DATA_EXCEL_SNSPOSTEXCEL_GET_REPOSTMAXNUM_OFFSET UNITYSDK_OFFSET(0x1C8D760)
#define MX_DATA_EXCEL_SNSPOSTEXCEL_GET_FAVORMINNUM_OFFSET UNITYSDK_OFFSET(0x1C8D7B0)
#define MX_DATA_EXCEL_SNSPOSTEXCEL_GET_FAVORMAXNUM_OFFSET UNITYSDK_OFFSET(0x1C8D800)
#define MX_DATA_EXCEL_SNSPOSTEXCEL_CREATESNSPOSTEXCEL_OFFSET UNITYSDK_OFFSET(0x1C8D850)
#define MX_DATA_EXCEL_SNSPOSTEXCEL_STARTSNSPOSTEXCEL_OFFSET UNITYSDK_OFFSET(0x1C8DCB0)
#define MX_DATA_EXCEL_SNSPOSTEXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0x1C8DBD0)
#define MX_DATA_EXCEL_SNSPOSTEXCEL_ADDSNSINFOID_OFFSET UNITYSDK_OFFSET(0x1C8DBA0)
#define MX_DATA_EXCEL_SNSPOSTEXCEL_ADDMASTERPOSTID_OFFSET UNITYSDK_OFFSET(0x1C8DB70)
#define MX_DATA_EXCEL_SNSPOSTEXCEL_ADDREPOSTSNSPROFILEID_OFFSET UNITYSDK_OFFSET(0x1C8DB40)
#define MX_DATA_EXCEL_SNSPOSTEXCEL_ADDSNSPROFILEID_OFFSET UNITYSDK_OFFSET(0x1C8DB10)
#define MX_DATA_EXCEL_SNSPOSTEXCEL_ADDPOSTTEXTLOCALIZEKEY_OFFSET UNITYSDK_OFFSET(0x1C8DC30)
#define MX_DATA_EXCEL_SNSPOSTEXCEL_ADDPOSTIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x1C8DC00)
#define MX_DATA_EXCEL_SNSPOSTEXCEL_CREATEPOSTIMAGEPATHVECTOR_OFFSET UNITYSDK_OFFSET(0x1C8DCD0)
#define MX_DATA_EXCEL_SNSPOSTEXCEL_STARTPOSTIMAGEPATHVECTOR_OFFSET UNITYSDK_OFFSET(0x1C8DD60)
#define MX_DATA_EXCEL_SNSPOSTEXCEL_ADDREPOSTMINNUM_OFFSET UNITYSDK_OFFSET(0x1C8DAE0)
#define MX_DATA_EXCEL_SNSPOSTEXCEL_ADDREPOSTMAXNUM_OFFSET UNITYSDK_OFFSET(0x1C8DAB0)
#define MX_DATA_EXCEL_SNSPOSTEXCEL_ADDFAVORMINNUM_OFFSET UNITYSDK_OFFSET(0x1C8DA80)
#define MX_DATA_EXCEL_SNSPOSTEXCEL_ADDFAVORMAXNUM_OFFSET UNITYSDK_OFFSET(0x1C8DA50)
#define MX_DATA_EXCEL_SNSPOSTEXCEL_ENDSNSPOSTEXCEL_OFFSET UNITYSDK_OFFSET(0x1C8DC60)
#define MX_DATA_EXCEL_SNSPOSTEXCEL_FINISHSNSPOSTEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C8DDA0)
#define MX_DATA_EXCEL_SNSPOSTEXCEL_FINISHSIZEPREFIXEDSNSPOSTEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C8DDC0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int SNSPostExcel_TypeDefinitionIndex = 19495;

	class SNSPostExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SNSPOSTEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::SNSPostExcel* GetRootAsSNSPostExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::SNSPostExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SNSPOSTEXCEL_GETROOTASSNSPOSTEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::SNSPostExcel* GetRootAsSNSPostExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::SNSPostExcel* arg)
		{
			return (return (::MX::Data::Excel::SNSPostExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::SNSPostExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SNSPOSTEXCEL_GETROOTASSNSPOSTEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SNSPOSTEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::SNSPostExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::SNSPostExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SNSPOSTEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SNSPOSTEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::System::Int64 get_SNSInfoId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SNSPOSTEXCEL_GET_SNSINFOID_OFFSET))(nullptr);
		}

		::System::Int64 get_MasterPostId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SNSPOSTEXCEL_GET_MASTERPOSTID_OFFSET))(nullptr);
		}

		::System::Int64 get_RepostSNSProfileId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SNSPOSTEXCEL_GET_REPOSTSNSPROFILEID_OFFSET))(nullptr);
		}

		::System::Int64 get_SNSProfileId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SNSPOSTEXCEL_GET_SNSPROFILEID_OFFSET))(nullptr);
		}

		::System::UInt32 get_PostTextLocalizeKey()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SNSPOSTEXCEL_GET_POSTTEXTLOCALIZEKEY_OFFSET))(nullptr);
		}

		::System::String* PostImagePath(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SNSPOSTEXCEL_POSTIMAGEPATH_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_PostImagePathLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SNSPOSTEXCEL_GET_POSTIMAGEPATHLENGTH_OFFSET))(nullptr);
		}

		::System::Int64 get_RepostMinNum()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SNSPOSTEXCEL_GET_REPOSTMINNUM_OFFSET))(nullptr);
		}

		::System::Int64 get_RepostMaxNum()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SNSPOSTEXCEL_GET_REPOSTMAXNUM_OFFSET))(nullptr);
		}

		::System::Int64 get_FavorMinNum()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SNSPOSTEXCEL_GET_FAVORMINNUM_OFFSET))(nullptr);
		}

		::System::Int64 get_FavorMaxNum()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SNSPOSTEXCEL_GET_FAVORMAXNUM_OFFSET))(nullptr);
		}

		Il2CppObject* CreateSNSPostExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::UInt32 arg, ::FlatBuffers::VectorOffset* arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::UInt32, ::FlatBuffers::VectorOffset*, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SNSPOSTEXCEL_CREATESNSPOSTEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartSNSPostExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SNSPOSTEXCEL_STARTSNSPOSTEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SNSPOSTEXCEL_ADDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddSNSInfoId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SNSPOSTEXCEL_ADDSNSINFOID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddMasterPostId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SNSPOSTEXCEL_ADDMASTERPOSTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRepostSNSProfileId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SNSPOSTEXCEL_ADDREPOSTSNSPROFILEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddSNSProfileId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SNSPOSTEXCEL_ADDSNSPROFILEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPostTextLocalizeKey(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SNSPOSTEXCEL_ADDPOSTTEXTLOCALIZEKEY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPostImagePath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SNSPOSTEXCEL_ADDPOSTIMAGEPATH_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreatePostImagePathVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SNSPOSTEXCEL_CREATEPOSTIMAGEPATHVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartPostImagePathVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SNSPOSTEXCEL_STARTPOSTIMAGEPATHVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRepostMinNum(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SNSPOSTEXCEL_ADDREPOSTMINNUM_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRepostMaxNum(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SNSPOSTEXCEL_ADDREPOSTMAXNUM_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddFavorMinNum(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SNSPOSTEXCEL_ADDFAVORMINNUM_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddFavorMaxNum(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SNSPOSTEXCEL_ADDFAVORMAXNUM_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndSNSPostExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SNSPOSTEXCEL_ENDSNSPOSTEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishSNSPostExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SNSPOSTEXCEL_FINISHSNSPOSTEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedSNSPostExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SNSPOSTEXCEL_FINISHSIZEPREFIXEDSNSPOSTEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

