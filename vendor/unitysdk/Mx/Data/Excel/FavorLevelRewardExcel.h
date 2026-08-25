#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class FavorLevelRewardExcel; }
namespace FlatData { class EquipmentOptionType; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }

#define MX_DATA_EXCEL_FAVORLEVELREWARDEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1B1A910)
#define MX_DATA_EXCEL_FAVORLEVELREWARDEXCEL_GETROOTASFAVORLEVELREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1B1A920)
#define MX_DATA_EXCEL_FAVORLEVELREWARDEXCEL_GETROOTASFAVORLEVELREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1B1A980)
#define MX_DATA_EXCEL_FAVORLEVELREWARDEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1B1AA10)
#define MX_DATA_EXCEL_FAVORLEVELREWARDEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1B1A9E0)
#define MX_DATA_EXCEL_FAVORLEVELREWARDEXCEL_GET_CHARACTERID_OFFSET UNITYSDK_OFFSET(0x1B1AA30)
#define MX_DATA_EXCEL_FAVORLEVELREWARDEXCEL_GET_FAVORLEVEL_OFFSET UNITYSDK_OFFSET(0x1B1AA80)
#define MX_DATA_EXCEL_FAVORLEVELREWARDEXCEL_STATTYPE_OFFSET UNITYSDK_OFFSET(0x1B1AAD0)
#define MX_DATA_EXCEL_FAVORLEVELREWARDEXCEL_GET_STATTYPELENGTH_OFFSET UNITYSDK_OFFSET(0x1B1AB30)
#define MX_DATA_EXCEL_FAVORLEVELREWARDEXCEL_GETSTATTYPEBYTES_OFFSET UNITYSDK_OFFSET(0x1B1AB70)
#define MX_DATA_EXCEL_FAVORLEVELREWARDEXCEL_STATVALUE_OFFSET UNITYSDK_OFFSET(0x1B1AB90)
#define MX_DATA_EXCEL_FAVORLEVELREWARDEXCEL_GET_STATVALUELENGTH_OFFSET UNITYSDK_OFFSET(0x1B1ABF0)
#define MX_DATA_EXCEL_FAVORLEVELREWARDEXCEL_GETSTATVALUEBYTES_OFFSET UNITYSDK_OFFSET(0x1B1AC30)
#define MX_DATA_EXCEL_FAVORLEVELREWARDEXCEL_CREATEFAVORLEVELREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1B1AC50)
#define MX_DATA_EXCEL_FAVORLEVELREWARDEXCEL_STARTFAVORLEVELREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1B1AE40)
#define MX_DATA_EXCEL_FAVORLEVELREWARDEXCEL_ADDCHARACTERID_OFFSET UNITYSDK_OFFSET(0x1B1AD60)
#define MX_DATA_EXCEL_FAVORLEVELREWARDEXCEL_ADDFAVORLEVEL_OFFSET UNITYSDK_OFFSET(0x1B1AD30)
#define MX_DATA_EXCEL_FAVORLEVELREWARDEXCEL_ADDSTATTYPE_OFFSET UNITYSDK_OFFSET(0x1B1ADC0)
#define MX_DATA_EXCEL_FAVORLEVELREWARDEXCEL_CREATESTATTYPEVECTOR_OFFSET UNITYSDK_OFFSET(0x1B1AE60)
#define MX_DATA_EXCEL_FAVORLEVELREWARDEXCEL_STARTSTATTYPEVECTOR_OFFSET UNITYSDK_OFFSET(0x1B1AEF0)
#define MX_DATA_EXCEL_FAVORLEVELREWARDEXCEL_ADDSTATVALUE_OFFSET UNITYSDK_OFFSET(0x1B1AD90)
#define MX_DATA_EXCEL_FAVORLEVELREWARDEXCEL_CREATESTATVALUEVECTOR_OFFSET UNITYSDK_OFFSET(0x1B1AF30)
#define MX_DATA_EXCEL_FAVORLEVELREWARDEXCEL_STARTSTATVALUEVECTOR_OFFSET UNITYSDK_OFFSET(0x1B1AFC0)
#define MX_DATA_EXCEL_FAVORLEVELREWARDEXCEL_ENDFAVORLEVELREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1B1ADF0)
#define MX_DATA_EXCEL_FAVORLEVELREWARDEXCEL_FINISHFAVORLEVELREWARDEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1B1B000)
#define MX_DATA_EXCEL_FAVORLEVELREWARDEXCEL_FINISHSIZEPREFIXEDFAVORLEVELREWARDEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1B1B020)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int FavorLevelRewardExcel_TypeDefinitionIndex = 17954;

	class FavorLevelRewardExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FAVORLEVELREWARDEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::FavorLevelRewardExcel* GetRootAsFavorLevelRewardExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::FavorLevelRewardExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FAVORLEVELREWARDEXCEL_GETROOTASFAVORLEVELREWARDEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::FavorLevelRewardExcel* GetRootAsFavorLevelRewardExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::FavorLevelRewardExcel* arg)
		{
			return (return (::MX::Data::Excel::FavorLevelRewardExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::FavorLevelRewardExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FAVORLEVELREWARDEXCEL_GETROOTASFAVORLEVELREWARDEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FAVORLEVELREWARDEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::FavorLevelRewardExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::FavorLevelRewardExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FAVORLEVELREWARDEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_CharacterId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FAVORLEVELREWARDEXCEL_GET_CHARACTERID_OFFSET))(nullptr);
		}

		::System::Int64 get_FavorLevel()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FAVORLEVELREWARDEXCEL_GET_FAVORLEVEL_OFFSET))(nullptr);
		}

		::FlatData::EquipmentOptionType* StatType(::System::Int32 arg)
		{
			return (return (::FlatData::EquipmentOptionType*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FAVORLEVELREWARDEXCEL_STATTYPE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_StatTypeLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FAVORLEVELREWARDEXCEL_GET_STATTYPELENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetStatTypeBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FAVORLEVELREWARDEXCEL_GETSTATTYPEBYTES_OFFSET))(nullptr);
		}

		::System::Int64 StatValue(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FAVORLEVELREWARDEXCEL_STATVALUE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_StatValueLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FAVORLEVELREWARDEXCEL_GET_STATVALUELENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetStatValueBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FAVORLEVELREWARDEXCEL_GETSTATVALUEBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateFavorLevelRewardExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int64, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FAVORLEVELREWARDEXCEL_CREATEFAVORLEVELREWARDEXCEL_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartFavorLevelRewardExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FAVORLEVELREWARDEXCEL_STARTFAVORLEVELREWARDEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddCharacterId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FAVORLEVELREWARDEXCEL_ADDCHARACTERID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddFavorLevel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FAVORLEVELREWARDEXCEL_ADDFAVORLEVEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStatType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FAVORLEVELREWARDEXCEL_ADDSTATTYPE_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateStatTypeVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FAVORLEVELREWARDEXCEL_CREATESTATTYPEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartStatTypeVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FAVORLEVELREWARDEXCEL_STARTSTATTYPEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStatValue(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FAVORLEVELREWARDEXCEL_ADDSTATVALUE_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateStatValueVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FAVORLEVELREWARDEXCEL_CREATESTATVALUEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartStatValueVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FAVORLEVELREWARDEXCEL_STARTSTATVALUEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndFavorLevelRewardExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FAVORLEVELREWARDEXCEL_ENDFAVORLEVELREWARDEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishFavorLevelRewardExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FAVORLEVELREWARDEXCEL_FINISHFAVORLEVELREWARDEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedFavorLevelRewardExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FAVORLEVELREWARDEXCEL_FINISHSIZEPREFIXEDFAVORLEVELREWARDEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

