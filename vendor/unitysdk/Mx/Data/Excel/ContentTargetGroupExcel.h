#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class ContentTargetGroupExcel; }
namespace FlatData { class TargetGroup; }
namespace FlatData { class AccountState; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }

#define MX_DATA_EXCEL_CONTENTTARGETGROUPEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1A75DB0)
#define MX_DATA_EXCEL_CONTENTTARGETGROUPEXCEL_GETROOTASCONTENTTARGETGROUPEXCEL_OFFSET UNITYSDK_OFFSET(0x1A75DC0)
#define MX_DATA_EXCEL_CONTENTTARGETGROUPEXCEL_GETROOTASCONTENTTARGETGROUPEXCEL_OFFSET UNITYSDK_OFFSET(0x1A75E20)
#define MX_DATA_EXCEL_CONTENTTARGETGROUPEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1A75EB0)
#define MX_DATA_EXCEL_CONTENTTARGETGROUPEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1A75E80)
#define MX_DATA_EXCEL_CONTENTTARGETGROUPEXCEL_GET_TARGETGROUP_OFFSET UNITYSDK_OFFSET(0x1A75ED0)
#define MX_DATA_EXCEL_CONTENTTARGETGROUPEXCEL_ACCOUNTTYPE_OFFSET UNITYSDK_OFFSET(0x1A75F20)
#define MX_DATA_EXCEL_CONTENTTARGETGROUPEXCEL_GET_ACCOUNTTYPELENGTH_OFFSET UNITYSDK_OFFSET(0x1A75F80)
#define MX_DATA_EXCEL_CONTENTTARGETGROUPEXCEL_GETACCOUNTTYPEBYTES_OFFSET UNITYSDK_OFFSET(0x1A75FC0)
#define MX_DATA_EXCEL_CONTENTTARGETGROUPEXCEL_CREATECONTENTTARGETGROUPEXCEL_OFFSET UNITYSDK_OFFSET(0x1A75FE0)
#define MX_DATA_EXCEL_CONTENTTARGETGROUPEXCEL_STARTCONTENTTARGETGROUPEXCEL_OFFSET UNITYSDK_OFFSET(0x1A76120)
#define MX_DATA_EXCEL_CONTENTTARGETGROUPEXCEL_ADDTARGETGROUP_OFFSET UNITYSDK_OFFSET(0x1A760A0)
#define MX_DATA_EXCEL_CONTENTTARGETGROUPEXCEL_ADDACCOUNTTYPE_OFFSET UNITYSDK_OFFSET(0x1A76070)
#define MX_DATA_EXCEL_CONTENTTARGETGROUPEXCEL_CREATEACCOUNTTYPEVECTOR_OFFSET UNITYSDK_OFFSET(0x1A76140)
#define MX_DATA_EXCEL_CONTENTTARGETGROUPEXCEL_STARTACCOUNTTYPEVECTOR_OFFSET UNITYSDK_OFFSET(0x1A761D0)
#define MX_DATA_EXCEL_CONTENTTARGETGROUPEXCEL_ENDCONTENTTARGETGROUPEXCEL_OFFSET UNITYSDK_OFFSET(0x1A760D0)
#define MX_DATA_EXCEL_CONTENTTARGETGROUPEXCEL_FINISHCONTENTTARGETGROUPEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1A76210)
#define MX_DATA_EXCEL_CONTENTTARGETGROUPEXCEL_FINISHSIZEPREFIXEDCONTENTTARGETGROUPEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1A76230)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ContentTargetGroupExcel_TypeDefinitionIndex = 17347;

	class ContentTargetGroupExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTTARGETGROUPEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::ContentTargetGroupExcel* GetRootAsContentTargetGroupExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::ContentTargetGroupExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTTARGETGROUPEXCEL_GETROOTASCONTENTTARGETGROUPEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::ContentTargetGroupExcel* GetRootAsContentTargetGroupExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::ContentTargetGroupExcel* arg)
		{
			return (return (::MX::Data::Excel::ContentTargetGroupExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::ContentTargetGroupExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTTARGETGROUPEXCEL_GETROOTASCONTENTTARGETGROUPEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTTARGETGROUPEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::ContentTargetGroupExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::ContentTargetGroupExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTTARGETGROUPEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::FlatData::TargetGroup* get_TargetGroup()
		{
			return (return (::FlatData::TargetGroup*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTTARGETGROUPEXCEL_GET_TARGETGROUP_OFFSET))(nullptr);
		}

		::FlatData::AccountState* AccountType(::System::Int32 arg)
		{
			return (return (::FlatData::AccountState*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTTARGETGROUPEXCEL_ACCOUNTTYPE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_AccountTypeLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTTARGETGROUPEXCEL_GET_ACCOUNTTYPELENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetAccountTypeBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTTARGETGROUPEXCEL_GETACCOUNTTYPEBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateContentTargetGroupExcel(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::TargetGroup* arg, ::FlatBuffers::VectorOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::TargetGroup*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTTARGETGROUPEXCEL_CREATECONTENTTARGETGROUPEXCEL_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void StartContentTargetGroupExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTTARGETGROUPEXCEL_STARTCONTENTTARGETGROUPEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddTargetGroup(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::TargetGroup* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::TargetGroup*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTTARGETGROUPEXCEL_ADDTARGETGROUP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddAccountType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTTARGETGROUPEXCEL_ADDACCOUNTTYPE_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateAccountTypeVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTTARGETGROUPEXCEL_CREATEACCOUNTTYPEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartAccountTypeVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTTARGETGROUPEXCEL_STARTACCOUNTTYPEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndContentTargetGroupExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTTARGETGROUPEXCEL_ENDCONTENTTARGETGROUPEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishContentTargetGroupExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTTARGETGROUPEXCEL_FINISHCONTENTTARGETGROUPEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedContentTargetGroupExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTTARGETGROUPEXCEL_FINISHSIZEPREFIXEDCONTENTTARGETGROUPEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

