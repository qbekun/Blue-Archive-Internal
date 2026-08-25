#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class ScenarioCharacterNameExcel; }
namespace FlatData { class ProductionStep; }
namespace FlatData { class ScenarioCharacterShapes; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }

#define MX_DATA_EXCEL_SCENARIOCHARACTERNAMEEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1C59CC0)
#define MX_DATA_EXCEL_SCENARIOCHARACTERNAMEEXCEL_GETROOTASSCENARIOCHARACTERNAMEEXCEL_OFFSET UNITYSDK_OFFSET(0x1C59CD0)
#define MX_DATA_EXCEL_SCENARIOCHARACTERNAMEEXCEL_GETROOTASSCENARIOCHARACTERNAMEEXCEL_OFFSET UNITYSDK_OFFSET(0x1C59D30)
#define MX_DATA_EXCEL_SCENARIOCHARACTERNAMEEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1C59DC0)
#define MX_DATA_EXCEL_SCENARIOCHARACTERNAMEEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1C59D90)
#define MX_DATA_EXCEL_SCENARIOCHARACTERNAMEEXCEL_GET_CHARACTERNAME_OFFSET UNITYSDK_OFFSET(0x1C59DE0)
#define MX_DATA_EXCEL_SCENARIOCHARACTERNAMEEXCEL_GET_PRODUCTIONSTEP_OFFSET UNITYSDK_OFFSET(0x1C59E30)
#define MX_DATA_EXCEL_SCENARIOCHARACTERNAMEEXCEL_GET_NAMEKR_OFFSET UNITYSDK_OFFSET(0x1C59E80)
#define MX_DATA_EXCEL_SCENARIOCHARACTERNAMEEXCEL_GETNAMEKRBYTES_OFFSET UNITYSDK_OFFSET(0x1C59EC0)
#define MX_DATA_EXCEL_SCENARIOCHARACTERNAMEEXCEL_GET_NICKNAMEKR_OFFSET UNITYSDK_OFFSET(0x1C59EE0)
#define MX_DATA_EXCEL_SCENARIOCHARACTERNAMEEXCEL_GETNICKNAMEKRBYTES_OFFSET UNITYSDK_OFFSET(0x1C59F20)
#define MX_DATA_EXCEL_SCENARIOCHARACTERNAMEEXCEL_GET_NAMEJP_OFFSET UNITYSDK_OFFSET(0x1C59F40)
#define MX_DATA_EXCEL_SCENARIOCHARACTERNAMEEXCEL_GETNAMEJPBYTES_OFFSET UNITYSDK_OFFSET(0x1C59F80)
#define MX_DATA_EXCEL_SCENARIOCHARACTERNAMEEXCEL_GET_NICKNAMEJP_OFFSET UNITYSDK_OFFSET(0x1C59FA0)
#define MX_DATA_EXCEL_SCENARIOCHARACTERNAMEEXCEL_GETNICKNAMEJPBYTES_OFFSET UNITYSDK_OFFSET(0x1C59FE0)
#define MX_DATA_EXCEL_SCENARIOCHARACTERNAMEEXCEL_GET_NAMETH_OFFSET UNITYSDK_OFFSET(0x1C5A000)
#define MX_DATA_EXCEL_SCENARIOCHARACTERNAMEEXCEL_GETNAMETHBYTES_OFFSET UNITYSDK_OFFSET(0x1C5A040)
#define MX_DATA_EXCEL_SCENARIOCHARACTERNAMEEXCEL_GET_NICKNAMETH_OFFSET UNITYSDK_OFFSET(0x1C5A060)
#define MX_DATA_EXCEL_SCENARIOCHARACTERNAMEEXCEL_GETNICKNAMETHBYTES_OFFSET UNITYSDK_OFFSET(0x1C5A0A0)
#define MX_DATA_EXCEL_SCENARIOCHARACTERNAMEEXCEL_GET_NAMETW_OFFSET UNITYSDK_OFFSET(0x1C5A0C0)
#define MX_DATA_EXCEL_SCENARIOCHARACTERNAMEEXCEL_GETNAMETWBYTES_OFFSET UNITYSDK_OFFSET(0x1C5A100)
#define MX_DATA_EXCEL_SCENARIOCHARACTERNAMEEXCEL_GET_NICKNAMETW_OFFSET UNITYSDK_OFFSET(0x1C5A120)
#define MX_DATA_EXCEL_SCENARIOCHARACTERNAMEEXCEL_GETNICKNAMETWBYTES_OFFSET UNITYSDK_OFFSET(0x1C5A160)
#define MX_DATA_EXCEL_SCENARIOCHARACTERNAMEEXCEL_GET_NAMEEN_OFFSET UNITYSDK_OFFSET(0x1C5A180)
#define MX_DATA_EXCEL_SCENARIOCHARACTERNAMEEXCEL_GETNAMEENBYTES_OFFSET UNITYSDK_OFFSET(0x1C5A1C0)
#define MX_DATA_EXCEL_SCENARIOCHARACTERNAMEEXCEL_GET_NICKNAMEEN_OFFSET UNITYSDK_OFFSET(0x1C5A1E0)
#define MX_DATA_EXCEL_SCENARIOCHARACTERNAMEEXCEL_GETNICKNAMEENBYTES_OFFSET UNITYSDK_OFFSET(0x1C5A220)
#define MX_DATA_EXCEL_SCENARIOCHARACTERNAMEEXCEL_GET_SHAPE_OFFSET UNITYSDK_OFFSET(0x1C5A240)
#define MX_DATA_EXCEL_SCENARIOCHARACTERNAMEEXCEL_GET_SPINEPREFABNAME_OFFSET UNITYSDK_OFFSET(0x1C5A290)
#define MX_DATA_EXCEL_SCENARIOCHARACTERNAMEEXCEL_GETSPINEPREFABNAMEBYTES_OFFSET UNITYSDK_OFFSET(0x1C5A2D0)
#define MX_DATA_EXCEL_SCENARIOCHARACTERNAMEEXCEL_GET_SMALLPORTRAIT_OFFSET UNITYSDK_OFFSET(0x1C5A2F0)
#define MX_DATA_EXCEL_SCENARIOCHARACTERNAMEEXCEL_GETSMALLPORTRAITBYTES_OFFSET UNITYSDK_OFFSET(0x1C5A330)
#define MX_DATA_EXCEL_SCENARIOCHARACTERNAMEEXCEL_CREATESCENARIOCHARACTERNAMEEXCEL_OFFSET UNITYSDK_OFFSET(0x1C5A350)
#define MX_DATA_EXCEL_SCENARIOCHARACTERNAMEEXCEL_STARTSCENARIOCHARACTERNAMEEXCEL_OFFSET UNITYSDK_OFFSET(0x1C5A900)
#define MX_DATA_EXCEL_SCENARIOCHARACTERNAMEEXCEL_ADDCHARACTERNAME_OFFSET UNITYSDK_OFFSET(0x1C5A880)
#define MX_DATA_EXCEL_SCENARIOCHARACTERNAMEEXCEL_ADDPRODUCTIONSTEP_OFFSET UNITYSDK_OFFSET(0x1C5A850)
#define MX_DATA_EXCEL_SCENARIOCHARACTERNAMEEXCEL_ADDNAMEKR_OFFSET UNITYSDK_OFFSET(0x1C5A820)
#define MX_DATA_EXCEL_SCENARIOCHARACTERNAMEEXCEL_ADDNICKNAMEKR_OFFSET UNITYSDK_OFFSET(0x1C5A7F0)
#define MX_DATA_EXCEL_SCENARIOCHARACTERNAMEEXCEL_ADDNAMEJP_OFFSET UNITYSDK_OFFSET(0x1C5A7C0)
#define MX_DATA_EXCEL_SCENARIOCHARACTERNAMEEXCEL_ADDNICKNAMEJP_OFFSET UNITYSDK_OFFSET(0x1C5A790)
#define MX_DATA_EXCEL_SCENARIOCHARACTERNAMEEXCEL_ADDNAMETH_OFFSET UNITYSDK_OFFSET(0x1C5A760)
#define MX_DATA_EXCEL_SCENARIOCHARACTERNAMEEXCEL_ADDNICKNAMETH_OFFSET UNITYSDK_OFFSET(0x1C5A730)
#define MX_DATA_EXCEL_SCENARIOCHARACTERNAMEEXCEL_ADDNAMETW_OFFSET UNITYSDK_OFFSET(0x1C5A700)
#define MX_DATA_EXCEL_SCENARIOCHARACTERNAMEEXCEL_ADDNICKNAMETW_OFFSET UNITYSDK_OFFSET(0x1C5A6D0)
#define MX_DATA_EXCEL_SCENARIOCHARACTERNAMEEXCEL_ADDNAMEEN_OFFSET UNITYSDK_OFFSET(0x1C5A6A0)
#define MX_DATA_EXCEL_SCENARIOCHARACTERNAMEEXCEL_ADDNICKNAMEEN_OFFSET UNITYSDK_OFFSET(0x1C5A670)
#define MX_DATA_EXCEL_SCENARIOCHARACTERNAMEEXCEL_ADDSHAPE_OFFSET UNITYSDK_OFFSET(0x1C5A640)
#define MX_DATA_EXCEL_SCENARIOCHARACTERNAMEEXCEL_ADDSPINEPREFABNAME_OFFSET UNITYSDK_OFFSET(0x1C5A610)
#define MX_DATA_EXCEL_SCENARIOCHARACTERNAMEEXCEL_ADDSMALLPORTRAIT_OFFSET UNITYSDK_OFFSET(0x1C5A5E0)
#define MX_DATA_EXCEL_SCENARIOCHARACTERNAMEEXCEL_ENDSCENARIOCHARACTERNAMEEXCEL_OFFSET UNITYSDK_OFFSET(0x1C5A8B0)
#define MX_DATA_EXCEL_SCENARIOCHARACTERNAMEEXCEL_FINISHSCENARIOCHARACTERNAMEEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C5A920)
#define MX_DATA_EXCEL_SCENARIOCHARACTERNAMEEXCEL_FINISHSIZEPREFIXEDSCENARIOCHARACTERNAMEEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C5A940)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ScenarioCharacterNameExcel_TypeDefinitionIndex = 19262;

	class ScenarioCharacterNameExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOCHARACTERNAMEEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::ScenarioCharacterNameExcel* GetRootAsScenarioCharacterNameExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::ScenarioCharacterNameExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOCHARACTERNAMEEXCEL_GETROOTASSCENARIOCHARACTERNAMEEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::ScenarioCharacterNameExcel* GetRootAsScenarioCharacterNameExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::ScenarioCharacterNameExcel* arg)
		{
			return (return (::MX::Data::Excel::ScenarioCharacterNameExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::ScenarioCharacterNameExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOCHARACTERNAMEEXCEL_GETROOTASSCENARIOCHARACTERNAMEEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOCHARACTERNAMEEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::ScenarioCharacterNameExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::ScenarioCharacterNameExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOCHARACTERNAMEEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::UInt32 get_CharacterName()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOCHARACTERNAMEEXCEL_GET_CHARACTERNAME_OFFSET))(nullptr);
		}

		::FlatData::ProductionStep* get_ProductionStep()
		{
			return (return (::FlatData::ProductionStep*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOCHARACTERNAMEEXCEL_GET_PRODUCTIONSTEP_OFFSET))(nullptr);
		}

		::System::String* get_NameKR()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOCHARACTERNAMEEXCEL_GET_NAMEKR_OFFSET))(nullptr);
		}

		Il2CppObject* GetNameKRBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOCHARACTERNAMEEXCEL_GETNAMEKRBYTES_OFFSET))(nullptr);
		}

		::System::String* get_NicknameKR()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOCHARACTERNAMEEXCEL_GET_NICKNAMEKR_OFFSET))(nullptr);
		}

		Il2CppObject* GetNicknameKRBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOCHARACTERNAMEEXCEL_GETNICKNAMEKRBYTES_OFFSET))(nullptr);
		}

		::System::String* get_NameJP()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOCHARACTERNAMEEXCEL_GET_NAMEJP_OFFSET))(nullptr);
		}

		Il2CppObject* GetNameJPBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOCHARACTERNAMEEXCEL_GETNAMEJPBYTES_OFFSET))(nullptr);
		}

		::System::String* get_NicknameJP()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOCHARACTERNAMEEXCEL_GET_NICKNAMEJP_OFFSET))(nullptr);
		}

		Il2CppObject* GetNicknameJPBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOCHARACTERNAMEEXCEL_GETNICKNAMEJPBYTES_OFFSET))(nullptr);
		}

		::System::String* get_NameTH()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOCHARACTERNAMEEXCEL_GET_NAMETH_OFFSET))(nullptr);
		}

		Il2CppObject* GetNameTHBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOCHARACTERNAMEEXCEL_GETNAMETHBYTES_OFFSET))(nullptr);
		}

		::System::String* get_NicknameTH()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOCHARACTERNAMEEXCEL_GET_NICKNAMETH_OFFSET))(nullptr);
		}

		Il2CppObject* GetNicknameTHBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOCHARACTERNAMEEXCEL_GETNICKNAMETHBYTES_OFFSET))(nullptr);
		}

		::System::String* get_NameTW()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOCHARACTERNAMEEXCEL_GET_NAMETW_OFFSET))(nullptr);
		}

		Il2CppObject* GetNameTWBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOCHARACTERNAMEEXCEL_GETNAMETWBYTES_OFFSET))(nullptr);
		}

		::System::String* get_NicknameTW()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOCHARACTERNAMEEXCEL_GET_NICKNAMETW_OFFSET))(nullptr);
		}

		Il2CppObject* GetNicknameTWBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOCHARACTERNAMEEXCEL_GETNICKNAMETWBYTES_OFFSET))(nullptr);
		}

		::System::String* get_NameEN()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOCHARACTERNAMEEXCEL_GET_NAMEEN_OFFSET))(nullptr);
		}

		Il2CppObject* GetNameENBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOCHARACTERNAMEEXCEL_GETNAMEENBYTES_OFFSET))(nullptr);
		}

		::System::String* get_NicknameEN()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOCHARACTERNAMEEXCEL_GET_NICKNAMEEN_OFFSET))(nullptr);
		}

		Il2CppObject* GetNicknameENBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOCHARACTERNAMEEXCEL_GETNICKNAMEENBYTES_OFFSET))(nullptr);
		}

		::FlatData::ScenarioCharacterShapes* get_Shape()
		{
			return (return (::FlatData::ScenarioCharacterShapes*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOCHARACTERNAMEEXCEL_GET_SHAPE_OFFSET))(nullptr);
		}

		::System::String* get_SpinePrefabName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOCHARACTERNAMEEXCEL_GET_SPINEPREFABNAME_OFFSET))(nullptr);
		}

		Il2CppObject* GetSpinePrefabNameBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOCHARACTERNAMEEXCEL_GETSPINEPREFABNAMEBYTES_OFFSET))(nullptr);
		}

		::System::String* get_SmallPortrait()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOCHARACTERNAMEEXCEL_GET_SMALLPORTRAIT_OFFSET))(nullptr);
		}

		Il2CppObject* GetSmallPortraitBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOCHARACTERNAMEEXCEL_GETSMALLPORTRAITBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateScenarioCharacterNameExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg, ::FlatData::ProductionStep* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatData::ScenarioCharacterShapes* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::FlatData::ProductionStep*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatData::ScenarioCharacterShapes*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOCHARACTERNAMEEXCEL_CREATESCENARIOCHARACTERNAMEEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartScenarioCharacterNameExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOCHARACTERNAMEEXCEL_STARTSCENARIOCHARACTERNAMEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddCharacterName(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOCHARACTERNAMEEXCEL_ADDCHARACTERNAME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddProductionStep(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ProductionStep* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ProductionStep*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOCHARACTERNAMEEXCEL_ADDPRODUCTIONSTEP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddNameKR(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOCHARACTERNAMEEXCEL_ADDNAMEKR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddNicknameKR(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOCHARACTERNAMEEXCEL_ADDNICKNAMEKR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddNameJP(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOCHARACTERNAMEEXCEL_ADDNAMEJP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddNicknameJP(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOCHARACTERNAMEEXCEL_ADDNICKNAMEJP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddNameTH(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOCHARACTERNAMEEXCEL_ADDNAMETH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddNicknameTH(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOCHARACTERNAMEEXCEL_ADDNICKNAMETH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddNameTW(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOCHARACTERNAMEEXCEL_ADDNAMETW_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddNicknameTW(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOCHARACTERNAMEEXCEL_ADDNICKNAMETW_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddNameEN(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOCHARACTERNAMEEXCEL_ADDNAMEEN_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddNicknameEN(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOCHARACTERNAMEEXCEL_ADDNICKNAMEEN_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddShape(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ScenarioCharacterShapes* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ScenarioCharacterShapes*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOCHARACTERNAMEEXCEL_ADDSHAPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddSpinePrefabName(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOCHARACTERNAMEEXCEL_ADDSPINEPREFABNAME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddSmallPortrait(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOCHARACTERNAMEEXCEL_ADDSMALLPORTRAIT_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndScenarioCharacterNameExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOCHARACTERNAMEEXCEL_ENDSCENARIOCHARACTERNAMEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishScenarioCharacterNameExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOCHARACTERNAMEEXCEL_FINISHSCENARIOCHARACTERNAMEEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedScenarioCharacterNameExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOCHARACTERNAMEEXCEL_FINISHSIZEPREFIXEDSCENARIOCHARACTERNAMEEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

