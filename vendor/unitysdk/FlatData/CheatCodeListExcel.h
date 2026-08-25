#pragma once
#include "../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace FlatData { class CheatCodeListExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }
namespace FlatBuffers { class StringOffset; }

#define FLATDATA_CHEATCODELISTEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0xCE7070)
#define FLATDATA_CHEATCODELISTEXCEL_GETROOTASCHEATCODELISTEXCEL_OFFSET UNITYSDK_OFFSET(0xCE7080)
#define FLATDATA_CHEATCODELISTEXCEL_GETROOTASCHEATCODELISTEXCEL_OFFSET UNITYSDK_OFFSET(0xCE70E0)
#define FLATDATA_CHEATCODELISTEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0xCE7140)
#define FLATDATA_CHEATCODELISTEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0xCE6D90)
#define FLATDATA_CHEATCODELISTEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0xCE7160)
#define FLATDATA_CHEATCODELISTEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0xCE71B0)
#define FLATDATA_CHEATCODELISTEXCEL_CHEATCODE_OFFSET UNITYSDK_OFFSET(0xCE7230)
#define FLATDATA_CHEATCODELISTEXCEL_GET_CHEATCODELENGTH_OFFSET UNITYSDK_OFFSET(0xCE7280)
#define FLATDATA_CHEATCODELISTEXCEL_CHEATCODE_OFFSET UNITYSDK_OFFSET(0xCE72C0)
#define FLATDATA_CHEATCODELISTEXCEL_INPUTTITLE_OFFSET UNITYSDK_OFFSET(0xCE7340)
#define FLATDATA_CHEATCODELISTEXCEL_GET_INPUTTITLELENGTH_OFFSET UNITYSDK_OFFSET(0xCE7390)
#define FLATDATA_CHEATCODELISTEXCEL_INPUTTITLE_OFFSET UNITYSDK_OFFSET(0xCE73D0)
#define FLATDATA_CHEATCODELISTEXCEL_GET_DESC_OFFSET UNITYSDK_OFFSET(0xCE7450)
#define FLATDATA_CHEATCODELISTEXCEL_GET_DESC_OFFSET UNITYSDK_OFFSET(0xCE7490)
#define FLATDATA_CHEATCODELISTEXCEL_GETDESCBYTES_OFFSET UNITYSDK_OFFSET(0xCE7500)
#define FLATDATA_CHEATCODELISTEXCEL_CREATECHEATCODELISTEXCEL_OFFSET UNITYSDK_OFFSET(0xCE7520)
#define FLATDATA_CHEATCODELISTEXCEL_STARTCHEATCODELISTEXCEL_OFFSET UNITYSDK_OFFSET(0xCE7710)
#define FLATDATA_CHEATCODELISTEXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0xCE7600)
#define FLATDATA_CHEATCODELISTEXCEL_ADDCHEATCODE_OFFSET UNITYSDK_OFFSET(0xCE7690)
#define FLATDATA_CHEATCODELISTEXCEL_CREATECHEATCODEVECTOR_OFFSET UNITYSDK_OFFSET(0xCE7730)
#define FLATDATA_CHEATCODELISTEXCEL_STARTCHEATCODEVECTOR_OFFSET UNITYSDK_OFFSET(0xCE77C0)
#define FLATDATA_CHEATCODELISTEXCEL_ADDINPUTTITLE_OFFSET UNITYSDK_OFFSET(0xCE7660)
#define FLATDATA_CHEATCODELISTEXCEL_CREATEINPUTTITLEVECTOR_OFFSET UNITYSDK_OFFSET(0xCE7800)
#define FLATDATA_CHEATCODELISTEXCEL_STARTINPUTTITLEVECTOR_OFFSET UNITYSDK_OFFSET(0xCE7890)
#define FLATDATA_CHEATCODELISTEXCEL_ADDDESC_OFFSET UNITYSDK_OFFSET(0xCE7630)
#define FLATDATA_CHEATCODELISTEXCEL_ENDCHEATCODELISTEXCEL_OFFSET UNITYSDK_OFFSET(0xCE76C0)

