#pragma once
#include "../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace FlatData { class FieldInteractionExcel; }
namespace FlatData { class FieldInteractionType; }
namespace FlatData { class FieldConditionClass; }
namespace FlatData { class FieldConditionType; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }
namespace FlatBuffers { class VectorOffset; }

#define FLATDATA_FIELDINTERACTIONEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0xD3C0B0)
#define FLATDATA_FIELDINTERACTIONEXCEL_GETROOTASFIELDINTERACTIONEXCEL_OFFSET UNITYSDK_OFFSET(0xD3C0C0)
#define FLATDATA_FIELDINTERACTIONEXCEL_GETROOTASFIELDINTERACTIONEXCEL_OFFSET UNITYSDK_OFFSET(0xD3C120)
#define FLATDATA_FIELDINTERACTIONEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0xD3C180)
#define FLATDATA_FIELDINTERACTIONEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0xD3BDD0)
#define FLATDATA_FIELDINTERACTIONEXCEL_GET_FIELDSEASONID_OFFSET UNITYSDK_OFFSET(0xD3C1A0)
#define FLATDATA_FIELDINTERACTIONEXCEL_GET_FIELDSEASONID_OFFSET UNITYSDK_OFFSET(0xD3C1F0)
#define FLATDATA_FIELDINTERACTIONEXCEL_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0xD3C270)
#define FLATDATA_FIELDINTERACTIONEXCEL_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0xD3C2C0)
#define FLATDATA_FIELDINTERACTIONEXCEL_GET_FIELDDATEID_OFFSET UNITYSDK_OFFSET(0xD3C340)
#define FLATDATA_FIELDINTERACTIONEXCEL_GET_FIELDDATEID_OFFSET UNITYSDK_OFFSET(0xD3C390)
#define FLATDATA_FIELDINTERACTIONEXCEL_GET_SHOWEMOJI_OFFSET UNITYSDK_OFFSET(0xD3C410)
#define FLATDATA_FIELDINTERACTIONEXCEL_GET_SHOWEMOJI_OFFSET UNITYSDK_OFFSET(0xD3C460)
#define FLATDATA_FIELDINTERACTIONEXCEL_GET_KEYWORDLOCALIZE_OFFSET UNITYSDK_OFFSET(0xD3C4B0)
#define FLATDATA_FIELDINTERACTIONEXCEL_GET_KEYWORDLOCALIZE_OFFSET UNITYSDK_OFFSET(0xD3C4F0)
#define FLATDATA_FIELDINTERACTIONEXCEL_GETKEYWORDLOCALIZEBYTES_OFFSET UNITYSDK_OFFSET(0xD3C560)
#define FLATDATA_FIELDINTERACTIONEXCEL_INTERACTIONTYPE_OFFSET UNITYSDK_OFFSET(0xD3C580)
#define FLATDATA_FIELDINTERACTIONEXCEL_GET_INTERACTIONTYPELENGTH_OFFSET UNITYSDK_OFFSET(0xD3C5E0)
#define FLATDATA_FIELDINTERACTIONEXCEL_INTERACTIONTYPE_OFFSET UNITYSDK_OFFSET(0xD3C620)
#define FLATDATA_FIELDINTERACTIONEXCEL_GETINTERACTIONTYPEBYTES_OFFSET UNITYSDK_OFFSET(0xD3C6B0)
#define FLATDATA_FIELDINTERACTIONEXCEL_INTERACTIONID_OFFSET UNITYSDK_OFFSET(0xD3C6D0)
#define FLATDATA_FIELDINTERACTIONEXCEL_GET_INTERACTIONIDLENGTH_OFFSET UNITYSDK_OFFSET(0xD3C730)
#define FLATDATA_FIELDINTERACTIONEXCEL_INTERACTIONID_OFFSET UNITYSDK_OFFSET(0xD3C770)
#define FLATDATA_FIELDINTERACTIONEXCEL_GETINTERACTIONIDBYTES_OFFSET UNITYSDK_OFFSET(0xD3C800)
#define FLATDATA_FIELDINTERACTIONEXCEL_GET_CONDITIONCLASS_OFFSET UNITYSDK_OFFSET(0xD3C820)
#define FLATDATA_FIELDINTERACTIONEXCEL_GET_CONDITIONCLASS_OFFSET UNITYSDK_OFFSET(0xD3C870)
#define FLATDATA_FIELDINTERACTIONEXCEL_CONDITIONCLASSPARAMETERS_OFFSET UNITYSDK_OFFSET(0xD3C8F0)
#define FLATDATA_FIELDINTERACTIONEXCEL_GET_CONDITIONCLASSPARAMETERSLENGTH_OFFSET UNITYSDK_OFFSET(0xD3C950)
#define FLATDATA_FIELDINTERACTIONEXCEL_CONDITIONCLASSPARAMETERS_OFFSET UNITYSDK_OFFSET(0xD3C990)
#define FLATDATA_FIELDINTERACTIONEXCEL_GETCONDITIONCLASSPARAMETERSBYTES_OFFSET UNITYSDK_OFFSET(0xD3CA20)
#define FLATDATA_FIELDINTERACTIONEXCEL_GET_ONCEONLY_OFFSET UNITYSDK_OFFSET(0xD3CA40)
#define FLATDATA_FIELDINTERACTIONEXCEL_GET_ONCEONLY_OFFSET UNITYSDK_OFFSET(0xD3CA90)
#define FLATDATA_FIELDINTERACTIONEXCEL_CONDITIONINDEX_OFFSET UNITYSDK_OFFSET(0xD3CAE0)
#define FLATDATA_FIELDINTERACTIONEXCEL_GET_CONDITIONINDEXLENGTH_OFFSET UNITYSDK_OFFSET(0xD3CB40)
#define FLATDATA_FIELDINTERACTIONEXCEL_CONDITIONINDEX_OFFSET UNITYSDK_OFFSET(0xD3CB80)
#define FLATDATA_FIELDINTERACTIONEXCEL_GETCONDITIONINDEXBYTES_OFFSET UNITYSDK_OFFSET(0xD3CC10)
#define FLATDATA_FIELDINTERACTIONEXCEL_CONDITIONTYPE_OFFSET UNITYSDK_OFFSET(0xD3CC30)
#define FLATDATA_FIELDINTERACTIONEXCEL_GET_CONDITIONTYPELENGTH_OFFSET UNITYSDK_OFFSET(0xD3CC90)
#define FLATDATA_FIELDINTERACTIONEXCEL_CONDITIONTYPE_OFFSET UNITYSDK_OFFSET(0xD3CCD0)
#define FLATDATA_FIELDINTERACTIONEXCEL_GETCONDITIONTYPEBYTES_OFFSET UNITYSDK_OFFSET(0xD3CD60)
#define FLATDATA_FIELDINTERACTIONEXCEL_CONDITIONID_OFFSET UNITYSDK_OFFSET(0xD3CD80)
#define FLATDATA_FIELDINTERACTIONEXCEL_GET_CONDITIONIDLENGTH_OFFSET UNITYSDK_OFFSET(0xD3CDE0)
#define FLATDATA_FIELDINTERACTIONEXCEL_CONDITIONID_OFFSET UNITYSDK_OFFSET(0xD3CE20)
#define FLATDATA_FIELDINTERACTIONEXCEL_GETCONDITIONIDBYTES_OFFSET UNITYSDK_OFFSET(0xD3CEB0)
#define FLATDATA_FIELDINTERACTIONEXCEL_NEGATECONDITION_OFFSET UNITYSDK_OFFSET(0xD3CED0)
#define FLATDATA_FIELDINTERACTIONEXCEL_GET_NEGATECONDITIONLENGTH_OFFSET UNITYSDK_OFFSET(0xD3CF30)
#define FLATDATA_FIELDINTERACTIONEXCEL_NEGATECONDITION_OFFSET UNITYSDK_OFFSET(0xD3CF70)
#define FLATDATA_FIELDINTERACTIONEXCEL_GETNEGATECONDITIONBYTES_OFFSET UNITYSDK_OFFSET(0xD3CFD0)
#define FLATDATA_FIELDINTERACTIONEXCEL_CREATEFIELDINTERACTIONEXCEL_OFFSET UNITYSDK_OFFSET(0xD3CFF0)
#define FLATDATA_FIELDINTERACTIONEXCEL_STARTFIELDINTERACTIONEXCEL_OFFSET UNITYSDK_OFFSET(0xD3D550)
#define FLATDATA_FIELDINTERACTIONEXCEL_ADDFIELDSEASONID_OFFSET UNITYSDK_OFFSET(0xD3D2C0)
#define FLATDATA_FIELDINTERACTIONEXCEL_ADDUNIQUEID_OFFSET UNITYSDK_OFFSET(0xD3D290)
#define FLATDATA_FIELDINTERACTIONEXCEL_ADDFIELDDATEID_OFFSET UNITYSDK_OFFSET(0xD3D260)
#define FLATDATA_FIELDINTERACTIONEXCEL_ADDSHOWEMOJI_OFFSET UNITYSDK_OFFSET(0xD3D4D0)
#define FLATDATA_FIELDINTERACTIONEXCEL_ADDKEYWORDLOCALIZE_OFFSET UNITYSDK_OFFSET(0xD3D470)
#define FLATDATA_FIELDINTERACTIONEXCEL_ADDINTERACTIONTYPE_OFFSET UNITYSDK_OFFSET(0xD3D440)
#define FLATDATA_FIELDINTERACTIONEXCEL_CREATEINTERACTIONTYPEVECTOR_OFFSET UNITYSDK_OFFSET(0xD3D570)
#define FLATDATA_FIELDINTERACTIONEXCEL_STARTINTERACTIONTYPEVECTOR_OFFSET UNITYSDK_OFFSET(0xD3D600)
#define FLATDATA_FIELDINTERACTIONEXCEL_ADDINTERACTIONID_OFFSET UNITYSDK_OFFSET(0xD3D410)
#define FLATDATA_FIELDINTERACTIONEXCEL_CREATEINTERACTIONIDVECTOR_OFFSET UNITYSDK_OFFSET(0xD3D640)
#define FLATDATA_FIELDINTERACTIONEXCEL_STARTINTERACTIONIDVECTOR_OFFSET UNITYSDK_OFFSET(0xD3D6D0)
#define FLATDATA_FIELDINTERACTIONEXCEL_ADDCONDITIONCLASS_OFFSET UNITYSDK_OFFSET(0xD3D3E0)
#define FLATDATA_FIELDINTERACTIONEXCEL_ADDCONDITIONCLASSPARAMETERS_OFFSET UNITYSDK_OFFSET(0xD3D3B0)
#define FLATDATA_FIELDINTERACTIONEXCEL_CREATECONDITIONCLASSPARAMETERSVECTOR_OFFSET UNITYSDK_OFFSET(0xD3D710)
#define FLATDATA_FIELDINTERACTIONEXCEL_STARTCONDITIONCLASSPARAMETERSVECTOR_OFFSET UNITYSDK_OFFSET(0xD3D7A0)
#define FLATDATA_FIELDINTERACTIONEXCEL_ADDONCEONLY_OFFSET UNITYSDK_OFFSET(0xD3D4A0)
#define FLATDATA_FIELDINTERACTIONEXCEL_ADDCONDITIONINDEX_OFFSET UNITYSDK_OFFSET(0xD3D380)
#define FLATDATA_FIELDINTERACTIONEXCEL_CREATECONDITIONINDEXVECTOR_OFFSET UNITYSDK_OFFSET(0xD3D7E0)
#define FLATDATA_FIELDINTERACTIONEXCEL_STARTCONDITIONINDEXVECTOR_OFFSET UNITYSDK_OFFSET(0xD3D870)
#define FLATDATA_FIELDINTERACTIONEXCEL_ADDCONDITIONTYPE_OFFSET UNITYSDK_OFFSET(0xD3D350)
#define FLATDATA_FIELDINTERACTIONEXCEL_CREATECONDITIONTYPEVECTOR_OFFSET UNITYSDK_OFFSET(0xD3D8B0)
#define FLATDATA_FIELDINTERACTIONEXCEL_STARTCONDITIONTYPEVECTOR_OFFSET UNITYSDK_OFFSET(0xD3D940)
#define FLATDATA_FIELDINTERACTIONEXCEL_ADDCONDITIONID_OFFSET UNITYSDK_OFFSET(0xD3D320)
#define FLATDATA_FIELDINTERACTIONEXCEL_CREATECONDITIONIDVECTOR_OFFSET UNITYSDK_OFFSET(0xD3D980)
#define FLATDATA_FIELDINTERACTIONEXCEL_STARTCONDITIONIDVECTOR_OFFSET UNITYSDK_OFFSET(0xD3DA10)
#define FLATDATA_FIELDINTERACTIONEXCEL_ADDNEGATECONDITION_OFFSET UNITYSDK_OFFSET(0xD3D2F0)
#define FLATDATA_FIELDINTERACTIONEXCEL_CREATENEGATECONDITIONVECTOR_OFFSET UNITYSDK_OFFSET(0xD3DA50)
#define FLATDATA_FIELDINTERACTIONEXCEL_STARTNEGATECONDITIONVECTOR_OFFSET UNITYSDK_OFFSET(0xD3DAE0)
#define FLATDATA_FIELDINTERACTIONEXCEL_ENDFIELDINTERACTIONEXCEL_OFFSET UNITYSDK_OFFSET(0xD3D500)

