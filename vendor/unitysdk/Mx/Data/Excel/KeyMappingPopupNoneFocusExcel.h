#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class KeyMappingPopupNoneFocusExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }

#define MX_DATA_EXCEL_KEYMAPPINGPOPUPNONEFOCUSEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1B71D60)
#define MX_DATA_EXCEL_KEYMAPPINGPOPUPNONEFOCUSEXCEL_GETROOTASKEYMAPPINGPOPUPNONEFOCUSEXCEL_OFFSET UNITYSDK_OFFSET(0x1B71D70)
#define MX_DATA_EXCEL_KEYMAPPINGPOPUPNONEFOCUSEXCEL_GETROOTASKEYMAPPINGPOPUPNONEFOCUSEXCEL_OFFSET UNITYSDK_OFFSET(0x1B71DD0)
#define MX_DATA_EXCEL_KEYMAPPINGPOPUPNONEFOCUSEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1B71E60)
#define MX_DATA_EXCEL_KEYMAPPINGPOPUPNONEFOCUSEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1B71E30)
#define MX_DATA_EXCEL_KEYMAPPINGPOPUPNONEFOCUSEXCEL_GET_PREFABNAME_OFFSET UNITYSDK_OFFSET(0x1B71E80)
#define MX_DATA_EXCEL_KEYMAPPINGPOPUPNONEFOCUSEXCEL_GETPREFABNAMEBYTES_OFFSET UNITYSDK_OFFSET(0x1B71EC0)
#define MX_DATA_EXCEL_KEYMAPPINGPOPUPNONEFOCUSEXCEL_GET_BUTTONNAME_OFFSET UNITYSDK_OFFSET(0x1B71EE0)
#define MX_DATA_EXCEL_KEYMAPPINGPOPUPNONEFOCUSEXCEL_GETBUTTONNAMEBYTES_OFFSET UNITYSDK_OFFSET(0x1B71F20)
#define MX_DATA_EXCEL_KEYMAPPINGPOPUPNONEFOCUSEXCEL_CREATEKEYMAPPINGPOPUPNONEFOCUSEXCEL_OFFSET UNITYSDK_OFFSET(0x1B71F40)
#define MX_DATA_EXCEL_KEYMAPPINGPOPUPNONEFOCUSEXCEL_STARTKEYMAPPINGPOPUPNONEFOCUSEXCEL_OFFSET UNITYSDK_OFFSET(0x1B72080)
#define MX_DATA_EXCEL_KEYMAPPINGPOPUPNONEFOCUSEXCEL_ADDPREFABNAME_OFFSET UNITYSDK_OFFSET(0x1B72000)
#define MX_DATA_EXCEL_KEYMAPPINGPOPUPNONEFOCUSEXCEL_ADDBUTTONNAME_OFFSET UNITYSDK_OFFSET(0x1B71FD0)
#define MX_DATA_EXCEL_KEYMAPPINGPOPUPNONEFOCUSEXCEL_ENDKEYMAPPINGPOPUPNONEFOCUSEXCEL_OFFSET UNITYSDK_OFFSET(0x1B72030)
#define MX_DATA_EXCEL_KEYMAPPINGPOPUPNONEFOCUSEXCEL_FINISHKEYMAPPINGPOPUPNONEFOCUSEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1B720A0)
#define MX_DATA_EXCEL_KEYMAPPINGPOPUPNONEFOCUSEXCEL_FINISHSIZEPREFIXEDKEYMAPPINGPOPUPNONEFOCUSEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1B720C0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int KeyMappingPopupNoneFocusExcel_TypeDefinitionIndex = 18325;

	class KeyMappingPopupNoneFocusExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGPOPUPNONEFOCUSEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::KeyMappingPopupNoneFocusExcel* GetRootAsKeyMappingPopupNoneFocusExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::KeyMappingPopupNoneFocusExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGPOPUPNONEFOCUSEXCEL_GETROOTASKEYMAPPINGPOPUPNONEFOCUSEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::KeyMappingPopupNoneFocusExcel* GetRootAsKeyMappingPopupNoneFocusExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::KeyMappingPopupNoneFocusExcel* arg)
		{
			return (return (::MX::Data::Excel::KeyMappingPopupNoneFocusExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::KeyMappingPopupNoneFocusExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGPOPUPNONEFOCUSEXCEL_GETROOTASKEYMAPPINGPOPUPNONEFOCUSEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGPOPUPNONEFOCUSEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::KeyMappingPopupNoneFocusExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::KeyMappingPopupNoneFocusExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGPOPUPNONEFOCUSEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::String* get_PrefabName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGPOPUPNONEFOCUSEXCEL_GET_PREFABNAME_OFFSET))(nullptr);
		}

		Il2CppObject* GetPrefabNameBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGPOPUPNONEFOCUSEXCEL_GETPREFABNAMEBYTES_OFFSET))(nullptr);
		}

		::System::String* get_ButtonName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGPOPUPNONEFOCUSEXCEL_GET_BUTTONNAME_OFFSET))(nullptr);
		}

		Il2CppObject* GetButtonNameBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGPOPUPNONEFOCUSEXCEL_GETBUTTONNAMEBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateKeyMappingPopupNoneFocusExcel(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGPOPUPNONEFOCUSEXCEL_CREATEKEYMAPPINGPOPUPNONEFOCUSEXCEL_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void StartKeyMappingPopupNoneFocusExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGPOPUPNONEFOCUSEXCEL_STARTKEYMAPPINGPOPUPNONEFOCUSEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddPrefabName(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGPOPUPNONEFOCUSEXCEL_ADDPREFABNAME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddButtonName(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGPOPUPNONEFOCUSEXCEL_ADDBUTTONNAME_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndKeyMappingPopupNoneFocusExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGPOPUPNONEFOCUSEXCEL_ENDKEYMAPPINGPOPUPNONEFOCUSEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishKeyMappingPopupNoneFocusExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGPOPUPNONEFOCUSEXCEL_FINISHKEYMAPPINGPOPUPNONEFOCUSEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedKeyMappingPopupNoneFocusExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGPOPUPNONEFOCUSEXCEL_FINISHSIZEPREFIXEDKEYMAPPINGPOPUPNONEFOCUSEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

