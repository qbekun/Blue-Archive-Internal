#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class MinigameTBGThemaExcel; }
namespace FlatData { class TBGThemaType; }
namespace FlatData { class TBGPortalCondition; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }
namespace FlatBuffers { class VectorOffset; }

#define MX_DATA_EXCEL_MINIGAMETBGTHEMAEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1C0B210)
#define MX_DATA_EXCEL_MINIGAMETBGTHEMAEXCEL_GETROOTASMINIGAMETBGTHEMAEXCEL_OFFSET UNITYSDK_OFFSET(0x1C0B220)
#define MX_DATA_EXCEL_MINIGAMETBGTHEMAEXCEL_GETROOTASMINIGAMETBGTHEMAEXCEL_OFFSET UNITYSDK_OFFSET(0x1C0B280)
#define MX_DATA_EXCEL_MINIGAMETBGTHEMAEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1C0B310)
#define MX_DATA_EXCEL_MINIGAMETBGTHEMAEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1C0B2E0)
#define MX_DATA_EXCEL_MINIGAMETBGTHEMAEXCEL_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1C0B330)
#define MX_DATA_EXCEL_MINIGAMETBGTHEMAEXCEL_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x1C0B380)
#define MX_DATA_EXCEL_MINIGAMETBGTHEMAEXCEL_GET_THEMAINDEX_OFFSET UNITYSDK_OFFSET(0x1C0B3D0)
#define MX_DATA_EXCEL_MINIGAMETBGTHEMAEXCEL_GET_THEMATYPE_OFFSET UNITYSDK_OFFSET(0x1C0B420)
#define MX_DATA_EXCEL_MINIGAMETBGTHEMAEXCEL_GET_THEMAMAP_OFFSET UNITYSDK_OFFSET(0x1C0B470)
#define MX_DATA_EXCEL_MINIGAMETBGTHEMAEXCEL_GETTHEMAMAPBYTES_OFFSET UNITYSDK_OFFSET(0x1C0B4B0)
#define MX_DATA_EXCEL_MINIGAMETBGTHEMAEXCEL_GET_THEMAMAPBG_OFFSET UNITYSDK_OFFSET(0x1C0B4D0)
#define MX_DATA_EXCEL_MINIGAMETBGTHEMAEXCEL_GETTHEMAMAPBGBYTES_OFFSET UNITYSDK_OFFSET(0x1C0B510)
#define MX_DATA_EXCEL_MINIGAMETBGTHEMAEXCEL_PORTALCONDITION_OFFSET UNITYSDK_OFFSET(0x1C0B530)
#define MX_DATA_EXCEL_MINIGAMETBGTHEMAEXCEL_GET_PORTALCONDITIONLENGTH_OFFSET UNITYSDK_OFFSET(0x1C0B590)
#define MX_DATA_EXCEL_MINIGAMETBGTHEMAEXCEL_GETPORTALCONDITIONBYTES_OFFSET UNITYSDK_OFFSET(0x1C0B5D0)
#define MX_DATA_EXCEL_MINIGAMETBGTHEMAEXCEL_PORTALCONDITIONPARAMETER_OFFSET UNITYSDK_OFFSET(0x1C0B5F0)
#define MX_DATA_EXCEL_MINIGAMETBGTHEMAEXCEL_GET_PORTALCONDITIONPARAMETERLENGTH_OFFSET UNITYSDK_OFFSET(0x1C0B640)
#define MX_DATA_EXCEL_MINIGAMETBGTHEMAEXCEL_GET_THEMANAMELOCALIZE_OFFSET UNITYSDK_OFFSET(0x1C0B680)
#define MX_DATA_EXCEL_MINIGAMETBGTHEMAEXCEL_GETTHEMANAMELOCALIZEBYTES_OFFSET UNITYSDK_OFFSET(0x1C0B6C0)
#define MX_DATA_EXCEL_MINIGAMETBGTHEMAEXCEL_GET_THEMALOADINGIMAGE_OFFSET UNITYSDK_OFFSET(0x1C0B6E0)
#define MX_DATA_EXCEL_MINIGAMETBGTHEMAEXCEL_GETTHEMALOADINGIMAGEBYTES_OFFSET UNITYSDK_OFFSET(0x1C0B720)
#define MX_DATA_EXCEL_MINIGAMETBGTHEMAEXCEL_GET_THEMAPLAYERPREFAB_OFFSET UNITYSDK_OFFSET(0x1C0B740)
#define MX_DATA_EXCEL_MINIGAMETBGTHEMAEXCEL_GETTHEMAPLAYERPREFABBYTES_OFFSET UNITYSDK_OFFSET(0x1C0B780)
#define MX_DATA_EXCEL_MINIGAMETBGTHEMAEXCEL_GET_THEMALEADERID_OFFSET UNITYSDK_OFFSET(0x1C0B7A0)
#define MX_DATA_EXCEL_MINIGAMETBGTHEMAEXCEL_GET_THEMAGOALLOCALIZE_OFFSET UNITYSDK_OFFSET(0x1C0B7F0)
#define MX_DATA_EXCEL_MINIGAMETBGTHEMAEXCEL_GETTHEMAGOALLOCALIZEBYTES_OFFSET UNITYSDK_OFFSET(0x1C0B830)
#define MX_DATA_EXCEL_MINIGAMETBGTHEMAEXCEL_GET_INSTANTCLEARCOSTAMOUNT_OFFSET UNITYSDK_OFFSET(0x1C0B850)
#define MX_DATA_EXCEL_MINIGAMETBGTHEMAEXCEL_GET_ISTUTORIAL_OFFSET UNITYSDK_OFFSET(0x1C0B8A0)
#define MX_DATA_EXCEL_MINIGAMETBGTHEMAEXCEL_CREATEMINIGAMETBGTHEMAEXCEL_OFFSET UNITYSDK_OFFSET(0x1C0B8F0)
#define MX_DATA_EXCEL_MINIGAMETBGTHEMAEXCEL_STARTMINIGAMETBGTHEMAEXCEL_OFFSET UNITYSDK_OFFSET(0x1C0BEB0)
#define MX_DATA_EXCEL_MINIGAMETBGTHEMAEXCEL_ADDEVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1C0BC20)
#define MX_DATA_EXCEL_MINIGAMETBGTHEMAEXCEL_ADDUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1C0BBF0)
#define MX_DATA_EXCEL_MINIGAMETBGTHEMAEXCEL_ADDTHEMAINDEX_OFFSET UNITYSDK_OFFSET(0x1C0BE00)
#define MX_DATA_EXCEL_MINIGAMETBGTHEMAEXCEL_ADDTHEMATYPE_OFFSET UNITYSDK_OFFSET(0x1C0BDD0)
#define MX_DATA_EXCEL_MINIGAMETBGTHEMAEXCEL_ADDTHEMAMAP_OFFSET UNITYSDK_OFFSET(0x1C0BDA0)
#define MX_DATA_EXCEL_MINIGAMETBGTHEMAEXCEL_ADDTHEMAMAPBG_OFFSET UNITYSDK_OFFSET(0x1C0BD70)
#define MX_DATA_EXCEL_MINIGAMETBGTHEMAEXCEL_ADDPORTALCONDITION_OFFSET UNITYSDK_OFFSET(0x1C0BD40)
#define MX_DATA_EXCEL_MINIGAMETBGTHEMAEXCEL_CREATEPORTALCONDITIONVECTOR_OFFSET UNITYSDK_OFFSET(0x1C0BED0)
#define MX_DATA_EXCEL_MINIGAMETBGTHEMAEXCEL_STARTPORTALCONDITIONVECTOR_OFFSET UNITYSDK_OFFSET(0x1C0BF60)
#define MX_DATA_EXCEL_MINIGAMETBGTHEMAEXCEL_ADDPORTALCONDITIONPARAMETER_OFFSET UNITYSDK_OFFSET(0x1C0BD10)
#define MX_DATA_EXCEL_MINIGAMETBGTHEMAEXCEL_CREATEPORTALCONDITIONPARAMETERVECTOR_OFFSET UNITYSDK_OFFSET(0x1C0BFA0)
#define MX_DATA_EXCEL_MINIGAMETBGTHEMAEXCEL_STARTPORTALCONDITIONPARAMETERVECTOR_OFFSET UNITYSDK_OFFSET(0x1C0C030)
#define MX_DATA_EXCEL_MINIGAMETBGTHEMAEXCEL_ADDTHEMANAMELOCALIZE_OFFSET UNITYSDK_OFFSET(0x1C0BCE0)
#define MX_DATA_EXCEL_MINIGAMETBGTHEMAEXCEL_ADDTHEMALOADINGIMAGE_OFFSET UNITYSDK_OFFSET(0x1C0BCB0)
#define MX_DATA_EXCEL_MINIGAMETBGTHEMAEXCEL_ADDTHEMAPLAYERPREFAB_OFFSET UNITYSDK_OFFSET(0x1C0BC80)
#define MX_DATA_EXCEL_MINIGAMETBGTHEMAEXCEL_ADDTHEMALEADERID_OFFSET UNITYSDK_OFFSET(0x1C0BBC0)
#define MX_DATA_EXCEL_MINIGAMETBGTHEMAEXCEL_ADDTHEMAGOALLOCALIZE_OFFSET UNITYSDK_OFFSET(0x1C0BC50)
#define MX_DATA_EXCEL_MINIGAMETBGTHEMAEXCEL_ADDINSTANTCLEARCOSTAMOUNT_OFFSET UNITYSDK_OFFSET(0x1C0BB90)
#define MX_DATA_EXCEL_MINIGAMETBGTHEMAEXCEL_ADDISTUTORIAL_OFFSET UNITYSDK_OFFSET(0x1C0BE30)
#define MX_DATA_EXCEL_MINIGAMETBGTHEMAEXCEL_ENDMINIGAMETBGTHEMAEXCEL_OFFSET UNITYSDK_OFFSET(0x1C0BE60)
#define MX_DATA_EXCEL_MINIGAMETBGTHEMAEXCEL_FINISHMINIGAMETBGTHEMAEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C0C070)
#define MX_DATA_EXCEL_MINIGAMETBGTHEMAEXCEL_FINISHSIZEPREFIXEDMINIGAMETBGTHEMAEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C0C090)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int MinigameTBGThemaExcel_TypeDefinitionIndex = 18908;

	class MinigameTBGThemaExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGTHEMAEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::MinigameTBGThemaExcel* GetRootAsMinigameTBGThemaExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::MinigameTBGThemaExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGTHEMAEXCEL_GETROOTASMINIGAMETBGTHEMAEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::MinigameTBGThemaExcel* GetRootAsMinigameTBGThemaExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::MinigameTBGThemaExcel* arg)
		{
			return (return (::MX::Data::Excel::MinigameTBGThemaExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::MinigameTBGThemaExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGTHEMAEXCEL_GETROOTASMINIGAMETBGTHEMAEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGTHEMAEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::MinigameTBGThemaExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::MinigameTBGThemaExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGTHEMAEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGTHEMAEXCEL_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Int64 get_UniqueId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGTHEMAEXCEL_GET_UNIQUEID_OFFSET))(nullptr);
		}

		::System::Int32 get_ThemaIndex()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGTHEMAEXCEL_GET_THEMAINDEX_OFFSET))(nullptr);
		}

		::FlatData::TBGThemaType* get_ThemaType()
		{
			return (return (::FlatData::TBGThemaType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGTHEMAEXCEL_GET_THEMATYPE_OFFSET))(nullptr);
		}

		::System::String* get_ThemaMap()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGTHEMAEXCEL_GET_THEMAMAP_OFFSET))(nullptr);
		}

		Il2CppObject* GetThemaMapBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGTHEMAEXCEL_GETTHEMAMAPBYTES_OFFSET))(nullptr);
		}

		::System::String* get_ThemaMapBG()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGTHEMAEXCEL_GET_THEMAMAPBG_OFFSET))(nullptr);
		}

		Il2CppObject* GetThemaMapBGBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGTHEMAEXCEL_GETTHEMAMAPBGBYTES_OFFSET))(nullptr);
		}

		::FlatData::TBGPortalCondition* PortalCondition(::System::Int32 arg)
		{
			return (return (::FlatData::TBGPortalCondition*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGTHEMAEXCEL_PORTALCONDITION_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_PortalConditionLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGTHEMAEXCEL_GET_PORTALCONDITIONLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetPortalConditionBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGTHEMAEXCEL_GETPORTALCONDITIONBYTES_OFFSET))(nullptr);
		}

		::System::String* PortalConditionParameter(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGTHEMAEXCEL_PORTALCONDITIONPARAMETER_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_PortalConditionParameterLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGTHEMAEXCEL_GET_PORTALCONDITIONPARAMETERLENGTH_OFFSET))(nullptr);
		}

		::System::String* get_ThemaNameLocalize()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGTHEMAEXCEL_GET_THEMANAMELOCALIZE_OFFSET))(nullptr);
		}

		Il2CppObject* GetThemaNameLocalizeBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGTHEMAEXCEL_GETTHEMANAMELOCALIZEBYTES_OFFSET))(nullptr);
		}

		::System::String* get_ThemaLoadingImage()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGTHEMAEXCEL_GET_THEMALOADINGIMAGE_OFFSET))(nullptr);
		}

		Il2CppObject* GetThemaLoadingImageBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGTHEMAEXCEL_GETTHEMALOADINGIMAGEBYTES_OFFSET))(nullptr);
		}

		::System::String* get_ThemaPlayerPrefab()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGTHEMAEXCEL_GET_THEMAPLAYERPREFAB_OFFSET))(nullptr);
		}

		Il2CppObject* GetThemaPlayerPrefabBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGTHEMAEXCEL_GETTHEMAPLAYERPREFABBYTES_OFFSET))(nullptr);
		}

		::System::Int64 get_ThemaLeaderId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGTHEMAEXCEL_GET_THEMALEADERID_OFFSET))(nullptr);
		}

		::System::String* get_ThemaGoalLocalize()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGTHEMAEXCEL_GET_THEMAGOALLOCALIZE_OFFSET))(nullptr);
		}

		Il2CppObject* GetThemaGoalLocalizeBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGTHEMAEXCEL_GETTHEMAGOALLOCALIZEBYTES_OFFSET))(nullptr);
		}

		::System::Int64 get_InstantClearCostAmount()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGTHEMAEXCEL_GET_INSTANTCLEARCOSTAMOUNT_OFFSET))(nullptr);
		}

		::System::Boolean get_IsTutorial()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGTHEMAEXCEL_GET_ISTUTORIAL_OFFSET))(nullptr);
		}

		Il2CppObject* CreateMinigameTBGThemaExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int32 arg, ::FlatData::TBGThemaType* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::System::Int64 arg, ::FlatBuffers::StringOffset* arg, ::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int64, ::System::Int32, ::FlatData::TBGThemaType*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::System::Int64, ::FlatBuffers::StringOffset*, ::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGTHEMAEXCEL_CREATEMINIGAMETBGTHEMAEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartMinigameTBGThemaExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGTHEMAEXCEL_STARTMINIGAMETBGTHEMAEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddEventContentId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGTHEMAEXCEL_ADDEVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddUniqueId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGTHEMAEXCEL_ADDUNIQUEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddThemaIndex(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGTHEMAEXCEL_ADDTHEMAINDEX_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddThemaType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::TBGThemaType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::TBGThemaType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGTHEMAEXCEL_ADDTHEMATYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddThemaMap(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGTHEMAEXCEL_ADDTHEMAMAP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddThemaMapBG(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGTHEMAEXCEL_ADDTHEMAMAPBG_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPortalCondition(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGTHEMAEXCEL_ADDPORTALCONDITION_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreatePortalConditionVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGTHEMAEXCEL_CREATEPORTALCONDITIONVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartPortalConditionVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGTHEMAEXCEL_STARTPORTALCONDITIONVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPortalConditionParameter(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGTHEMAEXCEL_ADDPORTALCONDITIONPARAMETER_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreatePortalConditionParameterVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGTHEMAEXCEL_CREATEPORTALCONDITIONPARAMETERVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartPortalConditionParameterVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGTHEMAEXCEL_STARTPORTALCONDITIONPARAMETERVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddThemaNameLocalize(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGTHEMAEXCEL_ADDTHEMANAMELOCALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddThemaLoadingImage(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGTHEMAEXCEL_ADDTHEMALOADINGIMAGE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddThemaPlayerPrefab(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGTHEMAEXCEL_ADDTHEMAPLAYERPREFAB_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddThemaLeaderId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGTHEMAEXCEL_ADDTHEMALEADERID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddThemaGoalLocalize(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGTHEMAEXCEL_ADDTHEMAGOALLOCALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddInstantClearCostAmount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGTHEMAEXCEL_ADDINSTANTCLEARCOSTAMOUNT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddIsTutorial(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGTHEMAEXCEL_ADDISTUTORIAL_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndMinigameTBGThemaExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGTHEMAEXCEL_ENDMINIGAMETBGTHEMAEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishMinigameTBGThemaExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGTHEMAEXCEL_FINISHMINIGAMETBGTHEMAEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedMinigameTBGThemaExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGTHEMAEXCEL_FINISHSIZEPREFIXEDMINIGAMETBGTHEMAEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

