#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class CharacterPotentialRewardExcel; }
namespace FlatData { class PotentialStatBonusRateType; }
namespace FlatData { class ParcelType; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }

#define MX_DATA_EXCEL_CHARACTERPOTENTIALREWARDEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1A302B0)
#define MX_DATA_EXCEL_CHARACTERPOTENTIALREWARDEXCEL_GETROOTASCHARACTERPOTENTIALREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1A302C0)
#define MX_DATA_EXCEL_CHARACTERPOTENTIALREWARDEXCEL_GETROOTASCHARACTERPOTENTIALREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1A30320)
#define MX_DATA_EXCEL_CHARACTERPOTENTIALREWARDEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1A303B0)
#define MX_DATA_EXCEL_CHARACTERPOTENTIALREWARDEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1A30380)
#define MX_DATA_EXCEL_CHARACTERPOTENTIALREWARDEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0x1A303D0)
#define MX_DATA_EXCEL_CHARACTERPOTENTIALREWARDEXCEL_REQUIREPOTENTIALSTATTYPE_OFFSET UNITYSDK_OFFSET(0x1A30420)
#define MX_DATA_EXCEL_CHARACTERPOTENTIALREWARDEXCEL_GET_REQUIREPOTENTIALSTATTYPELENGTH_OFFSET UNITYSDK_OFFSET(0x1A30480)
#define MX_DATA_EXCEL_CHARACTERPOTENTIALREWARDEXCEL_GETREQUIREPOTENTIALSTATTYPEBYTES_OFFSET UNITYSDK_OFFSET(0x1A304C0)
#define MX_DATA_EXCEL_CHARACTERPOTENTIALREWARDEXCEL_REQUIREPOTENTIALSTATLEVEL_OFFSET UNITYSDK_OFFSET(0x1A304E0)
#define MX_DATA_EXCEL_CHARACTERPOTENTIALREWARDEXCEL_GET_REQUIREPOTENTIALSTATLEVELLENGTH_OFFSET UNITYSDK_OFFSET(0x1A30540)
#define MX_DATA_EXCEL_CHARACTERPOTENTIALREWARDEXCEL_GETREQUIREPOTENTIALSTATLEVELBYTES_OFFSET UNITYSDK_OFFSET(0x1A30580)
#define MX_DATA_EXCEL_CHARACTERPOTENTIALREWARDEXCEL_GET_REWARDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1A305A0)
#define MX_DATA_EXCEL_CHARACTERPOTENTIALREWARDEXCEL_GET_REWARDID_OFFSET UNITYSDK_OFFSET(0x1A305F0)
#define MX_DATA_EXCEL_CHARACTERPOTENTIALREWARDEXCEL_GET_REWARDAMOUNT_OFFSET UNITYSDK_OFFSET(0x1A30640)
#define MX_DATA_EXCEL_CHARACTERPOTENTIALREWARDEXCEL_CREATECHARACTERPOTENTIALREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1A30690)
#define MX_DATA_EXCEL_CHARACTERPOTENTIALREWARDEXCEL_STARTCHARACTERPOTENTIALREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1A30930)
#define MX_DATA_EXCEL_CHARACTERPOTENTIALREWARDEXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0x1A307F0)
#define MX_DATA_EXCEL_CHARACTERPOTENTIALREWARDEXCEL_ADDREQUIREPOTENTIALSTATTYPE_OFFSET UNITYSDK_OFFSET(0x1A308B0)
#define MX_DATA_EXCEL_CHARACTERPOTENTIALREWARDEXCEL_CREATEREQUIREPOTENTIALSTATTYPEVECTOR_OFFSET UNITYSDK_OFFSET(0x1A30950)
#define MX_DATA_EXCEL_CHARACTERPOTENTIALREWARDEXCEL_STARTREQUIREPOTENTIALSTATTYPEVECTOR_OFFSET UNITYSDK_OFFSET(0x1A309E0)
#define MX_DATA_EXCEL_CHARACTERPOTENTIALREWARDEXCEL_ADDREQUIREPOTENTIALSTATLEVEL_OFFSET UNITYSDK_OFFSET(0x1A30880)
#define MX_DATA_EXCEL_CHARACTERPOTENTIALREWARDEXCEL_CREATEREQUIREPOTENTIALSTATLEVELVECTOR_OFFSET UNITYSDK_OFFSET(0x1A30A20)
#define MX_DATA_EXCEL_CHARACTERPOTENTIALREWARDEXCEL_STARTREQUIREPOTENTIALSTATLEVELVECTOR_OFFSET UNITYSDK_OFFSET(0x1A30AB0)
#define MX_DATA_EXCEL_CHARACTERPOTENTIALREWARDEXCEL_ADDREWARDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1A30850)
#define MX_DATA_EXCEL_CHARACTERPOTENTIALREWARDEXCEL_ADDREWARDID_OFFSET UNITYSDK_OFFSET(0x1A307C0)
#define MX_DATA_EXCEL_CHARACTERPOTENTIALREWARDEXCEL_ADDREWARDAMOUNT_OFFSET UNITYSDK_OFFSET(0x1A30820)
#define MX_DATA_EXCEL_CHARACTERPOTENTIALREWARDEXCEL_ENDCHARACTERPOTENTIALREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1A308E0)
#define MX_DATA_EXCEL_CHARACTERPOTENTIALREWARDEXCEL_FINISHCHARACTERPOTENTIALREWARDEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1A30AF0)
#define MX_DATA_EXCEL_CHARACTERPOTENTIALREWARDEXCEL_FINISHSIZEPREFIXEDCHARACTERPOTENTIALREWARDEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1A30B10)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int CharacterPotentialRewardExcel_TypeDefinitionIndex = 17058;

	class CharacterPotentialRewardExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERPOTENTIALREWARDEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::CharacterPotentialRewardExcel* GetRootAsCharacterPotentialRewardExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::CharacterPotentialRewardExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERPOTENTIALREWARDEXCEL_GETROOTASCHARACTERPOTENTIALREWARDEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::CharacterPotentialRewardExcel* GetRootAsCharacterPotentialRewardExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::CharacterPotentialRewardExcel* arg)
		{
			return (return (::MX::Data::Excel::CharacterPotentialRewardExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::CharacterPotentialRewardExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERPOTENTIALREWARDEXCEL_GETROOTASCHARACTERPOTENTIALREWARDEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERPOTENTIALREWARDEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::CharacterPotentialRewardExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::CharacterPotentialRewardExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERPOTENTIALREWARDEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERPOTENTIALREWARDEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::FlatData::PotentialStatBonusRateType* RequirePotentialStatType(::System::Int32 arg)
		{
			return (return (::FlatData::PotentialStatBonusRateType*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERPOTENTIALREWARDEXCEL_REQUIREPOTENTIALSTATTYPE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_RequirePotentialStatTypeLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERPOTENTIALREWARDEXCEL_GET_REQUIREPOTENTIALSTATTYPELENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetRequirePotentialStatTypeBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERPOTENTIALREWARDEXCEL_GETREQUIREPOTENTIALSTATTYPEBYTES_OFFSET))(nullptr);
		}

		::System::Int64 RequirePotentialStatLevel(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERPOTENTIALREWARDEXCEL_REQUIREPOTENTIALSTATLEVEL_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_RequirePotentialStatLevelLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERPOTENTIALREWARDEXCEL_GET_REQUIREPOTENTIALSTATLEVELLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetRequirePotentialStatLevelBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERPOTENTIALREWARDEXCEL_GETREQUIREPOTENTIALSTATLEVELBYTES_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* get_RewardParcelType()
		{
			return (return (::FlatData::ParcelType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERPOTENTIALREWARDEXCEL_GET_REWARDPARCELTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_RewardId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERPOTENTIALREWARDEXCEL_GET_REWARDID_OFFSET))(nullptr);
		}

		::System::Int32 get_RewardAmount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERPOTENTIALREWARDEXCEL_GET_REWARDAMOUNT_OFFSET))(nullptr);
		}

		Il2CppObject* CreateCharacterPotentialRewardExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatData::ParcelType* arg, ::System::Int64 arg, ::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatData::ParcelType*, ::System::Int64, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERPOTENTIALREWARDEXCEL_CREATECHARACTERPOTENTIALREWARDEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartCharacterPotentialRewardExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERPOTENTIALREWARDEXCEL_STARTCHARACTERPOTENTIALREWARDEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERPOTENTIALREWARDEXCEL_ADDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRequirePotentialStatType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERPOTENTIALREWARDEXCEL_ADDREQUIREPOTENTIALSTATTYPE_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateRequirePotentialStatTypeVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERPOTENTIALREWARDEXCEL_CREATEREQUIREPOTENTIALSTATTYPEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartRequirePotentialStatTypeVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERPOTENTIALREWARDEXCEL_STARTREQUIREPOTENTIALSTATTYPEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRequirePotentialStatLevel(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERPOTENTIALREWARDEXCEL_ADDREQUIREPOTENTIALSTATLEVEL_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateRequirePotentialStatLevelVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERPOTENTIALREWARDEXCEL_CREATEREQUIREPOTENTIALSTATLEVELVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartRequirePotentialStatLevelVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERPOTENTIALREWARDEXCEL_STARTREQUIREPOTENTIALSTATLEVELVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardParcelType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ParcelType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ParcelType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERPOTENTIALREWARDEXCEL_ADDREWARDPARCELTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERPOTENTIALREWARDEXCEL_ADDREWARDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardAmount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERPOTENTIALREWARDEXCEL_ADDREWARDAMOUNT_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndCharacterPotentialRewardExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERPOTENTIALREWARDEXCEL_ENDCHARACTERPOTENTIALREWARDEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishCharacterPotentialRewardExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERPOTENTIALREWARDEXCEL_FINISHCHARACTERPOTENTIALREWARDEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedCharacterPotentialRewardExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERPOTENTIALREWARDEXCEL_FINISHSIZEPREFIXEDCHARACTERPOTENTIALREWARDEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