namespace FlatData
{
	inline static constexpr unsigned int FieldInteractionExcel_TypeDefinitionIndex = 9269;

	class FieldInteractionExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10
		::Il2CppArray<::System::Object*>* TableKey; // 0x0

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDINTERACTIONEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::FlatData::FieldInteractionExcel* GetRootAsFieldInteractionExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return ((::FlatData::FieldInteractionExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDINTERACTIONEXCEL_GETROOTASFIELDINTERACTIONEXCEL_OFFSET))(arg, nullptr);
		}

		::FlatData::FieldInteractionExcel* GetRootAsFieldInteractionExcel(::FlatBuffers::ByteBuffer* arg, ::FlatData::FieldInteractionExcel* arg2)
		{
			return ((::FlatData::FieldInteractionExcel*(*)(::FlatBuffers::ByteBuffer*, ::FlatData::FieldInteractionExcel*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDINTERACTIONEXCEL_GETROOTASFIELDINTERACTIONEXCEL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDINTERACTIONEXCEL___INIT_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::FieldInteractionExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			return ((::FlatData::FieldInteractionExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDINTERACTIONEXCEL___ASSIGN_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int64 get_fieldSeasonId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDINTERACTIONEXCEL_GET_FIELDSEASONID_OFFSET))(nullptr);
		}

		::System::Int64 get_FieldSeasonId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDINTERACTIONEXCEL_GET_FIELDSEASONID_OFFSET))(nullptr);
		}

		::System::Int64 get_uniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDINTERACTIONEXCEL_GET_UNIQUEID_OFFSET))(nullptr);
		}

		::System::Int64 get_UniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDINTERACTIONEXCEL_GET_UNIQUEID_OFFSET))(nullptr);
		}

		::System::Int64 get_fieldDateId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDINTERACTIONEXCEL_GET_FIELDDATEID_OFFSET))(nullptr);
		}

		::System::Int64 get_FieldDateId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDINTERACTIONEXCEL_GET_FIELDDATEID_OFFSET))(nullptr);
		}

		::System::Boolean get_showEmoji()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDINTERACTIONEXCEL_GET_SHOWEMOJI_OFFSET))(nullptr);
		}

		::System::Boolean get_ShowEmoji()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDINTERACTIONEXCEL_GET_SHOWEMOJI_OFFSET))(nullptr);
		}

		::System::String* get_keywordLocalize()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDINTERACTIONEXCEL_GET_KEYWORDLOCALIZE_OFFSET))(nullptr);
		}

		::System::String* get_KeywordLocalize()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDINTERACTIONEXCEL_GET_KEYWORDLOCALIZE_OFFSET))(nullptr);
		}

		Il2CppObject* GetKeywordLocalizeBytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDINTERACTIONEXCEL_GETKEYWORDLOCALIZEBYTES_OFFSET))(nullptr);
		}

		::FlatData::FieldInteractionType* interactionType(::System::Int32 arg)
		{
			return ((::FlatData::FieldInteractionType*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDINTERACTIONEXCEL_INTERACTIONTYPE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_InteractionTypeLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDINTERACTIONEXCEL_GET_INTERACTIONTYPELENGTH_OFFSET))(nullptr);
		}

		::FlatData::FieldInteractionType* InteractionType(::System::Int32 arg)
		{
			return ((::FlatData::FieldInteractionType*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDINTERACTIONEXCEL_INTERACTIONTYPE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetInteractionTypeBytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDINTERACTIONEXCEL_GETINTERACTIONTYPEBYTES_OFFSET))(nullptr);
		}

		::System::Int64 interactionId(::System::Int32 arg)
		{
			return ((::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDINTERACTIONEXCEL_INTERACTIONID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_InteractionIdLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDINTERACTIONEXCEL_GET_INTERACTIONIDLENGTH_OFFSET))(nullptr);
		}

		::System::Int64 InteractionId(::System::Int32 arg)
		{
			return ((::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDINTERACTIONEXCEL_INTERACTIONID_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetInteractionIdBytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDINTERACTIONEXCEL_GETINTERACTIONIDBYTES_OFFSET))(nullptr);
		}

		::FlatData::FieldConditionClass* get_conditionClass()
		{
			return ((::FlatData::FieldConditionClass*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDINTERACTIONEXCEL_GET_CONDITIONCLASS_OFFSET))(nullptr);
		}

		::FlatData::FieldConditionClass* get_ConditionClass()
		{
			return ((::FlatData::FieldConditionClass*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDINTERACTIONEXCEL_GET_CONDITIONCLASS_OFFSET))(nullptr);
		}

		::System::Int64 conditionClassParameters(::System::Int32 arg)
		{
			return ((::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDINTERACTIONEXCEL_CONDITIONCLASSPARAMETERS_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ConditionClassParametersLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDINTERACTIONEXCEL_GET_CONDITIONCLASSPARAMETERSLENGTH_OFFSET))(nullptr);
		}

		::System::Int64 ConditionClassParameters(::System::Int32 arg)
		{
			return ((::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDINTERACTIONEXCEL_CONDITIONCLASSPARAMETERS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetConditionClassParametersBytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDINTERACTIONEXCEL_GETCONDITIONCLASSPARAMETERSBYTES_OFFSET))(nullptr);
		}

		::System::Boolean get_onceOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDINTERACTIONEXCEL_GET_ONCEONLY_OFFSET))(nullptr);
		}

		::System::Boolean get_OnceOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDINTERACTIONEXCEL_GET_ONCEONLY_OFFSET))(nullptr);
		}

		::System::Int64 conditionIndex(::System::Int32 arg)
		{
			return ((::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDINTERACTIONEXCEL_CONDITIONINDEX_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ConditionIndexLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDINTERACTIONEXCEL_GET_CONDITIONINDEXLENGTH_OFFSET))(nullptr);
		}

		::System::Int64 ConditionIndex(::System::Int32 arg)
		{
			return ((::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDINTERACTIONEXCEL_CONDITIONINDEX_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetConditionIndexBytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDINTERACTIONEXCEL_GETCONDITIONINDEXBYTES_OFFSET))(nullptr);
		}

		::FlatData::FieldConditionType* conditionType(::System::Int32 arg)
		{
			return ((::FlatData::FieldConditionType*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDINTERACTIONEXCEL_CONDITIONTYPE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ConditionTypeLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDINTERACTIONEXCEL_GET_CONDITIONTYPELENGTH_OFFSET))(nullptr);
		}

		::FlatData::FieldConditionType* ConditionType(::System::Int32 arg)
		{
			return ((::FlatData::FieldConditionType*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDINTERACTIONEXCEL_CONDITIONTYPE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetConditionTypeBytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDINTERACTIONEXCEL_GETCONDITIONTYPEBYTES_OFFSET))(nullptr);
		}

		::System::Int64 conditionId(::System::Int32 arg)
		{
			return ((::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDINTERACTIONEXCEL_CONDITIONID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ConditionIdLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDINTERACTIONEXCEL_GET_CONDITIONIDLENGTH_OFFSET))(nullptr);
		}

		::System::Int64 ConditionId(::System::Int32 arg)
		{
			return ((::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDINTERACTIONEXCEL_CONDITIONID_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetConditionIdBytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDINTERACTIONEXCEL_GETCONDITIONIDBYTES_OFFSET))(nullptr);
		}

		::System::Boolean negateCondition(::System::Int32 arg)
		{
			return ((::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDINTERACTIONEXCEL_NEGATECONDITION_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_NegateConditionLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDINTERACTIONEXCEL_GET_NEGATECONDITIONLENGTH_OFFSET))(nullptr);
		}

		::System::Boolean NegateCondition(::System::Int32 arg)
		{
			return ((::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDINTERACTIONEXCEL_NEGATECONDITION_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetNegateConditionBytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDINTERACTIONEXCEL_GETNEGATECONDITIONBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateFieldInteractionExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2, ::System::Int64 arg3, ::System::Int64 arg4, ::System::Boolean arg5, ::FlatBuffers::StringOffset* arg6, ::FlatBuffers::VectorOffset* arg7, ::FlatBuffers::VectorOffset* arg8, ::FlatData::FieldConditionClass* arg9, ::FlatBuffers::VectorOffset* arg10, ::System::Boolean arg11, ::FlatBuffers::VectorOffset* arg12, ::FlatBuffers::VectorOffset* arg13, ::FlatBuffers::VectorOffset* arg14, ::FlatBuffers::VectorOffset* arg15)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Boolean, ::FlatBuffers::StringOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatData::FieldConditionClass*, ::FlatBuffers::VectorOffset*, ::System::Boolean, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDINTERACTIONEXCEL_CREATEFIELDINTERACTIONEXCEL_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15, nullptr);
		}

		::System::Void StartFieldInteractionExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDINTERACTIONEXCEL_STARTFIELDINTERACTIONEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddFieldSeasonId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDINTERACTIONEXCEL_ADDFIELDSEASONID_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddUniqueId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDINTERACTIONEXCEL_ADDUNIQUEID_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddFieldDateId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDINTERACTIONEXCEL_ADDFIELDDATEID_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddShowEmoji(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDINTERACTIONEXCEL_ADDSHOWEMOJI_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddKeywordLocalize(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDINTERACTIONEXCEL_ADDKEYWORDLOCALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddInteractionType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDINTERACTIONEXCEL_ADDINTERACTIONTYPE_OFFSET))(arg, arg2, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateInteractionTypeVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDINTERACTIONEXCEL_CREATEINTERACTIONTYPEVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartInteractionTypeVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDINTERACTIONEXCEL_STARTINTERACTIONTYPEVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddInteractionId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDINTERACTIONEXCEL_ADDINTERACTIONID_OFFSET))(arg, arg2, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateInteractionIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDINTERACTIONEXCEL_CREATEINTERACTIONIDVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartInteractionIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDINTERACTIONEXCEL_STARTINTERACTIONIDVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddConditionClass(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::FieldConditionClass* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::FieldConditionClass*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDINTERACTIONEXCEL_ADDCONDITIONCLASS_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddConditionClassParameters(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDINTERACTIONEXCEL_ADDCONDITIONCLASSPARAMETERS_OFFSET))(arg, arg2, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateConditionClassParametersVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDINTERACTIONEXCEL_CREATECONDITIONCLASSPARAMETERSVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartConditionClassParametersVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDINTERACTIONEXCEL_STARTCONDITIONCLASSPARAMETERSVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddOnceOnly(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDINTERACTIONEXCEL_ADDONCEONLY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddConditionIndex(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDINTERACTIONEXCEL_ADDCONDITIONINDEX_OFFSET))(arg, arg2, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateConditionIndexVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDINTERACTIONEXCEL_CREATECONDITIONINDEXVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartConditionIndexVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDINTERACTIONEXCEL_STARTCONDITIONINDEXVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddConditionType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDINTERACTIONEXCEL_ADDCONDITIONTYPE_OFFSET))(arg, arg2, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateConditionTypeVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDINTERACTIONEXCEL_CREATECONDITIONTYPEVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartConditionTypeVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDINTERACTIONEXCEL_STARTCONDITIONTYPEVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddConditionId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDINTERACTIONEXCEL_ADDCONDITIONID_OFFSET))(arg, arg2, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateConditionIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDINTERACTIONEXCEL_CREATECONDITIONIDVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartConditionIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDINTERACTIONEXCEL_STARTCONDITIONIDVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddNegateCondition(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDINTERACTIONEXCEL_ADDNEGATECONDITION_OFFSET))(arg, arg2, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateNegateConditionVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDINTERACTIONEXCEL_CREATENEGATECONDITIONVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartNegateConditionVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDINTERACTIONEXCEL_STARTNEGATECONDITIONVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* EndFieldInteractionExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDINTERACTIONEXCEL_ENDFIELDINTERACTIONEXCEL_OFFSET))(arg, nullptr);
		}

	};
}

