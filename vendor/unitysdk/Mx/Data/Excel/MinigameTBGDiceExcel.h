#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class MinigameTBGDiceExcel; }
namespace FlatData { class TBGProbModifyCondition; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }

#define MX_DATA_EXCEL_MINIGAMETBGDICEEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1BFFDC0)
#define MX_DATA_EXCEL_MINIGAMETBGDICEEXCEL_GETROOTASMINIGAMETBGDICEEXCEL_OFFSET UNITYSDK_OFFSET(0x1BFFDD0)
#define MX_DATA_EXCEL_MINIGAMETBGDICEEXCEL_GETROOTASMINIGAMETBGDICEEXCEL_OFFSET UNITYSDK_OFFSET(0x1BFFE30)
#define MX_DATA_EXCEL_MINIGAMETBGDICEEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1BFFEC0)
#define MX_DATA_EXCEL_MINIGAMETBGDICEEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1BFFE90)
#define MX_DATA_EXCEL_MINIGAMETBGDICEEXCEL_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1BFFEE0)
#define MX_DATA_EXCEL_MINIGAMETBGDICEEXCEL_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x1BFFF30)
#define MX_DATA_EXCEL_MINIGAMETBGDICEEXCEL_GET_DICEGROUP_OFFSET UNITYSDK_OFFSET(0x1BFFF80)
#define MX_DATA_EXCEL_MINIGAMETBGDICEEXCEL_GET_DICERESULT_OFFSET UNITYSDK_OFFSET(0x1BFFFD0)
#define MX_DATA_EXCEL_MINIGAMETBGDICEEXCEL_GET_PROB_OFFSET UNITYSDK_OFFSET(0x1C00020)
#define MX_DATA_EXCEL_MINIGAMETBGDICEEXCEL_PROBMODIFYCONDITION_OFFSET UNITYSDK_OFFSET(0x1C00070)
#define MX_DATA_EXCEL_MINIGAMETBGDICEEXCEL_GET_PROBMODIFYCONDITIONLENGTH_OFFSET UNITYSDK_OFFSET(0x1C000D0)
#define MX_DATA_EXCEL_MINIGAMETBGDICEEXCEL_GETPROBMODIFYCONDITIONBYTES_OFFSET UNITYSDK_OFFSET(0x1C00110)
#define MX_DATA_EXCEL_MINIGAMETBGDICEEXCEL_PROBMODIFYVALUE_OFFSET UNITYSDK_OFFSET(0x1C00130)
#define MX_DATA_EXCEL_MINIGAMETBGDICEEXCEL_GET_PROBMODIFYVALUELENGTH_OFFSET UNITYSDK_OFFSET(0x1C00190)
#define MX_DATA_EXCEL_MINIGAMETBGDICEEXCEL_GETPROBMODIFYVALUEBYTES_OFFSET UNITYSDK_OFFSET(0x1C001D0)
#define MX_DATA_EXCEL_MINIGAMETBGDICEEXCEL_PROBMODIFYLIMIT_OFFSET UNITYSDK_OFFSET(0x1C001F0)
#define MX_DATA_EXCEL_MINIGAMETBGDICEEXCEL_GET_PROBMODIFYLIMITLENGTH_OFFSET UNITYSDK_OFFSET(0x1C00250)
#define MX_DATA_EXCEL_MINIGAMETBGDICEEXCEL_GETPROBMODIFYLIMITBYTES_OFFSET UNITYSDK_OFFSET(0x1C00290)
#define MX_DATA_EXCEL_MINIGAMETBGDICEEXCEL_CREATEMINIGAMETBGDICEEXCEL_OFFSET UNITYSDK_OFFSET(0x1C002B0)
#define MX_DATA_EXCEL_MINIGAMETBGDICEEXCEL_STARTMINIGAMETBGDICEEXCEL_OFFSET UNITYSDK_OFFSET(0x1C00600)
#define MX_DATA_EXCEL_MINIGAMETBGDICEEXCEL_ADDEVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1C00460)
#define MX_DATA_EXCEL_MINIGAMETBGDICEEXCEL_ADDUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1C00430)
#define MX_DATA_EXCEL_MINIGAMETBGDICEEXCEL_ADDDICEGROUP_OFFSET UNITYSDK_OFFSET(0x1C00580)
#define MX_DATA_EXCEL_MINIGAMETBGDICEEXCEL_ADDDICERESULT_OFFSET UNITYSDK_OFFSET(0x1C00550)
#define MX_DATA_EXCEL_MINIGAMETBGDICEEXCEL_ADDPROB_OFFSET UNITYSDK_OFFSET(0x1C00520)
#define MX_DATA_EXCEL_MINIGAMETBGDICEEXCEL_ADDPROBMODIFYCONDITION_OFFSET UNITYSDK_OFFSET(0x1C004F0)
#define MX_DATA_EXCEL_MINIGAMETBGDICEEXCEL_CREATEPROBMODIFYCONDITIONVECTOR_OFFSET UNITYSDK_OFFSET(0x1C00620)
#define MX_DATA_EXCEL_MINIGAMETBGDICEEXCEL_STARTPROBMODIFYCONDITIONVECTOR_OFFSET UNITYSDK_OFFSET(0x1C006B0)
#define MX_DATA_EXCEL_MINIGAMETBGDICEEXCEL_ADDPROBMODIFYVALUE_OFFSET UNITYSDK_OFFSET(0x1C004C0)
#define MX_DATA_EXCEL_MINIGAMETBGDICEEXCEL_CREATEPROBMODIFYVALUEVECTOR_OFFSET UNITYSDK_OFFSET(0x1C006F0)
#define MX_DATA_EXCEL_MINIGAMETBGDICEEXCEL_STARTPROBMODIFYVALUEVECTOR_OFFSET UNITYSDK_OFFSET(0x1C00780)
#define MX_DATA_EXCEL_MINIGAMETBGDICEEXCEL_ADDPROBMODIFYLIMIT_OFFSET UNITYSDK_OFFSET(0x1C00490)
#define MX_DATA_EXCEL_MINIGAMETBGDICEEXCEL_CREATEPROBMODIFYLIMITVECTOR_OFFSET UNITYSDK_OFFSET(0x1C007C0)
#define MX_DATA_EXCEL_MINIGAMETBGDICEEXCEL_STARTPROBMODIFYLIMITVECTOR_OFFSET UNITYSDK_OFFSET(0x1C00850)
#define MX_DATA_EXCEL_MINIGAMETBGDICEEXCEL_ENDMINIGAMETBGDICEEXCEL_OFFSET UNITYSDK_OFFSET(0x1C005B0)
#define MX_DATA_EXCEL_MINIGAMETBGDICEEXCEL_FINISHMINIGAMETBGDICEEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C00890)
#define MX_DATA_EXCEL_MINIGAMETBGDICEEXCEL_FINISHSIZEPREFIXEDMINIGAMETBGDICEEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C008B0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int MinigameTBGDiceExcel_TypeDefinitionIndex = 18859;

	class MinigameTBGDiceExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGDICEEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::MinigameTBGDiceExcel* GetRootAsMinigameTBGDiceExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::MinigameTBGDiceExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGDICEEXCEL_GETROOTASMINIGAMETBGDICEEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::MinigameTBGDiceExcel* GetRootAsMinigameTBGDiceExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::MinigameTBGDiceExcel* arg)
		{
			return (return (::MX::Data::Excel::MinigameTBGDiceExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::MinigameTBGDiceExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGDICEEXCEL_GETROOTASMINIGAMETBGDICEEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGDICEEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::MinigameTBGDiceExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::MinigameTBGDiceExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGDICEEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGDICEEXCEL_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Int64 get_UniqueId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGDICEEXCEL_GET_UNIQUEID_OFFSET))(nullptr);
		}

		::System::Int32 get_DiceGroup()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGDICEEXCEL_GET_DICEGROUP_OFFSET))(nullptr);
		}

		::System::Int32 get_DiceResult()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGDICEEXCEL_GET_DICERESULT_OFFSET))(nullptr);
		}

		::System::Int32 get_Prob()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGDICEEXCEL_GET_PROB_OFFSET))(nullptr);
		}

		::FlatData::TBGProbModifyCondition* ProbModifyCondition(::System::Int32 arg)
		{
			return (return (::FlatData::TBGProbModifyCondition*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGDICEEXCEL_PROBMODIFYCONDITION_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ProbModifyConditionLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGDICEEXCEL_GET_PROBMODIFYCONDITIONLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetProbModifyConditionBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGDICEEXCEL_GETPROBMODIFYCONDITIONBYTES_OFFSET))(nullptr);
		}

		::System::Int32 ProbModifyValue(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGDICEEXCEL_PROBMODIFYVALUE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ProbModifyValueLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGDICEEXCEL_GET_PROBMODIFYVALUELENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetProbModifyValueBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGDICEEXCEL_GETPROBMODIFYVALUEBYTES_OFFSET))(nullptr);
		}

		::System::Int32 ProbModifyLimit(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGDICEEXCEL_PROBMODIFYLIMIT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ProbModifyLimitLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGDICEEXCEL_GET_PROBMODIFYLIMITLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetProbModifyLimitBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGDICEEXCEL_GETPROBMODIFYLIMITBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateMinigameTBGDiceExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int64, ::System::Int32, ::System::Int32, ::System::Int32, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGDICEEXCEL_CREATEMINIGAMETBGDICEEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartMinigameTBGDiceExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGDICEEXCEL_STARTMINIGAMETBGDICEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddEventContentId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGDICEEXCEL_ADDEVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddUniqueId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGDICEEXCEL_ADDUNIQUEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDiceGroup(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGDICEEXCEL_ADDDICEGROUP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDiceResult(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGDICEEXCEL_ADDDICERESULT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddProb(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGDICEEXCEL_ADDPROB_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddProbModifyCondition(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGDICEEXCEL_ADDPROBMODIFYCONDITION_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateProbModifyConditionVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGDICEEXCEL_CREATEPROBMODIFYCONDITIONVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartProbModifyConditionVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGDICEEXCEL_STARTPROBMODIFYCONDITIONVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddProbModifyValue(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGDICEEXCEL_ADDPROBMODIFYVALUE_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateProbModifyValueVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGDICEEXCEL_CREATEPROBMODIFYVALUEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartProbModifyValueVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGDICEEXCEL_STARTPROBMODIFYVALUEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddProbModifyLimit(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGDICEEXCEL_ADDPROBMODIFYLIMIT_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateProbModifyLimitVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGDICEEXCEL_CREATEPROBMODIFYLIMITVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartProbModifyLimitVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGDICEEXCEL_STARTPROBMODIFYLIMITVECTOR_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndMinigameTBGDiceExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGDICEEXCEL_ENDMINIGAMETBGDICEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishMinigameTBGDiceExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGDICEEXCEL_FINISHMINIGAMETBGDICEEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedMinigameTBGDiceExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGDICEEXCEL_FINISHSIZEPREFIXEDMINIGAMETBGDICEEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

