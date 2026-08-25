#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class TutorialFailureImageExcel; }
namespace FlatData { class TutorialFailureContentType; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }

#define MX_DATA_EXCEL_TUTORIALFAILUREIMAGEEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1CABB30)
#define MX_DATA_EXCEL_TUTORIALFAILUREIMAGEEXCEL_GETROOTASTUTORIALFAILUREIMAGEEXCEL_OFFSET UNITYSDK_OFFSET(0x1CABB40)
#define MX_DATA_EXCEL_TUTORIALFAILUREIMAGEEXCEL_GETROOTASTUTORIALFAILUREIMAGEEXCEL_OFFSET UNITYSDK_OFFSET(0x1CABBA0)
#define MX_DATA_EXCEL_TUTORIALFAILUREIMAGEEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1CABC30)
#define MX_DATA_EXCEL_TUTORIALFAILUREIMAGEEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1CABC00)
#define MX_DATA_EXCEL_TUTORIALFAILUREIMAGEEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0x1CABC50)
#define MX_DATA_EXCEL_TUTORIALFAILUREIMAGEEXCEL_GET_CONTENTS_OFFSET UNITYSDK_OFFSET(0x1CABCA0)
#define MX_DATA_EXCEL_TUTORIALFAILUREIMAGEEXCEL_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1CABCF0)
#define MX_DATA_EXCEL_TUTORIALFAILUREIMAGEEXCEL_GETTYPEBYTES_OFFSET UNITYSDK_OFFSET(0x1CABD30)
#define MX_DATA_EXCEL_TUTORIALFAILUREIMAGEEXCEL_GET_IMAGEPATHKR_OFFSET UNITYSDK_OFFSET(0x1CABD50)
#define MX_DATA_EXCEL_TUTORIALFAILUREIMAGEEXCEL_GETIMAGEPATHKRBYTES_OFFSET UNITYSDK_OFFSET(0x1CABD90)
#define MX_DATA_EXCEL_TUTORIALFAILUREIMAGEEXCEL_GET_IMAGEPATHJP_OFFSET UNITYSDK_OFFSET(0x1CABDB0)
#define MX_DATA_EXCEL_TUTORIALFAILUREIMAGEEXCEL_GETIMAGEPATHJPBYTES_OFFSET UNITYSDK_OFFSET(0x1CABDF0)
#define MX_DATA_EXCEL_TUTORIALFAILUREIMAGEEXCEL_GET_IMAGEPATHTH_OFFSET UNITYSDK_OFFSET(0x1CABE10)
#define MX_DATA_EXCEL_TUTORIALFAILUREIMAGEEXCEL_GETIMAGEPATHTHBYTES_OFFSET UNITYSDK_OFFSET(0x1CABE50)
#define MX_DATA_EXCEL_TUTORIALFAILUREIMAGEEXCEL_GET_IMAGEPATHTW_OFFSET UNITYSDK_OFFSET(0x1CABE70)
#define MX_DATA_EXCEL_TUTORIALFAILUREIMAGEEXCEL_GETIMAGEPATHTWBYTES_OFFSET UNITYSDK_OFFSET(0x1CABEB0)
#define MX_DATA_EXCEL_TUTORIALFAILUREIMAGEEXCEL_GET_IMAGEPATHEN_OFFSET UNITYSDK_OFFSET(0x1CABED0)
#define MX_DATA_EXCEL_TUTORIALFAILUREIMAGEEXCEL_GETIMAGEPATHENBYTES_OFFSET UNITYSDK_OFFSET(0x1CABF10)
#define MX_DATA_EXCEL_TUTORIALFAILUREIMAGEEXCEL_GET_REPLACELOCALIZEKEY_OFFSET UNITYSDK_OFFSET(0x1CABF30)
#define MX_DATA_EXCEL_TUTORIALFAILUREIMAGEEXCEL_GETREPLACELOCALIZEKEYBYTES_OFFSET UNITYSDK_OFFSET(0x1CABF70)
#define MX_DATA_EXCEL_TUTORIALFAILUREIMAGEEXCEL_CREATETUTORIALFAILUREIMAGEEXCEL_OFFSET UNITYSDK_OFFSET(0x1CABF90)
#define MX_DATA_EXCEL_TUTORIALFAILUREIMAGEEXCEL_STARTTUTORIALFAILUREIMAGEEXCEL_OFFSET UNITYSDK_OFFSET(0x1CAC330)
#define MX_DATA_EXCEL_TUTORIALFAILUREIMAGEEXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0x1CAC130)
#define MX_DATA_EXCEL_TUTORIALFAILUREIMAGEEXCEL_ADDCONTENTS_OFFSET UNITYSDK_OFFSET(0x1CAC2B0)
#define MX_DATA_EXCEL_TUTORIALFAILUREIMAGEEXCEL_ADDTYPE_OFFSET UNITYSDK_OFFSET(0x1CAC280)
#define MX_DATA_EXCEL_TUTORIALFAILUREIMAGEEXCEL_ADDIMAGEPATHKR_OFFSET UNITYSDK_OFFSET(0x1CAC250)
#define MX_DATA_EXCEL_TUTORIALFAILUREIMAGEEXCEL_ADDIMAGEPATHJP_OFFSET UNITYSDK_OFFSET(0x1CAC220)
#define MX_DATA_EXCEL_TUTORIALFAILUREIMAGEEXCEL_ADDIMAGEPATHTH_OFFSET UNITYSDK_OFFSET(0x1CAC1F0)
#define MX_DATA_EXCEL_TUTORIALFAILUREIMAGEEXCEL_ADDIMAGEPATHTW_OFFSET UNITYSDK_OFFSET(0x1CAC1C0)
#define MX_DATA_EXCEL_TUTORIALFAILUREIMAGEEXCEL_ADDIMAGEPATHEN_OFFSET UNITYSDK_OFFSET(0x1CAC190)
#define MX_DATA_EXCEL_TUTORIALFAILUREIMAGEEXCEL_ADDREPLACELOCALIZEKEY_OFFSET UNITYSDK_OFFSET(0x1CAC160)
#define MX_DATA_EXCEL_TUTORIALFAILUREIMAGEEXCEL_ENDTUTORIALFAILUREIMAGEEXCEL_OFFSET UNITYSDK_OFFSET(0x1CAC2E0)
#define MX_DATA_EXCEL_TUTORIALFAILUREIMAGEEXCEL_FINISHTUTORIALFAILUREIMAGEEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1CAC350)
#define MX_DATA_EXCEL_TUTORIALFAILUREIMAGEEXCEL_FINISHSIZEPREFIXEDTUTORIALFAILUREIMAGEEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1CAC370)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int TutorialFailureImageExcel_TypeDefinitionIndex = 19652;

	class TutorialFailureImageExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TUTORIALFAILUREIMAGEEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::TutorialFailureImageExcel* GetRootAsTutorialFailureImageExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::TutorialFailureImageExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TUTORIALFAILUREIMAGEEXCEL_GETROOTASTUTORIALFAILUREIMAGEEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::TutorialFailureImageExcel* GetRootAsTutorialFailureImageExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::TutorialFailureImageExcel* arg)
		{
			return (return (::MX::Data::Excel::TutorialFailureImageExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::TutorialFailureImageExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TUTORIALFAILUREIMAGEEXCEL_GETROOTASTUTORIALFAILUREIMAGEEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TUTORIALFAILUREIMAGEEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::TutorialFailureImageExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::TutorialFailureImageExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TUTORIALFAILUREIMAGEEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TUTORIALFAILUREIMAGEEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::FlatData::TutorialFailureContentType* get_Contents()
		{
			return (return (::FlatData::TutorialFailureContentType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TUTORIALFAILUREIMAGEEXCEL_GET_CONTENTS_OFFSET))(nullptr);
		}

		::System::String* get_Type()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TUTORIALFAILUREIMAGEEXCEL_GET_TYPE_OFFSET))(nullptr);
		}

		Il2CppObject* GetTypeBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TUTORIALFAILUREIMAGEEXCEL_GETTYPEBYTES_OFFSET))(nullptr);
		}

		::System::String* get_ImagePathKr()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TUTORIALFAILUREIMAGEEXCEL_GET_IMAGEPATHKR_OFFSET))(nullptr);
		}

		Il2CppObject* GetImagePathKrBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TUTORIALFAILUREIMAGEEXCEL_GETIMAGEPATHKRBYTES_OFFSET))(nullptr);
		}

		::System::String* get_ImagePathJp()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TUTORIALFAILUREIMAGEEXCEL_GET_IMAGEPATHJP_OFFSET))(nullptr);
		}

		Il2CppObject* GetImagePathJpBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TUTORIALFAILUREIMAGEEXCEL_GETIMAGEPATHJPBYTES_OFFSET))(nullptr);
		}

		::System::String* get_ImagePathTh()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TUTORIALFAILUREIMAGEEXCEL_GET_IMAGEPATHTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetImagePathThBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TUTORIALFAILUREIMAGEEXCEL_GETIMAGEPATHTHBYTES_OFFSET))(nullptr);
		}

		::System::String* get_ImagePathTw()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TUTORIALFAILUREIMAGEEXCEL_GET_IMAGEPATHTW_OFFSET))(nullptr);
		}

		Il2CppObject* GetImagePathTwBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TUTORIALFAILUREIMAGEEXCEL_GETIMAGEPATHTWBYTES_OFFSET))(nullptr);
		}

		::System::String* get_ImagePathEn()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TUTORIALFAILUREIMAGEEXCEL_GET_IMAGEPATHEN_OFFSET))(nullptr);
		}

		Il2CppObject* GetImagePathEnBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TUTORIALFAILUREIMAGEEXCEL_GETIMAGEPATHENBYTES_OFFSET))(nullptr);
		}

		::System::String* get_ReplaceLocalizeKey()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TUTORIALFAILUREIMAGEEXCEL_GET_REPLACELOCALIZEKEY_OFFSET))(nullptr);
		}

		Il2CppObject* GetReplaceLocalizeKeyBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TUTORIALFAILUREIMAGEEXCEL_GETREPLACELOCALIZEKEYBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateTutorialFailureImageExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::FlatData::TutorialFailureContentType* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::FlatData::TutorialFailureContentType*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TUTORIALFAILUREIMAGEEXCEL_CREATETUTORIALFAILUREIMAGEEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartTutorialFailureImageExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TUTORIALFAILUREIMAGEEXCEL_STARTTUTORIALFAILUREIMAGEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TUTORIALFAILUREIMAGEEXCEL_ADDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddContents(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::TutorialFailureContentType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::TutorialFailureContentType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TUTORIALFAILUREIMAGEEXCEL_ADDCONTENTS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TUTORIALFAILUREIMAGEEXCEL_ADDTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddImagePathKr(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TUTORIALFAILUREIMAGEEXCEL_ADDIMAGEPATHKR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddImagePathJp(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TUTORIALFAILUREIMAGEEXCEL_ADDIMAGEPATHJP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddImagePathTh(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TUTORIALFAILUREIMAGEEXCEL_ADDIMAGEPATHTH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddImagePathTw(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TUTORIALFAILUREIMAGEEXCEL_ADDIMAGEPATHTW_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddImagePathEn(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TUTORIALFAILUREIMAGEEXCEL_ADDIMAGEPATHEN_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddReplaceLocalizeKey(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TUTORIALFAILUREIMAGEEXCEL_ADDREPLACELOCALIZEKEY_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndTutorialFailureImageExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TUTORIALFAILUREIMAGEEXCEL_ENDTUTORIALFAILUREIMAGEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishTutorialFailureImageExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TUTORIALFAILUREIMAGEEXCEL_FINISHTUTORIALFAILUREIMAGEEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedTutorialFailureImageExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TUTORIALFAILUREIMAGEEXCEL_FINISHSIZEPREFIXEDTUTORIALFAILUREIMAGEEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