namespace FlatData
{
	inline static constexpr unsigned int CheatCodeListExcel_TypeDefinitionIndex = 9203;

	class CheatCodeListExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10
		::Il2CppArray<::System::Object*>* TableKey; // 0x0

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CHEATCODELISTEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::FlatData::CheatCodeListExcel* GetRootAsCheatCodeListExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return ((::FlatData::CheatCodeListExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CHEATCODELISTEXCEL_GETROOTASCHEATCODELISTEXCEL_OFFSET))(arg, nullptr);
		}

		::FlatData::CheatCodeListExcel* GetRootAsCheatCodeListExcel(::FlatBuffers::ByteBuffer* arg, ::FlatData::CheatCodeListExcel* arg2)
		{
			return ((::FlatData::CheatCodeListExcel*(*)(::FlatBuffers::ByteBuffer*, ::FlatData::CheatCodeListExcel*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CHEATCODELISTEXCEL_GETROOTASCHEATCODELISTEXCEL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CHEATCODELISTEXCEL___INIT_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::CheatCodeListExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			return ((::FlatData::CheatCodeListExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CHEATCODELISTEXCEL___ASSIGN_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int64 get_id()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CHEATCODELISTEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::System::Int64 get_Id()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CHEATCODELISTEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::System::String* cheatCode(::System::Int32 arg)
		{
			return ((::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CHEATCODELISTEXCEL_CHEATCODE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_CheatCodeLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CHEATCODELISTEXCEL_GET_CHEATCODELENGTH_OFFSET))(nullptr);
		}

		::System::String* CheatCode(::System::Int32 arg)
		{
			return ((::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CHEATCODELISTEXCEL_CHEATCODE_OFFSET))(arg, nullptr);
		}

		::System::String* inputTitle(::System::Int32 arg)
		{
			return ((::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CHEATCODELISTEXCEL_INPUTTITLE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_InputTitleLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CHEATCODELISTEXCEL_GET_INPUTTITLELENGTH_OFFSET))(nullptr);
		}

		::System::String* InputTitle(::System::Int32 arg)
		{
			return ((::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CHEATCODELISTEXCEL_INPUTTITLE_OFFSET))(arg, nullptr);
		}

		::System::String* get_desc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CHEATCODELISTEXCEL_GET_DESC_OFFSET))(nullptr);
		}

		::System::String* get_Desc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CHEATCODELISTEXCEL_GET_DESC_OFFSET))(nullptr);
		}

		Il2CppObject* GetDescBytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CHEATCODELISTEXCEL_GETDESCBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateCheatCodeListExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2, ::FlatBuffers::VectorOffset* arg3, ::FlatBuffers::VectorOffset* arg4, ::FlatBuffers::StringOffset* arg5)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CHEATCODELISTEXCEL_CREATECHEATCODELISTEXCEL_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Void StartCheatCodeListExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CHEATCODELISTEXCEL_STARTCHEATCODELISTEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CHEATCODELISTEXCEL_ADDID_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddCheatCode(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CHEATCODELISTEXCEL_ADDCHEATCODE_OFFSET))(arg, arg2, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateCheatCodeVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CHEATCODELISTEXCEL_CREATECHEATCODEVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartCheatCodeVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CHEATCODELISTEXCEL_STARTCHEATCODEVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddInputTitle(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CHEATCODELISTEXCEL_ADDINPUTTITLE_OFFSET))(arg, arg2, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateInputTitleVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CHEATCODELISTEXCEL_CREATEINPUTTITLEVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartInputTitleVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CHEATCODELISTEXCEL_STARTINPUTTITLEVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddDesc(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CHEATCODELISTEXCEL_ADDDESC_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* EndCheatCodeListExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CHEATCODELISTEXCEL_ENDCHEATCODELISTEXCEL_OFFSET))(arg, nullptr);
		}

	};
}

