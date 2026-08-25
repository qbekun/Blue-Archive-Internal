#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class MinigameTBGItemExcel; }
namespace FlatData { class TBGItemType; }
namespace FlatData { class TBGItemEffectType; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }

#define MX_DATA_EXCEL_MINIGAMETBGITEMEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1C06450)
#define MX_DATA_EXCEL_MINIGAMETBGITEMEXCEL_GETROOTASMINIGAMETBGITEMEXCEL_OFFSET UNITYSDK_OFFSET(0x1C06460)
#define MX_DATA_EXCEL_MINIGAMETBGITEMEXCEL_GETROOTASMINIGAMETBGITEMEXCEL_OFFSET UNITYSDK_OFFSET(0x1C064C0)
#define MX_DATA_EXCEL_MINIGAMETBGITEMEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1C06550)
#define MX_DATA_EXCEL_MINIGAMETBGITEMEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1C06520)
#define MX_DATA_EXCEL_MINIGAMETBGITEMEXCEL_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x1C06570)
#define MX_DATA_EXCEL_MINIGAMETBGITEMEXCEL_GET_ITEMTYPE_OFFSET UNITYSDK_OFFSET(0x1C065C0)
#define MX_DATA_EXCEL_MINIGAMETBGITEMEXCEL_GET_TBGITEMEFFECTTYPE_OFFSET UNITYSDK_OFFSET(0x1C06610)
#define MX_DATA_EXCEL_MINIGAMETBGITEMEXCEL_GET_ITEMPARAMETER_OFFSET UNITYSDK_OFFSET(0x1C06660)
#define MX_DATA_EXCEL_MINIGAMETBGITEMEXCEL_GET_LOCALIZEETCID_OFFSET UNITYSDK_OFFSET(0x1C066B0)
#define MX_DATA_EXCEL_MINIGAMETBGITEMEXCEL_GETLOCALIZEETCIDBYTES_OFFSET UNITYSDK_OFFSET(0x1C066F0)
#define MX_DATA_EXCEL_MINIGAMETBGITEMEXCEL_GET_ICON_OFFSET UNITYSDK_OFFSET(0x1C06710)
#define MX_DATA_EXCEL_MINIGAMETBGITEMEXCEL_GETICONBYTES_OFFSET UNITYSDK_OFFSET(0x1C06750)
#define MX_DATA_EXCEL_MINIGAMETBGITEMEXCEL_GET_BUFFICON_OFFSET UNITYSDK_OFFSET(0x1C06770)
#define MX_DATA_EXCEL_MINIGAMETBGITEMEXCEL_GETBUFFICONBYTES_OFFSET UNITYSDK_OFFSET(0x1C067B0)
#define MX_DATA_EXCEL_MINIGAMETBGITEMEXCEL_GET_ENCOUNTERCOUNT_OFFSET UNITYSDK_OFFSET(0x1C067D0)
#define MX_DATA_EXCEL_MINIGAMETBGITEMEXCEL_GET_DICEEFFECTANICLIP_OFFSET UNITYSDK_OFFSET(0x1C06820)
#define MX_DATA_EXCEL_MINIGAMETBGITEMEXCEL_GETDICEEFFECTANICLIPBYTES_OFFSET UNITYSDK_OFFSET(0x1C06860)
#define MX_DATA_EXCEL_MINIGAMETBGITEMEXCEL_GET_BUFFICONHUDVISIBLE_OFFSET UNITYSDK_OFFSET(0x1C06880)
#define MX_DATA_EXCEL_MINIGAMETBGITEMEXCEL_CREATEMINIGAMETBGITEMEXCEL_OFFSET UNITYSDK_OFFSET(0x1C068D0)
#define MX_DATA_EXCEL_MINIGAMETBGITEMEXCEL_STARTMINIGAMETBGITEMEXCEL_OFFSET UNITYSDK_OFFSET(0x1C06CD0)
#define MX_DATA_EXCEL_MINIGAMETBGITEMEXCEL_ADDUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1C06AA0)
#define MX_DATA_EXCEL_MINIGAMETBGITEMEXCEL_ADDITEMTYPE_OFFSET UNITYSDK_OFFSET(0x1C06C20)
#define MX_DATA_EXCEL_MINIGAMETBGITEMEXCEL_ADDTBGITEMEFFECTTYPE_OFFSET UNITYSDK_OFFSET(0x1C06BF0)
#define MX_DATA_EXCEL_MINIGAMETBGITEMEXCEL_ADDITEMPARAMETER_OFFSET UNITYSDK_OFFSET(0x1C06BC0)
#define MX_DATA_EXCEL_MINIGAMETBGITEMEXCEL_ADDLOCALIZEETCID_OFFSET UNITYSDK_OFFSET(0x1C06B90)
#define MX_DATA_EXCEL_MINIGAMETBGITEMEXCEL_ADDICON_OFFSET UNITYSDK_OFFSET(0x1C06B60)
#define MX_DATA_EXCEL_MINIGAMETBGITEMEXCEL_ADDBUFFICON_OFFSET UNITYSDK_OFFSET(0x1C06B30)
#define MX_DATA_EXCEL_MINIGAMETBGITEMEXCEL_ADDENCOUNTERCOUNT_OFFSET UNITYSDK_OFFSET(0x1C06B00)
#define MX_DATA_EXCEL_MINIGAMETBGITEMEXCEL_ADDDICEEFFECTANICLIP_OFFSET UNITYSDK_OFFSET(0x1C06AD0)
#define MX_DATA_EXCEL_MINIGAMETBGITEMEXCEL_ADDBUFFICONHUDVISIBLE_OFFSET UNITYSDK_OFFSET(0x1C06C50)
#define MX_DATA_EXCEL_MINIGAMETBGITEMEXCEL_ENDMINIGAMETBGITEMEXCEL_OFFSET UNITYSDK_OFFSET(0x1C06C80)
#define MX_DATA_EXCEL_MINIGAMETBGITEMEXCEL_FINISHMINIGAMETBGITEMEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C06CF0)
#define MX_DATA_EXCEL_MINIGAMETBGITEMEXCEL_FINISHSIZEPREFIXEDMINIGAMETBGITEMEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C06D10)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int MinigameTBGItemExcel_TypeDefinitionIndex = 18887;

	class MinigameTBGItemExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGITEMEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::MinigameTBGItemExcel* GetRootAsMinigameTBGItemExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::MinigameTBGItemExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGITEMEXCEL_GETROOTASMINIGAMETBGITEMEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::MinigameTBGItemExcel* GetRootAsMinigameTBGItemExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::MinigameTBGItemExcel* arg)
		{
			return (return (::MX::Data::Excel::MinigameTBGItemExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::MinigameTBGItemExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGITEMEXCEL_GETROOTASMINIGAMETBGITEMEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGITEMEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::MinigameTBGItemExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::MinigameTBGItemExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGITEMEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_UniqueId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGITEMEXCEL_GET_UNIQUEID_OFFSET))(nullptr);
		}

		::FlatData::TBGItemType* get_ItemType()
		{
			return (return (::FlatData::TBGItemType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGITEMEXCEL_GET_ITEMTYPE_OFFSET))(nullptr);
		}

		::FlatData::TBGItemEffectType* get_TBGItemEffectType()
		{
			return (return (::FlatData::TBGItemEffectType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGITEMEXCEL_GET_TBGITEMEFFECTTYPE_OFFSET))(nullptr);
		}

		::System::Int32 get_ItemParameter()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGITEMEXCEL_GET_ITEMPARAMETER_OFFSET))(nullptr);
		}

		::System::String* get_LocalizeETCId()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGITEMEXCEL_GET_LOCALIZEETCID_OFFSET))(nullptr);
		}

		Il2CppObject* GetLocalizeETCIdBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGITEMEXCEL_GETLOCALIZEETCIDBYTES_OFFSET))(nullptr);
		}

		::System::String* get_Icon()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGITEMEXCEL_GET_ICON_OFFSET))(nullptr);
		}

		Il2CppObject* GetIconBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGITEMEXCEL_GETICONBYTES_OFFSET))(nullptr);
		}

		::System::String* get_BuffIcon()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGITEMEXCEL_GET_BUFFICON_OFFSET))(nullptr);
		}

		Il2CppObject* GetBuffIconBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGITEMEXCEL_GETBUFFICONBYTES_OFFSET))(nullptr);
		}

		::System::Int32 get_EncounterCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGITEMEXCEL_GET_ENCOUNTERCOUNT_OFFSET))(nullptr);
		}

		::System::String* get_DiceEffectAniClip()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGITEMEXCEL_GET_DICEEFFECTANICLIP_OFFSET))(nullptr);
		}

		Il2CppObject* GetDiceEffectAniClipBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGITEMEXCEL_GETDICEEFFECTANICLIPBYTES_OFFSET))(nullptr);
		}

		::System::Boolean get_BuffIconHUDVisible()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGITEMEXCEL_GET_BUFFICONHUDVISIBLE_OFFSET))(nullptr);
		}

		Il2CppObject* CreateMinigameTBGItemExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::FlatData::TBGItemType* arg, ::FlatData::TBGItemEffectType* arg, ::System::Int32 arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::System::Int32 arg, ::FlatBuffers::StringOffset* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::FlatData::TBGItemType*, ::FlatData::TBGItemEffectType*, ::System::Int32, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::System::Int32, ::FlatBuffers::StringOffset*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGITEMEXCEL_CREATEMINIGAMETBGITEMEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartMinigameTBGItemExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGITEMEXCEL_STARTMINIGAMETBGITEMEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddUniqueId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGITEMEXCEL_ADDUNIQUEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddItemType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::TBGItemType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::TBGItemType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGITEMEXCEL_ADDITEMTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddTBGItemEffectType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::TBGItemEffectType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::TBGItemEffectType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGITEMEXCEL_ADDTBGITEMEFFECTTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddItemParameter(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGITEMEXCEL_ADDITEMPARAMETER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLocalizeETCId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGITEMEXCEL_ADDLOCALIZEETCID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddIcon(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGITEMEXCEL_ADDICON_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddBuffIcon(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGITEMEXCEL_ADDBUFFICON_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEncounterCount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGITEMEXCEL_ADDENCOUNTERCOUNT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDiceEffectAniClip(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGITEMEXCEL_ADDDICEEFFECTANICLIP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddBuffIconHUDVisible(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGITEMEXCEL_ADDBUFFICONHUDVISIBLE_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndMinigameTBGItemExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGITEMEXCEL_ENDMINIGAMETBGITEMEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishMinigameTBGItemExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGITEMEXCEL_FINISHMINIGAMETBGITEMEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedMinigameTBGItemExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGITEMEXCEL_FINISHSIZEPREFIXEDMINIGAMETBGITEMEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

