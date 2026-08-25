#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class KeyControllerImageExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }

#define MX_DATA_EXCEL_KEYCONTROLLERIMAGEEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1B6B860)
#define MX_DATA_EXCEL_KEYCONTROLLERIMAGEEXCEL_GETROOTASKEYCONTROLLERIMAGEEXCEL_OFFSET UNITYSDK_OFFSET(0x1B6B870)
#define MX_DATA_EXCEL_KEYCONTROLLERIMAGEEXCEL_GETROOTASKEYCONTROLLERIMAGEEXCEL_OFFSET UNITYSDK_OFFSET(0x1B6B8D0)
#define MX_DATA_EXCEL_KEYCONTROLLERIMAGEEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1B6B960)
#define MX_DATA_EXCEL_KEYCONTROLLERIMAGEEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1B6B930)
#define MX_DATA_EXCEL_KEYCONTROLLERIMAGEEXCEL_GET_CONTROLLERKEYCODE_OFFSET UNITYSDK_OFFSET(0x1B6B980)
#define MX_DATA_EXCEL_KEYCONTROLLERIMAGEEXCEL_GETCONTROLLERKEYCODEBYTES_OFFSET UNITYSDK_OFFSET(0x1B6B9C0)
#define MX_DATA_EXCEL_KEYCONTROLLERIMAGEEXCEL_GET_PSICONNAME_OFFSET UNITYSDK_OFFSET(0x1B6B9E0)
#define MX_DATA_EXCEL_KEYCONTROLLERIMAGEEXCEL_GETPSICONNAMEBYTES_OFFSET UNITYSDK_OFFSET(0x1B6BA20)
#define MX_DATA_EXCEL_KEYCONTROLLERIMAGEEXCEL_GET_XBOXICONNAME_OFFSET UNITYSDK_OFFSET(0x1B6BA40)
#define MX_DATA_EXCEL_KEYCONTROLLERIMAGEEXCEL_GETXBOXICONNAMEBYTES_OFFSET UNITYSDK_OFFSET(0x1B6BA80)
#define MX_DATA_EXCEL_KEYCONTROLLERIMAGEEXCEL_GET_STEAMDECKICONNAME_OFFSET UNITYSDK_OFFSET(0x1B6BAA0)
#define MX_DATA_EXCEL_KEYCONTROLLERIMAGEEXCEL_GETSTEAMDECKICONNAMEBYTES_OFFSET UNITYSDK_OFFSET(0x1B6BAE0)
#define MX_DATA_EXCEL_KEYCONTROLLERIMAGEEXCEL_CREATEKEYCONTROLLERIMAGEEXCEL_OFFSET UNITYSDK_OFFSET(0x1B6BB00)
#define MX_DATA_EXCEL_KEYCONTROLLERIMAGEEXCEL_STARTKEYCONTROLLERIMAGEEXCEL_OFFSET UNITYSDK_OFFSET(0x1B6BCF0)
#define MX_DATA_EXCEL_KEYCONTROLLERIMAGEEXCEL_ADDCONTROLLERKEYCODE_OFFSET UNITYSDK_OFFSET(0x1B6BC70)
#define MX_DATA_EXCEL_KEYCONTROLLERIMAGEEXCEL_ADDPSICONNAME_OFFSET UNITYSDK_OFFSET(0x1B6BC40)
#define MX_DATA_EXCEL_KEYCONTROLLERIMAGEEXCEL_ADDXBOXICONNAME_OFFSET UNITYSDK_OFFSET(0x1B6BC10)
#define MX_DATA_EXCEL_KEYCONTROLLERIMAGEEXCEL_ADDSTEAMDECKICONNAME_OFFSET UNITYSDK_OFFSET(0x1B6BBE0)
#define MX_DATA_EXCEL_KEYCONTROLLERIMAGEEXCEL_ENDKEYCONTROLLERIMAGEEXCEL_OFFSET UNITYSDK_OFFSET(0x1B6BCA0)
#define MX_DATA_EXCEL_KEYCONTROLLERIMAGEEXCEL_FINISHKEYCONTROLLERIMAGEEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1B6BD10)
#define MX_DATA_EXCEL_KEYCONTROLLERIMAGEEXCEL_FINISHSIZEPREFIXEDKEYCONTROLLERIMAGEEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1B6BD30)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int KeyControllerImageExcel_TypeDefinitionIndex = 18290;

	class KeyControllerImageExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYCONTROLLERIMAGEEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::KeyControllerImageExcel* GetRootAsKeyControllerImageExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::KeyControllerImageExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYCONTROLLERIMAGEEXCEL_GETROOTASKEYCONTROLLERIMAGEEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::KeyControllerImageExcel* GetRootAsKeyControllerImageExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::KeyControllerImageExcel* arg)
		{
			return (return (::MX::Data::Excel::KeyControllerImageExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::KeyControllerImageExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYCONTROLLERIMAGEEXCEL_GETROOTASKEYCONTROLLERIMAGEEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYCONTROLLERIMAGEEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::KeyControllerImageExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::KeyControllerImageExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYCONTROLLERIMAGEEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::String* get_ControllerKeyCode()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYCONTROLLERIMAGEEXCEL_GET_CONTROLLERKEYCODE_OFFSET))(nullptr);
		}

		Il2CppObject* GetControllerKeyCodeBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYCONTROLLERIMAGEEXCEL_GETCONTROLLERKEYCODEBYTES_OFFSET))(nullptr);
		}

		::System::String* get_PSIconName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYCONTROLLERIMAGEEXCEL_GET_PSICONNAME_OFFSET))(nullptr);
		}

		Il2CppObject* GetPSIconNameBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYCONTROLLERIMAGEEXCEL_GETPSICONNAMEBYTES_OFFSET))(nullptr);
		}

		::System::String* get_XBoxIconName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYCONTROLLERIMAGEEXCEL_GET_XBOXICONNAME_OFFSET))(nullptr);
		}

		Il2CppObject* GetXBoxIconNameBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYCONTROLLERIMAGEEXCEL_GETXBOXICONNAMEBYTES_OFFSET))(nullptr);
		}

		::System::String* get_SteamDeckIconName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYCONTROLLERIMAGEEXCEL_GET_STEAMDECKICONNAME_OFFSET))(nullptr);
		}

		Il2CppObject* GetSteamDeckIconNameBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYCONTROLLERIMAGEEXCEL_GETSTEAMDECKICONNAMEBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateKeyControllerImageExcel(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYCONTROLLERIMAGEEXCEL_CREATEKEYCONTROLLERIMAGEEXCEL_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartKeyControllerImageExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYCONTROLLERIMAGEEXCEL_STARTKEYCONTROLLERIMAGEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddControllerKeyCode(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYCONTROLLERIMAGEEXCEL_ADDCONTROLLERKEYCODE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPSIconName(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYCONTROLLERIMAGEEXCEL_ADDPSICONNAME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddXBoxIconName(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYCONTROLLERIMAGEEXCEL_ADDXBOXICONNAME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddSteamDeckIconName(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYCONTROLLERIMAGEEXCEL_ADDSTEAMDECKICONNAME_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndKeyControllerImageExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYCONTROLLERIMAGEEXCEL_ENDKEYCONTROLLERIMAGEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishKeyControllerImageExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYCONTROLLERIMAGEEXCEL_FINISHKEYCONTROLLERIMAGEEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedKeyControllerImageExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYCONTROLLERIMAGEEXCEL_FINISHSIZEPREFIXEDKEYCONTROLLERIMAGEEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

