#pragma once
#include "../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace FlatData { class DefaultFurnitureExcel; }
namespace FlatData { class FurnitureLocation; }
namespace FlatBuffers { class FlatBufferBuilder; }

#define FLATDATA_DEFAULTFURNITUREEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0xD31800)
#define FLATDATA_DEFAULTFURNITUREEXCEL_GETROOTASDEFAULTFURNITUREEXCEL_OFFSET UNITYSDK_OFFSET(0xD31810)
#define FLATDATA_DEFAULTFURNITUREEXCEL_GETROOTASDEFAULTFURNITUREEXCEL_OFFSET UNITYSDK_OFFSET(0xD31870)
#define FLATDATA_DEFAULTFURNITUREEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0xD318D0)
#define FLATDATA_DEFAULTFURNITUREEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0xD31520)
#define FLATDATA_DEFAULTFURNITUREEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0xD318F0)
#define FLATDATA_DEFAULTFURNITUREEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0xD31940)
#define FLATDATA_DEFAULTFURNITUREEXCEL_GET_LOCATION_OFFSET UNITYSDK_OFFSET(0xD319C0)
#define FLATDATA_DEFAULTFURNITUREEXCEL_GET_LOCATION_OFFSET UNITYSDK_OFFSET(0xD31A10)
#define FLATDATA_DEFAULTFURNITUREEXCEL_GET_POSITIONX_OFFSET UNITYSDK_OFFSET(0xD31A90)
#define FLATDATA_DEFAULTFURNITUREEXCEL_GET_POSITIONX_OFFSET UNITYSDK_OFFSET(0xD31AE0)
#define FLATDATA_DEFAULTFURNITUREEXCEL_GET_POSITIONY_OFFSET UNITYSDK_OFFSET(0xD31B60)
#define FLATDATA_DEFAULTFURNITUREEXCEL_GET_POSITIONY_OFFSET UNITYSDK_OFFSET(0xD31BB0)
#define FLATDATA_DEFAULTFURNITUREEXCEL_GET_ROTATION_OFFSET UNITYSDK_OFFSET(0xD31C30)
#define FLATDATA_DEFAULTFURNITUREEXCEL_GET_ROTATION_OFFSET UNITYSDK_OFFSET(0xD31C80)
#define FLATDATA_DEFAULTFURNITUREEXCEL_CREATEDEFAULTFURNITUREEXCEL_OFFSET UNITYSDK_OFFSET(0xD31D00)
#define FLATDATA_DEFAULTFURNITUREEXCEL_STARTDEFAULTFURNITUREEXCEL_OFFSET UNITYSDK_OFFSET(0xD31F60)
#define FLATDATA_DEFAULTFURNITUREEXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0xD31E20)
#define FLATDATA_DEFAULTFURNITUREEXCEL_ADDLOCATION_OFFSET UNITYSDK_OFFSET(0xD31EE0)
#define FLATDATA_DEFAULTFURNITUREEXCEL_ADDPOSITIONX_OFFSET UNITYSDK_OFFSET(0xD31EB0)
#define FLATDATA_DEFAULTFURNITUREEXCEL_ADDPOSITIONY_OFFSET UNITYSDK_OFFSET(0xD31E80)
#define FLATDATA_DEFAULTFURNITUREEXCEL_ADDROTATION_OFFSET UNITYSDK_OFFSET(0xD31E50)
#define FLATDATA_DEFAULTFURNITUREEXCEL_ENDDEFAULTFURNITUREEXCEL_OFFSET UNITYSDK_OFFSET(0xD31F10)

namespace FlatData
{
	inline static constexpr unsigned int DefaultFurnitureExcel_TypeDefinitionIndex = 9247;

	class DefaultFurnitureExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10
		::Il2CppArray<::System::Object*>* TableKey; // 0x0

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTFURNITUREEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::FlatData::DefaultFurnitureExcel* GetRootAsDefaultFurnitureExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return ((::FlatData::DefaultFurnitureExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTFURNITUREEXCEL_GETROOTASDEFAULTFURNITUREEXCEL_OFFSET))(arg, nullptr);
		}

		::FlatData::DefaultFurnitureExcel* GetRootAsDefaultFurnitureExcel(::FlatBuffers::ByteBuffer* arg, ::FlatData::DefaultFurnitureExcel* arg2)
		{
			return ((::FlatData::DefaultFurnitureExcel*(*)(::FlatBuffers::ByteBuffer*, ::FlatData::DefaultFurnitureExcel*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTFURNITUREEXCEL_GETROOTASDEFAULTFURNITUREEXCEL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTFURNITUREEXCEL___INIT_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::DefaultFurnitureExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			return ((::FlatData::DefaultFurnitureExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTFURNITUREEXCEL___ASSIGN_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int64 get_id()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTFURNITUREEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::System::Int64 get_Id()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTFURNITUREEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::FlatData::FurnitureLocation* get_location()
		{
			return ((::FlatData::FurnitureLocation*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTFURNITUREEXCEL_GET_LOCATION_OFFSET))(nullptr);
		}

		::FlatData::FurnitureLocation* get_Location()
		{
			return ((::FlatData::FurnitureLocation*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTFURNITUREEXCEL_GET_LOCATION_OFFSET))(nullptr);
		}

		::System::Single get_positionX()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTFURNITUREEXCEL_GET_POSITIONX_OFFSET))(nullptr);
		}

		::System::Single get_PositionX()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTFURNITUREEXCEL_GET_POSITIONX_OFFSET))(nullptr);
		}

		::System::Single get_positionY()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTFURNITUREEXCEL_GET_POSITIONY_OFFSET))(nullptr);
		}

		::System::Single get_PositionY()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTFURNITUREEXCEL_GET_POSITIONY_OFFSET))(nullptr);
		}

		::System::Single get_rotation()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTFURNITUREEXCEL_GET_ROTATION_OFFSET))(nullptr);
		}

		::System::Single get_Rotation()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTFURNITUREEXCEL_GET_ROTATION_OFFSET))(nullptr);
		}

		Il2CppObject* CreateDefaultFurnitureExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2, ::FlatData::FurnitureLocation* arg3, ::System::Single arg4, ::System::Single arg5, ::System::Single arg6)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::FlatData::FurnitureLocation*, ::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTFURNITUREEXCEL_CREATEDEFAULTFURNITUREEXCEL_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

		::System::Void StartDefaultFurnitureExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTFURNITUREEXCEL_STARTDEFAULTFURNITUREEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTFURNITUREEXCEL_ADDID_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddLocation(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::FurnitureLocation* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::FurnitureLocation*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTFURNITUREEXCEL_ADDLOCATION_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddPositionX(::FlatBuffers::FlatBufferBuilder* arg, ::System::Single arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTFURNITUREEXCEL_ADDPOSITIONX_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddPositionY(::FlatBuffers::FlatBufferBuilder* arg, ::System::Single arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTFURNITUREEXCEL_ADDPOSITIONY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddRotation(::FlatBuffers::FlatBufferBuilder* arg, ::System::Single arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTFURNITUREEXCEL_ADDROTATION_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* EndDefaultFurnitureExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_DEFAULTFURNITUREEXCEL_ENDDEFAULTFURNITUREEXCEL_OFFSET))(arg, nullptr);
		}

	};
}

