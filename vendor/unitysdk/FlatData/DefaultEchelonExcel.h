#pragma once
#include "../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace FlatData { class DefaultEchelonExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }

#define FLATDATA_DEFAULTECHELONEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0xD30930)
#define FLATDATA_DEFAULTECHELONEXCEL_GETROOTASDEFAULTECHELONEXCEL_OFFSET UNITYSDK_OFFSET(0xD30940)
#define FLATDATA_DEFAULTECHELONEXCEL_GETROOTASDEFAULTECHELONEXCEL_OFFSET UNITYSDK_OFFSET(0xD309A0)
#define FLATDATA_DEFAULTECHELONEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0xD30A00)
#define FLATDATA_DEFAULTECHELONEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0xD30650)
#define FLATDATA_DEFAULTECHELONEXCEL_GET_ECHLONID_OFFSET UNITYSDK_OFFSET(0xD30A20)
#define FLATDATA_DEFAULTECHELONEXCEL_GET_ECHLONID_OFFSET UNITYSDK_OFFSET(0xD30A70)
#define FLATDATA_DEFAULTECHELONEXCEL_GET_LEADERID_OFFSET UNITYSDK_OFFSET(0xD30AF0)
#define FLATDATA_DEFAULTECHELONEXCEL_GET_LEADERID_OFFSET UNITYSDK_OFFSET(0xD30B40)
#define FLATDATA_DEFAULTECHELONEXCEL_MAINID_OFFSET UNITYSDK_OFFSET(0xD30BC0)
#define FLATDATA_DEFAULTECHELONEXCEL_GET_MAINIDLENGTH_OFFSET UNITYSDK_OFFSET(0xD30C20)
#define FLATDATA_DEFAULTECHELONEXCEL_MAINID_OFFSET UNITYSDK_OFFSET(0xD30C60)
#define FLATDATA_DEFAULTECHELONEXCEL_GETMAINIDBYTES_OFFSET UNITYSDK_OFFSET(0xD30CF0)
#define FLATDATA_DEFAULTECHELONEXCEL_SUPPORTID_OFFSET UNITYSDK_OFFSET(0xD30D10)
#define FLATDATA_DEFAULTECHELONEXCEL_GET_SUPPORTIDLENGTH_OFFSET UNITYSDK_OFFSET(0xD30D70)
#define FLATDATA_DEFAULTECHELONEXCEL_SUPPORTID_OFFSET UNITYSDK_OFFSET(0xD30DB0)
#define FLATDATA_DEFAULTECHELONEXCEL_GETSUPPORTIDBYTES_OFFSET UNITYSDK_OFFSET(0xD30E40)
#define FLATDATA_DEFAULTECHELONEXCEL_GET_TSSID_OFFSET UNITYSDK_OFFSET(0xD30E60)
#define FLATDATA_DEFAULTECHELONEXCEL_GET_TSSID_OFFSET UNITYSDK_OFFSET(0xD30EB0)
#define FLATDATA_DEFAULTECHELONEXCEL_CREATEDEFAULTECHELONEXCEL_OFFSET UNITYSDK_OFFSET(0xD30F30)
#define FLATDATA_DEFAULTECHELONEXCEL_STARTDEFAULTECHELONEXCEL_OFFSET UNITYSDK_OFFSET(0xD31170)
#define FLATDATA_DEFAULTECHELONEXCEL_ADDECHLONID_OFFSET UNITYSDK_OFFSET(0xD310F0)
#define FLATDATA_DEFAULTECHELONEXCEL_ADDLEADERID_OFFSET UNITYSDK_OFFSET(0xD31060)
#define FLATDATA_DEFAULTECHELONEXCEL_ADDMAINID_OFFSET UNITYSDK_OFFSET(0xD310C0)
#define FLATDATA_DEFAULTECHELONEXCEL_CREATEMAINIDVECTOR_OFFSET UNITYSDK_OFFSET(0xD31190)
#define FLATDATA_DEFAULTECHELONEXCEL_STARTMAINIDVECTOR_OFFSET UNITYSDK_OFFSET(0xD31220)
#define FLATDATA_DEFAULTECHELONEXCEL_ADDSUPPORTID_OFFSET UNITYSDK_OFFSET(0xD31090)
#define FLATDATA_DEFAULTECHELONEXCEL_CREATESUPPORTIDVECTOR_OFFSET UNITYSDK_OFFSET(0xD31260)
#define FLATDATA_DEFAULTECHELONEXCEL_STARTSUPPORTIDVECTOR_OFFSET UNITYSDK_OFFSET(0xD312F0)
#define FLATDATA_DEFAULTECHELONEXCEL_ADDTSSID_OFFSET UNITYSDK_OFFSET(0xD31030)
#define FLATDATA_DEFAULTECHELONEXCEL_ENDDEFAULTECHELONEXCEL_OFFSET UNITYSDK_OFFSET(0xD31120)

