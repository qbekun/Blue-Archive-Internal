#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class CharacterVoiceExcel; }
namespace FlatData { class CVCollectionType; }
namespace FlatData { class Nation; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }
namespace FlatBuffers { class VectorOffset; }

#define MX_DATA_EXCEL_CHARACTERVOICEEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1A43C00)
#define MX_DATA_EXCEL_CHARACTERVOICEEXCEL_GETROOTASCHARACTERVOICEEXCEL_OFFSET UNITYSDK_OFFSET(0x1A43C10)
#define MX_DATA_EXCEL_CHARACTERVOICEEXCEL_GETROOTASCHARACTERVOICEEXCEL_OFFSET UNITYSDK_OFFSET(0x1A43C70)
#define MX_DATA_EXCEL_CHARACTERVOICEEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1A43D00)
#define MX_DATA_EXCEL_CHARACTERVOICEEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1A43CD0)
#define MX_DATA_EXCEL_CHARACTERVOICEEXCEL_GET_CHARACTERVOICEUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1A43D20)
#define MX_DATA_EXCEL_CHARACTERVOICEEXCEL_GET_CHARACTERVOICEGROUPID_OFFSET UNITYSDK_OFFSET(0x1A43D70)
#define MX_DATA_EXCEL_CHARACTERVOICEEXCEL_GET_VOICEHASH_OFFSET UNITYSDK_OFFSET(0x1A43DC0)
#define MX_DATA_EXCEL_CHARACTERVOICEEXCEL_GET_ONLYONE_OFFSET UNITYSDK_OFFSET(0x1A43E10)
#define MX_DATA_EXCEL_CHARACTERVOICEEXCEL_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x1A43E60)
#define MX_DATA_EXCEL_CHARACTERVOICEEXCEL_GET_DISPLAYORDER_OFFSET UNITYSDK_OFFSET(0x1A43EB0)
#define MX_DATA_EXCEL_CHARACTERVOICEEXCEL_GET_COLLECTIONVISIBLE_OFFSET UNITYSDK_OFFSET(0x1A43F00)
#define MX_DATA_EXCEL_CHARACTERVOICEEXCEL_GET_CVCOLLECTIONTYPE_OFFSET UNITYSDK_OFFSET(0x1A43F50)
#define MX_DATA_EXCEL_CHARACTERVOICEEXCEL_GET_UNLOCKFAVORRANK_OFFSET UNITYSDK_OFFSET(0x1A43FA0)
#define MX_DATA_EXCEL_CHARACTERVOICEEXCEL_GET_LOCALIZECVGROUP_OFFSET UNITYSDK_OFFSET(0x1A43FF0)
#define MX_DATA_EXCEL_CHARACTERVOICEEXCEL_GETLOCALIZECVGROUPBYTES_OFFSET UNITYSDK_OFFSET(0x1A44030)
#define MX_DATA_EXCEL_CHARACTERVOICEEXCEL_NATION_OFFSET UNITYSDK_OFFSET(0x1A44050)
#define MX_DATA_EXCEL_CHARACTERVOICEEXCEL_GET_NATIONLENGTH_OFFSET UNITYSDK_OFFSET(0x1A440B0)
#define MX_DATA_EXCEL_CHARACTERVOICEEXCEL_GETNATIONBYTES_OFFSET UNITYSDK_OFFSET(0x1A440F0)
#define MX_DATA_EXCEL_CHARACTERVOICEEXCEL_VOLUME_OFFSET UNITYSDK_OFFSET(0x1A44110)
#define MX_DATA_EXCEL_CHARACTERVOICEEXCEL_GET_VOLUMELENGTH_OFFSET UNITYSDK_OFFSET(0x1A44170)
#define MX_DATA_EXCEL_CHARACTERVOICEEXCEL_GETVOLUMEBYTES_OFFSET UNITYSDK_OFFSET(0x1A441B0)
#define MX_DATA_EXCEL_CHARACTERVOICEEXCEL_DELAY_OFFSET UNITYSDK_OFFSET(0x1A441D0)
#define MX_DATA_EXCEL_CHARACTERVOICEEXCEL_GET_DELAYLENGTH_OFFSET UNITYSDK_OFFSET(0x1A44230)
#define MX_DATA_EXCEL_CHARACTERVOICEEXCEL_GETDELAYBYTES_OFFSET UNITYSDK_OFFSET(0x1A44270)
#define MX_DATA_EXCEL_CHARACTERVOICEEXCEL_PATH_OFFSET UNITYSDK_OFFSET(0x1A44290)
#define MX_DATA_EXCEL_CHARACTERVOICEEXCEL_GET_PATHLENGTH_OFFSET UNITYSDK_OFFSET(0x1A442E0)
#define MX_DATA_EXCEL_CHARACTERVOICEEXCEL_CREATECHARACTERVOICEEXCEL_OFFSET UNITYSDK_OFFSET(0x1A44320)
#define MX_DATA_EXCEL_CHARACTERVOICEEXCEL_STARTCHARACTERVOICEEXCEL_OFFSET UNITYSDK_OFFSET(0x1A44880)
#define MX_DATA_EXCEL_CHARACTERVOICEEXCEL_ADDCHARACTERVOICEUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1A44620)
#define MX_DATA_EXCEL_CHARACTERVOICEEXCEL_ADDCHARACTERVOICEGROUPID_OFFSET UNITYSDK_OFFSET(0x1A445F0)
#define MX_DATA_EXCEL_CHARACTERVOICEEXCEL_ADDVOICEHASH_OFFSET UNITYSDK_OFFSET(0x1A447A0)
#define MX_DATA_EXCEL_CHARACTERVOICEEXCEL_ADDONLYONE_OFFSET UNITYSDK_OFFSET(0x1A44800)
#define MX_DATA_EXCEL_CHARACTERVOICEEXCEL_ADDPRIORITY_OFFSET UNITYSDK_OFFSET(0x1A44770)
#define MX_DATA_EXCEL_CHARACTERVOICEEXCEL_ADDDISPLAYORDER_OFFSET UNITYSDK_OFFSET(0x1A445C0)
#define MX_DATA_EXCEL_CHARACTERVOICEEXCEL_ADDCOLLECTIONVISIBLE_OFFSET UNITYSDK_OFFSET(0x1A447D0)
#define MX_DATA_EXCEL_CHARACTERVOICEEXCEL_ADDCVCOLLECTIONTYPE_OFFSET UNITYSDK_OFFSET(0x1A44740)
#define MX_DATA_EXCEL_CHARACTERVOICEEXCEL_ADDUNLOCKFAVORRANK_OFFSET UNITYSDK_OFFSET(0x1A44590)
#define MX_DATA_EXCEL_CHARACTERVOICEEXCEL_ADDLOCALIZECVGROUP_OFFSET UNITYSDK_OFFSET(0x1A44710)
#define MX_DATA_EXCEL_CHARACTERVOICEEXCEL_ADDNATION_OFFSET UNITYSDK_OFFSET(0x1A446E0)
#define MX_DATA_EXCEL_CHARACTERVOICEEXCEL_CREATENATIONVECTOR_OFFSET UNITYSDK_OFFSET(0x1A448A0)
#define MX_DATA_EXCEL_CHARACTERVOICEEXCEL_STARTNATIONVECTOR_OFFSET UNITYSDK_OFFSET(0x1A44930)
#define MX_DATA_EXCEL_CHARACTERVOICEEXCEL_ADDVOLUME_OFFSET UNITYSDK_OFFSET(0x1A446B0)
#define MX_DATA_EXCEL_CHARACTERVOICEEXCEL_CREATEVOLUMEVECTOR_OFFSET UNITYSDK_OFFSET(0x1A44970)
#define MX_DATA_EXCEL_CHARACTERVOICEEXCEL_STARTVOLUMEVECTOR_OFFSET UNITYSDK_OFFSET(0x1A44A00)
#define MX_DATA_EXCEL_CHARACTERVOICEEXCEL_ADDDELAY_OFFSET UNITYSDK_OFFSET(0x1A44680)
#define MX_DATA_EXCEL_CHARACTERVOICEEXCEL_CREATEDELAYVECTOR_OFFSET UNITYSDK_OFFSET(0x1A44A40)
#define MX_DATA_EXCEL_CHARACTERVOICEEXCEL_STARTDELAYVECTOR_OFFSET UNITYSDK_OFFSET(0x1A44AD0)
#define MX_DATA_EXCEL_CHARACTERVOICEEXCEL_ADDPATH_OFFSET UNITYSDK_OFFSET(0x1A44650)
#define MX_DATA_EXCEL_CHARACTERVOICEEXCEL_CREATEPATHVECTOR_OFFSET UNITYSDK_OFFSET(0x1A44B10)
#define MX_DATA_EXCEL_CHARACTERVOICEEXCEL_STARTPATHVECTOR_OFFSET UNITYSDK_OFFSET(0x1A44BA0)
#define MX_DATA_EXCEL_CHARACTERVOICEEXCEL_ENDCHARACTERVOICEEXCEL_OFFSET UNITYSDK_OFFSET(0x1A44830)
#define MX_DATA_EXCEL_CHARACTERVOICEEXCEL_FINISHCHARACTERVOICEEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1A44BE0)
#define MX_DATA_EXCEL_CHARACTERVOICEEXCEL_FINISHSIZEPREFIXEDCHARACTERVOICEEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1A44C00)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int CharacterVoiceExcel_TypeDefinitionIndex = 17124;

	class CharacterVoiceExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVOICEEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::CharacterVoiceExcel* GetRootAsCharacterVoiceExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::CharacterVoiceExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVOICEEXCEL_GETROOTASCHARACTERVOICEEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::CharacterVoiceExcel* GetRootAsCharacterVoiceExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::CharacterVoiceExcel* arg)
		{
			return (return (::MX::Data::Excel::CharacterVoiceExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::CharacterVoiceExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVOICEEXCEL_GETROOTASCHARACTERVOICEEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVOICEEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::CharacterVoiceExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::CharacterVoiceExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVOICEEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_CharacterVoiceUniqueId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVOICEEXCEL_GET_CHARACTERVOICEUNIQUEID_OFFSET))(nullptr);
		}

		::System::Int64 get_CharacterVoiceGroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVOICEEXCEL_GET_CHARACTERVOICEGROUPID_OFFSET))(nullptr);
		}

		::System::UInt32 get_VoiceHash()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVOICEEXCEL_GET_VOICEHASH_OFFSET))(nullptr);
		}

		::System::Boolean get_OnlyOne()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVOICEEXCEL_GET_ONLYONE_OFFSET))(nullptr);
		}

		::System::Int32 get_Priority()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVOICEEXCEL_GET_PRIORITY_OFFSET))(nullptr);
		}

		::System::Int64 get_DisplayOrder()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVOICEEXCEL_GET_DISPLAYORDER_OFFSET))(nullptr);
		}

		::System::Boolean get_CollectionVisible()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVOICEEXCEL_GET_COLLECTIONVISIBLE_OFFSET))(nullptr);
		}

		::FlatData::CVCollectionType* get_CVCollectionType()
		{
			return (return (::FlatData::CVCollectionType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVOICEEXCEL_GET_CVCOLLECTIONTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_UnlockFavorRank()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVOICEEXCEL_GET_UNLOCKFAVORRANK_OFFSET))(nullptr);
		}

		::System::String* get_LocalizeCVGroup()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVOICEEXCEL_GET_LOCALIZECVGROUP_OFFSET))(nullptr);
		}

		Il2CppObject* GetLocalizeCVGroupBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVOICEEXCEL_GETLOCALIZECVGROUPBYTES_OFFSET))(nullptr);
		}

		::FlatData::Nation* Nation(::System::Int32 arg)
		{
			return (return (::FlatData::Nation*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVOICEEXCEL_NATION_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_NationLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVOICEEXCEL_GET_NATIONLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetNationBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVOICEEXCEL_GETNATIONBYTES_OFFSET))(nullptr);
		}

		::System::Single Volume(::System::Int32 arg)
		{
			return (return (::System::Single(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVOICEEXCEL_VOLUME_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_VolumeLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVOICEEXCEL_GET_VOLUMELENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetVolumeBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVOICEEXCEL_GETVOLUMEBYTES_OFFSET))(nullptr);
		}

		::System::Single Delay(::System::Int32 arg)
		{
			return (return (::System::Single(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVOICEEXCEL_DELAY_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_DelayLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVOICEEXCEL_GET_DELAYLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetDelayBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVOICEEXCEL_GETDELAYBYTES_OFFSET))(nullptr);
		}

		::System::String* Path(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVOICEEXCEL_PATH_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_PathLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVOICEEXCEL_GET_PATHLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* CreateCharacterVoiceExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Int64 arg, ::System::UInt32 arg, ::System::Boolean arg, ::System::Int32 arg, ::System::Int64 arg, ::System::Boolean arg, ::FlatData::CVCollectionType* arg, ::System::Int64 arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int64, ::System::UInt32, ::System::Boolean, ::System::Int32, ::System::Int64, ::System::Boolean, ::FlatData::CVCollectionType*, ::System::Int64, ::FlatBuffers::StringOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVOICEEXCEL_CREATECHARACTERVOICEEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartCharacterVoiceExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVOICEEXCEL_STARTCHARACTERVOICEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddCharacterVoiceUniqueId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVOICEEXCEL_ADDCHARACTERVOICEUNIQUEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCharacterVoiceGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVOICEEXCEL_ADDCHARACTERVOICEGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddVoiceHash(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVOICEEXCEL_ADDVOICEHASH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddOnlyOne(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVOICEEXCEL_ADDONLYONE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPriority(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVOICEEXCEL_ADDPRIORITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDisplayOrder(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVOICEEXCEL_ADDDISPLAYORDER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCollectionVisible(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVOICEEXCEL_ADDCOLLECTIONVISIBLE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCVCollectionType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::CVCollectionType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::CVCollectionType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVOICEEXCEL_ADDCVCOLLECTIONTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddUnlockFavorRank(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVOICEEXCEL_ADDUNLOCKFAVORRANK_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLocalizeCVGroup(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVOICEEXCEL_ADDLOCALIZECVGROUP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddNation(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVOICEEXCEL_ADDNATION_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateNationVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVOICEEXCEL_CREATENATIONVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartNationVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVOICEEXCEL_STARTNATIONVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddVolume(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVOICEEXCEL_ADDVOLUME_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateVolumeVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVOICEEXCEL_CREATEVOLUMEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartVolumeVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVOICEEXCEL_STARTVOLUMEVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDelay(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVOICEEXCEL_ADDDELAY_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateDelayVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVOICEEXCEL_CREATEDELAYVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartDelayVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVOICEEXCEL_STARTDELAYVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVOICEEXCEL_ADDPATH_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreatePathVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVOICEEXCEL_CREATEPATHVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartPathVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVOICEEXCEL_STARTPATHVECTOR_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndCharacterVoiceExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVOICEEXCEL_ENDCHARACTERVOICEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishCharacterVoiceExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVOICEEXCEL_FINISHCHARACTERVOICEEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedCharacterVoiceExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERVOICEEXCEL_FINISHSIZEPREFIXEDCHARACTERVOICEEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

