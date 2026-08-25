#pragma once
#include "../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace FlatData { class FieldCurtainCallFreeModeExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }

#define FLATDATA_FIELDCURTAINCALLFREEMODEEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0xD38F40)
#define FLATDATA_FIELDCURTAINCALLFREEMODEEXCEL_GETROOTASFIELDCURTAINCALLFREEMODEEXCEL_OFFSET UNITYSDK_OFFSET(0xD38F50)
#define FLATDATA_FIELDCURTAINCALLFREEMODEEXCEL_GETROOTASFIELDCURTAINCALLFREEMODEEXCEL_OFFSET UNITYSDK_OFFSET(0xD38FB0)
#define FLATDATA_FIELDCURTAINCALLFREEMODEEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0xD39010)
#define FLATDATA_FIELDCURTAINCALLFREEMODEEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0xD38C60)
#define FLATDATA_FIELDCURTAINCALLFREEMODEEXCEL_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0xD39030)
#define FLATDATA_FIELDCURTAINCALLFREEMODEEXCEL_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0xD39080)
#define FLATDATA_FIELDCURTAINCALLFREEMODEEXCEL_GET_OPENDATE_OFFSET UNITYSDK_OFFSET(0xD39100)
#define FLATDATA_FIELDCURTAINCALLFREEMODEEXCEL_GET_OPENDATE_OFFSET UNITYSDK_OFFSET(0xD39150)
#define FLATDATA_FIELDCURTAINCALLFREEMODEEXCEL_GET_SETFIELDDATEID_OFFSET UNITYSDK_OFFSET(0xD391D0)
#define FLATDATA_FIELDCURTAINCALLFREEMODEEXCEL_GET_SETFIELDDATEID_OFFSET UNITYSDK_OFFSET(0xD39220)
#define FLATDATA_FIELDCURTAINCALLFREEMODEEXCEL_GET_SETFIELDQUESTOPENDATE_OFFSET UNITYSDK_OFFSET(0xD392A0)
#define FLATDATA_FIELDCURTAINCALLFREEMODEEXCEL_GET_SETFIELDQUESTOPENDATE_OFFSET UNITYSDK_OFFSET(0xD392F0)
#define FLATDATA_FIELDCURTAINCALLFREEMODEEXCEL_CREATEFIELDCURTAINCALLFREEMODEEXCEL_OFFSET UNITYSDK_OFFSET(0xD39370)
#define FLATDATA_FIELDCURTAINCALLFREEMODEEXCEL_STARTFIELDCURTAINCALLFREEMODEEXCEL_OFFSET UNITYSDK_OFFSET(0xD39560)
#define FLATDATA_FIELDCURTAINCALLFREEMODEEXCEL_ADDUNIQUEID_OFFSET UNITYSDK_OFFSET(0xD394E0)
#define FLATDATA_FIELDCURTAINCALLFREEMODEEXCEL_ADDOPENDATE_OFFSET UNITYSDK_OFFSET(0xD394B0)
#define FLATDATA_FIELDCURTAINCALLFREEMODEEXCEL_ADDSETFIELDDATEID_OFFSET UNITYSDK_OFFSET(0xD39480)
#define FLATDATA_FIELDCURTAINCALLFREEMODEEXCEL_ADDSETFIELDQUESTOPENDATE_OFFSET UNITYSDK_OFFSET(0xD39450)
#define FLATDATA_FIELDCURTAINCALLFREEMODEEXCEL_ENDFIELDCURTAINCALLFREEMODEEXCEL_OFFSET UNITYSDK_OFFSET(0xD39510)

namespace FlatData
{
	inline static constexpr unsigned int FieldCurtainCallFreeModeExcel_TypeDefinitionIndex = 9263;

	class FieldCurtainCallFreeModeExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10
		::Il2CppArray<::System::Object*>* TableKey; // 0x0

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDCURTAINCALLFREEMODEEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::FlatData::FieldCurtainCallFreeModeExcel* GetRootAsFieldCurtainCallFreeModeExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return ((::FlatData::FieldCurtainCallFreeModeExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDCURTAINCALLFREEMODEEXCEL_GETROOTASFIELDCURTAINCALLFREEMODEEXCEL_OFFSET))(arg, nullptr);
		}

		::FlatData::FieldCurtainCallFreeModeExcel* GetRootAsFieldCurtainCallFreeModeExcel(::FlatBuffers::ByteBuffer* arg, ::FlatData::FieldCurtainCallFreeModeExcel* arg2)
		{
			return ((::FlatData::FieldCurtainCallFreeModeExcel*(*)(::FlatBuffers::ByteBuffer*, ::FlatData::FieldCurtainCallFreeModeExcel*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDCURTAINCALLFREEMODEEXCEL_GETROOTASFIELDCURTAINCALLFREEMODEEXCEL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDCURTAINCALLFREEMODEEXCEL___INIT_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::FieldCurtainCallFreeModeExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			return ((::FlatData::FieldCurtainCallFreeModeExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDCURTAINCALLFREEMODEEXCEL___ASSIGN_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int64 get_uniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDCURTAINCALLFREEMODEEXCEL_GET_UNIQUEID_OFFSET))(nullptr);
		}

		::System::Int64 get_UniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDCURTAINCALLFREEMODEEXCEL_GET_UNIQUEID_OFFSET))(nullptr);
		}

		::System::Int64 get_openDate()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDCURTAINCALLFREEMODEEXCEL_GET_OPENDATE_OFFSET))(nullptr);
		}

		::System::Int64 get_OpenDate()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDCURTAINCALLFREEMODEEXCEL_GET_OPENDATE_OFFSET))(nullptr);
		}

		::System::Int64 get_setFieldDateID()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDCURTAINCALLFREEMODEEXCEL_GET_SETFIELDDATEID_OFFSET))(nullptr);
		}

		::System::Int64 get_SetFieldDateID()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDCURTAINCALLFREEMODEEXCEL_GET_SETFIELDDATEID_OFFSET))(nullptr);
		}

		::System::Int64 get_setFieldQuestOpenDate()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDCURTAINCALLFREEMODEEXCEL_GET_SETFIELDQUESTOPENDATE_OFFSET))(nullptr);
		}

		::System::Int64 get_SetFieldQuestOpenDate()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDCURTAINCALLFREEMODEEXCEL_GET_SETFIELDQUESTOPENDATE_OFFSET))(nullptr);
		}

		Il2CppObject* CreateFieldCurtainCallFreeModeExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2, ::System::Int64 arg3, ::System::Int64 arg4, ::System::Int64 arg5)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDCURTAINCALLFREEMODEEXCEL_CREATEFIELDCURTAINCALLFREEMODEEXCEL_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Void StartFieldCurtainCallFreeModeExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDCURTAINCALLFREEMODEEXCEL_STARTFIELDCURTAINCALLFREEMODEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddUniqueId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDCURTAINCALLFREEMODEEXCEL_ADDUNIQUEID_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddOpenDate(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDCURTAINCALLFREEMODEEXCEL_ADDOPENDATE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddSetFieldDateID(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDCURTAINCALLFREEMODEEXCEL_ADDSETFIELDDATEID_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddSetFieldQuestOpenDate(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDCURTAINCALLFREEMODEEXCEL_ADDSETFIELDQUESTOPENDATE_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* EndFieldCurtainCallFreeModeExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDCURTAINCALLFREEMODEEXCEL_ENDFIELDCURTAINCALLFREEMODEEXCEL_OFFSET))(arg, nullptr);
		}

	};
}

