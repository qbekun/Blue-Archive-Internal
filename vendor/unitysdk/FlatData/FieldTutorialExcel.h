#pragma once
#include "../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace FlatData { class FieldTutorialExcel; }
namespace FlatData { class FieldTutorialType; }
namespace FlatData { class FieldConditionType; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }

#define FLATDATA_FIELDTUTORIALEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0xD47C20)
#define FLATDATA_FIELDTUTORIALEXCEL_GETROOTASFIELDTUTORIALEXCEL_OFFSET UNITYSDK_OFFSET(0xD47C30)
#define FLATDATA_FIELDTUTORIALEXCEL_GETROOTASFIELDTUTORIALEXCEL_OFFSET UNITYSDK_OFFSET(0xD47C90)
#define FLATDATA_FIELDTUTORIALEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0xD47CF0)
#define FLATDATA_FIELDTUTORIALEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0xD47940)
#define FLATDATA_FIELDTUTORIALEXCEL_GET_SEASONID_OFFSET UNITYSDK_OFFSET(0xD47D10)
#define FLATDATA_FIELDTUTORIALEXCEL_GET_SEASONID_OFFSET UNITYSDK_OFFSET(0xD47D60)
#define FLATDATA_FIELDTUTORIALEXCEL_TUTORIALTYPE_OFFSET UNITYSDK_OFFSET(0xD47DE0)
#define FLATDATA_FIELDTUTORIALEXCEL_GET_TUTORIALTYPELENGTH_OFFSET UNITYSDK_OFFSET(0xD47E40)
#define FLATDATA_FIELDTUTORIALEXCEL_TUTORIALTYPE_OFFSET UNITYSDK_OFFSET(0xD47E80)
#define FLATDATA_FIELDTUTORIALEXCEL_GETTUTORIALTYPEBYTES_OFFSET UNITYSDK_OFFSET(0xD47F10)
#define FLATDATA_FIELDTUTORIALEXCEL_CONDITIONTYPE_OFFSET UNITYSDK_OFFSET(0xD47F30)
#define FLATDATA_FIELDTUTORIALEXCEL_GET_CONDITIONTYPELENGTH_OFFSET UNITYSDK_OFFSET(0xD47F90)
#define FLATDATA_FIELDTUTORIALEXCEL_CONDITIONTYPE_OFFSET UNITYSDK_OFFSET(0xD47FD0)
#define FLATDATA_FIELDTUTORIALEXCEL_GETCONDITIONTYPEBYTES_OFFSET UNITYSDK_OFFSET(0xD48060)
#define FLATDATA_FIELDTUTORIALEXCEL_CONDITIONID_OFFSET UNITYSDK_OFFSET(0xD48080)
#define FLATDATA_FIELDTUTORIALEXCEL_GET_CONDITIONIDLENGTH_OFFSET UNITYSDK_OFFSET(0xD480E0)
#define FLATDATA_FIELDTUTORIALEXCEL_CONDITIONID_OFFSET UNITYSDK_OFFSET(0xD48120)
#define FLATDATA_FIELDTUTORIALEXCEL_GETCONDITIONIDBYTES_OFFSET UNITYSDK_OFFSET(0xD481B0)
#define FLATDATA_FIELDTUTORIALEXCEL_CREATEFIELDTUTORIALEXCEL_OFFSET UNITYSDK_OFFSET(0xD481D0)
#define FLATDATA_FIELDTUTORIALEXCEL_STARTFIELDTUTORIALEXCEL_OFFSET UNITYSDK_OFFSET(0xD483C0)
#define FLATDATA_FIELDTUTORIALEXCEL_ADDSEASONID_OFFSET UNITYSDK_OFFSET(0xD482B0)
#define FLATDATA_FIELDTUTORIALEXCEL_ADDTUTORIALTYPE_OFFSET UNITYSDK_OFFSET(0xD48340)
#define FLATDATA_FIELDTUTORIALEXCEL_CREATETUTORIALTYPEVECTOR_OFFSET UNITYSDK_OFFSET(0xD483E0)
#define FLATDATA_FIELDTUTORIALEXCEL_STARTTUTORIALTYPEVECTOR_OFFSET UNITYSDK_OFFSET(0xD48470)
#define FLATDATA_FIELDTUTORIALEXCEL_ADDCONDITIONTYPE_OFFSET UNITYSDK_OFFSET(0xD48310)
#define FLATDATA_FIELDTUTORIALEXCEL_CREATECONDITIONTYPEVECTOR_OFFSET UNITYSDK_OFFSET(0xD484B0)
#define FLATDATA_FIELDTUTORIALEXCEL_STARTCONDITIONTYPEVECTOR_OFFSET UNITYSDK_OFFSET(0xD48540)
#define FLATDATA_FIELDTUTORIALEXCEL_ADDCONDITIONID_OFFSET UNITYSDK_OFFSET(0xD482E0)
#define FLATDATA_FIELDTUTORIALEXCEL_CREATECONDITIONIDVECTOR_OFFSET UNITYSDK_OFFSET(0xD48580)
#define FLATDATA_FIELDTUTORIALEXCEL_STARTCONDITIONIDVECTOR_OFFSET UNITYSDK_OFFSET(0xD48610)
#define FLATDATA_FIELDTUTORIALEXCEL_ENDFIELDTUTORIALEXCEL_OFFSET UNITYSDK_OFFSET(0xD48370)

