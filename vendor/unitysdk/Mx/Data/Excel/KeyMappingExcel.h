#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class KeyMappingExcel; }
namespace FlatData { class DisplayGroupType; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }

#define MX_DATA_EXCEL_KEYMAPPINGEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1B6DA30)
#define MX_DATA_EXCEL_KEYMAPPINGEXCEL_GETROOTASKEYMAPPINGEXCEL_OFFSET UNITYSDK_OFFSET(0x1B6DA40)
#define MX_DATA_EXCEL_KEYMAPPINGEXCEL_GETROOTASKEYMAPPINGEXCEL_OFFSET UNITYSDK_OFFSET(0x1B6DAA0)
#define MX_DATA_EXCEL_KEYMAPPINGEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1B6DB30)
#define MX_DATA_EXCEL_KEYMAPPINGEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1B6DB00)
#define MX_DATA_EXCEL_KEYMAPPINGEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0x1B6DB50)
#define MX_DATA_EXCEL_KEYMAPPINGEXCEL_GETIDBYTES_OFFSET UNITYSDK_OFFSET(0x1B6DB90)
#define MX_DATA_EXCEL_KEYMAPPINGEXCEL_GET_DISPLAYGROUPTYPE_OFFSET UNITYSDK_OFFSET(0x1B6DBB0)
#define MX_DATA_EXCEL_KEYMAPPINGEXCEL_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1B6DC00)
#define MX_DATA_EXCEL_KEYMAPPINGEXCEL_GETGROUPIDBYTES_OFFSET UNITYSDK_OFFSET(0x1B6DC40)
#define MX_DATA_EXCEL_KEYMAPPINGEXCEL_GET_ENABLECUSTOMMAPPING_OFFSET UNITYSDK_OFFSET(0x1B6DC60)
#define MX_DATA_EXCEL_KEYMAPPINGEXCEL_GET_DISPLAYCUSTOMMAPPING_OFFSET UNITYSDK_OFFSET(0x1B6DCB0)
#define MX_DATA_EXCEL_KEYMAPPINGEXCEL_GET_LOCALIZEKEYMAPPINGID_OFFSET UNITYSDK_OFFSET(0x1B6DD00)
#define MX_DATA_EXCEL_KEYMAPPINGEXCEL_GET_TARGETKEYCODE_OFFSET UNITYSDK_OFFSET(0x1B6DD50)
#define MX_DATA_EXCEL_KEYMAPPINGEXCEL_GETTARGETKEYCODEBYTES_OFFSET UNITYSDK_OFFSET(0x1B6DD90)
#define MX_DATA_EXCEL_KEYMAPPINGEXCEL_GET_CONTROLLERCURSORFOCUS_OFFSET UNITYSDK_OFFSET(0x1B6DDB0)
#define MX_DATA_EXCEL_KEYMAPPINGEXCEL_GET_CONTROLLERKEYCODE_OFFSET UNITYSDK_OFFSET(0x1B6DE00)
#define MX_DATA_EXCEL_KEYMAPPINGEXCEL_GETCONTROLLERKEYCODEBYTES_OFFSET UNITYSDK_OFFSET(0x1B6DE40)
#define MX_DATA_EXCEL_KEYMAPPINGEXCEL_GET_ISDISPLAY_OFFSET UNITYSDK_OFFSET(0x1B6DE60)
#define MX_DATA_EXCEL_KEYMAPPINGEXCEL_GET_ISDISPLAYCONTROLLER_OFFSET UNITYSDK_OFFSET(0x1B6DEB0)
#define MX_DATA_EXCEL_KEYMAPPINGEXCEL_GET_ISUSED_OFFSET UNITYSDK_OFFSET(0x1B6DF00)
#define MX_DATA_EXCEL_KEYMAPPINGEXCEL_GET_ISUSEDCONTROLLER_OFFSET UNITYSDK_OFFSET(0x1B6DF50)
#define MX_DATA_EXCEL_KEYMAPPINGEXCEL_GET_ISLONGPRESS_OFFSET UNITYSDK_OFFSET(0x1B6DFA0)
#define MX_DATA_EXCEL_KEYMAPPINGEXCEL_GET_IGNOREPOSCHECK_OFFSET UNITYSDK_OFFSET(0x1B6DFF0)
#define MX_DATA_EXCEL_KEYMAPPINGEXCEL_GET_ICONPOSITIONX_OFFSET UNITYSDK_OFFSET(0x1B6E040)
#define MX_DATA_EXCEL_KEYMAPPINGEXCEL_GET_ICONPOSITIONY_OFFSET UNITYSDK_OFFSET(0x1B6E090)
#define MX_DATA_EXCEL_KEYMAPPINGEXCEL_GET_ICONSCALEX_OFFSET UNITYSDK_OFFSET(0x1B6E0E0)
#define MX_DATA_EXCEL_KEYMAPPINGEXCEL_GET_ICONSCALEY_OFFSET UNITYSDK_OFFSET(0x1B6E130)
#define MX_DATA_EXCEL_KEYMAPPINGEXCEL_GET_CONTROLLERICONPOSITIONX_OFFSET UNITYSDK_OFFSET(0x1B6E180)
#define MX_DATA_EXCEL_KEYMAPPINGEXCEL_GET_CONTROLLERICONPOSITIONY_OFFSET UNITYSDK_OFFSET(0x1B6E1D0)
#define MX_DATA_EXCEL_KEYMAPPINGEXCEL_GET_CONTROLLERICONSCALEX_OFFSET UNITYSDK_OFFSET(0x1B6E220)
#define MX_DATA_EXCEL_KEYMAPPINGEXCEL_GET_CONTROLLERICONSCALEY_OFFSET UNITYSDK_OFFSET(0x1B6E270)
#define MX_DATA_EXCEL_KEYMAPPINGEXCEL_GET_KEYMAPPINGICONBGNAME_OFFSET UNITYSDK_OFFSET(0x1B6E2C0)
#define MX_DATA_EXCEL_KEYMAPPINGEXCEL_GETKEYMAPPINGICONBGNAMEBYTES_OFFSET UNITYSDK_OFFSET(0x1B6E300)
#define MX_DATA_EXCEL_KEYMAPPINGEXCEL_CREATEKEYMAPPINGEXCEL_OFFSET UNITYSDK_OFFSET(0x1B6E320)
#define MX_DATA_EXCEL_KEYMAPPINGEXCEL_STARTKEYMAPPINGEXCEL_OFFSET UNITYSDK_OFFSET(0x1B6EC70)
#define MX_DATA_EXCEL_KEYMAPPINGEXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0x1B6EA40)
#define MX_DATA_EXCEL_KEYMAPPINGEXCEL_ADDDISPLAYGROUPTYPE_OFFSET UNITYSDK_OFFSET(0x1B6EA10)
#define MX_DATA_EXCEL_KEYMAPPINGEXCEL_ADDGROUPID_OFFSET UNITYSDK_OFFSET(0x1B6E9E0)
#define MX_DATA_EXCEL_KEYMAPPINGEXCEL_ADDENABLECUSTOMMAPPING_OFFSET UNITYSDK_OFFSET(0x1B6EBF0)
#define MX_DATA_EXCEL_KEYMAPPINGEXCEL_ADDDISPLAYCUSTOMMAPPING_OFFSET UNITYSDK_OFFSET(0x1B6EBC0)
#define MX_DATA_EXCEL_KEYMAPPINGEXCEL_ADDLOCALIZEKEYMAPPINGID_OFFSET UNITYSDK_OFFSET(0x1B6E9B0)
#define MX_DATA_EXCEL_KEYMAPPINGEXCEL_ADDTARGETKEYCODE_OFFSET UNITYSDK_OFFSET(0x1B6E980)
#define MX_DATA_EXCEL_KEYMAPPINGEXCEL_ADDCONTROLLERCURSORFOCUS_OFFSET UNITYSDK_OFFSET(0x1B6EB90)
#define MX_DATA_EXCEL_KEYMAPPINGEXCEL_ADDCONTROLLERKEYCODE_OFFSET UNITYSDK_OFFSET(0x1B6E950)
#define MX_DATA_EXCEL_KEYMAPPINGEXCEL_ADDISDISPLAY_OFFSET UNITYSDK_OFFSET(0x1B6EB60)
#define MX_DATA_EXCEL_KEYMAPPINGEXCEL_ADDISDISPLAYCONTROLLER_OFFSET UNITYSDK_OFFSET(0x1B6EB30)
#define MX_DATA_EXCEL_KEYMAPPINGEXCEL_ADDISUSED_OFFSET UNITYSDK_OFFSET(0x1B6EB00)
#define MX_DATA_EXCEL_KEYMAPPINGEXCEL_ADDISUSEDCONTROLLER_OFFSET UNITYSDK_OFFSET(0x1B6EAD0)
#define MX_DATA_EXCEL_KEYMAPPINGEXCEL_ADDISLONGPRESS_OFFSET UNITYSDK_OFFSET(0x1B6EAA0)
#define MX_DATA_EXCEL_KEYMAPPINGEXCEL_ADDIGNOREPOSCHECK_OFFSET UNITYSDK_OFFSET(0x1B6EA70)
#define MX_DATA_EXCEL_KEYMAPPINGEXCEL_ADDICONPOSITIONX_OFFSET UNITYSDK_OFFSET(0x1B6E920)
#define MX_DATA_EXCEL_KEYMAPPINGEXCEL_ADDICONPOSITIONY_OFFSET UNITYSDK_OFFSET(0x1B6E8F0)
#define MX_DATA_EXCEL_KEYMAPPINGEXCEL_ADDICONSCALEX_OFFSET UNITYSDK_OFFSET(0x1B6E8C0)
#define MX_DATA_EXCEL_KEYMAPPINGEXCEL_ADDICONSCALEY_OFFSET UNITYSDK_OFFSET(0x1B6E890)
#define MX_DATA_EXCEL_KEYMAPPINGEXCEL_ADDCONTROLLERICONPOSITIONX_OFFSET UNITYSDK_OFFSET(0x1B6E860)
#define MX_DATA_EXCEL_KEYMAPPINGEXCEL_ADDCONTROLLERICONPOSITIONY_OFFSET UNITYSDK_OFFSET(0x1B6E830)
#define MX_DATA_EXCEL_KEYMAPPINGEXCEL_ADDCONTROLLERICONSCALEX_OFFSET UNITYSDK_OFFSET(0x1B6E800)
#define MX_DATA_EXCEL_KEYMAPPINGEXCEL_ADDCONTROLLERICONSCALEY_OFFSET UNITYSDK_OFFSET(0x1B6E7D0)
#define MX_DATA_EXCEL_KEYMAPPINGEXCEL_ADDKEYMAPPINGICONBGNAME_OFFSET UNITYSDK_OFFSET(0x1B6E7A0)
#define MX_DATA_EXCEL_KEYMAPPINGEXCEL_ENDKEYMAPPINGEXCEL_OFFSET UNITYSDK_OFFSET(0x1B6EC20)
#define MX_DATA_EXCEL_KEYMAPPINGEXCEL_FINISHKEYMAPPINGEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1B6EC90)
#define MX_DATA_EXCEL_KEYMAPPINGEXCEL_FINISHSIZEPREFIXEDKEYMAPPINGEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1B6ECB0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int KeyMappingExcel_TypeDefinitionIndex = 18304;

	class KeyMappingExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::KeyMappingExcel* GetRootAsKeyMappingExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::KeyMappingExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGEXCEL_GETROOTASKEYMAPPINGEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::KeyMappingExcel* GetRootAsKeyMappingExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::KeyMappingExcel* arg)
		{
			return (return (::MX::Data::Excel::KeyMappingExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::KeyMappingExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGEXCEL_GETROOTASKEYMAPPINGEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::KeyMappingExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::KeyMappingExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::String* get_Id()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGEXCEL_GET_ID_OFFSET))(nullptr);
		}

		Il2CppObject* GetIdBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGEXCEL_GETIDBYTES_OFFSET))(nullptr);
		}

		::FlatData::DisplayGroupType* get_DisplayGroupType()
		{
			return (return (::FlatData::DisplayGroupType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGEXCEL_GET_DISPLAYGROUPTYPE_OFFSET))(nullptr);
		}

		::System::String* get_GroupId()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGEXCEL_GET_GROUPID_OFFSET))(nullptr);
		}

		Il2CppObject* GetGroupIdBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGEXCEL_GETGROUPIDBYTES_OFFSET))(nullptr);
		}

		::System::Boolean get_EnableCustomMapping()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGEXCEL_GET_ENABLECUSTOMMAPPING_OFFSET))(nullptr);
		}

		::System::Boolean get_DisplayCustomMapping()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGEXCEL_GET_DISPLAYCUSTOMMAPPING_OFFSET))(nullptr);
		}

		::System::UInt32 get_LocalizeKeyMappingId()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGEXCEL_GET_LOCALIZEKEYMAPPINGID_OFFSET))(nullptr);
		}

		::System::String* get_TargetKeyCode()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGEXCEL_GET_TARGETKEYCODE_OFFSET))(nullptr);
		}

		Il2CppObject* GetTargetKeyCodeBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGEXCEL_GETTARGETKEYCODEBYTES_OFFSET))(nullptr);
		}

		::System::Boolean get_ControllerCursorFocus()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGEXCEL_GET_CONTROLLERCURSORFOCUS_OFFSET))(nullptr);
		}

		::System::String* get_ControllerKeyCode()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGEXCEL_GET_CONTROLLERKEYCODE_OFFSET))(nullptr);
		}

		Il2CppObject* GetControllerKeyCodeBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGEXCEL_GETCONTROLLERKEYCODEBYTES_OFFSET))(nullptr);
		}

		::System::Boolean get_IsDisplay()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGEXCEL_GET_ISDISPLAY_OFFSET))(nullptr);
		}

		::System::Boolean get_IsDisplayController()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGEXCEL_GET_ISDISPLAYCONTROLLER_OFFSET))(nullptr);
		}

		::System::Boolean get_IsUsed()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGEXCEL_GET_ISUSED_OFFSET))(nullptr);
		}

		::System::Boolean get_IsUsedController()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGEXCEL_GET_ISUSEDCONTROLLER_OFFSET))(nullptr);
		}

		::System::Boolean get_IsLongPress()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGEXCEL_GET_ISLONGPRESS_OFFSET))(nullptr);
		}

		::System::Boolean get_IgnorePosCheck()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGEXCEL_GET_IGNOREPOSCHECK_OFFSET))(nullptr);
		}

		::System::Single get_IconPositionX()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGEXCEL_GET_ICONPOSITIONX_OFFSET))(nullptr);
		}

		::System::Single get_IconPositionY()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGEXCEL_GET_ICONPOSITIONY_OFFSET))(nullptr);
		}

		::System::Single get_IconScaleX()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGEXCEL_GET_ICONSCALEX_OFFSET))(nullptr);
		}

		::System::Single get_IconScaleY()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGEXCEL_GET_ICONSCALEY_OFFSET))(nullptr);
		}

		::System::Single get_ControllerIconPositionX()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGEXCEL_GET_CONTROLLERICONPOSITIONX_OFFSET))(nullptr);
		}

		::System::Single get_ControllerIconPositionY()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGEXCEL_GET_CONTROLLERICONPOSITIONY_OFFSET))(nullptr);
		}

		::System::Single get_ControllerIconScaleX()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGEXCEL_GET_CONTROLLERICONSCALEX_OFFSET))(nullptr);
		}

		::System::Single get_ControllerIconScaleY()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGEXCEL_GET_CONTROLLERICONSCALEY_OFFSET))(nullptr);
		}

		::System::String* get_KeymappingIconBGName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGEXCEL_GET_KEYMAPPINGICONBGNAME_OFFSET))(nullptr);
		}

		Il2CppObject* GetKeymappingIconBGNameBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGEXCEL_GETKEYMAPPINGICONBGNAMEBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateKeyMappingExcel(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg, ::FlatData::DisplayGroupType* arg, ::FlatBuffers::StringOffset* arg, ::System::Boolean arg, ::System::Boolean arg, ::System::UInt32 arg, ::FlatBuffers::StringOffset* arg, ::System::Boolean arg, ::FlatBuffers::StringOffset* arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg, ::FlatBuffers::StringOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::FlatData::DisplayGroupType*, ::FlatBuffers::StringOffset*, ::System::Boolean, ::System::Boolean, ::System::UInt32, ::FlatBuffers::StringOffset*, ::System::Boolean, ::FlatBuffers::StringOffset*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGEXCEL_CREATEKEYMAPPINGEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartKeyMappingExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGEXCEL_STARTKEYMAPPINGEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGEXCEL_ADDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDisplayGroupType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::DisplayGroupType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::DisplayGroupType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGEXCEL_ADDDISPLAYGROUPTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGEXCEL_ADDGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEnableCustomMapping(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGEXCEL_ADDENABLECUSTOMMAPPING_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDisplayCustomMapping(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGEXCEL_ADDDISPLAYCUSTOMMAPPING_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLocalizeKeyMappingId(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGEXCEL_ADDLOCALIZEKEYMAPPINGID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddTargetKeyCode(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGEXCEL_ADDTARGETKEYCODE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddControllerCursorFocus(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGEXCEL_ADDCONTROLLERCURSORFOCUS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddControllerKeyCode(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGEXCEL_ADDCONTROLLERKEYCODE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddIsDisplay(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGEXCEL_ADDISDISPLAY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddIsDisplayController(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGEXCEL_ADDISDISPLAYCONTROLLER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddIsUsed(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGEXCEL_ADDISUSED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddIsUsedController(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGEXCEL_ADDISUSEDCONTROLLER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddIsLongPress(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGEXCEL_ADDISLONGPRESS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddIgnorePosCheck(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGEXCEL_ADDIGNOREPOSCHECK_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddIconPositionX(::FlatBuffers::FlatBufferBuilder* arg, ::System::Single arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGEXCEL_ADDICONPOSITIONX_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddIconPositionY(::FlatBuffers::FlatBufferBuilder* arg, ::System::Single arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGEXCEL_ADDICONPOSITIONY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddIconScaleX(::FlatBuffers::FlatBufferBuilder* arg, ::System::Single arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGEXCEL_ADDICONSCALEX_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddIconScaleY(::FlatBuffers::FlatBufferBuilder* arg, ::System::Single arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGEXCEL_ADDICONSCALEY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddControllerIconPositionX(::FlatBuffers::FlatBufferBuilder* arg, ::System::Single arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGEXCEL_ADDCONTROLLERICONPOSITIONX_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddControllerIconPositionY(::FlatBuffers::FlatBufferBuilder* arg, ::System::Single arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGEXCEL_ADDCONTROLLERICONPOSITIONY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddControllerIconScaleX(::FlatBuffers::FlatBufferBuilder* arg, ::System::Single arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGEXCEL_ADDCONTROLLERICONSCALEX_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddControllerIconScaleY(::FlatBuffers::FlatBufferBuilder* arg, ::System::Single arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGEXCEL_ADDCONTROLLERICONSCALEY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddKeymappingIconBGName(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGEXCEL_ADDKEYMAPPINGICONBGNAME_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndKeyMappingExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGEXCEL_ENDKEYMAPPINGEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishKeyMappingExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGEXCEL_FINISHKEYMAPPINGEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedKeyMappingExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGEXCEL_FINISHSIZEPREFIXEDKEYMAPPINGEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

