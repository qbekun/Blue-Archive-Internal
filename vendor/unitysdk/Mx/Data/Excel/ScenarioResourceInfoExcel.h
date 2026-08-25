#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class ScenarioResourceInfoExcel; }
namespace FlatData { class ScenarioModeSubTypes; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }
namespace FlatBuffers { class VectorOffset; }

#define MX_DATA_EXCEL_SCENARIORESOURCEINFOEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1C65530)
#define MX_DATA_EXCEL_SCENARIORESOURCEINFOEXCEL_GETROOTASSCENARIORESOURCEINFOEXCEL_OFFSET UNITYSDK_OFFSET(0x1C65540)
#define MX_DATA_EXCEL_SCENARIORESOURCEINFOEXCEL_GETROOTASSCENARIORESOURCEINFOEXCEL_OFFSET UNITYSDK_OFFSET(0x1C655A0)
#define MX_DATA_EXCEL_SCENARIORESOURCEINFOEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1C65630)
#define MX_DATA_EXCEL_SCENARIORESOURCEINFOEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1C65600)
#define MX_DATA_EXCEL_SCENARIORESOURCEINFOEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0x1C65650)
#define MX_DATA_EXCEL_SCENARIORESOURCEINFOEXCEL_GET_SCENARIOMODEID_OFFSET UNITYSDK_OFFSET(0x1C656A0)
#define MX_DATA_EXCEL_SCENARIORESOURCEINFOEXCEL_GET_PRIORITYORDER_OFFSET UNITYSDK_OFFSET(0x1C656F0)
#define MX_DATA_EXCEL_SCENARIORESOURCEINFOEXCEL_GET_PVDISPLAYORDER_OFFSET UNITYSDK_OFFSET(0x1C65740)
#define MX_DATA_EXCEL_SCENARIORESOURCEINFOEXCEL_GET_VIDEOID_OFFSET UNITYSDK_OFFSET(0x1C65790)
#define MX_DATA_EXCEL_SCENARIORESOURCEINFOEXCEL_GET_BGMID_OFFSET UNITYSDK_OFFSET(0x1C657E0)
#define MX_DATA_EXCEL_SCENARIORESOURCEINFOEXCEL_GET_AUDIONAME_OFFSET UNITYSDK_OFFSET(0x1C65830)
#define MX_DATA_EXCEL_SCENARIORESOURCEINFOEXCEL_GETAUDIONAMEBYTES_OFFSET UNITYSDK_OFFSET(0x1C65870)
#define MX_DATA_EXCEL_SCENARIORESOURCEINFOEXCEL_GET_SPINEPATH_OFFSET UNITYSDK_OFFSET(0x1C65890)
#define MX_DATA_EXCEL_SCENARIORESOURCEINFOEXCEL_GETSPINEPATHBYTES_OFFSET UNITYSDK_OFFSET(0x1C658D0)
#define MX_DATA_EXCEL_SCENARIORESOURCEINFOEXCEL_GET_RATIO_OFFSET UNITYSDK_OFFSET(0x1C658F0)
#define MX_DATA_EXCEL_SCENARIORESOURCEINFOEXCEL_GET_LOBBYANIPATH_OFFSET UNITYSDK_OFFSET(0x1C65940)
#define MX_DATA_EXCEL_SCENARIORESOURCEINFOEXCEL_GETLOBBYANIPATHBYTES_OFFSET UNITYSDK_OFFSET(0x1C65980)
#define MX_DATA_EXCEL_SCENARIORESOURCEINFOEXCEL_GET_MOVIECGPATH_OFFSET UNITYSDK_OFFSET(0x1C659A0)
#define MX_DATA_EXCEL_SCENARIORESOURCEINFOEXCEL_GETMOVIECGPATHBYTES_OFFSET UNITYSDK_OFFSET(0x1C659E0)
#define MX_DATA_EXCEL_SCENARIORESOURCEINFOEXCEL_GET_SCENARIOFORCEENTER_OFFSET UNITYSDK_OFFSET(0x1C65A00)
#define MX_DATA_EXCEL_SCENARIORESOURCEINFOEXCEL_GET_LOCALIZEID_OFFSET UNITYSDK_OFFSET(0x1C65A50)
#define MX_DATA_EXCEL_SCENARIORESOURCEINFOEXCEL_ACADEMYLOBBYCHARACTERID_OFFSET UNITYSDK_OFFSET(0x1C65AA0)
#define MX_DATA_EXCEL_SCENARIORESOURCEINFOEXCEL_GET_ACADEMYLOBBYCHARACTERIDLENGTH_OFFSET UNITYSDK_OFFSET(0x1C65B00)
#define MX_DATA_EXCEL_SCENARIORESOURCEINFOEXCEL_GETACADEMYLOBBYCHARACTERIDBYTES_OFFSET UNITYSDK_OFFSET(0x1C65B40)
#define MX_DATA_EXCEL_SCENARIORESOURCEINFOEXCEL_SWEEPANIMATION_OFFSET UNITYSDK_OFFSET(0x1C65B60)
#define MX_DATA_EXCEL_SCENARIORESOURCEINFOEXCEL_GET_SWEEPANIMATIONLENGTH_OFFSET UNITYSDK_OFFSET(0x1C65BB0)
#define MX_DATA_EXCEL_SCENARIORESOURCEINFOEXCEL_CREATESCENARIORESOURCEINFOEXCEL_OFFSET UNITYSDK_OFFSET(0x1C65BF0)
#define MX_DATA_EXCEL_SCENARIORESOURCEINFOEXCEL_STARTSCENARIORESOURCEINFOEXCEL_OFFSET UNITYSDK_OFFSET(0x1C661B0)
#define MX_DATA_EXCEL_SCENARIORESOURCEINFOEXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0x1C65F80)
#define MX_DATA_EXCEL_SCENARIORESOURCEINFOEXCEL_ADDSCENARIOMODEID_OFFSET UNITYSDK_OFFSET(0x1C65F50)
#define MX_DATA_EXCEL_SCENARIORESOURCEINFOEXCEL_ADDPRIORITYORDER_OFFSET UNITYSDK_OFFSET(0x1C65F20)
#define MX_DATA_EXCEL_SCENARIORESOURCEINFOEXCEL_ADDPVDISPLAYORDER_OFFSET UNITYSDK_OFFSET(0x1C65EF0)
#define MX_DATA_EXCEL_SCENARIORESOURCEINFOEXCEL_ADDVIDEOID_OFFSET UNITYSDK_OFFSET(0x1C65EC0)
#define MX_DATA_EXCEL_SCENARIORESOURCEINFOEXCEL_ADDBGMID_OFFSET UNITYSDK_OFFSET(0x1C65E90)
#define MX_DATA_EXCEL_SCENARIORESOURCEINFOEXCEL_ADDAUDIONAME_OFFSET UNITYSDK_OFFSET(0x1C66130)
#define MX_DATA_EXCEL_SCENARIORESOURCEINFOEXCEL_ADDSPINEPATH_OFFSET UNITYSDK_OFFSET(0x1C66100)
#define MX_DATA_EXCEL_SCENARIORESOURCEINFOEXCEL_ADDRATIO_OFFSET UNITYSDK_OFFSET(0x1C660D0)
#define MX_DATA_EXCEL_SCENARIORESOURCEINFOEXCEL_ADDLOBBYANIPATH_OFFSET UNITYSDK_OFFSET(0x1C660A0)
#define MX_DATA_EXCEL_SCENARIORESOURCEINFOEXCEL_ADDMOVIECGPATH_OFFSET UNITYSDK_OFFSET(0x1C66070)
#define MX_DATA_EXCEL_SCENARIORESOURCEINFOEXCEL_ADDSCENARIOFORCEENTER_OFFSET UNITYSDK_OFFSET(0x1C66040)
#define MX_DATA_EXCEL_SCENARIORESOURCEINFOEXCEL_ADDLOCALIZEID_OFFSET UNITYSDK_OFFSET(0x1C66010)
#define MX_DATA_EXCEL_SCENARIORESOURCEINFOEXCEL_ADDACADEMYLOBBYCHARACTERID_OFFSET UNITYSDK_OFFSET(0x1C65FE0)
#define MX_DATA_EXCEL_SCENARIORESOURCEINFOEXCEL_CREATEACADEMYLOBBYCHARACTERIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1C661D0)
#define MX_DATA_EXCEL_SCENARIORESOURCEINFOEXCEL_STARTACADEMYLOBBYCHARACTERIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1C66260)
#define MX_DATA_EXCEL_SCENARIORESOURCEINFOEXCEL_ADDSWEEPANIMATION_OFFSET UNITYSDK_OFFSET(0x1C65FB0)
#define MX_DATA_EXCEL_SCENARIORESOURCEINFOEXCEL_CREATESWEEPANIMATIONVECTOR_OFFSET UNITYSDK_OFFSET(0x1C662A0)
#define MX_DATA_EXCEL_SCENARIORESOURCEINFOEXCEL_STARTSWEEPANIMATIONVECTOR_OFFSET UNITYSDK_OFFSET(0x1C66330)
#define MX_DATA_EXCEL_SCENARIORESOURCEINFOEXCEL_ENDSCENARIORESOURCEINFOEXCEL_OFFSET UNITYSDK_OFFSET(0x1C66160)
#define MX_DATA_EXCEL_SCENARIORESOURCEINFOEXCEL_FINISHSCENARIORESOURCEINFOEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C66370)
#define MX_DATA_EXCEL_SCENARIORESOURCEINFOEXCEL_FINISHSIZEPREFIXEDSCENARIORESOURCEINFOEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C66390)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ScenarioResourceInfoExcel_TypeDefinitionIndex = 19311;

	class ScenarioResourceInfoExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIORESOURCEINFOEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::ScenarioResourceInfoExcel* GetRootAsScenarioResourceInfoExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::ScenarioResourceInfoExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIORESOURCEINFOEXCEL_GETROOTASSCENARIORESOURCEINFOEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::ScenarioResourceInfoExcel* GetRootAsScenarioResourceInfoExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::ScenarioResourceInfoExcel* arg)
		{
			return (return (::MX::Data::Excel::ScenarioResourceInfoExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::ScenarioResourceInfoExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIORESOURCEINFOEXCEL_GETROOTASSCENARIORESOURCEINFOEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIORESOURCEINFOEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::ScenarioResourceInfoExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::ScenarioResourceInfoExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIORESOURCEINFOEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIORESOURCEINFOEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::System::Int64 get_ScenarioModeId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIORESOURCEINFOEXCEL_GET_SCENARIOMODEID_OFFSET))(nullptr);
		}

		::System::Int64 get_PriorityOrder()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIORESOURCEINFOEXCEL_GET_PRIORITYORDER_OFFSET))(nullptr);
		}

		::System::Int64 get_PVDisplayOrder()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIORESOURCEINFOEXCEL_GET_PVDISPLAYORDER_OFFSET))(nullptr);
		}

		::System::Int64 get_VideoId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIORESOURCEINFOEXCEL_GET_VIDEOID_OFFSET))(nullptr);
		}

		::System::Int64 get_BgmId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIORESOURCEINFOEXCEL_GET_BGMID_OFFSET))(nullptr);
		}

		::System::String* get_AudioName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIORESOURCEINFOEXCEL_GET_AUDIONAME_OFFSET))(nullptr);
		}

		Il2CppObject* GetAudioNameBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIORESOURCEINFOEXCEL_GETAUDIONAMEBYTES_OFFSET))(nullptr);
		}

		::System::String* get_SpinePath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIORESOURCEINFOEXCEL_GET_SPINEPATH_OFFSET))(nullptr);
		}

		Il2CppObject* GetSpinePathBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIORESOURCEINFOEXCEL_GETSPINEPATHBYTES_OFFSET))(nullptr);
		}

		::System::Int32 get_Ratio()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIORESOURCEINFOEXCEL_GET_RATIO_OFFSET))(nullptr);
		}

		::System::String* get_LobbyAniPath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIORESOURCEINFOEXCEL_GET_LOBBYANIPATH_OFFSET))(nullptr);
		}

		Il2CppObject* GetLobbyAniPathBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIORESOURCEINFOEXCEL_GETLOBBYANIPATHBYTES_OFFSET))(nullptr);
		}

		::System::String* get_MovieCGPath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIORESOURCEINFOEXCEL_GET_MOVIECGPATH_OFFSET))(nullptr);
		}

		Il2CppObject* GetMovieCGPathBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIORESOURCEINFOEXCEL_GETMOVIECGPATHBYTES_OFFSET))(nullptr);
		}

		::FlatData::ScenarioModeSubTypes* get_ScenarioForceEnter()
		{
			return (return (::FlatData::ScenarioModeSubTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIORESOURCEINFOEXCEL_GET_SCENARIOFORCEENTER_OFFSET))(nullptr);
		}

		::System::UInt32 get_LocalizeId()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIORESOURCEINFOEXCEL_GET_LOCALIZEID_OFFSET))(nullptr);
		}

		::System::Int64 AcademyLobbyCharacterId(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIORESOURCEINFOEXCEL_ACADEMYLOBBYCHARACTERID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_AcademyLobbyCharacterIdLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIORESOURCEINFOEXCEL_GET_ACADEMYLOBBYCHARACTERIDLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetAcademyLobbyCharacterIdBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIORESOURCEINFOEXCEL_GETACADEMYLOBBYCHARACTERIDBYTES_OFFSET))(nullptr);
		}

		::System::String* SweepAnimation(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIORESOURCEINFOEXCEL_SWEEPANIMATION_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_SweepAnimationLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIORESOURCEINFOEXCEL_GET_SWEEPANIMATIONLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* CreateScenarioResourceInfoExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::System::Int32 arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatData::ScenarioModeSubTypes* arg, ::System::UInt32 arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::System::Int32, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatData::ScenarioModeSubTypes*, ::System::UInt32, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIORESOURCEINFOEXCEL_CREATESCENARIORESOURCEINFOEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartScenarioResourceInfoExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIORESOURCEINFOEXCEL_STARTSCENARIORESOURCEINFOEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIORESOURCEINFOEXCEL_ADDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddScenarioModeId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIORESOURCEINFOEXCEL_ADDSCENARIOMODEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPriorityOrder(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIORESOURCEINFOEXCEL_ADDPRIORITYORDER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPVDisplayOrder(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIORESOURCEINFOEXCEL_ADDPVDISPLAYORDER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddVideoId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIORESOURCEINFOEXCEL_ADDVIDEOID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddBgmId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIORESOURCEINFOEXCEL_ADDBGMID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddAudioName(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIORESOURCEINFOEXCEL_ADDAUDIONAME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddSpinePath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIORESOURCEINFOEXCEL_ADDSPINEPATH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRatio(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIORESOURCEINFOEXCEL_ADDRATIO_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLobbyAniPath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIORESOURCEINFOEXCEL_ADDLOBBYANIPATH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddMovieCGPath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIORESOURCEINFOEXCEL_ADDMOVIECGPATH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddScenarioForceEnter(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ScenarioModeSubTypes* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ScenarioModeSubTypes*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIORESOURCEINFOEXCEL_ADDSCENARIOFORCEENTER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLocalizeId(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIORESOURCEINFOEXCEL_ADDLOCALIZEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddAcademyLobbyCharacterId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIORESOURCEINFOEXCEL_ADDACADEMYLOBBYCHARACTERID_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateAcademyLobbyCharacterIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIORESOURCEINFOEXCEL_CREATEACADEMYLOBBYCHARACTERIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartAcademyLobbyCharacterIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIORESOURCEINFOEXCEL_STARTACADEMYLOBBYCHARACTERIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddSweepAnimation(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIORESOURCEINFOEXCEL_ADDSWEEPANIMATION_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateSweepAnimationVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIORESOURCEINFOEXCEL_CREATESWEEPANIMATIONVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartSweepAnimationVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIORESOURCEINFOEXCEL_STARTSWEEPANIMATIONVECTOR_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndScenarioResourceInfoExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIORESOURCEINFOEXCEL_ENDSCENARIORESOURCEINFOEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishScenarioResourceInfoExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIORESOURCEINFOEXCEL_FINISHSCENARIORESOURCEINFOEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedScenarioResourceInfoExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIORESOURCEINFOEXCEL_FINISHSIZEPREFIXEDSCENARIORESOURCEINFOEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

