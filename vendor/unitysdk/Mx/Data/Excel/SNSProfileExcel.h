#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class SNSProfileExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }

#define MX_DATA_EXCEL_SNSPROFILEEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1C8EAF0)
#define MX_DATA_EXCEL_SNSPROFILEEXCEL_GETROOTASSNSPROFILEEXCEL_OFFSET UNITYSDK_OFFSET(0x1C8EB00)
#define MX_DATA_EXCEL_SNSPROFILEEXCEL_GETROOTASSNSPROFILEEXCEL_OFFSET UNITYSDK_OFFSET(0x1C8EB60)
#define MX_DATA_EXCEL_SNSPROFILEEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1C8EBF0)
#define MX_DATA_EXCEL_SNSPROFILEEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1C8EBC0)
#define MX_DATA_EXCEL_SNSPROFILEEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0x1C8EC10)
#define MX_DATA_EXCEL_SNSPROFILEEXCEL_GET_DEVNAME_OFFSET UNITYSDK_OFFSET(0x1C8EC60)
#define MX_DATA_EXCEL_SNSPROFILEEXCEL_GETDEVNAMEBYTES_OFFSET UNITYSDK_OFFSET(0x1C8ECA0)
#define MX_DATA_EXCEL_SNSPROFILEEXCEL_GET_PROFILEIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x1C8ECC0)
#define MX_DATA_EXCEL_SNSPROFILEEXCEL_GETPROFILEIMAGEPATHBYTES_OFFSET UNITYSDK_OFFSET(0x1C8ED00)
#define MX_DATA_EXCEL_SNSPROFILEEXCEL_GET_NAMELOCALIZEKEY_OFFSET UNITYSDK_OFFSET(0x1C8ED20)
#define MX_DATA_EXCEL_SNSPROFILEEXCEL_GET_IDLOCALIZEKEY_OFFSET UNITYSDK_OFFSET(0x1C8ED70)
#define MX_DATA_EXCEL_SNSPROFILEEXCEL_GET_MARKICONVISIBLE_OFFSET UNITYSDK_OFFSET(0x1C8EDC0)
#define MX_DATA_EXCEL_SNSPROFILEEXCEL_CREATESNSPROFILEEXCEL_OFFSET UNITYSDK_OFFSET(0x1C8EE10)
#define MX_DATA_EXCEL_SNSPROFILEEXCEL_STARTSNSPROFILEEXCEL_OFFSET UNITYSDK_OFFSET(0x1C8F0B0)
#define MX_DATA_EXCEL_SNSPROFILEEXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0x1C8EF40)
#define MX_DATA_EXCEL_SNSPROFILEEXCEL_ADDDEVNAME_OFFSET UNITYSDK_OFFSET(0x1C8F000)
#define MX_DATA_EXCEL_SNSPROFILEEXCEL_ADDPROFILEIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x1C8EFD0)
#define MX_DATA_EXCEL_SNSPROFILEEXCEL_ADDNAMELOCALIZEKEY_OFFSET UNITYSDK_OFFSET(0x1C8EFA0)
#define MX_DATA_EXCEL_SNSPROFILEEXCEL_ADDIDLOCALIZEKEY_OFFSET UNITYSDK_OFFSET(0x1C8EF70)
#define MX_DATA_EXCEL_SNSPROFILEEXCEL_ADDMARKICONVISIBLE_OFFSET UNITYSDK_OFFSET(0x1C8F030)
#define MX_DATA_EXCEL_SNSPROFILEEXCEL_ENDSNSPROFILEEXCEL_OFFSET UNITYSDK_OFFSET(0x1C8F060)
#define MX_DATA_EXCEL_SNSPROFILEEXCEL_FINISHSNSPROFILEEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C8F0D0)
#define MX_DATA_EXCEL_SNSPROFILEEXCEL_FINISHSIZEPREFIXEDSNSPROFILEEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C8F0F0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int SNSProfileExcel_TypeDefinitionIndex = 19502;

	class SNSProfileExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SNSPROFILEEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::SNSProfileExcel* GetRootAsSNSProfileExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::SNSProfileExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SNSPROFILEEXCEL_GETROOTASSNSPROFILEEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::SNSProfileExcel* GetRootAsSNSProfileExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::SNSProfileExcel* arg)
		{
			return (return (::MX::Data::Excel::SNSProfileExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::SNSProfileExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SNSPROFILEEXCEL_GETROOTASSNSPROFILEEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SNSPROFILEEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::SNSProfileExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::SNSProfileExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SNSPROFILEEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SNSPROFILEEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::System::String* get_DevName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SNSPROFILEEXCEL_GET_DEVNAME_OFFSET))(nullptr);
		}

		Il2CppObject* GetDevNameBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SNSPROFILEEXCEL_GETDEVNAMEBYTES_OFFSET))(nullptr);
		}

		::System::String* get_ProfileImagePath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SNSPROFILEEXCEL_GET_PROFILEIMAGEPATH_OFFSET))(nullptr);
		}

		Il2CppObject* GetProfileImagePathBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SNSPROFILEEXCEL_GETPROFILEIMAGEPATHBYTES_OFFSET))(nullptr);
		}

		::System::UInt32 get_NameLocalizeKey()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SNSPROFILEEXCEL_GET_NAMELOCALIZEKEY_OFFSET))(nullptr);
		}

		::System::UInt32 get_IdLocalizeKey()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SNSPROFILEEXCEL_GET_IDLOCALIZEKEY_OFFSET))(nullptr);
		}

		::System::Boolean get_MarkIconVisible()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SNSPROFILEEXCEL_GET_MARKICONVISIBLE_OFFSET))(nullptr);
		}

		Il2CppObject* CreateSNSProfileExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::System::UInt32 arg, ::System::UInt32 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::System::UInt32, ::System::UInt32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SNSPROFILEEXCEL_CREATESNSPROFILEEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartSNSProfileExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SNSPROFILEEXCEL_STARTSNSPROFILEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SNSPROFILEEXCEL_ADDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDevName(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SNSPROFILEEXCEL_ADDDEVNAME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddProfileImagePath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SNSPROFILEEXCEL_ADDPROFILEIMAGEPATH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddNameLocalizeKey(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SNSPROFILEEXCEL_ADDNAMELOCALIZEKEY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddIdLocalizeKey(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SNSPROFILEEXCEL_ADDIDLOCALIZEKEY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddMarkIconVisible(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SNSPROFILEEXCEL_ADDMARKICONVISIBLE_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndSNSProfileExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SNSPROFILEEXCEL_ENDSNSPROFILEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishSNSProfileExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SNSPROFILEEXCEL_FINISHSNSPROFILEEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedSNSProfileExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SNSPROFILEEXCEL_FINISHSIZEPREFIXEDSNSPROFILEEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