namespace FlatData
{
	inline static constexpr unsigned int DefaultEchelonExcel_TypeDefinitionIndex = 9245;

	class DefaultEchelonExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10
		::Il2CppArray<::System::Object*>* TableKey; // 0x0

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTECHELONEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::FlatData::DefaultEchelonExcel* GetRootAsDefaultEchelonExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return ((::FlatData::DefaultEchelonExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTECHELONEXCEL_GETROOTASDEFAULTECHELONEXCEL_OFFSET))(arg, nullptr);
		}

		::FlatData::DefaultEchelonExcel* GetRootAsDefaultEchelonExcel(::FlatBuffers::ByteBuffer* arg, ::FlatData::DefaultEchelonExcel* arg2)
		{
			return ((::FlatData::DefaultEchelonExcel*(*)(::FlatBuffers::ByteBuffer*, ::FlatData::DefaultEchelonExcel*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTECHELONEXCEL_GETROOTASDEFAULTECHELONEXCEL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTECHELONEXCEL___INIT_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::DefaultEchelonExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			return ((::FlatData::DefaultEchelonExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTECHELONEXCEL___ASSIGN_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int32 get_echlonId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTECHELONEXCEL_GET_ECHLONID_OFFSET))(nullptr);
		}

		::System::Int32 get_EchlonId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTECHELONEXCEL_GET_ECHLONID_OFFSET))(nullptr);
		}

		::System::Int64 get_leaderId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTECHELONEXCEL_GET_LEADERID_OFFSET))(nullptr);
		}

		::System::Int64 get_LeaderId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTECHELONEXCEL_GET_LEADERID_OFFSET))(nullptr);
		}

		::System::Int64 mainId(::System::Int32 arg)
		{
			return ((::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTECHELONEXCEL_MAINID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_MainIdLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTECHELONEXCEL_GET_MAINIDLENGTH_OFFSET))(nullptr);
		}

		::System::Int64 MainId(::System::Int32 arg)
		{
			return ((::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTECHELONEXCEL_MAINID_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetMainIdBytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTECHELONEXCEL_GETMAINIDBYTES_OFFSET))(nullptr);
		}

		::System::Int64 supportId(::System::Int32 arg)
		{
			return ((::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTECHELONEXCEL_SUPPORTID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_SupportIdLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTECHELONEXCEL_GET_SUPPORTIDLENGTH_OFFSET))(nullptr);
		}

		::System::Int64 SupportId(::System::Int32 arg)
		{
			return ((::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTECHELONEXCEL_SUPPORTID_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetSupportIdBytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTECHELONEXCEL_GETSUPPORTIDBYTES_OFFSET))(nullptr);
		}

		::System::Int64 get_tssId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTECHELONEXCEL_GET_TSSID_OFFSET))(nullptr);
		}

		::System::Int64 get_TssId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTECHELONEXCEL_GET_TSSID_OFFSET))(nullptr);
		}

		Il2CppObject* CreateDefaultEchelonExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2, ::System::Int64 arg3, ::FlatBuffers::VectorOffset* arg4, ::FlatBuffers::VectorOffset* arg5, ::System::Int64 arg6)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::System::Int64, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTECHELONEXCEL_CREATEDEFAULTECHELONEXCEL_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

		::System::Void StartDefaultEchelonExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTECHELONEXCEL_STARTDEFAULTECHELONEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddEchlonId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTECHELONEXCEL_ADDECHLONID_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddLeaderId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTECHELONEXCEL_ADDLEADERID_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddMainId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTECHELONEXCEL_ADDMAINID_OFFSET))(arg, arg2, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateMainIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTECHELONEXCEL_CREATEMAINIDVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartMainIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTECHELONEXCEL_STARTMAINIDVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddSupportId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTECHELONEXCEL_ADDSUPPORTID_OFFSET))(arg, arg2, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateSupportIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTECHELONEXCEL_CREATESUPPORTIDVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartSupportIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTECHELONEXCEL_STARTSUPPORTIDVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddTssId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTECHELONEXCEL_ADDTSSID_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* EndDefaultEchelonExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTECHELONEXCEL_ENDDEFAULTECHELONEXCEL_OFFSET))(arg, nullptr);
		}

	};
}