namespace FlatData
{
	inline static constexpr unsigned int FieldTutorialExcel_TypeDefinitionIndex = 9289;

	class FieldTutorialExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10
		::Il2CppArray<::System::Object*>* TableKey; // 0x0

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDTUTORIALEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::FlatData::FieldTutorialExcel* GetRootAsFieldTutorialExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return ((::FlatData::FieldTutorialExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDTUTORIALEXCEL_GETROOTASFIELDTUTORIALEXCEL_OFFSET))(arg, nullptr);
		}

		::FlatData::FieldTutorialExcel* GetRootAsFieldTutorialExcel(::FlatBuffers::ByteBuffer* arg, ::FlatData::FieldTutorialExcel* arg2)
		{
			return ((::FlatData::FieldTutorialExcel*(*)(::FlatBuffers::ByteBuffer*, ::FlatData::FieldTutorialExcel*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDTUTORIALEXCEL_GETROOTASFIELDTUTORIALEXCEL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDTUTORIALEXCEL___INIT_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::FieldTutorialExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			return ((::FlatData::FieldTutorialExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDTUTORIALEXCEL___ASSIGN_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int64 get_seasonId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDTUTORIALEXCEL_GET_SEASONID_OFFSET))(nullptr);
		}

		::System::Int64 get_SeasonId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDTUTORIALEXCEL_GET_SEASONID_OFFSET))(nullptr);
		}

		::FlatData::FieldTutorialType* tutorialType(::System::Int32 arg)
		{
			return ((::FlatData::FieldTutorialType*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDTUTORIALEXCEL_TUTORIALTYPE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_TutorialTypeLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDTUTORIALEXCEL_GET_TUTORIALTYPELENGTH_OFFSET))(nullptr);
		}

		::FlatData::FieldTutorialType* TutorialType(::System::Int32 arg)
		{
			return ((::FlatData::FieldTutorialType*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDTUTORIALEXCEL_TUTORIALTYPE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetTutorialTypeBytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDTUTORIALEXCEL_GETTUTORIALTYPEBYTES_OFFSET))(nullptr);
		}

		::FlatData::FieldConditionType* conditionType(::System::Int32 arg)
		{
			return ((::FlatData::FieldConditionType*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDTUTORIALEXCEL_CONDITIONTYPE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ConditionTypeLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDTUTORIALEXCEL_GET_CONDITIONTYPELENGTH_OFFSET))(nullptr);
		}

		::FlatData::FieldConditionType* ConditionType(::System::Int32 arg)
		{
			return ((::FlatData::FieldConditionType*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDTUTORIALEXCEL_CONDITIONTYPE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetConditionTypeBytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDTUTORIALEXCEL_GETCONDITIONTYPEBYTES_OFFSET))(nullptr);
		}

		::System::Int64 conditionId(::System::Int32 arg)
		{
			return ((::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDTUTORIALEXCEL_CONDITIONID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ConditionIdLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDTUTORIALEXCEL_GET_CONDITIONIDLENGTH_OFFSET))(nullptr);
		}

		::System::Int64 ConditionId(::System::Int32 arg)
		{
			return ((::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDTUTORIALEXCEL_CONDITIONID_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetConditionIdBytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDTUTORIALEXCEL_GETCONDITIONIDBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateFieldTutorialExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2, ::FlatBuffers::VectorOffset* arg3, ::FlatBuffers::VectorOffset* arg4, ::FlatBuffers::VectorOffset* arg5)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDTUTORIALEXCEL_CREATEFIELDTUTORIALEXCEL_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Void StartFieldTutorialExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDTUTORIALEXCEL_STARTFIELDTUTORIALEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddSeasonId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDTUTORIALEXCEL_ADDSEASONID_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddTutorialType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDTUTORIALEXCEL_ADDTUTORIALTYPE_OFFSET))(arg, arg2, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateTutorialTypeVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDTUTORIALEXCEL_CREATETUTORIALTYPEVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartTutorialTypeVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDTUTORIALEXCEL_STARTTUTORIALTYPEVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddConditionType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDTUTORIALEXCEL_ADDCONDITIONTYPE_OFFSET))(arg, arg2, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateConditionTypeVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDTUTORIALEXCEL_CREATECONDITIONTYPEVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartConditionTypeVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDTUTORIALEXCEL_STARTCONDITIONTYPEVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddConditionId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDTUTORIALEXCEL_ADDCONDITIONID_OFFSET))(arg, arg2, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateConditionIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDTUTORIALEXCEL_CREATECONDITIONIDVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartConditionIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDTUTORIALEXCEL_STARTCONDITIONIDVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* EndFieldTutorialExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDTUTORIALEXCEL_ENDFIELDTUTORIALEXCEL_OFFSET))(arg, nullptr);
		}

	};
}

