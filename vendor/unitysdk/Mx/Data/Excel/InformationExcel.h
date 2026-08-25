#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class InformationExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }
namespace FlatBuffers { class VectorOffset; }

#define MX_DATA_EXCEL_INFORMATIONEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1B4E6B0)
#define MX_DATA_EXCEL_INFORMATIONEXCEL_GETROOTASINFORMATIONEXCEL_OFFSET UNITYSDK_OFFSET(0x1B4E6C0)
#define MX_DATA_EXCEL_INFORMATIONEXCEL_GETROOTASINFORMATIONEXCEL_OFFSET UNITYSDK_OFFSET(0x1B4E720)
#define MX_DATA_EXCEL_INFORMATIONEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1B4E7B0)
#define MX_DATA_EXCEL_INFORMATIONEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1B4E780)
#define MX_DATA_EXCEL_INFORMATIONEXCEL_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1B4E7D0)
#define MX_DATA_EXCEL_INFORMATIONEXCEL_GET_PAGENAME_OFFSET UNITYSDK_OFFSET(0x1B4E820)
#define MX_DATA_EXCEL_INFORMATIONEXCEL_GETPAGENAMEBYTES_OFFSET UNITYSDK_OFFSET(0x1B4E860)
#define MX_DATA_EXCEL_INFORMATIONEXCEL_GET_ISPCBUILD_OFFSET UNITYSDK_OFFSET(0x1B4E880)
#define MX_DATA_EXCEL_INFORMATIONEXCEL_GET_LOCALIZECODEID_OFFSET UNITYSDK_OFFSET(0x1B4E8D0)
#define MX_DATA_EXCEL_INFORMATIONEXCEL_GETLOCALIZECODEIDBYTES_OFFSET UNITYSDK_OFFSET(0x1B4E910)
#define MX_DATA_EXCEL_INFORMATIONEXCEL_TUTORIALPARENTNAME_OFFSET UNITYSDK_OFFSET(0x1B4E930)
#define MX_DATA_EXCEL_INFORMATIONEXCEL_GET_TUTORIALPARENTNAMELENGTH_OFFSET UNITYSDK_OFFSET(0x1B4E980)
#define MX_DATA_EXCEL_INFORMATIONEXCEL_UINAME_OFFSET UNITYSDK_OFFSET(0x1B4E9C0)
#define MX_DATA_EXCEL_INFORMATIONEXCEL_GET_UINAMELENGTH_OFFSET UNITYSDK_OFFSET(0x1B4EA10)
#define MX_DATA_EXCEL_INFORMATIONEXCEL_CREATEINFORMATIONEXCEL_OFFSET UNITYSDK_OFFSET(0x1B4EA50)
#define MX_DATA_EXCEL_INFORMATIONEXCEL_STARTINFORMATIONEXCEL_OFFSET UNITYSDK_OFFSET(0x1B4ECF0)
#define MX_DATA_EXCEL_INFORMATIONEXCEL_ADDGROUPID_OFFSET UNITYSDK_OFFSET(0x1B4EB80)
#define MX_DATA_EXCEL_INFORMATIONEXCEL_ADDPAGENAME_OFFSET UNITYSDK_OFFSET(0x1B4EC40)
#define MX_DATA_EXCEL_INFORMATIONEXCEL_ADDISPCBUILD_OFFSET UNITYSDK_OFFSET(0x1B4EC70)
#define MX_DATA_EXCEL_INFORMATIONEXCEL_ADDLOCALIZECODEID_OFFSET UNITYSDK_OFFSET(0x1B4EC10)
#define MX_DATA_EXCEL_INFORMATIONEXCEL_ADDTUTORIALPARENTNAME_OFFSET UNITYSDK_OFFSET(0x1B4EBE0)
#define MX_DATA_EXCEL_INFORMATIONEXCEL_CREATETUTORIALPARENTNAMEVECTOR_OFFSET UNITYSDK_OFFSET(0x1B4ED10)
#define MX_DATA_EXCEL_INFORMATIONEXCEL_STARTTUTORIALPARENTNAMEVECTOR_OFFSET UNITYSDK_OFFSET(0x1B4EDA0)
#define MX_DATA_EXCEL_INFORMATIONEXCEL_ADDUINAME_OFFSET UNITYSDK_OFFSET(0x1B4EBB0)
#define MX_DATA_EXCEL_INFORMATIONEXCEL_CREATEUINAMEVECTOR_OFFSET UNITYSDK_OFFSET(0x1B4EDE0)
#define MX_DATA_EXCEL_INFORMATIONEXCEL_STARTUINAMEVECTOR_OFFSET UNITYSDK_OFFSET(0x1B4EE70)
#define MX_DATA_EXCEL_INFORMATIONEXCEL_ENDINFORMATIONEXCEL_OFFSET UNITYSDK_OFFSET(0x1B4ECA0)
#define MX_DATA_EXCEL_INFORMATIONEXCEL_FINISHINFORMATIONEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1B4EEB0)
#define MX_DATA_EXCEL_INFORMATIONEXCEL_FINISHSIZEPREFIXEDINFORMATIONEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1B4EED0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int InformationExcel_TypeDefinitionIndex = 18184;

	class InformationExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INFORMATIONEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::InformationExcel* GetRootAsInformationExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::InformationExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INFORMATIONEXCEL_GETROOTASINFORMATIONEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::InformationExcel* GetRootAsInformationExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::InformationExcel* arg)
		{
			return (return (::MX::Data::Excel::InformationExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::InformationExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INFORMATIONEXCEL_GETROOTASINFORMATIONEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INFORMATIONEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::InformationExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::InformationExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INFORMATIONEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_GroupID()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INFORMATIONEXCEL_GET_GROUPID_OFFSET))(nullptr);
		}

		::System::String* get_PageName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INFORMATIONEXCEL_GET_PAGENAME_OFFSET))(nullptr);
		}

		Il2CppObject* GetPageNameBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INFORMATIONEXCEL_GETPAGENAMEBYTES_OFFSET))(nullptr);
		}

		::System::Boolean get_IsPcBuild()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INFORMATIONEXCEL_GET_ISPCBUILD_OFFSET))(nullptr);
		}

		::System::String* get_LocalizeCodeId()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INFORMATIONEXCEL_GET_LOCALIZECODEID_OFFSET))(nullptr);
		}

		Il2CppObject* GetLocalizeCodeIdBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INFORMATIONEXCEL_GETLOCALIZECODEIDBYTES_OFFSET))(nullptr);
		}

		::System::String* TutorialParentName(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INFORMATIONEXCEL_TUTORIALPARENTNAME_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_TutorialParentNameLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INFORMATIONEXCEL_GET_TUTORIALPARENTNAMELENGTH_OFFSET))(nullptr);
		}

		::System::String* UIName(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INFORMATIONEXCEL_UINAME_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_UINameLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INFORMATIONEXCEL_GET_UINAMELENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* CreateInformationExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::FlatBuffers::StringOffset* arg, ::System::Boolean arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::FlatBuffers::StringOffset*, ::System::Boolean, ::FlatBuffers::StringOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INFORMATIONEXCEL_CREATEINFORMATIONEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartInformationExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INFORMATIONEXCEL_STARTINFORMATIONEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddGroupID(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INFORMATIONEXCEL_ADDGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPageName(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INFORMATIONEXCEL_ADDPAGENAME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddIsPcBuild(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INFORMATIONEXCEL_ADDISPCBUILD_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLocalizeCodeId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INFORMATIONEXCEL_ADDLOCALIZECODEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddTutorialParentName(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INFORMATIONEXCEL_ADDTUTORIALPARENTNAME_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateTutorialParentNameVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INFORMATIONEXCEL_CREATETUTORIALPARENTNAMEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartTutorialParentNameVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INFORMATIONEXCEL_STARTTUTORIALPARENTNAMEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddUIName(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INFORMATIONEXCEL_ADDUINAME_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateUINameVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INFORMATIONEXCEL_CREATEUINAMEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartUINameVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INFORMATIONEXCEL_STARTUINAMEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndInformationExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INFORMATIONEXCEL_ENDINFORMATIONEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishInformationExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INFORMATIONEXCEL_FINISHINFORMATIONEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedInformationExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INFORMATIONEXCEL_FINISHSIZEPREFIXEDINFORMATIONEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

