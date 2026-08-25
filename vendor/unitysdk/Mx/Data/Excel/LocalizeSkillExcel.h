#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class LocalizeSkillExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }

#define MX_DATA_EXCEL_LOCALIZESKILLEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1B845D0)
#define MX_DATA_EXCEL_LOCALIZESKILLEXCEL_GETROOTASLOCALIZESKILLEXCEL_OFFSET UNITYSDK_OFFSET(0x1B845E0)
#define MX_DATA_EXCEL_LOCALIZESKILLEXCEL_GETROOTASLOCALIZESKILLEXCEL_OFFSET UNITYSDK_OFFSET(0x1B84640)
#define MX_DATA_EXCEL_LOCALIZESKILLEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1B846D0)
#define MX_DATA_EXCEL_LOCALIZESKILLEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1B846A0)
#define MX_DATA_EXCEL_LOCALIZESKILLEXCEL_GET_KEY_OFFSET UNITYSDK_OFFSET(0x1B846F0)
#define MX_DATA_EXCEL_LOCALIZESKILLEXCEL_GET_NAMEKR_OFFSET UNITYSDK_OFFSET(0x1B84740)
#define MX_DATA_EXCEL_LOCALIZESKILLEXCEL_GETNAMEKRBYTES_OFFSET UNITYSDK_OFFSET(0x1B84780)
#define MX_DATA_EXCEL_LOCALIZESKILLEXCEL_GET_DESCRIPTIONKR_OFFSET UNITYSDK_OFFSET(0x1B847A0)
#define MX_DATA_EXCEL_LOCALIZESKILLEXCEL_GETDESCRIPTIONKRBYTES_OFFSET UNITYSDK_OFFSET(0x1B847E0)
#define MX_DATA_EXCEL_LOCALIZESKILLEXCEL_GET_SKILLINVOKELOCALIZEKR_OFFSET UNITYSDK_OFFSET(0x1B84800)
#define MX_DATA_EXCEL_LOCALIZESKILLEXCEL_GETSKILLINVOKELOCALIZEKRBYTES_OFFSET UNITYSDK_OFFSET(0x1B84840)
#define MX_DATA_EXCEL_LOCALIZESKILLEXCEL_GET_NAMEJP_OFFSET UNITYSDK_OFFSET(0x1B84860)
#define MX_DATA_EXCEL_LOCALIZESKILLEXCEL_GETNAMEJPBYTES_OFFSET UNITYSDK_OFFSET(0x1B848A0)
#define MX_DATA_EXCEL_LOCALIZESKILLEXCEL_GET_DESCRIPTIONJP_OFFSET UNITYSDK_OFFSET(0x1B848C0)
#define MX_DATA_EXCEL_LOCALIZESKILLEXCEL_GETDESCRIPTIONJPBYTES_OFFSET UNITYSDK_OFFSET(0x1B84900)
#define MX_DATA_EXCEL_LOCALIZESKILLEXCEL_GET_SKILLINVOKELOCALIZEJP_OFFSET UNITYSDK_OFFSET(0x1B84920)
#define MX_DATA_EXCEL_LOCALIZESKILLEXCEL_GETSKILLINVOKELOCALIZEJPBYTES_OFFSET UNITYSDK_OFFSET(0x1B84960)
#define MX_DATA_EXCEL_LOCALIZESKILLEXCEL_GET_NAMETH_OFFSET UNITYSDK_OFFSET(0x1B84980)
#define MX_DATA_EXCEL_LOCALIZESKILLEXCEL_GETNAMETHBYTES_OFFSET UNITYSDK_OFFSET(0x1B849C0)
#define MX_DATA_EXCEL_LOCALIZESKILLEXCEL_GET_DESCRIPTIONTH_OFFSET UNITYSDK_OFFSET(0x1B849E0)
#define MX_DATA_EXCEL_LOCALIZESKILLEXCEL_GETDESCRIPTIONTHBYTES_OFFSET UNITYSDK_OFFSET(0x1B84A20)
#define MX_DATA_EXCEL_LOCALIZESKILLEXCEL_GET_SKILLINVOKELOCALIZETH_OFFSET UNITYSDK_OFFSET(0x1B84A40)
#define MX_DATA_EXCEL_LOCALIZESKILLEXCEL_GETSKILLINVOKELOCALIZETHBYTES_OFFSET UNITYSDK_OFFSET(0x1B84A80)
#define MX_DATA_EXCEL_LOCALIZESKILLEXCEL_GET_NAMETW_OFFSET UNITYSDK_OFFSET(0x1B84AA0)
#define MX_DATA_EXCEL_LOCALIZESKILLEXCEL_GETNAMETWBYTES_OFFSET UNITYSDK_OFFSET(0x1B84AE0)
#define MX_DATA_EXCEL_LOCALIZESKILLEXCEL_GET_DESCRIPTIONTW_OFFSET UNITYSDK_OFFSET(0x1B84B00)
#define MX_DATA_EXCEL_LOCALIZESKILLEXCEL_GETDESCRIPTIONTWBYTES_OFFSET UNITYSDK_OFFSET(0x1B84B40)
#define MX_DATA_EXCEL_LOCALIZESKILLEXCEL_GET_SKILLINVOKELOCALIZETW_OFFSET UNITYSDK_OFFSET(0x1B84B60)
#define MX_DATA_EXCEL_LOCALIZESKILLEXCEL_GETSKILLINVOKELOCALIZETWBYTES_OFFSET UNITYSDK_OFFSET(0x1B84BA0)
#define MX_DATA_EXCEL_LOCALIZESKILLEXCEL_GET_NAMEEN_OFFSET UNITYSDK_OFFSET(0x1B84BC0)
#define MX_DATA_EXCEL_LOCALIZESKILLEXCEL_GETNAMEENBYTES_OFFSET UNITYSDK_OFFSET(0x1B84C00)
#define MX_DATA_EXCEL_LOCALIZESKILLEXCEL_GET_DESCRIPTIONEN_OFFSET UNITYSDK_OFFSET(0x1B84C20)
#define MX_DATA_EXCEL_LOCALIZESKILLEXCEL_GETDESCRIPTIONENBYTES_OFFSET UNITYSDK_OFFSET(0x1B84C60)
#define MX_DATA_EXCEL_LOCALIZESKILLEXCEL_GET_SKILLINVOKELOCALIZEEN_OFFSET UNITYSDK_OFFSET(0x1B84C80)
#define MX_DATA_EXCEL_LOCALIZESKILLEXCEL_GETSKILLINVOKELOCALIZEENBYTES_OFFSET UNITYSDK_OFFSET(0x1B84CC0)
#define MX_DATA_EXCEL_LOCALIZESKILLEXCEL_CREATELOCALIZESKILLEXCEL_OFFSET UNITYSDK_OFFSET(0x1B84CE0)
#define MX_DATA_EXCEL_LOCALIZESKILLEXCEL_STARTLOCALIZESKILLEXCEL_OFFSET UNITYSDK_OFFSET(0x1B852F0)
#define MX_DATA_EXCEL_LOCALIZESKILLEXCEL_ADDKEY_OFFSET UNITYSDK_OFFSET(0x1B85270)
#define MX_DATA_EXCEL_LOCALIZESKILLEXCEL_ADDNAMEKR_OFFSET UNITYSDK_OFFSET(0x1B85240)
#define MX_DATA_EXCEL_LOCALIZESKILLEXCEL_ADDDESCRIPTIONKR_OFFSET UNITYSDK_OFFSET(0x1B85210)
#define MX_DATA_EXCEL_LOCALIZESKILLEXCEL_ADDSKILLINVOKELOCALIZEKR_OFFSET UNITYSDK_OFFSET(0x1B851E0)
#define MX_DATA_EXCEL_LOCALIZESKILLEXCEL_ADDNAMEJP_OFFSET UNITYSDK_OFFSET(0x1B851B0)
#define MX_DATA_EXCEL_LOCALIZESKILLEXCEL_ADDDESCRIPTIONJP_OFFSET UNITYSDK_OFFSET(0x1B85180)
#define MX_DATA_EXCEL_LOCALIZESKILLEXCEL_ADDSKILLINVOKELOCALIZEJP_OFFSET UNITYSDK_OFFSET(0x1B85150)
#define MX_DATA_EXCEL_LOCALIZESKILLEXCEL_ADDNAMETH_OFFSET UNITYSDK_OFFSET(0x1B85120)
#define MX_DATA_EXCEL_LOCALIZESKILLEXCEL_ADDDESCRIPTIONTH_OFFSET UNITYSDK_OFFSET(0x1B850F0)
#define MX_DATA_EXCEL_LOCALIZESKILLEXCEL_ADDSKILLINVOKELOCALIZETH_OFFSET UNITYSDK_OFFSET(0x1B850C0)
#define MX_DATA_EXCEL_LOCALIZESKILLEXCEL_ADDNAMETW_OFFSET UNITYSDK_OFFSET(0x1B85090)
#define MX_DATA_EXCEL_LOCALIZESKILLEXCEL_ADDDESCRIPTIONTW_OFFSET UNITYSDK_OFFSET(0x1B85060)
#define MX_DATA_EXCEL_LOCALIZESKILLEXCEL_ADDSKILLINVOKELOCALIZETW_OFFSET UNITYSDK_OFFSET(0x1B85030)
#define MX_DATA_EXCEL_LOCALIZESKILLEXCEL_ADDNAMEEN_OFFSET UNITYSDK_OFFSET(0x1B85000)
#define MX_DATA_EXCEL_LOCALIZESKILLEXCEL_ADDDESCRIPTIONEN_OFFSET UNITYSDK_OFFSET(0x1B84FD0)
#define MX_DATA_EXCEL_LOCALIZESKILLEXCEL_ADDSKILLINVOKELOCALIZEEN_OFFSET UNITYSDK_OFFSET(0x1B84FA0)
#define MX_DATA_EXCEL_LOCALIZESKILLEXCEL_ENDLOCALIZESKILLEXCEL_OFFSET UNITYSDK_OFFSET(0x1B852A0)
#define MX_DATA_EXCEL_LOCALIZESKILLEXCEL_FINISHLOCALIZESKILLEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1B85310)
#define MX_DATA_EXCEL_LOCALIZESKILLEXCEL_FINISHSIZEPREFIXEDLOCALIZESKILLEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1B85330)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int LocalizeSkillExcel_TypeDefinitionIndex = 18402;

	class LocalizeSkillExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZESKILLEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::LocalizeSkillExcel* GetRootAsLocalizeSkillExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::LocalizeSkillExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZESKILLEXCEL_GETROOTASLOCALIZESKILLEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::LocalizeSkillExcel* GetRootAsLocalizeSkillExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::LocalizeSkillExcel* arg)
		{
			return (return (::MX::Data::Excel::LocalizeSkillExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::LocalizeSkillExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZESKILLEXCEL_GETROOTASLOCALIZESKILLEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZESKILLEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::LocalizeSkillExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::LocalizeSkillExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZESKILLEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::UInt32 get_Key()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZESKILLEXCEL_GET_KEY_OFFSET))(nullptr);
		}

		::System::String* get_NameKr()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZESKILLEXCEL_GET_NAMEKR_OFFSET))(nullptr);
		}

		Il2CppObject* GetNameKrBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZESKILLEXCEL_GETNAMEKRBYTES_OFFSET))(nullptr);
		}

		::System::String* get_DescriptionKr()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZESKILLEXCEL_GET_DESCRIPTIONKR_OFFSET))(nullptr);
		}

		Il2CppObject* GetDescriptionKrBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZESKILLEXCEL_GETDESCRIPTIONKRBYTES_OFFSET))(nullptr);
		}

		::System::String* get_SkillInvokeLocalizeKr()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZESKILLEXCEL_GET_SKILLINVOKELOCALIZEKR_OFFSET))(nullptr);
		}

		Il2CppObject* GetSkillInvokeLocalizeKrBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZESKILLEXCEL_GETSKILLINVOKELOCALIZEKRBYTES_OFFSET))(nullptr);
		}

		::System::String* get_NameJp()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZESKILLEXCEL_GET_NAMEJP_OFFSET))(nullptr);
		}

		Il2CppObject* GetNameJpBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZESKILLEXCEL_GETNAMEJPBYTES_OFFSET))(nullptr);
		}

		::System::String* get_DescriptionJp()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZESKILLEXCEL_GET_DESCRIPTIONJP_OFFSET))(nullptr);
		}

		Il2CppObject* GetDescriptionJpBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZESKILLEXCEL_GETDESCRIPTIONJPBYTES_OFFSET))(nullptr);
		}

		::System::String* get_SkillInvokeLocalizeJp()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZESKILLEXCEL_GET_SKILLINVOKELOCALIZEJP_OFFSET))(nullptr);
		}

		Il2CppObject* GetSkillInvokeLocalizeJpBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZESKILLEXCEL_GETSKILLINVOKELOCALIZEJPBYTES_OFFSET))(nullptr);
		}

		::System::String* get_NameTh()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZESKILLEXCEL_GET_NAMETH_OFFSET))(nullptr);
		}

		Il2CppObject* GetNameThBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZESKILLEXCEL_GETNAMETHBYTES_OFFSET))(nullptr);
		}

		::System::String* get_DescriptionTh()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZESKILLEXCEL_GET_DESCRIPTIONTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetDescriptionThBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZESKILLEXCEL_GETDESCRIPTIONTHBYTES_OFFSET))(nullptr);
		}

		::System::String* get_SkillInvokeLocalizeTh()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZESKILLEXCEL_GET_SKILLINVOKELOCALIZETH_OFFSET))(nullptr);
		}

		Il2CppObject* GetSkillInvokeLocalizeThBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZESKILLEXCEL_GETSKILLINVOKELOCALIZETHBYTES_OFFSET))(nullptr);
		}

		::System::String* get_NameTw()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZESKILLEXCEL_GET_NAMETW_OFFSET))(nullptr);
		}

		Il2CppObject* GetNameTwBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZESKILLEXCEL_GETNAMETWBYTES_OFFSET))(nullptr);
		}

		::System::String* get_DescriptionTw()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZESKILLEXCEL_GET_DESCRIPTIONTW_OFFSET))(nullptr);
		}

		Il2CppObject* GetDescriptionTwBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZESKILLEXCEL_GETDESCRIPTIONTWBYTES_OFFSET))(nullptr);
		}

		::System::String* get_SkillInvokeLocalizeTw()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZESKILLEXCEL_GET_SKILLINVOKELOCALIZETW_OFFSET))(nullptr);
		}

		Il2CppObject* GetSkillInvokeLocalizeTwBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZESKILLEXCEL_GETSKILLINVOKELOCALIZETWBYTES_OFFSET))(nullptr);
		}

		::System::String* get_NameEn()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZESKILLEXCEL_GET_NAMEEN_OFFSET))(nullptr);
		}

		Il2CppObject* GetNameEnBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZESKILLEXCEL_GETNAMEENBYTES_OFFSET))(nullptr);
		}

		::System::String* get_DescriptionEn()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZESKILLEXCEL_GET_DESCRIPTIONEN_OFFSET))(nullptr);
		}

		Il2CppObject* GetDescriptionEnBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZESKILLEXCEL_GETDESCRIPTIONENBYTES_OFFSET))(nullptr);
		}

		::System::String* get_SkillInvokeLocalizeEn()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZESKILLEXCEL_GET_SKILLINVOKELOCALIZEEN_OFFSET))(nullptr);
		}

		Il2CppObject* GetSkillInvokeLocalizeEnBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZESKILLEXCEL_GETSKILLINVOKELOCALIZEENBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateLocalizeSkillExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZESKILLEXCEL_CREATELOCALIZESKILLEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartLocalizeSkillExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZESKILLEXCEL_STARTLOCALIZESKILLEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddKey(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZESKILLEXCEL_ADDKEY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddNameKr(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZESKILLEXCEL_ADDNAMEKR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDescriptionKr(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZESKILLEXCEL_ADDDESCRIPTIONKR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddSkillInvokeLocalizeKr(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZESKILLEXCEL_ADDSKILLINVOKELOCALIZEKR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddNameJp(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZESKILLEXCEL_ADDNAMEJP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDescriptionJp(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZESKILLEXCEL_ADDDESCRIPTIONJP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddSkillInvokeLocalizeJp(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZESKILLEXCEL_ADDSKILLINVOKELOCALIZEJP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddNameTh(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZESKILLEXCEL_ADDNAMETH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDescriptionTh(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZESKILLEXCEL_ADDDESCRIPTIONTH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddSkillInvokeLocalizeTh(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZESKILLEXCEL_ADDSKILLINVOKELOCALIZETH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddNameTw(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZESKILLEXCEL_ADDNAMETW_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDescriptionTw(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZESKILLEXCEL_ADDDESCRIPTIONTW_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddSkillInvokeLocalizeTw(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZESKILLEXCEL_ADDSKILLINVOKELOCALIZETW_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddNameEn(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZESKILLEXCEL_ADDNAMEEN_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDescriptionEn(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZESKILLEXCEL_ADDDESCRIPTIONEN_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddSkillInvokeLocalizeEn(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZESKILLEXCEL_ADDSKILLINVOKELOCALIZEEN_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndLocalizeSkillExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZESKILLEXCEL_ENDLOCALIZESKILLEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishLocalizeSkillExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZESKILLEXCEL_FINISHLOCALIZESKILLEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedLocalizeSkillExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOCALIZESKILLEXCEL_FINISHSIZEPREFIXEDLOCALIZESKILLEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

