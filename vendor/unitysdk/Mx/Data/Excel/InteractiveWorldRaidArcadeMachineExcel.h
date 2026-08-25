#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class InteractiveWorldRaidArcadeMachineExcel; }
namespace FlatData { class EventContentType; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }

#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDARCADEMACHINEEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1B50DE0)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDARCADEMACHINEEXCEL_GETROOTASINTERACTIVEWORLDRAIDARCADEMACHINEEXCEL_OFFSET UNITYSDK_OFFSET(0x1B50DF0)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDARCADEMACHINEEXCEL_GETROOTASINTERACTIVEWORLDRAIDARCADEMACHINEEXCEL_OFFSET UNITYSDK_OFFSET(0x1B50E50)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDARCADEMACHINEEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1B50EE0)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDARCADEMACHINEEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1B50EB0)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDARCADEMACHINEEXCEL_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1B50F00)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDARCADEMACHINEEXCEL_MINIGAMETYPE_OFFSET UNITYSDK_OFFSET(0x1B50F50)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDARCADEMACHINEEXCEL_GET_MINIGAMETYPELENGTH_OFFSET UNITYSDK_OFFSET(0x1B50FB0)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDARCADEMACHINEEXCEL_GETMINIGAMETYPEBYTES_OFFSET UNITYSDK_OFFSET(0x1B50FF0)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDARCADEMACHINEEXCEL_MINIGAMECOSTITEMID_OFFSET UNITYSDK_OFFSET(0x1B51010)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDARCADEMACHINEEXCEL_GET_MINIGAMECOSTITEMIDLENGTH_OFFSET UNITYSDK_OFFSET(0x1B51070)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDARCADEMACHINEEXCEL_GETMINIGAMECOSTITEMIDBYTES_OFFSET UNITYSDK_OFFSET(0x1B510B0)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDARCADEMACHINEEXCEL_MINIGAMECOSTITEMAMOUNT_OFFSET UNITYSDK_OFFSET(0x1B510D0)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDARCADEMACHINEEXCEL_GET_MINIGAMECOSTITEMAMOUNTLENGTH_OFFSET UNITYSDK_OFFSET(0x1B51130)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDARCADEMACHINEEXCEL_GETMINIGAMECOSTITEMAMOUNTBYTES_OFFSET UNITYSDK_OFFSET(0x1B51170)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDARCADEMACHINEEXCEL_MINIGAMESOFTLIMITITEMID_OFFSET UNITYSDK_OFFSET(0x1B51190)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDARCADEMACHINEEXCEL_GET_MINIGAMESOFTLIMITITEMIDLENGTH_OFFSET UNITYSDK_OFFSET(0x1B511E0)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDARCADEMACHINEEXCEL_MINIGAMESOFTLIMITITEMAMOUNT_OFFSET UNITYSDK_OFFSET(0x1B51220)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDARCADEMACHINEEXCEL_GET_MINIGAMESOFTLIMITITEMAMOUNTLENGTH_OFFSET UNITYSDK_OFFSET(0x1B51270)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDARCADEMACHINEEXCEL_MINIGAMEIMAGE_OFFSET UNITYSDK_OFFSET(0x1B512B0)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDARCADEMACHINEEXCEL_GET_MINIGAMEIMAGELENGTH_OFFSET UNITYSDK_OFFSET(0x1B51300)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDARCADEMACHINEEXCEL_LOCALIZETITLE_OFFSET UNITYSDK_OFFSET(0x1B51340)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDARCADEMACHINEEXCEL_GET_LOCALIZETITLELENGTH_OFFSET UNITYSDK_OFFSET(0x1B513A0)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDARCADEMACHINEEXCEL_GETLOCALIZETITLEBYTES_OFFSET UNITYSDK_OFFSET(0x1B513E0)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDARCADEMACHINEEXCEL_LOCALIZEDESC_OFFSET UNITYSDK_OFFSET(0x1B51400)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDARCADEMACHINEEXCEL_GET_LOCALIZEDESCLENGTH_OFFSET UNITYSDK_OFFSET(0x1B51460)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDARCADEMACHINEEXCEL_GETLOCALIZEDESCBYTES_OFFSET UNITYSDK_OFFSET(0x1B514A0)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDARCADEMACHINEEXCEL_CREATEINTERACTIVEWORLDRAIDARCADEMACHINEEXCEL_OFFSET UNITYSDK_OFFSET(0x1B514C0)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDARCADEMACHINEEXCEL_STARTINTERACTIVEWORLDRAIDARCADEMACHINEEXCEL_OFFSET UNITYSDK_OFFSET(0x1B51860)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDARCADEMACHINEEXCEL_ADDEVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1B51660)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDARCADEMACHINEEXCEL_ADDMINIGAMETYPE_OFFSET UNITYSDK_OFFSET(0x1B517E0)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDARCADEMACHINEEXCEL_CREATEMINIGAMETYPEVECTOR_OFFSET UNITYSDK_OFFSET(0x1B51880)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDARCADEMACHINEEXCEL_STARTMINIGAMETYPEVECTOR_OFFSET UNITYSDK_OFFSET(0x1B51910)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDARCADEMACHINEEXCEL_ADDMINIGAMECOSTITEMID_OFFSET UNITYSDK_OFFSET(0x1B517B0)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDARCADEMACHINEEXCEL_CREATEMINIGAMECOSTITEMIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1B51950)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDARCADEMACHINEEXCEL_STARTMINIGAMECOSTITEMIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1B519E0)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDARCADEMACHINEEXCEL_ADDMINIGAMECOSTITEMAMOUNT_OFFSET UNITYSDK_OFFSET(0x1B51780)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDARCADEMACHINEEXCEL_CREATEMINIGAMECOSTITEMAMOUNTVECTOR_OFFSET UNITYSDK_OFFSET(0x1B51A20)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDARCADEMACHINEEXCEL_STARTMINIGAMECOSTITEMAMOUNTVECTOR_OFFSET UNITYSDK_OFFSET(0x1B51AB0)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDARCADEMACHINEEXCEL_ADDMINIGAMESOFTLIMITITEMID_OFFSET UNITYSDK_OFFSET(0x1B51750)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDARCADEMACHINEEXCEL_CREATEMINIGAMESOFTLIMITITEMIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1B51AF0)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDARCADEMACHINEEXCEL_STARTMINIGAMESOFTLIMITITEMIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1B51B80)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDARCADEMACHINEEXCEL_ADDMINIGAMESOFTLIMITITEMAMOUNT_OFFSET UNITYSDK_OFFSET(0x1B51720)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDARCADEMACHINEEXCEL_CREATEMINIGAMESOFTLIMITITEMAMOUNTVECTOR_OFFSET UNITYSDK_OFFSET(0x1B51BC0)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDARCADEMACHINEEXCEL_STARTMINIGAMESOFTLIMITITEMAMOUNTVECTOR_OFFSET UNITYSDK_OFFSET(0x1B51C50)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDARCADEMACHINEEXCEL_ADDMINIGAMEIMAGE_OFFSET UNITYSDK_OFFSET(0x1B516F0)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDARCADEMACHINEEXCEL_CREATEMINIGAMEIMAGEVECTOR_OFFSET UNITYSDK_OFFSET(0x1B51C90)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDARCADEMACHINEEXCEL_STARTMINIGAMEIMAGEVECTOR_OFFSET UNITYSDK_OFFSET(0x1B51D20)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDARCADEMACHINEEXCEL_ADDLOCALIZETITLE_OFFSET UNITYSDK_OFFSET(0x1B516C0)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDARCADEMACHINEEXCEL_CREATELOCALIZETITLEVECTOR_OFFSET UNITYSDK_OFFSET(0x1B51D60)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDARCADEMACHINEEXCEL_STARTLOCALIZETITLEVECTOR_OFFSET UNITYSDK_OFFSET(0x1B51DF0)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDARCADEMACHINEEXCEL_ADDLOCALIZEDESC_OFFSET UNITYSDK_OFFSET(0x1B51690)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDARCADEMACHINEEXCEL_CREATELOCALIZEDESCVECTOR_OFFSET UNITYSDK_OFFSET(0x1B51E30)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDARCADEMACHINEEXCEL_STARTLOCALIZEDESCVECTOR_OFFSET UNITYSDK_OFFSET(0x1B51EC0)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDARCADEMACHINEEXCEL_ENDINTERACTIVEWORLDRAIDARCADEMACHINEEXCEL_OFFSET UNITYSDK_OFFSET(0x1B51810)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDARCADEMACHINEEXCEL_FINISHINTERACTIVEWORLDRAIDARCADEMACHINEEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1B51F00)
#define MX_DATA_EXCEL_INTERACTIVEWORLDRAIDARCADEMACHINEEXCEL_FINISHSIZEPREFIXEDINTERACTIVEWORLDRAIDARCADEMACHINEEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1B51F20)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int InteractiveWorldRaidArcadeMachineExcel_TypeDefinitionIndex = 18198;

	class InteractiveWorldRaidArcadeMachineExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDARCADEMACHINEEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::InteractiveWorldRaidArcadeMachineExcel* GetRootAsInteractiveWorldRaidArcadeMachineExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::InteractiveWorldRaidArcadeMachineExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDARCADEMACHINEEXCEL_GETROOTASINTERACTIVEWORLDRAIDARCADEMACHINEEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::InteractiveWorldRaidArcadeMachineExcel* GetRootAsInteractiveWorldRaidArcadeMachineExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::InteractiveWorldRaidArcadeMachineExcel* arg)
		{
			return (return (::MX::Data::Excel::InteractiveWorldRaidArcadeMachineExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::InteractiveWorldRaidArcadeMachineExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDARCADEMACHINEEXCEL_GETROOTASINTERACTIVEWORLDRAIDARCADEMACHINEEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDARCADEMACHINEEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::InteractiveWorldRaidArcadeMachineExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::InteractiveWorldRaidArcadeMachineExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDARCADEMACHINEEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDARCADEMACHINEEXCEL_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::FlatData::EventContentType* MiniGameType(::System::Int32 arg)
		{
			return (return (::FlatData::EventContentType*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDARCADEMACHINEEXCEL_MINIGAMETYPE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_MiniGameTypeLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDARCADEMACHINEEXCEL_GET_MINIGAMETYPELENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetMiniGameTypeBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDARCADEMACHINEEXCEL_GETMINIGAMETYPEBYTES_OFFSET))(nullptr);
		}

		::System::Int64 MiniGameCostItemId(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDARCADEMACHINEEXCEL_MINIGAMECOSTITEMID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_MiniGameCostItemIdLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDARCADEMACHINEEXCEL_GET_MINIGAMECOSTITEMIDLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetMiniGameCostItemIdBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDARCADEMACHINEEXCEL_GETMINIGAMECOSTITEMIDBYTES_OFFSET))(nullptr);
		}

		::System::Int64 MiniGameCostItemAmount(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDARCADEMACHINEEXCEL_MINIGAMECOSTITEMAMOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_MiniGameCostItemAmountLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDARCADEMACHINEEXCEL_GET_MINIGAMECOSTITEMAMOUNTLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetMiniGameCostItemAmountBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDARCADEMACHINEEXCEL_GETMINIGAMECOSTITEMAMOUNTBYTES_OFFSET))(nullptr);
		}

		::System::String* MiniGameSoftLimitItemId(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDARCADEMACHINEEXCEL_MINIGAMESOFTLIMITITEMID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_MiniGameSoftLimitItemIdLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDARCADEMACHINEEXCEL_GET_MINIGAMESOFTLIMITITEMIDLENGTH_OFFSET))(nullptr);
		}

		::System::String* MiniGameSoftLimitItemAmount(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDARCADEMACHINEEXCEL_MINIGAMESOFTLIMITITEMAMOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_MiniGameSoftLimitItemAmountLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDARCADEMACHINEEXCEL_GET_MINIGAMESOFTLIMITITEMAMOUNTLENGTH_OFFSET))(nullptr);
		}

		::System::String* MiniGameImage(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDARCADEMACHINEEXCEL_MINIGAMEIMAGE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_MiniGameImageLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDARCADEMACHINEEXCEL_GET_MINIGAMEIMAGELENGTH_OFFSET))(nullptr);
		}

		::System::UInt32 LocalizeTitle(::System::Int32 arg)
		{
			return (return (::System::UInt32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDARCADEMACHINEEXCEL_LOCALIZETITLE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_LocalizeTitleLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDARCADEMACHINEEXCEL_GET_LOCALIZETITLELENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetLocalizeTitleBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDARCADEMACHINEEXCEL_GETLOCALIZETITLEBYTES_OFFSET))(nullptr);
		}

		::System::UInt32 LocalizeDesc(::System::Int32 arg)
		{
			return (return (::System::UInt32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDARCADEMACHINEEXCEL_LOCALIZEDESC_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_LocalizeDescLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDARCADEMACHINEEXCEL_GET_LOCALIZEDESCLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetLocalizeDescBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDARCADEMACHINEEXCEL_GETLOCALIZEDESCBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateInteractiveWorldRaidArcadeMachineExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDARCADEMACHINEEXCEL_CREATEINTERACTIVEWORLDRAIDARCADEMACHINEEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartInteractiveWorldRaidArcadeMachineExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDARCADEMACHINEEXCEL_STARTINTERACTIVEWORLDRAIDARCADEMACHINEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddEventContentId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDARCADEMACHINEEXCEL_ADDEVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddMiniGameType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDARCADEMACHINEEXCEL_ADDMINIGAMETYPE_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateMiniGameTypeVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDARCADEMACHINEEXCEL_CREATEMINIGAMETYPEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartMiniGameTypeVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDARCADEMACHINEEXCEL_STARTMINIGAMETYPEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddMiniGameCostItemId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDARCADEMACHINEEXCEL_ADDMINIGAMECOSTITEMID_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateMiniGameCostItemIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDARCADEMACHINEEXCEL_CREATEMINIGAMECOSTITEMIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartMiniGameCostItemIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDARCADEMACHINEEXCEL_STARTMINIGAMECOSTITEMIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddMiniGameCostItemAmount(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDARCADEMACHINEEXCEL_ADDMINIGAMECOSTITEMAMOUNT_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateMiniGameCostItemAmountVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDARCADEMACHINEEXCEL_CREATEMINIGAMECOSTITEMAMOUNTVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartMiniGameCostItemAmountVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDARCADEMACHINEEXCEL_STARTMINIGAMECOSTITEMAMOUNTVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddMiniGameSoftLimitItemId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDARCADEMACHINEEXCEL_ADDMINIGAMESOFTLIMITITEMID_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateMiniGameSoftLimitItemIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDARCADEMACHINEEXCEL_CREATEMINIGAMESOFTLIMITITEMIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartMiniGameSoftLimitItemIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDARCADEMACHINEEXCEL_STARTMINIGAMESOFTLIMITITEMIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddMiniGameSoftLimitItemAmount(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDARCADEMACHINEEXCEL_ADDMINIGAMESOFTLIMITITEMAMOUNT_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateMiniGameSoftLimitItemAmountVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDARCADEMACHINEEXCEL_CREATEMINIGAMESOFTLIMITITEMAMOUNTVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartMiniGameSoftLimitItemAmountVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDARCADEMACHINEEXCEL_STARTMINIGAMESOFTLIMITITEMAMOUNTVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddMiniGameImage(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDARCADEMACHINEEXCEL_ADDMINIGAMEIMAGE_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateMiniGameImageVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDARCADEMACHINEEXCEL_CREATEMINIGAMEIMAGEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartMiniGameImageVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDARCADEMACHINEEXCEL_STARTMINIGAMEIMAGEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLocalizeTitle(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDARCADEMACHINEEXCEL_ADDLOCALIZETITLE_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateLocalizeTitleVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDARCADEMACHINEEXCEL_CREATELOCALIZETITLEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartLocalizeTitleVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDARCADEMACHINEEXCEL_STARTLOCALIZETITLEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLocalizeDesc(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDARCADEMACHINEEXCEL_ADDLOCALIZEDESC_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateLocalizeDescVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDARCADEMACHINEEXCEL_CREATELOCALIZEDESCVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartLocalizeDescVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDARCADEMACHINEEXCEL_STARTLOCALIZEDESCVECTOR_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndInteractiveWorldRaidArcadeMachineExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDARCADEMACHINEEXCEL_ENDINTERACTIVEWORLDRAIDARCADEMACHINEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishInteractiveWorldRaidArcadeMachineExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDARCADEMACHINEEXCEL_FINISHINTERACTIVEWORLDRAIDARCADEMACHINEEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedInteractiveWorldRaidArcadeMachineExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_INTERACTIVEWORLDRAIDARCADEMACHINEEXCEL_FINISHSIZEPREFIXEDINTERACTIVEWORLDRAIDARCADEMACHINEEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

