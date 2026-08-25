#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class MinigameTBGEncounterOptionExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }

#define MX_DATA_EXCEL_MINIGAMETBGENCOUNTEROPTIONEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1C038C0)
#define MX_DATA_EXCEL_MINIGAMETBGENCOUNTEROPTIONEXCEL_GETROOTASMINIGAMETBGENCOUNTEROPTIONEXCEL_OFFSET UNITYSDK_OFFSET(0x1C038D0)
#define MX_DATA_EXCEL_MINIGAMETBGENCOUNTEROPTIONEXCEL_GETROOTASMINIGAMETBGENCOUNTEROPTIONEXCEL_OFFSET UNITYSDK_OFFSET(0x1C03930)
#define MX_DATA_EXCEL_MINIGAMETBGENCOUNTEROPTIONEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1C039C0)
#define MX_DATA_EXCEL_MINIGAMETBGENCOUNTEROPTIONEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1C03990)
#define MX_DATA_EXCEL_MINIGAMETBGENCOUNTEROPTIONEXCEL_GET_OPTIONGROUPID_OFFSET UNITYSDK_OFFSET(0x1C039E0)
#define MX_DATA_EXCEL_MINIGAMETBGENCOUNTEROPTIONEXCEL_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x1C03A30)
#define MX_DATA_EXCEL_MINIGAMETBGENCOUNTEROPTIONEXCEL_GET_SLOTINDEX_OFFSET UNITYSDK_OFFSET(0x1C03A80)
#define MX_DATA_EXCEL_MINIGAMETBGENCOUNTEROPTIONEXCEL_GET_OPTIONTITLELOCALIZE_OFFSET UNITYSDK_OFFSET(0x1C03AD0)
#define MX_DATA_EXCEL_MINIGAMETBGENCOUNTEROPTIONEXCEL_GETOPTIONTITLELOCALIZEBYTES_OFFSET UNITYSDK_OFFSET(0x1C03B10)
#define MX_DATA_EXCEL_MINIGAMETBGENCOUNTEROPTIONEXCEL_GET_OPTIONSUCCESSLOCALIZE_OFFSET UNITYSDK_OFFSET(0x1C03B30)
#define MX_DATA_EXCEL_MINIGAMETBGENCOUNTEROPTIONEXCEL_GETOPTIONSUCCESSLOCALIZEBYTES_OFFSET UNITYSDK_OFFSET(0x1C03B70)
#define MX_DATA_EXCEL_MINIGAMETBGENCOUNTEROPTIONEXCEL_GET_OPTIONSUCCESSREWARDGROUPID_OFFSET UNITYSDK_OFFSET(0x1C03B90)
#define MX_DATA_EXCEL_MINIGAMETBGENCOUNTEROPTIONEXCEL_GET_OPTIONSUCCESSORHIGHERDICECOUNT_OFFSET UNITYSDK_OFFSET(0x1C03BE0)
#define MX_DATA_EXCEL_MINIGAMETBGENCOUNTEROPTIONEXCEL_GET_OPTIONGREATSUCCESSORHIGHERDICECOUNT_OFFSET UNITYSDK_OFFSET(0x1C03C30)
#define MX_DATA_EXCEL_MINIGAMETBGENCOUNTEROPTIONEXCEL_GET_OPTIONFAILLOCALIZE_OFFSET UNITYSDK_OFFSET(0x1C03C80)
#define MX_DATA_EXCEL_MINIGAMETBGENCOUNTEROPTIONEXCEL_GETOPTIONFAILLOCALIZEBYTES_OFFSET UNITYSDK_OFFSET(0x1C03CC0)
#define MX_DATA_EXCEL_MINIGAMETBGENCOUNTEROPTIONEXCEL_GET_OPTIONFAILLESSDICECOUNT_OFFSET UNITYSDK_OFFSET(0x1C03CE0)
#define MX_DATA_EXCEL_MINIGAMETBGENCOUNTEROPTIONEXCEL_GET_RUNAWAYORHIGHERDICECOUNT_OFFSET UNITYSDK_OFFSET(0x1C03D30)
#define MX_DATA_EXCEL_MINIGAMETBGENCOUNTEROPTIONEXCEL_GET_REWARDHIDE_OFFSET UNITYSDK_OFFSET(0x1C03D80)
#define MX_DATA_EXCEL_MINIGAMETBGENCOUNTEROPTIONEXCEL_CREATEMINIGAMETBGENCOUNTEROPTIONEXCEL_OFFSET UNITYSDK_OFFSET(0x1C03DD0)
#define MX_DATA_EXCEL_MINIGAMETBGENCOUNTEROPTIONEXCEL_STARTMINIGAMETBGENCOUNTEROPTIONEXCEL_OFFSET UNITYSDK_OFFSET(0x1C04280)
#define MX_DATA_EXCEL_MINIGAMETBGENCOUNTEROPTIONEXCEL_ADDOPTIONGROUPID_OFFSET UNITYSDK_OFFSET(0x1C04050)
#define MX_DATA_EXCEL_MINIGAMETBGENCOUNTEROPTIONEXCEL_ADDUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1C04020)
#define MX_DATA_EXCEL_MINIGAMETBGENCOUNTEROPTIONEXCEL_ADDSLOTINDEX_OFFSET UNITYSDK_OFFSET(0x1C041D0)
#define MX_DATA_EXCEL_MINIGAMETBGENCOUNTEROPTIONEXCEL_ADDOPTIONTITLELOCALIZE_OFFSET UNITYSDK_OFFSET(0x1C041A0)
#define MX_DATA_EXCEL_MINIGAMETBGENCOUNTEROPTIONEXCEL_ADDOPTIONSUCCESSLOCALIZE_OFFSET UNITYSDK_OFFSET(0x1C04170)
#define MX_DATA_EXCEL_MINIGAMETBGENCOUNTEROPTIONEXCEL_ADDOPTIONSUCCESSREWARDGROUPID_OFFSET UNITYSDK_OFFSET(0x1C03FF0)
#define MX_DATA_EXCEL_MINIGAMETBGENCOUNTEROPTIONEXCEL_ADDOPTIONSUCCESSORHIGHERDICECOUNT_OFFSET UNITYSDK_OFFSET(0x1C04140)
#define MX_DATA_EXCEL_MINIGAMETBGENCOUNTEROPTIONEXCEL_ADDOPTIONGREATSUCCESSORHIGHERDICECOUNT_OFFSET UNITYSDK_OFFSET(0x1C04110)
#define MX_DATA_EXCEL_MINIGAMETBGENCOUNTEROPTIONEXCEL_ADDOPTIONFAILLOCALIZE_OFFSET UNITYSDK_OFFSET(0x1C040E0)
#define MX_DATA_EXCEL_MINIGAMETBGENCOUNTEROPTIONEXCEL_ADDOPTIONFAILLESSDICECOUNT_OFFSET UNITYSDK_OFFSET(0x1C040B0)
#define MX_DATA_EXCEL_MINIGAMETBGENCOUNTEROPTIONEXCEL_ADDRUNAWAYORHIGHERDICECOUNT_OFFSET UNITYSDK_OFFSET(0x1C04080)
#define MX_DATA_EXCEL_MINIGAMETBGENCOUNTEROPTIONEXCEL_ADDREWARDHIDE_OFFSET UNITYSDK_OFFSET(0x1C04200)
#define MX_DATA_EXCEL_MINIGAMETBGENCOUNTEROPTIONEXCEL_ENDMINIGAMETBGENCOUNTEROPTIONEXCEL_OFFSET UNITYSDK_OFFSET(0x1C04230)
#define MX_DATA_EXCEL_MINIGAMETBGENCOUNTEROPTIONEXCEL_FINISHMINIGAMETBGENCOUNTEROPTIONEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C042A0)
#define MX_DATA_EXCEL_MINIGAMETBGENCOUNTEROPTIONEXCEL_FINISHSIZEPREFIXEDMINIGAMETBGENCOUNTEROPTIONEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C042C0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int MinigameTBGEncounterOptionExcel_TypeDefinitionIndex = 18873;

	class MinigameTBGEncounterOptionExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGENCOUNTEROPTIONEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::MinigameTBGEncounterOptionExcel* GetRootAsMinigameTBGEncounterOptionExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::MinigameTBGEncounterOptionExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGENCOUNTEROPTIONEXCEL_GETROOTASMINIGAMETBGENCOUNTEROPTIONEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::MinigameTBGEncounterOptionExcel* GetRootAsMinigameTBGEncounterOptionExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::MinigameTBGEncounterOptionExcel* arg)
		{
			return (return (::MX::Data::Excel::MinigameTBGEncounterOptionExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::MinigameTBGEncounterOptionExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGENCOUNTEROPTIONEXCEL_GETROOTASMINIGAMETBGENCOUNTEROPTIONEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGENCOUNTEROPTIONEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::MinigameTBGEncounterOptionExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::MinigameTBGEncounterOptionExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGENCOUNTEROPTIONEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_OptionGroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGENCOUNTEROPTIONEXCEL_GET_OPTIONGROUPID_OFFSET))(nullptr);
		}

		::System::Int64 get_UniqueId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGENCOUNTEROPTIONEXCEL_GET_UNIQUEID_OFFSET))(nullptr);
		}

		::System::Int32 get_SlotIndex()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGENCOUNTEROPTIONEXCEL_GET_SLOTINDEX_OFFSET))(nullptr);
		}

		::System::String* get_OptionTitleLocalize()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGENCOUNTEROPTIONEXCEL_GET_OPTIONTITLELOCALIZE_OFFSET))(nullptr);
		}

		Il2CppObject* GetOptionTitleLocalizeBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGENCOUNTEROPTIONEXCEL_GETOPTIONTITLELOCALIZEBYTES_OFFSET))(nullptr);
		}

		::System::String* get_OptionSuccessLocalize()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGENCOUNTEROPTIONEXCEL_GET_OPTIONSUCCESSLOCALIZE_OFFSET))(nullptr);
		}

		Il2CppObject* GetOptionSuccessLocalizeBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGENCOUNTEROPTIONEXCEL_GETOPTIONSUCCESSLOCALIZEBYTES_OFFSET))(nullptr);
		}

		::System::Int64 get_OptionSuccessRewardGroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGENCOUNTEROPTIONEXCEL_GET_OPTIONSUCCESSREWARDGROUPID_OFFSET))(nullptr);
		}

		::System::Int32 get_OptionSuccessOrHigherDiceCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGENCOUNTEROPTIONEXCEL_GET_OPTIONSUCCESSORHIGHERDICECOUNT_OFFSET))(nullptr);
		}

		::System::Int32 get_OptionGreatSuccessOrHigherDiceCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGENCOUNTEROPTIONEXCEL_GET_OPTIONGREATSUCCESSORHIGHERDICECOUNT_OFFSET))(nullptr);
		}

		::System::String* get_OptionFailLocalize()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGENCOUNTEROPTIONEXCEL_GET_OPTIONFAILLOCALIZE_OFFSET))(nullptr);
		}

		Il2CppObject* GetOptionFailLocalizeBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGENCOUNTEROPTIONEXCEL_GETOPTIONFAILLOCALIZEBYTES_OFFSET))(nullptr);
		}

		::System::Int32 get_OptionFailLessDiceCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGENCOUNTEROPTIONEXCEL_GET_OPTIONFAILLESSDICECOUNT_OFFSET))(nullptr);
		}

		::System::Int32 get_RunawayOrHigherDiceCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGENCOUNTEROPTIONEXCEL_GET_RUNAWAYORHIGHERDICECOUNT_OFFSET))(nullptr);
		}

		::System::Boolean get_RewardHide()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGENCOUNTEROPTIONEXCEL_GET_REWARDHIDE_OFFSET))(nullptr);
		}

		Il2CppObject* CreateMinigameTBGEncounterOptionExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int32 arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::System::Int64 arg, ::System::Int32 arg, ::System::Int32 arg, ::FlatBuffers::StringOffset* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int64, ::System::Int32, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::System::Int64, ::System::Int32, ::System::Int32, ::FlatBuffers::StringOffset*, ::System::Int32, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGENCOUNTEROPTIONEXCEL_CREATEMINIGAMETBGENCOUNTEROPTIONEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartMinigameTBGEncounterOptionExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGENCOUNTEROPTIONEXCEL_STARTMINIGAMETBGENCOUNTEROPTIONEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddOptionGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGENCOUNTEROPTIONEXCEL_ADDOPTIONGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddUniqueId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGENCOUNTEROPTIONEXCEL_ADDUNIQUEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddSlotIndex(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGENCOUNTEROPTIONEXCEL_ADDSLOTINDEX_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddOptionTitleLocalize(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGENCOUNTEROPTIONEXCEL_ADDOPTIONTITLELOCALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddOptionSuccessLocalize(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGENCOUNTEROPTIONEXCEL_ADDOPTIONSUCCESSLOCALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddOptionSuccessRewardGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGENCOUNTEROPTIONEXCEL_ADDOPTIONSUCCESSREWARDGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddOptionSuccessOrHigherDiceCount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGENCOUNTEROPTIONEXCEL_ADDOPTIONSUCCESSORHIGHERDICECOUNT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddOptionGreatSuccessOrHigherDiceCount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGENCOUNTEROPTIONEXCEL_ADDOPTIONGREATSUCCESSORHIGHERDICECOUNT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddOptionFailLocalize(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGENCOUNTEROPTIONEXCEL_ADDOPTIONFAILLOCALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddOptionFailLessDiceCount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGENCOUNTEROPTIONEXCEL_ADDOPTIONFAILLESSDICECOUNT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRunawayOrHigherDiceCount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGENCOUNTEROPTIONEXCEL_ADDRUNAWAYORHIGHERDICECOUNT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardHide(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGENCOUNTEROPTIONEXCEL_ADDREWARDHIDE_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndMinigameTBGEncounterOptionExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGENCOUNTEROPTIONEXCEL_ENDMINIGAMETBGENCOUNTEROPTIONEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishMinigameTBGEncounterOptionExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGENCOUNTEROPTIONEXCEL_FINISHMINIGAMETBGENCOUNTEROPTIONEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedMinigameTBGEncounterOptionExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGENCOUNTEROPTIONEXCEL_FINISHSIZEPREFIXEDMINIGAMETBGENCOUNTEROPTIONEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

