#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class GuideMissionSeasonExcel; }
namespace FlatData { class TargetGroup; }
namespace FlatData { class ParcelType; }
namespace FlatData { class GuideMissionTabType; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }

#define MX_DATA_EXCEL_GUIDEMISSIONSEASONEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1B48C60)
#define MX_DATA_EXCEL_GUIDEMISSIONSEASONEXCEL_GETROOTASGUIDEMISSIONSEASONEXCEL_OFFSET UNITYSDK_OFFSET(0x1B48C70)
#define MX_DATA_EXCEL_GUIDEMISSIONSEASONEXCEL_GETROOTASGUIDEMISSIONSEASONEXCEL_OFFSET UNITYSDK_OFFSET(0x1B48CD0)
#define MX_DATA_EXCEL_GUIDEMISSIONSEASONEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1B48D60)
#define MX_DATA_EXCEL_GUIDEMISSIONSEASONEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1B48D30)
#define MX_DATA_EXCEL_GUIDEMISSIONSEASONEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0x1B48D80)
#define MX_DATA_EXCEL_GUIDEMISSIONSEASONEXCEL_GET_TITLELOCALIZECODE_OFFSET UNITYSDK_OFFSET(0x1B48DD0)
#define MX_DATA_EXCEL_GUIDEMISSIONSEASONEXCEL_GETTITLELOCALIZECODEBYTES_OFFSET UNITYSDK_OFFSET(0x1B48E10)
#define MX_DATA_EXCEL_GUIDEMISSIONSEASONEXCEL_GET_PERMANENTINFOMATIONLOCALIZECODE_OFFSET UNITYSDK_OFFSET(0x1B48E30)
#define MX_DATA_EXCEL_GUIDEMISSIONSEASONEXCEL_GETPERMANENTINFOMATIONLOCALIZECODEBYTES_OFFSET UNITYSDK_OFFSET(0x1B48E70)
#define MX_DATA_EXCEL_GUIDEMISSIONSEASONEXCEL_GET_INFOMATIONLOCALIZECODE_OFFSET UNITYSDK_OFFSET(0x1B48E90)
#define MX_DATA_EXCEL_GUIDEMISSIONSEASONEXCEL_GETINFOMATIONLOCALIZECODEBYTES_OFFSET UNITYSDK_OFFSET(0x1B48ED0)
#define MX_DATA_EXCEL_GUIDEMISSIONSEASONEXCEL_GET_TARGETGROUP_OFFSET UNITYSDK_OFFSET(0x1B48EF0)
#define MX_DATA_EXCEL_GUIDEMISSIONSEASONEXCEL_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0x1B48F40)
#define MX_DATA_EXCEL_GUIDEMISSIONSEASONEXCEL_GET_BANNEROPENDATE_OFFSET UNITYSDK_OFFSET(0x1B48F90)
#define MX_DATA_EXCEL_GUIDEMISSIONSEASONEXCEL_GETBANNEROPENDATEBYTES_OFFSET UNITYSDK_OFFSET(0x1B48FD0)
#define MX_DATA_EXCEL_GUIDEMISSIONSEASONEXCEL_GET_STARTDATE_OFFSET UNITYSDK_OFFSET(0x1B48FF0)
#define MX_DATA_EXCEL_GUIDEMISSIONSEASONEXCEL_GETSTARTDATEBYTES_OFFSET UNITYSDK_OFFSET(0x1B49030)
#define MX_DATA_EXCEL_GUIDEMISSIONSEASONEXCEL_GET_STARTABLEENDDATE_OFFSET UNITYSDK_OFFSET(0x1B49050)
#define MX_DATA_EXCEL_GUIDEMISSIONSEASONEXCEL_GETSTARTABLEENDDATEBYTES_OFFSET UNITYSDK_OFFSET(0x1B49090)
#define MX_DATA_EXCEL_GUIDEMISSIONSEASONEXCEL_GET_ENDDATE_OFFSET UNITYSDK_OFFSET(0x1B490B0)
#define MX_DATA_EXCEL_GUIDEMISSIONSEASONEXCEL_GETENDDATEBYTES_OFFSET UNITYSDK_OFFSET(0x1B490F0)
#define MX_DATA_EXCEL_GUIDEMISSIONSEASONEXCEL_GET_CLOSEBANNERAFTERCOMPLETION_OFFSET UNITYSDK_OFFSET(0x1B49110)
#define MX_DATA_EXCEL_GUIDEMISSIONSEASONEXCEL_GET_MAXIMUMLOGINCOUNT_OFFSET UNITYSDK_OFFSET(0x1B49160)
#define MX_DATA_EXCEL_GUIDEMISSIONSEASONEXCEL_GET_EXPIRYDATE_OFFSET UNITYSDK_OFFSET(0x1B491B0)
#define MX_DATA_EXCEL_GUIDEMISSIONSEASONEXCEL_GET_ICONORDER_OFFSET UNITYSDK_OFFSET(0x1B49200)
#define MX_DATA_EXCEL_GUIDEMISSIONSEASONEXCEL_GET_SPINECHARACTERID_OFFSET UNITYSDK_OFFSET(0x1B49250)
#define MX_DATA_EXCEL_GUIDEMISSIONSEASONEXCEL_GET_REQUIREMENTPARCELIMAGE_OFFSET UNITYSDK_OFFSET(0x1B492A0)
#define MX_DATA_EXCEL_GUIDEMISSIONSEASONEXCEL_GETREQUIREMENTPARCELIMAGEBYTES_OFFSET UNITYSDK_OFFSET(0x1B492E0)
#define MX_DATA_EXCEL_GUIDEMISSIONSEASONEXCEL_GET_REWARDIMAGE_OFFSET UNITYSDK_OFFSET(0x1B49300)
#define MX_DATA_EXCEL_GUIDEMISSIONSEASONEXCEL_GETREWARDIMAGEBYTES_OFFSET UNITYSDK_OFFSET(0x1B49340)
#define MX_DATA_EXCEL_GUIDEMISSIONSEASONEXCEL_GET_LOBBYBANNERIMAGE_OFFSET UNITYSDK_OFFSET(0x1B49360)
#define MX_DATA_EXCEL_GUIDEMISSIONSEASONEXCEL_GETLOBBYBANNERIMAGEBYTES_OFFSET UNITYSDK_OFFSET(0x1B493A0)
#define MX_DATA_EXCEL_GUIDEMISSIONSEASONEXCEL_GET_BACKGROUNDIMAGE_OFFSET UNITYSDK_OFFSET(0x1B493C0)
#define MX_DATA_EXCEL_GUIDEMISSIONSEASONEXCEL_GETBACKGROUNDIMAGEBYTES_OFFSET UNITYSDK_OFFSET(0x1B49400)
#define MX_DATA_EXCEL_GUIDEMISSIONSEASONEXCEL_GET_TITLEIMAGE_OFFSET UNITYSDK_OFFSET(0x1B49420)
#define MX_DATA_EXCEL_GUIDEMISSIONSEASONEXCEL_GETTITLEIMAGEBYTES_OFFSET UNITYSDK_OFFSET(0x1B49460)
#define MX_DATA_EXCEL_GUIDEMISSIONSEASONEXCEL_GET_REQUIREMENTPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1B49480)
#define MX_DATA_EXCEL_GUIDEMISSIONSEASONEXCEL_GET_REQUIREMENTPARCELID_OFFSET UNITYSDK_OFFSET(0x1B494D0)
#define MX_DATA_EXCEL_GUIDEMISSIONSEASONEXCEL_GET_REQUIREMENTPARCELAMOUNT_OFFSET UNITYSDK_OFFSET(0x1B49520)
#define MX_DATA_EXCEL_GUIDEMISSIONSEASONEXCEL_GET_TABTYPE_OFFSET UNITYSDK_OFFSET(0x1B49570)
#define MX_DATA_EXCEL_GUIDEMISSIONSEASONEXCEL_GET_ISPERMANENT_OFFSET UNITYSDK_OFFSET(0x1B495C0)
#define MX_DATA_EXCEL_GUIDEMISSIONSEASONEXCEL_GET_PRESEASONID_OFFSET UNITYSDK_OFFSET(0x1B49610)
#define MX_DATA_EXCEL_GUIDEMISSIONSEASONEXCEL_CREATEGUIDEMISSIONSEASONEXCEL_OFFSET UNITYSDK_OFFSET(0x1B49660)
#define MX_DATA_EXCEL_GUIDEMISSIONSEASONEXCEL_STARTGUIDEMISSIONSEASONEXCEL_OFFSET UNITYSDK_OFFSET(0x1B49FF0)
#define MX_DATA_EXCEL_GUIDEMISSIONSEASONEXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0x1B49BE0)
#define MX_DATA_EXCEL_GUIDEMISSIONSEASONEXCEL_ADDTITLELOCALIZECODE_OFFSET UNITYSDK_OFFSET(0x1B49EE0)
#define MX_DATA_EXCEL_GUIDEMISSIONSEASONEXCEL_ADDPERMANENTINFOMATIONLOCALIZECODE_OFFSET UNITYSDK_OFFSET(0x1B49EB0)
#define MX_DATA_EXCEL_GUIDEMISSIONSEASONEXCEL_ADDINFOMATIONLOCALIZECODE_OFFSET UNITYSDK_OFFSET(0x1B49E80)
#define MX_DATA_EXCEL_GUIDEMISSIONSEASONEXCEL_ADDTARGETGROUP_OFFSET UNITYSDK_OFFSET(0x1B49E50)
#define MX_DATA_EXCEL_GUIDEMISSIONSEASONEXCEL_ADDENABLED_OFFSET UNITYSDK_OFFSET(0x1B49F70)
#define MX_DATA_EXCEL_GUIDEMISSIONSEASONEXCEL_ADDBANNEROPENDATE_OFFSET UNITYSDK_OFFSET(0x1B49E20)
#define MX_DATA_EXCEL_GUIDEMISSIONSEASONEXCEL_ADDSTARTDATE_OFFSET UNITYSDK_OFFSET(0x1B49DF0)
#define MX_DATA_EXCEL_GUIDEMISSIONSEASONEXCEL_ADDSTARTABLEENDDATE_OFFSET UNITYSDK_OFFSET(0x1B49DC0)
#define MX_DATA_EXCEL_GUIDEMISSIONSEASONEXCEL_ADDENDDATE_OFFSET UNITYSDK_OFFSET(0x1B49D90)
#define MX_DATA_EXCEL_GUIDEMISSIONSEASONEXCEL_ADDCLOSEBANNERAFTERCOMPLETION_OFFSET UNITYSDK_OFFSET(0x1B49F40)
#define MX_DATA_EXCEL_GUIDEMISSIONSEASONEXCEL_ADDMAXIMUMLOGINCOUNT_OFFSET UNITYSDK_OFFSET(0x1B49BB0)
#define MX_DATA_EXCEL_GUIDEMISSIONSEASONEXCEL_ADDEXPIRYDATE_OFFSET UNITYSDK_OFFSET(0x1B49B80)
#define MX_DATA_EXCEL_GUIDEMISSIONSEASONEXCEL_ADDICONORDER_OFFSET UNITYSDK_OFFSET(0x1B49B50)
#define MX_DATA_EXCEL_GUIDEMISSIONSEASONEXCEL_ADDSPINECHARACTERID_OFFSET UNITYSDK_OFFSET(0x1B49B20)
#define MX_DATA_EXCEL_GUIDEMISSIONSEASONEXCEL_ADDREQUIREMENTPARCELIMAGE_OFFSET UNITYSDK_OFFSET(0x1B49D60)
#define MX_DATA_EXCEL_GUIDEMISSIONSEASONEXCEL_ADDREWARDIMAGE_OFFSET UNITYSDK_OFFSET(0x1B49D30)
#define MX_DATA_EXCEL_GUIDEMISSIONSEASONEXCEL_ADDLOBBYBANNERIMAGE_OFFSET UNITYSDK_OFFSET(0x1B49D00)
#define MX_DATA_EXCEL_GUIDEMISSIONSEASONEXCEL_ADDBACKGROUNDIMAGE_OFFSET UNITYSDK_OFFSET(0x1B49CD0)
#define MX_DATA_EXCEL_GUIDEMISSIONSEASONEXCEL_ADDTITLEIMAGE_OFFSET UNITYSDK_OFFSET(0x1B49CA0)
#define MX_DATA_EXCEL_GUIDEMISSIONSEASONEXCEL_ADDREQUIREMENTPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1B49C70)
#define MX_DATA_EXCEL_GUIDEMISSIONSEASONEXCEL_ADDREQUIREMENTPARCELID_OFFSET UNITYSDK_OFFSET(0x1B49AF0)
#define MX_DATA_EXCEL_GUIDEMISSIONSEASONEXCEL_ADDREQUIREMENTPARCELAMOUNT_OFFSET UNITYSDK_OFFSET(0x1B49C40)
#define MX_DATA_EXCEL_GUIDEMISSIONSEASONEXCEL_ADDTABTYPE_OFFSET UNITYSDK_OFFSET(0x1B49C10)
#define MX_DATA_EXCEL_GUIDEMISSIONSEASONEXCEL_ADDISPERMANENT_OFFSET UNITYSDK_OFFSET(0x1B49F10)
#define MX_DATA_EXCEL_GUIDEMISSIONSEASONEXCEL_ADDPRESEASONID_OFFSET UNITYSDK_OFFSET(0x1B49AC0)
#define MX_DATA_EXCEL_GUIDEMISSIONSEASONEXCEL_ENDGUIDEMISSIONSEASONEXCEL_OFFSET UNITYSDK_OFFSET(0x1B49FA0)
#define MX_DATA_EXCEL_GUIDEMISSIONSEASONEXCEL_FINISHGUIDEMISSIONSEASONEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1B4A010)
#define MX_DATA_EXCEL_GUIDEMISSIONSEASONEXCEL_FINISHSIZEPREFIXEDGUIDEMISSIONSEASONEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1B4A030)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int GuideMissionSeasonExcel_TypeDefinitionIndex = 18156;

	class GuideMissionSeasonExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONSEASONEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::GuideMissionSeasonExcel* GetRootAsGuideMissionSeasonExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::GuideMissionSeasonExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONSEASONEXCEL_GETROOTASGUIDEMISSIONSEASONEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::GuideMissionSeasonExcel* GetRootAsGuideMissionSeasonExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::GuideMissionSeasonExcel* arg)
		{
			return (return (::MX::Data::Excel::GuideMissionSeasonExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::GuideMissionSeasonExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONSEASONEXCEL_GETROOTASGUIDEMISSIONSEASONEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONSEASONEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::GuideMissionSeasonExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::GuideMissionSeasonExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONSEASONEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONSEASONEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::System::String* get_TitleLocalizeCode()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONSEASONEXCEL_GET_TITLELOCALIZECODE_OFFSET))(nullptr);
		}

		Il2CppObject* GetTitleLocalizeCodeBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONSEASONEXCEL_GETTITLELOCALIZECODEBYTES_OFFSET))(nullptr);
		}

		::System::String* get_PermanentInfomationLocalizeCode()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONSEASONEXCEL_GET_PERMANENTINFOMATIONLOCALIZECODE_OFFSET))(nullptr);
		}

		Il2CppObject* GetPermanentInfomationLocalizeCodeBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONSEASONEXCEL_GETPERMANENTINFOMATIONLOCALIZECODEBYTES_OFFSET))(nullptr);
		}

		::System::String* get_InfomationLocalizeCode()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONSEASONEXCEL_GET_INFOMATIONLOCALIZECODE_OFFSET))(nullptr);
		}

		Il2CppObject* GetInfomationLocalizeCodeBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONSEASONEXCEL_GETINFOMATIONLOCALIZECODEBYTES_OFFSET))(nullptr);
		}

		::FlatData::TargetGroup* get_TargetGroup()
		{
			return (return (::FlatData::TargetGroup*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONSEASONEXCEL_GET_TARGETGROUP_OFFSET))(nullptr);
		}

		::System::Boolean get_Enabled()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONSEASONEXCEL_GET_ENABLED_OFFSET))(nullptr);
		}

		::System::String* get_BannerOpenDate()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONSEASONEXCEL_GET_BANNEROPENDATE_OFFSET))(nullptr);
		}

		Il2CppObject* GetBannerOpenDateBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONSEASONEXCEL_GETBANNEROPENDATEBYTES_OFFSET))(nullptr);
		}

		::System::String* get_StartDate()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONSEASONEXCEL_GET_STARTDATE_OFFSET))(nullptr);
		}

		Il2CppObject* GetStartDateBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONSEASONEXCEL_GETSTARTDATEBYTES_OFFSET))(nullptr);
		}

		::System::String* get_StartableEndDate()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONSEASONEXCEL_GET_STARTABLEENDDATE_OFFSET))(nullptr);
		}

		Il2CppObject* GetStartableEndDateBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONSEASONEXCEL_GETSTARTABLEENDDATEBYTES_OFFSET))(nullptr);
		}

		::System::String* get_EndDate()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONSEASONEXCEL_GET_ENDDATE_OFFSET))(nullptr);
		}

		Il2CppObject* GetEndDateBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONSEASONEXCEL_GETENDDATEBYTES_OFFSET))(nullptr);
		}

		::System::Boolean get_CloseBannerAfterCompletion()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONSEASONEXCEL_GET_CLOSEBANNERAFTERCOMPLETION_OFFSET))(nullptr);
		}

		::System::Int64 get_MaximumLoginCount()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONSEASONEXCEL_GET_MAXIMUMLOGINCOUNT_OFFSET))(nullptr);
		}

		::System::Int64 get_ExpiryDate()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONSEASONEXCEL_GET_EXPIRYDATE_OFFSET))(nullptr);
		}

		::System::Int64 get_IconOrder()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONSEASONEXCEL_GET_ICONORDER_OFFSET))(nullptr);
		}

		::System::Int64 get_SpineCharacterId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONSEASONEXCEL_GET_SPINECHARACTERID_OFFSET))(nullptr);
		}

		::System::String* get_RequirementParcelImage()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONSEASONEXCEL_GET_REQUIREMENTPARCELIMAGE_OFFSET))(nullptr);
		}

		Il2CppObject* GetRequirementParcelImageBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONSEASONEXCEL_GETREQUIREMENTPARCELIMAGEBYTES_OFFSET))(nullptr);
		}

		::System::String* get_RewardImage()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONSEASONEXCEL_GET_REWARDIMAGE_OFFSET))(nullptr);
		}

		Il2CppObject* GetRewardImageBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONSEASONEXCEL_GETREWARDIMAGEBYTES_OFFSET))(nullptr);
		}

		::System::String* get_LobbyBannerImage()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONSEASONEXCEL_GET_LOBBYBANNERIMAGE_OFFSET))(nullptr);
		}

		Il2CppObject* GetLobbyBannerImageBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONSEASONEXCEL_GETLOBBYBANNERIMAGEBYTES_OFFSET))(nullptr);
		}

		::System::String* get_BackgroundImage()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONSEASONEXCEL_GET_BACKGROUNDIMAGE_OFFSET))(nullptr);
		}

		Il2CppObject* GetBackgroundImageBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONSEASONEXCEL_GETBACKGROUNDIMAGEBYTES_OFFSET))(nullptr);
		}

		::System::String* get_TitleImage()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONSEASONEXCEL_GET_TITLEIMAGE_OFFSET))(nullptr);
		}

		Il2CppObject* GetTitleImageBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONSEASONEXCEL_GETTITLEIMAGEBYTES_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* get_RequirementParcelType()
		{
			return (return (::FlatData::ParcelType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONSEASONEXCEL_GET_REQUIREMENTPARCELTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_RequirementParcelId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONSEASONEXCEL_GET_REQUIREMENTPARCELID_OFFSET))(nullptr);
		}

		::System::Int32 get_RequirementParcelAmount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONSEASONEXCEL_GET_REQUIREMENTPARCELAMOUNT_OFFSET))(nullptr);
		}

		::FlatData::GuideMissionTabType* get_TabType()
		{
			return (return (::FlatData::GuideMissionTabType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONSEASONEXCEL_GET_TABTYPE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsPermanent()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONSEASONEXCEL_GET_ISPERMANENT_OFFSET))(nullptr);
		}

		::System::Int64 get_PreSeasonId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONSEASONEXCEL_GET_PRESEASONID_OFFSET))(nullptr);
		}

		Il2CppObject* CreateGuideMissionSeasonExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatData::TargetGroup* arg, ::System::Boolean arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::System::Boolean arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatData::ParcelType* arg, ::System::Int64 arg, ::System::Int32 arg, ::FlatData::GuideMissionTabType* arg, ::System::Boolean arg, ::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatData::TargetGroup*, ::System::Boolean, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::System::Boolean, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatData::ParcelType*, ::System::Int64, ::System::Int32, ::FlatData::GuideMissionTabType*, ::System::Boolean, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONSEASONEXCEL_CREATEGUIDEMISSIONSEASONEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartGuideMissionSeasonExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONSEASONEXCEL_STARTGUIDEMISSIONSEASONEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONSEASONEXCEL_ADDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddTitleLocalizeCode(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONSEASONEXCEL_ADDTITLELOCALIZECODE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPermanentInfomationLocalizeCode(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONSEASONEXCEL_ADDPERMANENTINFOMATIONLOCALIZECODE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddInfomationLocalizeCode(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONSEASONEXCEL_ADDINFOMATIONLOCALIZECODE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddTargetGroup(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::TargetGroup* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::TargetGroup*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONSEASONEXCEL_ADDTARGETGROUP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEnabled(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONSEASONEXCEL_ADDENABLED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddBannerOpenDate(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONSEASONEXCEL_ADDBANNEROPENDATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStartDate(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONSEASONEXCEL_ADDSTARTDATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStartableEndDate(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONSEASONEXCEL_ADDSTARTABLEENDDATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEndDate(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONSEASONEXCEL_ADDENDDATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCloseBannerAfterCompletion(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONSEASONEXCEL_ADDCLOSEBANNERAFTERCOMPLETION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddMaximumLoginCount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONSEASONEXCEL_ADDMAXIMUMLOGINCOUNT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddExpiryDate(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONSEASONEXCEL_ADDEXPIRYDATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddIconOrder(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONSEASONEXCEL_ADDICONORDER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddSpineCharacterId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONSEASONEXCEL_ADDSPINECHARACTERID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRequirementParcelImage(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONSEASONEXCEL_ADDREQUIREMENTPARCELIMAGE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardImage(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONSEASONEXCEL_ADDREWARDIMAGE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLobbyBannerImage(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONSEASONEXCEL_ADDLOBBYBANNERIMAGE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddBackgroundImage(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONSEASONEXCEL_ADDBACKGROUNDIMAGE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddTitleImage(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONSEASONEXCEL_ADDTITLEIMAGE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRequirementParcelType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ParcelType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ParcelType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONSEASONEXCEL_ADDREQUIREMENTPARCELTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRequirementParcelId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONSEASONEXCEL_ADDREQUIREMENTPARCELID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRequirementParcelAmount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONSEASONEXCEL_ADDREQUIREMENTPARCELAMOUNT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddTabType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::GuideMissionTabType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::GuideMissionTabType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONSEASONEXCEL_ADDTABTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddIsPermanent(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONSEASONEXCEL_ADDISPERMANENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPreSeasonId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONSEASONEXCEL_ADDPRESEASONID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndGuideMissionSeasonExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONSEASONEXCEL_ENDGUIDEMISSIONSEASONEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishGuideMissionSeasonExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONSEASONEXCEL_FINISHGUIDEMISSIONSEASONEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedGuideMissionSeasonExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GUIDEMISSIONSEASONEXCEL_FINISHSIZEPREFIXEDGUIDEMISSIONSEASONEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

