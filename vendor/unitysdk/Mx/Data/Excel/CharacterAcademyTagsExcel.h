#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class CharacterAcademyTagsExcel; }
namespace FlatData { class Tag; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }

#define MX_DATA_EXCEL_CHARACTERACADEMYTAGSEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1A09000)
#define MX_DATA_EXCEL_CHARACTERACADEMYTAGSEXCEL_GETROOTASCHARACTERACADEMYTAGSEXCEL_OFFSET UNITYSDK_OFFSET(0x1A09010)
#define MX_DATA_EXCEL_CHARACTERACADEMYTAGSEXCEL_GETROOTASCHARACTERACADEMYTAGSEXCEL_OFFSET UNITYSDK_OFFSET(0x1A09070)
#define MX_DATA_EXCEL_CHARACTERACADEMYTAGSEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1A09100)
#define MX_DATA_EXCEL_CHARACTERACADEMYTAGSEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1A090D0)
#define MX_DATA_EXCEL_CHARACTERACADEMYTAGSEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0x1A09120)
#define MX_DATA_EXCEL_CHARACTERACADEMYTAGSEXCEL_FAVORTAGS_OFFSET UNITYSDK_OFFSET(0x1A09170)
#define MX_DATA_EXCEL_CHARACTERACADEMYTAGSEXCEL_GET_FAVORTAGSLENGTH_OFFSET UNITYSDK_OFFSET(0x1A091D0)
#define MX_DATA_EXCEL_CHARACTERACADEMYTAGSEXCEL_GETFAVORTAGSBYTES_OFFSET UNITYSDK_OFFSET(0x1A09210)
#define MX_DATA_EXCEL_CHARACTERACADEMYTAGSEXCEL_FAVORITEMTAGS_OFFSET UNITYSDK_OFFSET(0x1A09230)
#define MX_DATA_EXCEL_CHARACTERACADEMYTAGSEXCEL_GET_FAVORITEMTAGSLENGTH_OFFSET UNITYSDK_OFFSET(0x1A09290)
#define MX_DATA_EXCEL_CHARACTERACADEMYTAGSEXCEL_GETFAVORITEMTAGSBYTES_OFFSET UNITYSDK_OFFSET(0x1A092D0)
#define MX_DATA_EXCEL_CHARACTERACADEMYTAGSEXCEL_FAVORITEMUNIQUETAGS_OFFSET UNITYSDK_OFFSET(0x1A092F0)
#define MX_DATA_EXCEL_CHARACTERACADEMYTAGSEXCEL_GET_FAVORITEMUNIQUETAGSLENGTH_OFFSET UNITYSDK_OFFSET(0x1A09350)
#define MX_DATA_EXCEL_CHARACTERACADEMYTAGSEXCEL_GETFAVORITEMUNIQUETAGSBYTES_OFFSET UNITYSDK_OFFSET(0x1A09390)
#define MX_DATA_EXCEL_CHARACTERACADEMYTAGSEXCEL_FORBIDDENTAGS_OFFSET UNITYSDK_OFFSET(0x1A093B0)
#define MX_DATA_EXCEL_CHARACTERACADEMYTAGSEXCEL_GET_FORBIDDENTAGSLENGTH_OFFSET UNITYSDK_OFFSET(0x1A09410)
#define MX_DATA_EXCEL_CHARACTERACADEMYTAGSEXCEL_GETFORBIDDENTAGSBYTES_OFFSET UNITYSDK_OFFSET(0x1A09450)
#define MX_DATA_EXCEL_CHARACTERACADEMYTAGSEXCEL_ZONEWHITELISTTAGS_OFFSET UNITYSDK_OFFSET(0x1A09470)
#define MX_DATA_EXCEL_CHARACTERACADEMYTAGSEXCEL_GET_ZONEWHITELISTTAGSLENGTH_OFFSET UNITYSDK_OFFSET(0x1A094D0)
#define MX_DATA_EXCEL_CHARACTERACADEMYTAGSEXCEL_GETZONEWHITELISTTAGSBYTES_OFFSET UNITYSDK_OFFSET(0x1A09510)
#define MX_DATA_EXCEL_CHARACTERACADEMYTAGSEXCEL_CREATECHARACTERACADEMYTAGSEXCEL_OFFSET UNITYSDK_OFFSET(0x1A09530)
#define MX_DATA_EXCEL_CHARACTERACADEMYTAGSEXCEL_STARTCHARACTERACADEMYTAGSEXCEL_OFFSET UNITYSDK_OFFSET(0x1A097D0)
#define MX_DATA_EXCEL_CHARACTERACADEMYTAGSEXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0x1A09660)
#define MX_DATA_EXCEL_CHARACTERACADEMYTAGSEXCEL_ADDFAVORTAGS_OFFSET UNITYSDK_OFFSET(0x1A09750)
#define MX_DATA_EXCEL_CHARACTERACADEMYTAGSEXCEL_CREATEFAVORTAGSVECTOR_OFFSET UNITYSDK_OFFSET(0x1A097F0)
#define MX_DATA_EXCEL_CHARACTERACADEMYTAGSEXCEL_STARTFAVORTAGSVECTOR_OFFSET UNITYSDK_OFFSET(0x1A09880)
#define MX_DATA_EXCEL_CHARACTERACADEMYTAGSEXCEL_ADDFAVORITEMTAGS_OFFSET UNITYSDK_OFFSET(0x1A09720)
#define MX_DATA_EXCEL_CHARACTERACADEMYTAGSEXCEL_CREATEFAVORITEMTAGSVECTOR_OFFSET UNITYSDK_OFFSET(0x1A098C0)
#define MX_DATA_EXCEL_CHARACTERACADEMYTAGSEXCEL_STARTFAVORITEMTAGSVECTOR_OFFSET UNITYSDK_OFFSET(0x1A09950)
#define MX_DATA_EXCEL_CHARACTERACADEMYTAGSEXCEL_ADDFAVORITEMUNIQUETAGS_OFFSET UNITYSDK_OFFSET(0x1A096F0)
#define MX_DATA_EXCEL_CHARACTERACADEMYTAGSEXCEL_CREATEFAVORITEMUNIQUETAGSVECTOR_OFFSET UNITYSDK_OFFSET(0x1A09990)
#define MX_DATA_EXCEL_CHARACTERACADEMYTAGSEXCEL_STARTFAVORITEMUNIQUETAGSVECTOR_OFFSET UNITYSDK_OFFSET(0x1A09A20)
#define MX_DATA_EXCEL_CHARACTERACADEMYTAGSEXCEL_ADDFORBIDDENTAGS_OFFSET UNITYSDK_OFFSET(0x1A096C0)
#define MX_DATA_EXCEL_CHARACTERACADEMYTAGSEXCEL_CREATEFORBIDDENTAGSVECTOR_OFFSET UNITYSDK_OFFSET(0x1A09A60)
#define MX_DATA_EXCEL_CHARACTERACADEMYTAGSEXCEL_STARTFORBIDDENTAGSVECTOR_OFFSET UNITYSDK_OFFSET(0x1A09AF0)
#define MX_DATA_EXCEL_CHARACTERACADEMYTAGSEXCEL_ADDZONEWHITELISTTAGS_OFFSET UNITYSDK_OFFSET(0x1A09690)
#define MX_DATA_EXCEL_CHARACTERACADEMYTAGSEXCEL_CREATEZONEWHITELISTTAGSVECTOR_OFFSET UNITYSDK_OFFSET(0x1A09B30)
#define MX_DATA_EXCEL_CHARACTERACADEMYTAGSEXCEL_STARTZONEWHITELISTTAGSVECTOR_OFFSET UNITYSDK_OFFSET(0x1A09BC0)
#define MX_DATA_EXCEL_CHARACTERACADEMYTAGSEXCEL_ENDCHARACTERACADEMYTAGSEXCEL_OFFSET UNITYSDK_OFFSET(0x1A09780)
#define MX_DATA_EXCEL_CHARACTERACADEMYTAGSEXCEL_FINISHCHARACTERACADEMYTAGSEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1A09C00)
#define MX_DATA_EXCEL_CHARACTERACADEMYTAGSEXCEL_FINISHSIZEPREFIXEDCHARACTERACADEMYTAGSEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1A09C20)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int CharacterAcademyTagsExcel_TypeDefinitionIndex = 16910;

	class CharacterAcademyTagsExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERACADEMYTAGSEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::CharacterAcademyTagsExcel* GetRootAsCharacterAcademyTagsExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::CharacterAcademyTagsExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERACADEMYTAGSEXCEL_GETROOTASCHARACTERACADEMYTAGSEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::CharacterAcademyTagsExcel* GetRootAsCharacterAcademyTagsExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::CharacterAcademyTagsExcel* arg)
		{
			return (return (::MX::Data::Excel::CharacterAcademyTagsExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::CharacterAcademyTagsExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERACADEMYTAGSEXCEL_GETROOTASCHARACTERACADEMYTAGSEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERACADEMYTAGSEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::CharacterAcademyTagsExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::CharacterAcademyTagsExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERACADEMYTAGSEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERACADEMYTAGSEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::FlatData::Tag* FavorTags(::System::Int32 arg)
		{
			return (return (::FlatData::Tag*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERACADEMYTAGSEXCEL_FAVORTAGS_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_FavorTagsLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERACADEMYTAGSEXCEL_GET_FAVORTAGSLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetFavorTagsBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERACADEMYTAGSEXCEL_GETFAVORTAGSBYTES_OFFSET))(nullptr);
		}

		::FlatData::Tag* FavorItemTags(::System::Int32 arg)
		{
			return (return (::FlatData::Tag*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERACADEMYTAGSEXCEL_FAVORITEMTAGS_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_FavorItemTagsLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERACADEMYTAGSEXCEL_GET_FAVORITEMTAGSLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetFavorItemTagsBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERACADEMYTAGSEXCEL_GETFAVORITEMTAGSBYTES_OFFSET))(nullptr);
		}

		::FlatData::Tag* FavorItemUniqueTags(::System::Int32 arg)
		{
			return (return (::FlatData::Tag*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERACADEMYTAGSEXCEL_FAVORITEMUNIQUETAGS_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_FavorItemUniqueTagsLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERACADEMYTAGSEXCEL_GET_FAVORITEMUNIQUETAGSLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetFavorItemUniqueTagsBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERACADEMYTAGSEXCEL_GETFAVORITEMUNIQUETAGSBYTES_OFFSET))(nullptr);
		}

		::FlatData::Tag* ForbiddenTags(::System::Int32 arg)
		{
			return (return (::FlatData::Tag*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERACADEMYTAGSEXCEL_FORBIDDENTAGS_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ForbiddenTagsLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERACADEMYTAGSEXCEL_GET_FORBIDDENTAGSLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetForbiddenTagsBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERACADEMYTAGSEXCEL_GETFORBIDDENTAGSBYTES_OFFSET))(nullptr);
		}

		::FlatData::Tag* ZoneWhiteListTags(::System::Int32 arg)
		{
			return (return (::FlatData::Tag*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERACADEMYTAGSEXCEL_ZONEWHITELISTTAGS_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ZoneWhiteListTagsLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERACADEMYTAGSEXCEL_GET_ZONEWHITELISTTAGSLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetZoneWhiteListTagsBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERACADEMYTAGSEXCEL_GETZONEWHITELISTTAGSBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateCharacterAcademyTagsExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERACADEMYTAGSEXCEL_CREATECHARACTERACADEMYTAGSEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartCharacterAcademyTagsExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERACADEMYTAGSEXCEL_STARTCHARACTERACADEMYTAGSEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERACADEMYTAGSEXCEL_ADDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddFavorTags(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERACADEMYTAGSEXCEL_ADDFAVORTAGS_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateFavorTagsVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERACADEMYTAGSEXCEL_CREATEFAVORTAGSVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartFavorTagsVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERACADEMYTAGSEXCEL_STARTFAVORTAGSVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddFavorItemTags(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERACADEMYTAGSEXCEL_ADDFAVORITEMTAGS_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateFavorItemTagsVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERACADEMYTAGSEXCEL_CREATEFAVORITEMTAGSVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartFavorItemTagsVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERACADEMYTAGSEXCEL_STARTFAVORITEMTAGSVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddFavorItemUniqueTags(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERACADEMYTAGSEXCEL_ADDFAVORITEMUNIQUETAGS_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateFavorItemUniqueTagsVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERACADEMYTAGSEXCEL_CREATEFAVORITEMUNIQUETAGSVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartFavorItemUniqueTagsVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERACADEMYTAGSEXCEL_STARTFAVORITEMUNIQUETAGSVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddForbiddenTags(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERACADEMYTAGSEXCEL_ADDFORBIDDENTAGS_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateForbiddenTagsVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERACADEMYTAGSEXCEL_CREATEFORBIDDENTAGSVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartForbiddenTagsVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERACADEMYTAGSEXCEL_STARTFORBIDDENTAGSVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddZoneWhiteListTags(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERACADEMYTAGSEXCEL_ADDZONEWHITELISTTAGS_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateZoneWhiteListTagsVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERACADEMYTAGSEXCEL_CREATEZONEWHITELISTTAGSVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartZoneWhiteListTagsVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERACADEMYTAGSEXCEL_STARTZONEWHITELISTTAGSVECTOR_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndCharacterAcademyTagsExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERACADEMYTAGSEXCEL_ENDCHARACTERACADEMYTAGSEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishCharacterAcademyTagsExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERACADEMYTAGSEXCEL_FINISHCHARACTERACADEMYTAGSEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedCharacterAcademyTagsExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CHARACTERACADEMYTAGSEXCEL_FINISHSIZEPREFIXEDCHARACTERACADEMYTAGSEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

