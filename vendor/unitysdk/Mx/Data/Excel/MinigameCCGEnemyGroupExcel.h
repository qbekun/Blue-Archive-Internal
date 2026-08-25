#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class MinigameCCGEnemyGroupExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }

#define MX_DATA_EXCEL_MINIGAMECCGENEMYGROUPEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1B93080)
#define MX_DATA_EXCEL_MINIGAMECCGENEMYGROUPEXCEL_GETROOTASMINIGAMECCGENEMYGROUPEXCEL_OFFSET UNITYSDK_OFFSET(0x1B93090)
#define MX_DATA_EXCEL_MINIGAMECCGENEMYGROUPEXCEL_GETROOTASMINIGAMECCGENEMYGROUPEXCEL_OFFSET UNITYSDK_OFFSET(0x1B930F0)
#define MX_DATA_EXCEL_MINIGAMECCGENEMYGROUPEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1B93180)
#define MX_DATA_EXCEL_MINIGAMECCGENEMYGROUPEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1B93150)
#define MX_DATA_EXCEL_MINIGAMECCGENEMYGROUPEXCEL_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1B931A0)
#define MX_DATA_EXCEL_MINIGAMECCGENEMYGROUPEXCEL_GET_ENEMYAI_OFFSET UNITYSDK_OFFSET(0x1B931F0)
#define MX_DATA_EXCEL_MINIGAMECCGENEMYGROUPEXCEL_GETENEMYAIBYTES_OFFSET UNITYSDK_OFFSET(0x1B93230)
#define MX_DATA_EXCEL_MINIGAMECCGENEMYGROUPEXCEL_GET_ENEMYBGM_OFFSET UNITYSDK_OFFSET(0x1B93250)
#define MX_DATA_EXCEL_MINIGAMECCGENEMYGROUPEXCEL_GET_LOCALIZEENEMYGROUPNAME_OFFSET UNITYSDK_OFFSET(0x1B932A0)
#define MX_DATA_EXCEL_MINIGAMECCGENEMYGROUPEXCEL_GET_LOCALIZEENEMYGROUPDESC_OFFSET UNITYSDK_OFFSET(0x1B932F0)
#define MX_DATA_EXCEL_MINIGAMECCGENEMYGROUPEXCEL_CREATEMINIGAMECCGENEMYGROUPEXCEL_OFFSET UNITYSDK_OFFSET(0x1B93340)
#define MX_DATA_EXCEL_MINIGAMECCGENEMYGROUPEXCEL_STARTMINIGAMECCGENEMYGROUPEXCEL_OFFSET UNITYSDK_OFFSET(0x1B93580)
#define MX_DATA_EXCEL_MINIGAMECCGENEMYGROUPEXCEL_ADDGROUPID_OFFSET UNITYSDK_OFFSET(0x1B93470)
#define MX_DATA_EXCEL_MINIGAMECCGENEMYGROUPEXCEL_ADDENEMYAI_OFFSET UNITYSDK_OFFSET(0x1B93500)
#define MX_DATA_EXCEL_MINIGAMECCGENEMYGROUPEXCEL_ADDENEMYBGM_OFFSET UNITYSDK_OFFSET(0x1B93440)
#define MX_DATA_EXCEL_MINIGAMECCGENEMYGROUPEXCEL_ADDLOCALIZEENEMYGROUPNAME_OFFSET UNITYSDK_OFFSET(0x1B934D0)
#define MX_DATA_EXCEL_MINIGAMECCGENEMYGROUPEXCEL_ADDLOCALIZEENEMYGROUPDESC_OFFSET UNITYSDK_OFFSET(0x1B934A0)
#define MX_DATA_EXCEL_MINIGAMECCGENEMYGROUPEXCEL_ENDMINIGAMECCGENEMYGROUPEXCEL_OFFSET UNITYSDK_OFFSET(0x1B93530)
#define MX_DATA_EXCEL_MINIGAMECCGENEMYGROUPEXCEL_FINISHMINIGAMECCGENEMYGROUPEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1B935A0)
#define MX_DATA_EXCEL_MINIGAMECCGENEMYGROUPEXCEL_FINISHSIZEPREFIXEDMINIGAMECCGENEMYGROUPEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1B935C0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int MinigameCCGEnemyGroupExcel_TypeDefinitionIndex = 18468;

	class MinigameCCGEnemyGroupExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGENEMYGROUPEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::MinigameCCGEnemyGroupExcel* GetRootAsMinigameCCGEnemyGroupExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::MinigameCCGEnemyGroupExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGENEMYGROUPEXCEL_GETROOTASMINIGAMECCGENEMYGROUPEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::MinigameCCGEnemyGroupExcel* GetRootAsMinigameCCGEnemyGroupExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::MinigameCCGEnemyGroupExcel* arg)
		{
			return (return (::MX::Data::Excel::MinigameCCGEnemyGroupExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::MinigameCCGEnemyGroupExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGENEMYGROUPEXCEL_GETROOTASMINIGAMECCGENEMYGROUPEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGENEMYGROUPEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::MinigameCCGEnemyGroupExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::MinigameCCGEnemyGroupExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGENEMYGROUPEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_GroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGENEMYGROUPEXCEL_GET_GROUPID_OFFSET))(nullptr);
		}

		::System::String* get_EnemyAI()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGENEMYGROUPEXCEL_GET_ENEMYAI_OFFSET))(nullptr);
		}

		Il2CppObject* GetEnemyAIBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGENEMYGROUPEXCEL_GETENEMYAIBYTES_OFFSET))(nullptr);
		}

		::System::Int64 get_EnemyBGM()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGENEMYGROUPEXCEL_GET_ENEMYBGM_OFFSET))(nullptr);
		}

		::System::UInt32 get_LocalizeEnemyGroupName()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGENEMYGROUPEXCEL_GET_LOCALIZEENEMYGROUPNAME_OFFSET))(nullptr);
		}

		::System::UInt32 get_LocalizeEnemyGroupDesc()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGENEMYGROUPEXCEL_GET_LOCALIZEENEMYGROUPDESC_OFFSET))(nullptr);
		}

		Il2CppObject* CreateMinigameCCGEnemyGroupExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::FlatBuffers::StringOffset* arg, ::System::Int64 arg, ::System::UInt32 arg, ::System::UInt32 arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::FlatBuffers::StringOffset*, ::System::Int64, ::System::UInt32, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGENEMYGROUPEXCEL_CREATEMINIGAMECCGENEMYGROUPEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartMinigameCCGEnemyGroupExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGENEMYGROUPEXCEL_STARTMINIGAMECCGENEMYGROUPEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGENEMYGROUPEXCEL_ADDGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEnemyAI(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGENEMYGROUPEXCEL_ADDENEMYAI_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEnemyBGM(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGENEMYGROUPEXCEL_ADDENEMYBGM_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLocalizeEnemyGroupName(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGENEMYGROUPEXCEL_ADDLOCALIZEENEMYGROUPNAME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLocalizeEnemyGroupDesc(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGENEMYGROUPEXCEL_ADDLOCALIZEENEMYGROUPDESC_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndMinigameCCGEnemyGroupExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGENEMYGROUPEXCEL_ENDMINIGAMECCGENEMYGROUPEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishMinigameCCGEnemyGroupExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGENEMYGROUPEXCEL_FINISHMINIGAMECCGENEMYGROUPEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedMinigameCCGEnemyGroupExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGENEMYGROUPEXCEL_FINISHSIZEPREFIXEDMINIGAMECCGENEMYGROUPEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

