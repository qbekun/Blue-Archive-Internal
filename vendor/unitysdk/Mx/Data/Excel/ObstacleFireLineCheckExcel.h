#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class ObstacleFireLineCheckExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }

#define MX_DATA_EXCEL_OBSTACLEFIRELINECHECKEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1C1CA70)
#define MX_DATA_EXCEL_OBSTACLEFIRELINECHECKEXCEL_GETROOTASOBSTACLEFIRELINECHECKEXCEL_OFFSET UNITYSDK_OFFSET(0x1C1CA80)
#define MX_DATA_EXCEL_OBSTACLEFIRELINECHECKEXCEL_GETROOTASOBSTACLEFIRELINECHECKEXCEL_OFFSET UNITYSDK_OFFSET(0x1C1CAE0)
#define MX_DATA_EXCEL_OBSTACLEFIRELINECHECKEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1C1CB70)
#define MX_DATA_EXCEL_OBSTACLEFIRELINECHECKEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1C1CB40)
#define MX_DATA_EXCEL_OBSTACLEFIRELINECHECKEXCEL_GET_MYOBSTACLEFIRELINECHECK_OFFSET UNITYSDK_OFFSET(0x1C1CB90)
#define MX_DATA_EXCEL_OBSTACLEFIRELINECHECKEXCEL_GET_ALLYOBSTACLEFIRELINECHECK_OFFSET UNITYSDK_OFFSET(0x1C1CBE0)
#define MX_DATA_EXCEL_OBSTACLEFIRELINECHECKEXCEL_GET_ENEMYOBSTACLEFIRELINECHECK_OFFSET UNITYSDK_OFFSET(0x1C1CC30)
#define MX_DATA_EXCEL_OBSTACLEFIRELINECHECKEXCEL_GET_EMPTYOBSTACLEFIRELINECHECK_OFFSET UNITYSDK_OFFSET(0x1C1CC80)
#define MX_DATA_EXCEL_OBSTACLEFIRELINECHECKEXCEL_CREATEOBSTACLEFIRELINECHECKEXCEL_OFFSET UNITYSDK_OFFSET(0x1C1CCD0)
#define MX_DATA_EXCEL_OBSTACLEFIRELINECHECKEXCEL_STARTOBSTACLEFIRELINECHECKEXCEL_OFFSET UNITYSDK_OFFSET(0x1C1CEC0)
#define MX_DATA_EXCEL_OBSTACLEFIRELINECHECKEXCEL_ADDMYOBSTACLEFIRELINECHECK_OFFSET UNITYSDK_OFFSET(0x1C1CE40)
#define MX_DATA_EXCEL_OBSTACLEFIRELINECHECKEXCEL_ADDALLYOBSTACLEFIRELINECHECK_OFFSET UNITYSDK_OFFSET(0x1C1CE10)
#define MX_DATA_EXCEL_OBSTACLEFIRELINECHECKEXCEL_ADDENEMYOBSTACLEFIRELINECHECK_OFFSET UNITYSDK_OFFSET(0x1C1CDE0)
#define MX_DATA_EXCEL_OBSTACLEFIRELINECHECKEXCEL_ADDEMPTYOBSTACLEFIRELINECHECK_OFFSET UNITYSDK_OFFSET(0x1C1CDB0)
#define MX_DATA_EXCEL_OBSTACLEFIRELINECHECKEXCEL_ENDOBSTACLEFIRELINECHECKEXCEL_OFFSET UNITYSDK_OFFSET(0x1C1CE70)
#define MX_DATA_EXCEL_OBSTACLEFIRELINECHECKEXCEL_FINISHOBSTACLEFIRELINECHECKEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C1CEE0)
#define MX_DATA_EXCEL_OBSTACLEFIRELINECHECKEXCEL_FINISHSIZEPREFIXEDOBSTACLEFIRELINECHECKEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C1CF00)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ObstacleFireLineCheckExcel_TypeDefinitionIndex = 18981;

	class ObstacleFireLineCheckExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OBSTACLEFIRELINECHECKEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::ObstacleFireLineCheckExcel* GetRootAsObstacleFireLineCheckExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::ObstacleFireLineCheckExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OBSTACLEFIRELINECHECKEXCEL_GETROOTASOBSTACLEFIRELINECHECKEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::ObstacleFireLineCheckExcel* GetRootAsObstacleFireLineCheckExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::ObstacleFireLineCheckExcel* arg)
		{
			return (return (::MX::Data::Excel::ObstacleFireLineCheckExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::ObstacleFireLineCheckExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OBSTACLEFIRELINECHECKEXCEL_GETROOTASOBSTACLEFIRELINECHECKEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OBSTACLEFIRELINECHECKEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::ObstacleFireLineCheckExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::ObstacleFireLineCheckExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OBSTACLEFIRELINECHECKEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean get_MyObstacleFireLineCheck()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OBSTACLEFIRELINECHECKEXCEL_GET_MYOBSTACLEFIRELINECHECK_OFFSET))(nullptr);
		}

		::System::Boolean get_AllyObstacleFireLineCheck()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OBSTACLEFIRELINECHECKEXCEL_GET_ALLYOBSTACLEFIRELINECHECK_OFFSET))(nullptr);
		}

		::System::Boolean get_EnemyObstacleFireLineCheck()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OBSTACLEFIRELINECHECKEXCEL_GET_ENEMYOBSTACLEFIRELINECHECK_OFFSET))(nullptr);
		}

		::System::Boolean get_EmptyObstacleFireLineCheck()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OBSTACLEFIRELINECHECKEXCEL_GET_EMPTYOBSTACLEFIRELINECHECK_OFFSET))(nullptr);
		}

		Il2CppObject* CreateObstacleFireLineCheckExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OBSTACLEFIRELINECHECKEXCEL_CREATEOBSTACLEFIRELINECHECKEXCEL_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartObstacleFireLineCheckExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OBSTACLEFIRELINECHECKEXCEL_STARTOBSTACLEFIRELINECHECKEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddMyObstacleFireLineCheck(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OBSTACLEFIRELINECHECKEXCEL_ADDMYOBSTACLEFIRELINECHECK_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddAllyObstacleFireLineCheck(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OBSTACLEFIRELINECHECKEXCEL_ADDALLYOBSTACLEFIRELINECHECK_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEnemyObstacleFireLineCheck(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OBSTACLEFIRELINECHECKEXCEL_ADDENEMYOBSTACLEFIRELINECHECK_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEmptyObstacleFireLineCheck(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OBSTACLEFIRELINECHECKEXCEL_ADDEMPTYOBSTACLEFIRELINECHECK_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndObstacleFireLineCheckExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OBSTACLEFIRELINECHECKEXCEL_ENDOBSTACLEFIRELINECHECKEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishObstacleFireLineCheckExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OBSTACLEFIRELINECHECKEXCEL_FINISHOBSTACLEFIRELINECHECKEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedObstacleFireLineCheckExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OBSTACLEFIRELINECHECKEXCEL_FINISHSIZEPREFIXEDOBSTACLEFIRELINECHECKEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

