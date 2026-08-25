#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class LocalizeCharProfileChangeExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }

#define MX_DATA_EXCEL_LOCALIZECHARPROFILECHANGEEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1B769B0)
#define MX_DATA_EXCEL_LOCALIZECHARPROFILECHANGEEXCEL_GETROOTASLOCALIZECHARPROFILECHANGEEXCEL_OFFSET UNITYSDK_OFFSET(0x1B769C0)
#define MX_DATA_EXCEL_LOCALIZECHARPROFILECHANGEEXCEL_GETROOTASLOCALIZECHARPROFILECHANGEEXCEL_OFFSET UNITYSDK_OFFSET(0x1B76A20)
#define MX_DATA_EXCEL_LOCALIZECHARPROFILECHANGEEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1B76AB0)
#define MX_DATA_EXCEL_LOCALIZECHARPROFILECHANGEEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1B76A80)
#define MX_DATA_EXCEL_LOCALIZECHARPROFILECHANGEEXCEL_GET_CHARACTERID_OFFSET UNITYSDK_OFFSET(0x1B76AD0)
#define MX_DATA_EXCEL_LOCALIZECHARPROFILECHANGEEXCEL_GET_SCENARIOMODEID_OFFSET UNITYSDK_OFFSET(0x1B76B20)
#define MX_DATA_EXCEL_LOCALIZECHARPROFILECHANGEEXCEL_GET_CHANGECHARACTERID_OFFSET UNITYSDK_OFFSET(0x1B76B70)
#define MX_DATA_EXCEL_LOCALIZECHARPROFILECHANGEEXCEL_GET_OVERRIDECLUB_OFFSET UNITYSDK_OFFSET(0x1B76BC0)
#define MX_DATA_EXCEL_LOCALIZECHARPROFILECHANGEEXCEL_CREATELOCALIZECHARPROFILECHANGEEXCEL_OFFSET UNITYSDK_OFFSET(0x1B76C10)
#define MX_DATA_EXCEL_LOCALIZECHARPROFILECHANGEEXCEL_STARTLOCALIZECHARPROFILECHANGEEXCEL_OFFSET UNITYSDK_OFFSET(0x1B76E00)
#define MX_DATA_EXCEL_LOCALIZECHARPROFILECHANGEEXCEL_ADDCHARACTERID_OFFSET UNITYSDK_OFFSET(0x1B76D50)
#define MX_DATA_EXCEL_LOCALIZECHARPROFILECHANGEEXCEL_ADDSCENARIOMODEID_OFFSET UNITYSDK_OFFSET(0x1B76D20)
#define MX_DATA_EXCEL_LOCALIZECHARPROFILECHANGEEXCEL_ADDCHANGECHARACTERID_OFFSET UNITYSDK_OFFSET(0x1B76CF0)
#define MX_DATA_EXCEL_LOCALIZECHARPROFILECHANGEEXCEL_ADDOVERRIDECLUB_OFFSET UNITYSDK_OFFSET(0x1B76D80)
#define MX_DATA_EXCEL_LOCALIZECHARPROFILECHANGEEXCEL_ENDLOCALIZECHARPROFILECHANGEEXCEL_OFFSET UNITYSDK_OFFSET(0x1B76DB0)
#define MX_DATA_EXCEL_LOCALIZECHARPROFILECHANGEEXCEL_FINISHLOCALIZECHARPROFILECHANGEEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1B76E20)
#define MX_DATA_EXCEL_LOCALIZECHARPROFILECHANGEEXCEL_FINISHSIZEPREFIXEDLOCALIZECHARPROFILECHANGEEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1B76E40)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int LocalizeCharProfileChangeExcel_TypeDefinitionIndex = 18353;

	class LocalizeCharProfileChangeExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZECHARPROFILECHANGEEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::LocalizeCharProfileChangeExcel* GetRootAsLocalizeCharProfileChangeExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::LocalizeCharProfileChangeExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZECHARPROFILECHANGEEXCEL_GETROOTASLOCALIZECHARPROFILECHANGEEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::LocalizeCharProfileChangeExcel* GetRootAsLocalizeCharProfileChangeExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::LocalizeCharProfileChangeExcel* arg)
		{
			return (return (::MX::Data::Excel::LocalizeCharProfileChangeExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::LocalizeCharProfileChangeExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZECHARPROFILECHANGEEXCEL_GETROOTASLOCALIZECHARPROFILECHANGEEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZECHARPROFILECHANGEEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::LocalizeCharProfileChangeExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::LocalizeCharProfileChangeExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZECHARPROFILECHANGEEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_CharacterId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZECHARPROFILECHANGEEXCEL_GET_CHARACTERID_OFFSET))(nullptr);
		}

		::System::Int64 get_ScenarioModeId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZECHARPROFILECHANGEEXCEL_GET_SCENARIOMODEID_OFFSET))(nullptr);
		}

		::System::Int64 get_ChangeCharacterID()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZECHARPROFILECHANGEEXCEL_GET_CHANGECHARACTERID_OFFSET))(nullptr);
		}

		::System::Boolean get_OverrideClub()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZECHARPROFILECHANGEEXCEL_GET_OVERRIDECLUB_OFFSET))(nullptr);
		}

		Il2CppObject* CreateLocalizeCharProfileChangeExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZECHARPROFILECHANGEEXCEL_CREATELOCALIZECHARPROFILECHANGEEXCEL_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartLocalizeCharProfileChangeExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZECHARPROFILECHANGEEXCEL_STARTLOCALIZECHARPROFILECHANGEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddCharacterId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZECHARPROFILECHANGEEXCEL_ADDCHARACTERID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddScenarioModeId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZECHARPROFILECHANGEEXCEL_ADDSCENARIOMODEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddChangeCharacterID(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZECHARPROFILECHANGEEXCEL_ADDCHANGECHARACTERID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddOverrideClub(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZECHARPROFILECHANGEEXCEL_ADDOVERRIDECLUB_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndLocalizeCharProfileChangeExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZECHARPROFILECHANGEEXCEL_ENDLOCALIZECHARPROFILECHANGEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishLocalizeCharProfileChangeExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZECHARPROFILECHANGEEXCEL_FINISHLOCALIZECHARPROFILECHANGEEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedLocalizeCharProfileChangeExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZECHARPROFILECHANGEEXCEL_FINISHSIZEPREFIXEDLOCALIZECHARPROFILECHANGEEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

