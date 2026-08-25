#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class ShortcutTypeExcel; }
namespace FlatData { class ShortcutContentType; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }

#define MX_DATA_EXCEL_SHORTCUTTYPEEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1C85830)
#define MX_DATA_EXCEL_SHORTCUTTYPEEXCEL_GETROOTASSHORTCUTTYPEEXCEL_OFFSET UNITYSDK_OFFSET(0x1C85840)
#define MX_DATA_EXCEL_SHORTCUTTYPEEXCEL_GETROOTASSHORTCUTTYPEEXCEL_OFFSET UNITYSDK_OFFSET(0x1C858A0)
#define MX_DATA_EXCEL_SHORTCUTTYPEEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1C85930)
#define MX_DATA_EXCEL_SHORTCUTTYPEEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1C85900)
#define MX_DATA_EXCEL_SHORTCUTTYPEEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0x1C85950)
#define MX_DATA_EXCEL_SHORTCUTTYPEEXCEL_GET_ISASCENDING_OFFSET UNITYSDK_OFFSET(0x1C859A0)
#define MX_DATA_EXCEL_SHORTCUTTYPEEXCEL_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x1C859F0)
#define MX_DATA_EXCEL_SHORTCUTTYPEEXCEL_GET_CONTENTTYPELENGTH_OFFSET UNITYSDK_OFFSET(0x1C85A50)
#define MX_DATA_EXCEL_SHORTCUTTYPEEXCEL_GETCONTENTTYPEBYTES_OFFSET UNITYSDK_OFFSET(0x1C85A90)
#define MX_DATA_EXCEL_SHORTCUTTYPEEXCEL_CREATESHORTCUTTYPEEXCEL_OFFSET UNITYSDK_OFFSET(0x1C85AB0)
#define MX_DATA_EXCEL_SHORTCUTTYPEEXCEL_STARTSHORTCUTTYPEEXCEL_OFFSET UNITYSDK_OFFSET(0x1C85C50)
#define MX_DATA_EXCEL_SHORTCUTTYPEEXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0x1C85B70)
#define MX_DATA_EXCEL_SHORTCUTTYPEEXCEL_ADDISASCENDING_OFFSET UNITYSDK_OFFSET(0x1C85BD0)
#define MX_DATA_EXCEL_SHORTCUTTYPEEXCEL_ADDCONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x1C85BA0)
#define MX_DATA_EXCEL_SHORTCUTTYPEEXCEL_CREATECONTENTTYPEVECTOR_OFFSET UNITYSDK_OFFSET(0x1C85C70)
#define MX_DATA_EXCEL_SHORTCUTTYPEEXCEL_STARTCONTENTTYPEVECTOR_OFFSET UNITYSDK_OFFSET(0x1C85D00)
#define MX_DATA_EXCEL_SHORTCUTTYPEEXCEL_ENDSHORTCUTTYPEEXCEL_OFFSET UNITYSDK_OFFSET(0x1C85C00)
#define MX_DATA_EXCEL_SHORTCUTTYPEEXCEL_FINISHSHORTCUTTYPEEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C85D40)
#define MX_DATA_EXCEL_SHORTCUTTYPEEXCEL_FINISHSIZEPREFIXEDSHORTCUTTYPEEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C85D60)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ShortcutTypeExcel_TypeDefinitionIndex = 19457;

	class ShortcutTypeExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHORTCUTTYPEEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::ShortcutTypeExcel* GetRootAsShortcutTypeExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::ShortcutTypeExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHORTCUTTYPEEXCEL_GETROOTASSHORTCUTTYPEEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::ShortcutTypeExcel* GetRootAsShortcutTypeExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::ShortcutTypeExcel* arg)
		{
			return (return (::MX::Data::Excel::ShortcutTypeExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::ShortcutTypeExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHORTCUTTYPEEXCEL_GETROOTASSHORTCUTTYPEEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHORTCUTTYPEEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::ShortcutTypeExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::ShortcutTypeExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHORTCUTTYPEEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHORTCUTTYPEEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::System::Boolean get_IsAscending()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHORTCUTTYPEEXCEL_GET_ISASCENDING_OFFSET))(nullptr);
		}

		::FlatData::ShortcutContentType* ContentType(::System::Int32 arg)
		{
			return (return (::FlatData::ShortcutContentType*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHORTCUTTYPEEXCEL_CONTENTTYPE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ContentTypeLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHORTCUTTYPEEXCEL_GET_CONTENTTYPELENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetContentTypeBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHORTCUTTYPEEXCEL_GETCONTENTTYPEBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateShortcutTypeExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Boolean arg, ::FlatBuffers::VectorOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Boolean, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHORTCUTTYPEEXCEL_CREATESHORTCUTTYPEEXCEL_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void StartShortcutTypeExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHORTCUTTYPEEXCEL_STARTSHORTCUTTYPEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHORTCUTTYPEEXCEL_ADDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddIsAscending(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHORTCUTTYPEEXCEL_ADDISASCENDING_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddContentType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHORTCUTTYPEEXCEL_ADDCONTENTTYPE_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateContentTypeVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHORTCUTTYPEEXCEL_CREATECONTENTTYPEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartContentTypeVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHORTCUTTYPEEXCEL_STARTCONTENTTYPEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndShortcutTypeExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHORTCUTTYPEEXCEL_ENDSHORTCUTTYPEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishShortcutTypeExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHORTCUTTYPEEXCEL_FINISHSHORTCUTTYPEEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedShortcutTypeExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHORTCUTTYPEEXCEL_FINISHSIZEPREFIXEDSHORTCUTTYPEEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

