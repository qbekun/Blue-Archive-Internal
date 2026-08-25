#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class CharacterCalculationLimitExcel; }
namespace FlatData { class TacticEntityType; }
namespace FlatData { class BattleCalculationStat; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }

#define MX_DATA_EXCEL_CHARACTERCALCULATIONLIMITEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1A0C060)
#define MX_DATA_EXCEL_CHARACTERCALCULATIONLIMITEXCEL_GETROOTASCHARACTERCALCULATIONLIMITEXCEL_OFFSET UNITYSDK_OFFSET(0x1A0C070)
#define MX_DATA_EXCEL_CHARACTERCALCULATIONLIMITEXCEL_GETROOTASCHARACTERCALCULATIONLIMITEXCEL_OFFSET UNITYSDK_OFFSET(0x1A0C0D0)
#define MX_DATA_EXCEL_CHARACTERCALCULATIONLIMITEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1A0C160)
#define MX_DATA_EXCEL_CHARACTERCALCULATIONLIMITEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1A0C130)
#define MX_DATA_EXCEL_CHARACTERCALCULATIONLIMITEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0x1A0C180)
#define MX_DATA_EXCEL_CHARACTERCALCULATIONLIMITEXCEL_GET_TACTICENTITYTYPE_OFFSET UNITYSDK_OFFSET(0x1A0C1D0)
#define MX_DATA_EXCEL_CHARACTERCALCULATIONLIMITEXCEL_GET_CALCULATIONVALUE_OFFSET UNITYSDK_OFFSET(0x1A0C220)
#define MX_DATA_EXCEL_CHARACTERCALCULATIONLIMITEXCEL_GET_MINVALUE_OFFSET UNITYSDK_OFFSET(0x1A0C270)
#define MX_DATA_EXCEL_CHARACTERCALCULATIONLIMITEXCEL_GET_MAXVALUE_OFFSET UNITYSDK_OFFSET(0x1A0C2C0)
#define MX_DATA_EXCEL_CHARACTERCALCULATIONLIMITEXCEL_LIMITSTARTVALUE_OFFSET UNITYSDK_OFFSET(0x1A0C310)
#define MX_DATA_EXCEL_CHARACTERCALCULATIONLIMITEXCEL_GET_LIMITSTARTVALUELENGTH_OFFSET UNITYSDK_OFFSET(0x1A0C370)
#define MX_DATA_EXCEL_CHARACTERCALCULATIONLIMITEXCEL_GETLIMITSTARTVALUEBYTES_OFFSET UNITYSDK_OFFSET(0x1A0C3B0)
#define MX_DATA_EXCEL_CHARACTERCALCULATIONLIMITEXCEL_DECREASERATE_OFFSET UNITYSDK_OFFSET(0x1A0C3D0)
#define MX_DATA_EXCEL_CHARACTERCALCULATIONLIMITEXCEL_GET_DECREASERATELENGTH_OFFSET UNITYSDK_OFFSET(0x1A0C430)
#define MX_DATA_EXCEL_CHARACTERCALCULATIONLIMITEXCEL_GETDECREASERATEBYTES_OFFSET UNITYSDK_OFFSET(0x1A0C470)
#define MX_DATA_EXCEL_CHARACTERCALCULATIONLIMITEXCEL_CREATECHARACTERCALCULATIONLIMITEXCEL_OFFSET UNITYSDK_OFFSET(0x1A0C490)
#define MX_DATA_EXCEL_CHARACTERCALCULATIONLIMITEXCEL_STARTCHARACTERCALCULATIONLIMITEXCEL_OFFSET UNITYSDK_OFFSET(0x1A0C780)
#define MX_DATA_EXCEL_CHARACTERCALCULATIONLIMITEXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0x1A0C640)
#define MX_DATA_EXCEL_CHARACTERCALCULATIONLIMITEXCEL_ADDTACTICENTITYTYPE_OFFSET UNITYSDK_OFFSET(0x1A0C700)
#define MX_DATA_EXCEL_CHARACTERCALCULATIONLIMITEXCEL_ADDCALCULATIONVALUE_OFFSET UNITYSDK_OFFSET(0x1A0C6D0)
#define MX_DATA_EXCEL_CHARACTERCALCULATIONLIMITEXCEL_ADDMINVALUE_OFFSET UNITYSDK_OFFSET(0x1A0C610)
#define MX_DATA_EXCEL_CHARACTERCALCULATIONLIMITEXCEL_ADDMAXVALUE_OFFSET UNITYSDK_OFFSET(0x1A0C5E0)
#define MX_DATA_EXCEL_CHARACTERCALCULATIONLIMITEXCEL_ADDLIMITSTARTVALUE_OFFSET UNITYSDK_OFFSET(0x1A0C6A0)
#define MX_DATA_EXCEL_CHARACTERCALCULATIONLIMITEXCEL_CREATELIMITSTARTVALUEVECTOR_OFFSET UNITYSDK_OFFSET(0x1A0C7A0)
#define MX_DATA_EXCEL_CHARACTERCALCULATIONLIMITEXCEL_STARTLIMITSTARTVALUEVECTOR_OFFSET UNITYSDK_OFFSET(0x1A0C830)
#define MX_DATA_EXCEL_CHARACTERCALCULATIONLIMITEXCEL_ADDDECREASERATE_OFFSET UNITYSDK_OFFSET(0x1A0C670)
#define MX_DATA_EXCEL_CHARACTERCALCULATIONLIMITEXCEL_CREATEDECREASERATEVECTOR_OFFSET UNITYSDK_OFFSET(0x1A0C870)
#define MX_DATA_EXCEL_CHARACTERCALCULATIONLIMITEXCEL_STARTDECREASERATEVECTOR_OFFSET UNITYSDK_OFFSET(0x1A0C900)
#define MX_DATA_EXCEL_CHARACTERCALCULATIONLIMITEXCEL_ENDCHARACTERCALCULATIONLIMITEXCEL_OFFSET UNITYSDK_OFFSET(0x1A0C730)
#define MX_DATA_EXCEL_CHARACTERCALCULATIONLIMITEXCEL_FINISHCHARACTERCALCULATIONLIMITEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1A0C940)
#define MX_DATA_EXCEL_CHARACTERCALCULATIONLIMITEXCEL_FINISHSIZEPREFIXEDCHARACTERCALCULATIONLIMITEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1A0C960)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int CharacterCalculationLimitExcel_TypeDefinitionIndex = 16924;

	class CharacterCalculationLimitExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERCALCULATIONLIMITEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::CharacterCalculationLimitExcel* GetRootAsCharacterCalculationLimitExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::CharacterCalculationLimitExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERCALCULATIONLIMITEXCEL_GETROOTASCHARACTERCALCULATIONLIMITEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::CharacterCalculationLimitExcel* GetRootAsCharacterCalculationLimitExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::CharacterCalculationLimitExcel* arg)
		{
			return (return (::MX::Data::Excel::CharacterCalculationLimitExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::CharacterCalculationLimitExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERCALCULATIONLIMITEXCEL_GETROOTASCHARACTERCALCULATIONLIMITEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERCALCULATIONLIMITEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::CharacterCalculationLimitExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::CharacterCalculationLimitExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERCALCULATIONLIMITEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERCALCULATIONLIMITEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::FlatData::TacticEntityType* get_TacticEntityType()
		{
			return (return (::FlatData::TacticEntityType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERCALCULATIONLIMITEXCEL_GET_TACTICENTITYTYPE_OFFSET))(nullptr);
		}

		::FlatData::BattleCalculationStat* get_CalculationValue()
		{
			return (return (::FlatData::BattleCalculationStat*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERCALCULATIONLIMITEXCEL_GET_CALCULATIONVALUE_OFFSET))(nullptr);
		}

		::System::Int64 get_MinValue()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERCALCULATIONLIMITEXCEL_GET_MINVALUE_OFFSET))(nullptr);
		}

		::System::Int64 get_MaxValue()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERCALCULATIONLIMITEXCEL_GET_MAXVALUE_OFFSET))(nullptr);
		}

		::System::Int64 LimitStartValue(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERCALCULATIONLIMITEXCEL_LIMITSTARTVALUE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_LimitStartValueLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERCALCULATIONLIMITEXCEL_GET_LIMITSTARTVALUELENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetLimitStartValueBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERCALCULATIONLIMITEXCEL_GETLIMITSTARTVALUEBYTES_OFFSET))(nullptr);
		}

		::System::Int64 DecreaseRate(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERCALCULATIONLIMITEXCEL_DECREASERATE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_DecreaseRateLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERCALCULATIONLIMITEXCEL_GET_DECREASERATELENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetDecreaseRateBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERCALCULATIONLIMITEXCEL_GETDECREASERATEBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateCharacterCalculationLimitExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::FlatData::TacticEntityType* arg, ::FlatData::BattleCalculationStat* arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::FlatData::TacticEntityType*, ::FlatData::BattleCalculationStat*, ::System::Int64, ::System::Int64, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERCALCULATIONLIMITEXCEL_CREATECHARACTERCALCULATIONLIMITEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartCharacterCalculationLimitExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERCALCULATIONLIMITEXCEL_STARTCHARACTERCALCULATIONLIMITEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERCALCULATIONLIMITEXCEL_ADDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddTacticEntityType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::TacticEntityType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::TacticEntityType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERCALCULATIONLIMITEXCEL_ADDTACTICENTITYTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCalculationValue(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::BattleCalculationStat* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::BattleCalculationStat*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERCALCULATIONLIMITEXCEL_ADDCALCULATIONVALUE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddMinValue(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERCALCULATIONLIMITEXCEL_ADDMINVALUE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddMaxValue(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERCALCULATIONLIMITEXCEL_ADDMAXVALUE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLimitStartValue(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERCALCULATIONLIMITEXCEL_ADDLIMITSTARTVALUE_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateLimitStartValueVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERCALCULATIONLIMITEXCEL_CREATELIMITSTARTVALUEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartLimitStartValueVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERCALCULATIONLIMITEXCEL_STARTLIMITSTARTVALUEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDecreaseRate(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERCALCULATIONLIMITEXCEL_ADDDECREASERATE_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateDecreaseRateVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERCALCULATIONLIMITEXCEL_CREATEDECREASERATEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartDecreaseRateVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERCALCULATIONLIMITEXCEL_STARTDECREASERATEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndCharacterCalculationLimitExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERCALCULATIONLIMITEXCEL_ENDCHARACTERCALCULATIONLIMITEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishCharacterCalculationLimitExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERCALCULATIONLIMITEXCEL_FINISHCHARACTERCALCULATIONLIMITEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedCharacterCalculationLimitExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERCALCULATIONLIMITEXCEL_FINISHSIZEPREFIXEDCHARACTERCALCULATIONLIMITEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

