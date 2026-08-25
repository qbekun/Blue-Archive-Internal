#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class ScenarioBGNameExcel; }
namespace FlatData { class ProductionStep; }
namespace FlatData { class ScenarioBGType; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }

#define MX_DATA_EXCEL_SCENARIOBGNAMEEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1C56350)
#define MX_DATA_EXCEL_SCENARIOBGNAMEEXCEL_GETROOTASSCENARIOBGNAMEEXCEL_OFFSET UNITYSDK_OFFSET(0x1C56360)
#define MX_DATA_EXCEL_SCENARIOBGNAMEEXCEL_GETROOTASSCENARIOBGNAMEEXCEL_OFFSET UNITYSDK_OFFSET(0x1C563C0)
#define MX_DATA_EXCEL_SCENARIOBGNAMEEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1C56450)
#define MX_DATA_EXCEL_SCENARIOBGNAMEEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1C56420)
#define MX_DATA_EXCEL_SCENARIOBGNAMEEXCEL_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1C56470)
#define MX_DATA_EXCEL_SCENARIOBGNAMEEXCEL_GET_PRODUCTIONSTEP_OFFSET UNITYSDK_OFFSET(0x1C564C0)
#define MX_DATA_EXCEL_SCENARIOBGNAMEEXCEL_GET_BGFILENAME_OFFSET UNITYSDK_OFFSET(0x1C56510)
#define MX_DATA_EXCEL_SCENARIOBGNAMEEXCEL_GETBGFILENAMEBYTES_OFFSET UNITYSDK_OFFSET(0x1C56550)
#define MX_DATA_EXCEL_SCENARIOBGNAMEEXCEL_GET_BGTYPE_OFFSET UNITYSDK_OFFSET(0x1C56570)
#define MX_DATA_EXCEL_SCENARIOBGNAMEEXCEL_GET_ANIMATIONROOT_OFFSET UNITYSDK_OFFSET(0x1C565C0)
#define MX_DATA_EXCEL_SCENARIOBGNAMEEXCEL_GETANIMATIONROOTBYTES_OFFSET UNITYSDK_OFFSET(0x1C56600)
#define MX_DATA_EXCEL_SCENARIOBGNAMEEXCEL_GET_ANIMATIONNAME_OFFSET UNITYSDK_OFFSET(0x1C56620)
#define MX_DATA_EXCEL_SCENARIOBGNAMEEXCEL_GETANIMATIONNAMEBYTES_OFFSET UNITYSDK_OFFSET(0x1C56660)
#define MX_DATA_EXCEL_SCENARIOBGNAMEEXCEL_GET_SPINESCALE_OFFSET UNITYSDK_OFFSET(0x1C56680)
#define MX_DATA_EXCEL_SCENARIOBGNAMEEXCEL_GET_SPINELOCALPOSX_OFFSET UNITYSDK_OFFSET(0x1C566D0)
#define MX_DATA_EXCEL_SCENARIOBGNAMEEXCEL_GET_SPINELOCALPOSY_OFFSET UNITYSDK_OFFSET(0x1C56720)
#define MX_DATA_EXCEL_SCENARIOBGNAMEEXCEL_CREATESCENARIOBGNAMEEXCEL_OFFSET UNITYSDK_OFFSET(0x1C56770)
#define MX_DATA_EXCEL_SCENARIOBGNAMEEXCEL_STARTSCENARIOBGNAMEEXCEL_OFFSET UNITYSDK_OFFSET(0x1C56B20)
#define MX_DATA_EXCEL_SCENARIOBGNAMEEXCEL_ADDNAME_OFFSET UNITYSDK_OFFSET(0x1C56AA0)
#define MX_DATA_EXCEL_SCENARIOBGNAMEEXCEL_ADDPRODUCTIONSTEP_OFFSET UNITYSDK_OFFSET(0x1C56A70)
#define MX_DATA_EXCEL_SCENARIOBGNAMEEXCEL_ADDBGFILENAME_OFFSET UNITYSDK_OFFSET(0x1C56A40)
#define MX_DATA_EXCEL_SCENARIOBGNAMEEXCEL_ADDBGTYPE_OFFSET UNITYSDK_OFFSET(0x1C56A10)
#define MX_DATA_EXCEL_SCENARIOBGNAMEEXCEL_ADDANIMATIONROOT_OFFSET UNITYSDK_OFFSET(0x1C569E0)
#define MX_DATA_EXCEL_SCENARIOBGNAMEEXCEL_ADDANIMATIONNAME_OFFSET UNITYSDK_OFFSET(0x1C569B0)
#define MX_DATA_EXCEL_SCENARIOBGNAMEEXCEL_ADDSPINESCALE_OFFSET UNITYSDK_OFFSET(0x1C56980)
#define MX_DATA_EXCEL_SCENARIOBGNAMEEXCEL_ADDSPINELOCALPOSX_OFFSET UNITYSDK_OFFSET(0x1C56950)
#define MX_DATA_EXCEL_SCENARIOBGNAMEEXCEL_ADDSPINELOCALPOSY_OFFSET UNITYSDK_OFFSET(0x1C56920)
#define MX_DATA_EXCEL_SCENARIOBGNAMEEXCEL_ENDSCENARIOBGNAMEEXCEL_OFFSET UNITYSDK_OFFSET(0x1C56AD0)
#define MX_DATA_EXCEL_SCENARIOBGNAMEEXCEL_FINISHSCENARIOBGNAMEEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C56B40)
#define MX_DATA_EXCEL_SCENARIOBGNAMEEXCEL_FINISHSIZEPREFIXEDSCENARIOBGNAMEEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C56B60)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ScenarioBGNameExcel_TypeDefinitionIndex = 19241;

	class ScenarioBGNameExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOBGNAMEEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::ScenarioBGNameExcel* GetRootAsScenarioBGNameExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::ScenarioBGNameExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOBGNAMEEXCEL_GETROOTASSCENARIOBGNAMEEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::ScenarioBGNameExcel* GetRootAsScenarioBGNameExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::ScenarioBGNameExcel* arg)
		{
			return (return (::MX::Data::Excel::ScenarioBGNameExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::ScenarioBGNameExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOBGNAMEEXCEL_GETROOTASSCENARIOBGNAMEEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOBGNAMEEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::ScenarioBGNameExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::ScenarioBGNameExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOBGNAMEEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::UInt32 get_Name()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOBGNAMEEXCEL_GET_NAME_OFFSET))(nullptr);
		}

		::FlatData::ProductionStep* get_ProductionStep()
		{
			return (return (::FlatData::ProductionStep*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOBGNAMEEXCEL_GET_PRODUCTIONSTEP_OFFSET))(nullptr);
		}

		::System::String* get_BGFileName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOBGNAMEEXCEL_GET_BGFILENAME_OFFSET))(nullptr);
		}

		Il2CppObject* GetBGFileNameBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOBGNAMEEXCEL_GETBGFILENAMEBYTES_OFFSET))(nullptr);
		}

		::FlatData::ScenarioBGType* get_BGType()
		{
			return (return (::FlatData::ScenarioBGType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOBGNAMEEXCEL_GET_BGTYPE_OFFSET))(nullptr);
		}

		::System::String* get_AnimationRoot()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOBGNAMEEXCEL_GET_ANIMATIONROOT_OFFSET))(nullptr);
		}

		Il2CppObject* GetAnimationRootBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOBGNAMEEXCEL_GETANIMATIONROOTBYTES_OFFSET))(nullptr);
		}

		::System::String* get_AnimationName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOBGNAMEEXCEL_GET_ANIMATIONNAME_OFFSET))(nullptr);
		}

		Il2CppObject* GetAnimationNameBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOBGNAMEEXCEL_GETANIMATIONNAMEBYTES_OFFSET))(nullptr);
		}

		::System::Single get_SpineScale()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOBGNAMEEXCEL_GET_SPINESCALE_OFFSET))(nullptr);
		}

		::System::Int32 get_SpineLocalPosX()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOBGNAMEEXCEL_GET_SPINELOCALPOSX_OFFSET))(nullptr);
		}

		::System::Int32 get_SpineLocalPosY()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOBGNAMEEXCEL_GET_SPINELOCALPOSY_OFFSET))(nullptr);
		}

		Il2CppObject* CreateScenarioBGNameExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg, ::FlatData::ProductionStep* arg, ::FlatBuffers::StringOffset* arg, ::FlatData::ScenarioBGType* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::System::Single arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::FlatData::ProductionStep*, ::FlatBuffers::StringOffset*, ::FlatData::ScenarioBGType*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::System::Single, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOBGNAMEEXCEL_CREATESCENARIOBGNAMEEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartScenarioBGNameExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOBGNAMEEXCEL_STARTSCENARIOBGNAMEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddName(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOBGNAMEEXCEL_ADDNAME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddProductionStep(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ProductionStep* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ProductionStep*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOBGNAMEEXCEL_ADDPRODUCTIONSTEP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddBGFileName(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOBGNAMEEXCEL_ADDBGFILENAME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddBGType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ScenarioBGType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ScenarioBGType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOBGNAMEEXCEL_ADDBGTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddAnimationRoot(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOBGNAMEEXCEL_ADDANIMATIONROOT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddAnimationName(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOBGNAMEEXCEL_ADDANIMATIONNAME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddSpineScale(::FlatBuffers::FlatBufferBuilder* arg, ::System::Single arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOBGNAMEEXCEL_ADDSPINESCALE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddSpineLocalPosX(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOBGNAMEEXCEL_ADDSPINELOCALPOSX_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddSpineLocalPosY(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOBGNAMEEXCEL_ADDSPINELOCALPOSY_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndScenarioBGNameExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOBGNAMEEXCEL_ENDSCENARIOBGNAMEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishScenarioBGNameExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOBGNAMEEXCEL_FINISHSCENARIOBGNAMEEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedScenarioBGNameExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOBGNAMEEXCEL_FINISHSIZEPREFIXEDSCENARIOBGNAMEEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

