#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class MessagePopupExcel; }
namespace FlatData { class MessagePopupLayout; }
namespace FlatData { class MessagePopupImagePositionType; }
namespace FlatData { class MessagePopupButtonType; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }
namespace FlatBuffers { class VectorOffset; }

#define MX_DATA_EXCEL_MESSAGEPOPUPEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1B8A730)
#define MX_DATA_EXCEL_MESSAGEPOPUPEXCEL_GETROOTASMESSAGEPOPUPEXCEL_OFFSET UNITYSDK_OFFSET(0x1B8A740)
#define MX_DATA_EXCEL_MESSAGEPOPUPEXCEL_GETROOTASMESSAGEPOPUPEXCEL_OFFSET UNITYSDK_OFFSET(0x1B8A7A0)
#define MX_DATA_EXCEL_MESSAGEPOPUPEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1B8A830)
#define MX_DATA_EXCEL_MESSAGEPOPUPEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1B8A800)
#define MX_DATA_EXCEL_MESSAGEPOPUPEXCEL_GET_STRINGID_OFFSET UNITYSDK_OFFSET(0x1B8A850)
#define MX_DATA_EXCEL_MESSAGEPOPUPEXCEL_GET_MESSAGEPOPUPLAYOUT_OFFSET UNITYSDK_OFFSET(0x1B8A8A0)
#define MX_DATA_EXCEL_MESSAGEPOPUPEXCEL_GET_ORDERTYPE_OFFSET UNITYSDK_OFFSET(0x1B8A8F0)
#define MX_DATA_EXCEL_MESSAGEPOPUPEXCEL_GET_IMAGE_OFFSET UNITYSDK_OFFSET(0x1B8A940)
#define MX_DATA_EXCEL_MESSAGEPOPUPEXCEL_GETIMAGEBYTES_OFFSET UNITYSDK_OFFSET(0x1B8A980)
#define MX_DATA_EXCEL_MESSAGEPOPUPEXCEL_GET_TITLETEXT_OFFSET UNITYSDK_OFFSET(0x1B8A9A0)
#define MX_DATA_EXCEL_MESSAGEPOPUPEXCEL_GET_SUBTITLETEXT_OFFSET UNITYSDK_OFFSET(0x1B8A9F0)
#define MX_DATA_EXCEL_MESSAGEPOPUPEXCEL_GET_MESSAGETEXT_OFFSET UNITYSDK_OFFSET(0x1B8AA40)
#define MX_DATA_EXCEL_MESSAGEPOPUPEXCEL_CONDITIONTEXT_OFFSET UNITYSDK_OFFSET(0x1B8AA90)
#define MX_DATA_EXCEL_MESSAGEPOPUPEXCEL_GET_CONDITIONTEXTLENGTH_OFFSET UNITYSDK_OFFSET(0x1B8AAF0)
#define MX_DATA_EXCEL_MESSAGEPOPUPEXCEL_GETCONDITIONTEXTBYTES_OFFSET UNITYSDK_OFFSET(0x1B8AB30)
#define MX_DATA_EXCEL_MESSAGEPOPUPEXCEL_GET_DISPLAYXBUTTON_OFFSET UNITYSDK_OFFSET(0x1B8AB50)
#define MX_DATA_EXCEL_MESSAGEPOPUPEXCEL_BUTTON_OFFSET UNITYSDK_OFFSET(0x1B8ABA0)
#define MX_DATA_EXCEL_MESSAGEPOPUPEXCEL_GET_BUTTONLENGTH_OFFSET UNITYSDK_OFFSET(0x1B8AC00)
#define MX_DATA_EXCEL_MESSAGEPOPUPEXCEL_GETBUTTONBYTES_OFFSET UNITYSDK_OFFSET(0x1B8AC40)
#define MX_DATA_EXCEL_MESSAGEPOPUPEXCEL_BUTTONTEXT_OFFSET UNITYSDK_OFFSET(0x1B8AC60)
#define MX_DATA_EXCEL_MESSAGEPOPUPEXCEL_GET_BUTTONTEXTLENGTH_OFFSET UNITYSDK_OFFSET(0x1B8ACC0)
#define MX_DATA_EXCEL_MESSAGEPOPUPEXCEL_GETBUTTONTEXTBYTES_OFFSET UNITYSDK_OFFSET(0x1B8AD00)
#define MX_DATA_EXCEL_MESSAGEPOPUPEXCEL_BUTTONCOMMAND_OFFSET UNITYSDK_OFFSET(0x1B8AD20)
#define MX_DATA_EXCEL_MESSAGEPOPUPEXCEL_GET_BUTTONCOMMANDLENGTH_OFFSET UNITYSDK_OFFSET(0x1B8AD70)
#define MX_DATA_EXCEL_MESSAGEPOPUPEXCEL_BUTTONPARAMETER_OFFSET UNITYSDK_OFFSET(0x1B8ADB0)
#define MX_DATA_EXCEL_MESSAGEPOPUPEXCEL_GET_BUTTONPARAMETERLENGTH_OFFSET UNITYSDK_OFFSET(0x1B8AE00)
#define MX_DATA_EXCEL_MESSAGEPOPUPEXCEL_CREATEMESSAGEPOPUPEXCEL_OFFSET UNITYSDK_OFFSET(0x1B8AE40)
#define MX_DATA_EXCEL_MESSAGEPOPUPEXCEL_STARTMESSAGEPOPUPEXCEL_OFFSET UNITYSDK_OFFSET(0x1B8B340)
#define MX_DATA_EXCEL_MESSAGEPOPUPEXCEL_ADDSTRINGID_OFFSET UNITYSDK_OFFSET(0x1B8B290)
#define MX_DATA_EXCEL_MESSAGEPOPUPEXCEL_ADDMESSAGEPOPUPLAYOUT_OFFSET UNITYSDK_OFFSET(0x1B8B260)
#define MX_DATA_EXCEL_MESSAGEPOPUPEXCEL_ADDORDERTYPE_OFFSET UNITYSDK_OFFSET(0x1B8B230)
#define MX_DATA_EXCEL_MESSAGEPOPUPEXCEL_ADDIMAGE_OFFSET UNITYSDK_OFFSET(0x1B8B200)
#define MX_DATA_EXCEL_MESSAGEPOPUPEXCEL_ADDTITLETEXT_OFFSET UNITYSDK_OFFSET(0x1B8B1D0)
#define MX_DATA_EXCEL_MESSAGEPOPUPEXCEL_ADDSUBTITLETEXT_OFFSET UNITYSDK_OFFSET(0x1B8B1A0)
#define MX_DATA_EXCEL_MESSAGEPOPUPEXCEL_ADDMESSAGETEXT_OFFSET UNITYSDK_OFFSET(0x1B8B170)
#define MX_DATA_EXCEL_MESSAGEPOPUPEXCEL_ADDCONDITIONTEXT_OFFSET UNITYSDK_OFFSET(0x1B8B140)
#define MX_DATA_EXCEL_MESSAGEPOPUPEXCEL_CREATECONDITIONTEXTVECTOR_OFFSET UNITYSDK_OFFSET(0x1B8B360)
#define MX_DATA_EXCEL_MESSAGEPOPUPEXCEL_STARTCONDITIONTEXTVECTOR_OFFSET UNITYSDK_OFFSET(0x1B8B3F0)
#define MX_DATA_EXCEL_MESSAGEPOPUPEXCEL_ADDDISPLAYXBUTTON_OFFSET UNITYSDK_OFFSET(0x1B8B2C0)
#define MX_DATA_EXCEL_MESSAGEPOPUPEXCEL_ADDBUTTON_OFFSET UNITYSDK_OFFSET(0x1B8B110)
#define MX_DATA_EXCEL_MESSAGEPOPUPEXCEL_CREATEBUTTONVECTOR_OFFSET UNITYSDK_OFFSET(0x1B8B430)
#define MX_DATA_EXCEL_MESSAGEPOPUPEXCEL_STARTBUTTONVECTOR_OFFSET UNITYSDK_OFFSET(0x1B8B4C0)
#define MX_DATA_EXCEL_MESSAGEPOPUPEXCEL_ADDBUTTONTEXT_OFFSET UNITYSDK_OFFSET(0x1B8B0E0)
#define MX_DATA_EXCEL_MESSAGEPOPUPEXCEL_CREATEBUTTONTEXTVECTOR_OFFSET UNITYSDK_OFFSET(0x1B8B500)
#define MX_DATA_EXCEL_MESSAGEPOPUPEXCEL_STARTBUTTONTEXTVECTOR_OFFSET UNITYSDK_OFFSET(0x1B8B590)
#define MX_DATA_EXCEL_MESSAGEPOPUPEXCEL_ADDBUTTONCOMMAND_OFFSET UNITYSDK_OFFSET(0x1B8B0B0)
#define MX_DATA_EXCEL_MESSAGEPOPUPEXCEL_CREATEBUTTONCOMMANDVECTOR_OFFSET UNITYSDK_OFFSET(0x1B8B5D0)
#define MX_DATA_EXCEL_MESSAGEPOPUPEXCEL_STARTBUTTONCOMMANDVECTOR_OFFSET UNITYSDK_OFFSET(0x1B8B660)
#define MX_DATA_EXCEL_MESSAGEPOPUPEXCEL_ADDBUTTONPARAMETER_OFFSET UNITYSDK_OFFSET(0x1B8B080)
#define MX_DATA_EXCEL_MESSAGEPOPUPEXCEL_CREATEBUTTONPARAMETERVECTOR_OFFSET UNITYSDK_OFFSET(0x1B8B6A0)
#define MX_DATA_EXCEL_MESSAGEPOPUPEXCEL_STARTBUTTONPARAMETERVECTOR_OFFSET UNITYSDK_OFFSET(0x1B8B730)
#define MX_DATA_EXCEL_MESSAGEPOPUPEXCEL_ENDMESSAGEPOPUPEXCEL_OFFSET UNITYSDK_OFFSET(0x1B8B2F0)
#define MX_DATA_EXCEL_MESSAGEPOPUPEXCEL_FINISHMESSAGEPOPUPEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1B8B770)
#define MX_DATA_EXCEL_MESSAGEPOPUPEXCEL_FINISHSIZEPREFIXEDMESSAGEPOPUPEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1B8B790)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int MessagePopupExcel_TypeDefinitionIndex = 18430;

	class MessagePopupExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MESSAGEPOPUPEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::MessagePopupExcel* GetRootAsMessagePopupExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::MessagePopupExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MESSAGEPOPUPEXCEL_GETROOTASMESSAGEPOPUPEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::MessagePopupExcel* GetRootAsMessagePopupExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::MessagePopupExcel* arg)
		{
			return (return (::MX::Data::Excel::MessagePopupExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::MessagePopupExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MESSAGEPOPUPEXCEL_GETROOTASMESSAGEPOPUPEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MESSAGEPOPUPEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::MessagePopupExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::MessagePopupExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MESSAGEPOPUPEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::UInt32 get_StringId()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MESSAGEPOPUPEXCEL_GET_STRINGID_OFFSET))(nullptr);
		}

		::FlatData::MessagePopupLayout* get_MessagePopupLayout()
		{
			return (return (::FlatData::MessagePopupLayout*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MESSAGEPOPUPEXCEL_GET_MESSAGEPOPUPLAYOUT_OFFSET))(nullptr);
		}

		::FlatData::MessagePopupImagePositionType* get_OrderType()
		{
			return (return (::FlatData::MessagePopupImagePositionType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MESSAGEPOPUPEXCEL_GET_ORDERTYPE_OFFSET))(nullptr);
		}

		::System::String* get_Image()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MESSAGEPOPUPEXCEL_GET_IMAGE_OFFSET))(nullptr);
		}

		Il2CppObject* GetImageBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MESSAGEPOPUPEXCEL_GETIMAGEBYTES_OFFSET))(nullptr);
		}

		::System::UInt32 get_TitleText()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MESSAGEPOPUPEXCEL_GET_TITLETEXT_OFFSET))(nullptr);
		}

		::System::UInt32 get_SubTitleText()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MESSAGEPOPUPEXCEL_GET_SUBTITLETEXT_OFFSET))(nullptr);
		}

		::System::UInt32 get_MessageText()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MESSAGEPOPUPEXCEL_GET_MESSAGETEXT_OFFSET))(nullptr);
		}

		::System::UInt32 ConditionText(::System::Int32 arg)
		{
			return (return (::System::UInt32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MESSAGEPOPUPEXCEL_CONDITIONTEXT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ConditionTextLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MESSAGEPOPUPEXCEL_GET_CONDITIONTEXTLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetConditionTextBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MESSAGEPOPUPEXCEL_GETCONDITIONTEXTBYTES_OFFSET))(nullptr);
		}

		::System::Boolean get_DisplayXButton()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MESSAGEPOPUPEXCEL_GET_DISPLAYXBUTTON_OFFSET))(nullptr);
		}

		::FlatData::MessagePopupButtonType* Button(::System::Int32 arg)
		{
			return (return (::FlatData::MessagePopupButtonType*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MESSAGEPOPUPEXCEL_BUTTON_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ButtonLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MESSAGEPOPUPEXCEL_GET_BUTTONLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetButtonBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MESSAGEPOPUPEXCEL_GETBUTTONBYTES_OFFSET))(nullptr);
		}

		::System::UInt32 ButtonText(::System::Int32 arg)
		{
			return (return (::System::UInt32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MESSAGEPOPUPEXCEL_BUTTONTEXT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ButtonTextLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MESSAGEPOPUPEXCEL_GET_BUTTONTEXTLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetButtonTextBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MESSAGEPOPUPEXCEL_GETBUTTONTEXTBYTES_OFFSET))(nullptr);
		}

		::System::String* ButtonCommand(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MESSAGEPOPUPEXCEL_BUTTONCOMMAND_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ButtonCommandLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MESSAGEPOPUPEXCEL_GET_BUTTONCOMMANDLENGTH_OFFSET))(nullptr);
		}

		::System::String* ButtonParameter(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MESSAGEPOPUPEXCEL_BUTTONPARAMETER_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ButtonParameterLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MESSAGEPOPUPEXCEL_GET_BUTTONPARAMETERLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* CreateMessagePopupExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg, ::FlatData::MessagePopupLayout* arg, ::FlatData::MessagePopupImagePositionType* arg, ::FlatBuffers::StringOffset* arg, ::System::UInt32 arg, ::System::UInt32 arg, ::System::UInt32 arg, ::FlatBuffers::VectorOffset* arg, ::System::Boolean arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::FlatData::MessagePopupLayout*, ::FlatData::MessagePopupImagePositionType*, ::FlatBuffers::StringOffset*, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::FlatBuffers::VectorOffset*, ::System::Boolean, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MESSAGEPOPUPEXCEL_CREATEMESSAGEPOPUPEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartMessagePopupExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MESSAGEPOPUPEXCEL_STARTMESSAGEPOPUPEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddStringId(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MESSAGEPOPUPEXCEL_ADDSTRINGID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddMessagePopupLayout(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::MessagePopupLayout* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::MessagePopupLayout*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MESSAGEPOPUPEXCEL_ADDMESSAGEPOPUPLAYOUT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddOrderType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::MessagePopupImagePositionType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::MessagePopupImagePositionType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MESSAGEPOPUPEXCEL_ADDORDERTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddImage(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MESSAGEPOPUPEXCEL_ADDIMAGE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddTitleText(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MESSAGEPOPUPEXCEL_ADDTITLETEXT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddSubTitleText(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MESSAGEPOPUPEXCEL_ADDSUBTITLETEXT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddMessageText(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MESSAGEPOPUPEXCEL_ADDMESSAGETEXT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddConditionText(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MESSAGEPOPUPEXCEL_ADDCONDITIONTEXT_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateConditionTextVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MESSAGEPOPUPEXCEL_CREATECONDITIONTEXTVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartConditionTextVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MESSAGEPOPUPEXCEL_STARTCONDITIONTEXTVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDisplayXButton(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MESSAGEPOPUPEXCEL_ADDDISPLAYXBUTTON_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddButton(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MESSAGEPOPUPEXCEL_ADDBUTTON_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateButtonVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MESSAGEPOPUPEXCEL_CREATEBUTTONVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartButtonVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MESSAGEPOPUPEXCEL_STARTBUTTONVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddButtonText(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MESSAGEPOPUPEXCEL_ADDBUTTONTEXT_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateButtonTextVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MESSAGEPOPUPEXCEL_CREATEBUTTONTEXTVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartButtonTextVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MESSAGEPOPUPEXCEL_STARTBUTTONTEXTVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddButtonCommand(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MESSAGEPOPUPEXCEL_ADDBUTTONCOMMAND_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateButtonCommandVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MESSAGEPOPUPEXCEL_CREATEBUTTONCOMMANDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartButtonCommandVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MESSAGEPOPUPEXCEL_STARTBUTTONCOMMANDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddButtonParameter(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MESSAGEPOPUPEXCEL_ADDBUTTONPARAMETER_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateButtonParameterVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MESSAGEPOPUPEXCEL_CREATEBUTTONPARAMETERVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartButtonParameterVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MESSAGEPOPUPEXCEL_STARTBUTTONPARAMETERVECTOR_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndMessagePopupExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MESSAGEPOPUPEXCEL_ENDMESSAGEPOPUPEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishMessagePopupExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MESSAGEPOPUPEXCEL_FINISHMESSAGEPOPUPEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedMessagePopupExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MESSAGEPOPUPEXCEL_FINISHSIZEPREFIXEDMESSAGEPOPUPEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

