#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class KeyMappingPopupExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }
namespace FlatBuffers { class VectorOffset; }

#define MX_DATA_EXCEL_KEYMAPPINGPOPUPEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1B70A80)
#define MX_DATA_EXCEL_KEYMAPPINGPOPUPEXCEL_GETROOTASKEYMAPPINGPOPUPEXCEL_OFFSET UNITYSDK_OFFSET(0x1B70A90)
#define MX_DATA_EXCEL_KEYMAPPINGPOPUPEXCEL_GETROOTASKEYMAPPINGPOPUPEXCEL_OFFSET UNITYSDK_OFFSET(0x1B70AF0)
#define MX_DATA_EXCEL_KEYMAPPINGPOPUPEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1B70B80)
#define MX_DATA_EXCEL_KEYMAPPINGPOPUPEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1B70B50)
#define MX_DATA_EXCEL_KEYMAPPINGPOPUPEXCEL_GET_PREFABNAME_OFFSET UNITYSDK_OFFSET(0x1B70BA0)
#define MX_DATA_EXCEL_KEYMAPPINGPOPUPEXCEL_GETPREFABNAMEBYTES_OFFSET UNITYSDK_OFFSET(0x1B70BE0)
#define MX_DATA_EXCEL_KEYMAPPINGPOPUPEXCEL_BUTTONNAME_OFFSET UNITYSDK_OFFSET(0x1B70C00)
#define MX_DATA_EXCEL_KEYMAPPINGPOPUPEXCEL_GET_BUTTONNAMELENGTH_OFFSET UNITYSDK_OFFSET(0x1B70C50)
#define MX_DATA_EXCEL_KEYMAPPINGPOPUPEXCEL_KEYMAPPINGID_OFFSET UNITYSDK_OFFSET(0x1B70C90)
#define MX_DATA_EXCEL_KEYMAPPINGPOPUPEXCEL_GET_KEYMAPPINGIDLENGTH_OFFSET UNITYSDK_OFFSET(0x1B70CE0)
#define MX_DATA_EXCEL_KEYMAPPINGPOPUPEXCEL_CREATEKEYMAPPINGPOPUPEXCEL_OFFSET UNITYSDK_OFFSET(0x1B70D20)
#define MX_DATA_EXCEL_KEYMAPPINGPOPUPEXCEL_STARTKEYMAPPINGPOPUPEXCEL_OFFSET UNITYSDK_OFFSET(0x1B70EB0)
#define MX_DATA_EXCEL_KEYMAPPINGPOPUPEXCEL_ADDPREFABNAME_OFFSET UNITYSDK_OFFSET(0x1B70E30)
#define MX_DATA_EXCEL_KEYMAPPINGPOPUPEXCEL_ADDBUTTONNAME_OFFSET UNITYSDK_OFFSET(0x1B70E00)
#define MX_DATA_EXCEL_KEYMAPPINGPOPUPEXCEL_CREATEBUTTONNAMEVECTOR_OFFSET UNITYSDK_OFFSET(0x1B70ED0)
#define MX_DATA_EXCEL_KEYMAPPINGPOPUPEXCEL_STARTBUTTONNAMEVECTOR_OFFSET UNITYSDK_OFFSET(0x1B70F60)
#define MX_DATA_EXCEL_KEYMAPPINGPOPUPEXCEL_ADDKEYMAPPINGID_OFFSET UNITYSDK_OFFSET(0x1B70DD0)
#define MX_DATA_EXCEL_KEYMAPPINGPOPUPEXCEL_CREATEKEYMAPPINGIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1B70FA0)
#define MX_DATA_EXCEL_KEYMAPPINGPOPUPEXCEL_STARTKEYMAPPINGIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1B71030)
#define MX_DATA_EXCEL_KEYMAPPINGPOPUPEXCEL_ENDKEYMAPPINGPOPUPEXCEL_OFFSET UNITYSDK_OFFSET(0x1B70E60)
#define MX_DATA_EXCEL_KEYMAPPINGPOPUPEXCEL_FINISHKEYMAPPINGPOPUPEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1B71070)
#define MX_DATA_EXCEL_KEYMAPPINGPOPUPEXCEL_FINISHSIZEPREFIXEDKEYMAPPINGPOPUPEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1B71090)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int KeyMappingPopupExcel_TypeDefinitionIndex = 18318;

	class KeyMappingPopupExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGPOPUPEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::KeyMappingPopupExcel* GetRootAsKeyMappingPopupExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::KeyMappingPopupExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGPOPUPEXCEL_GETROOTASKEYMAPPINGPOPUPEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::KeyMappingPopupExcel* GetRootAsKeyMappingPopupExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::KeyMappingPopupExcel* arg)
		{
			return (return (::MX::Data::Excel::KeyMappingPopupExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::KeyMappingPopupExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGPOPUPEXCEL_GETROOTASKEYMAPPINGPOPUPEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGPOPUPEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::KeyMappingPopupExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::KeyMappingPopupExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGPOPUPEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::String* get_PrefabName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGPOPUPEXCEL_GET_PREFABNAME_OFFSET))(nullptr);
		}

		Il2CppObject* GetPrefabNameBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGPOPUPEXCEL_GETPREFABNAMEBYTES_OFFSET))(nullptr);
		}

		::System::String* ButtonName(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGPOPUPEXCEL_BUTTONNAME_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ButtonNameLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGPOPUPEXCEL_GET_BUTTONNAMELENGTH_OFFSET))(nullptr);
		}

		::System::String* KeyMappingId(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGPOPUPEXCEL_KEYMAPPINGID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_KeyMappingIdLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGPOPUPEXCEL_GET_KEYMAPPINGIDLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* CreateKeyMappingPopupExcel(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGPOPUPEXCEL_CREATEKEYMAPPINGPOPUPEXCEL_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void StartKeyMappingPopupExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGPOPUPEXCEL_STARTKEYMAPPINGPOPUPEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddPrefabName(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGPOPUPEXCEL_ADDPREFABNAME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddButtonName(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGPOPUPEXCEL_ADDBUTTONNAME_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateButtonNameVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGPOPUPEXCEL_CREATEBUTTONNAMEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartButtonNameVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGPOPUPEXCEL_STARTBUTTONNAMEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddKeyMappingId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGPOPUPEXCEL_ADDKEYMAPPINGID_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateKeyMappingIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGPOPUPEXCEL_CREATEKEYMAPPINGIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartKeyMappingIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGPOPUPEXCEL_STARTKEYMAPPINGIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndKeyMappingPopupExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGPOPUPEXCEL_ENDKEYMAPPINGPOPUPEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishKeyMappingPopupExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGPOPUPEXCEL_FINISHKEYMAPPINGPOPUPEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedKeyMappingPopupExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGPOPUPEXCEL_FINISHSIZEPREFIXEDKEYMAPPINGPOPUPEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

