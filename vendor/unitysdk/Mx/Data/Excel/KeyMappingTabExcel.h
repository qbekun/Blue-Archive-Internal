#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class KeyMappingTabExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }

#define MX_DATA_EXCEL_KEYMAPPINGTABEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1B72D90)
#define MX_DATA_EXCEL_KEYMAPPINGTABEXCEL_GETROOTASKEYMAPPINGTABEXCEL_OFFSET UNITYSDK_OFFSET(0x1B72DA0)
#define MX_DATA_EXCEL_KEYMAPPINGTABEXCEL_GETROOTASKEYMAPPINGTABEXCEL_OFFSET UNITYSDK_OFFSET(0x1B72E00)
#define MX_DATA_EXCEL_KEYMAPPINGTABEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1B72E90)
#define MX_DATA_EXCEL_KEYMAPPINGTABEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1B72E60)
#define MX_DATA_EXCEL_KEYMAPPINGTABEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0x1B72EB0)
#define MX_DATA_EXCEL_KEYMAPPINGTABEXCEL_GETIDBYTES_OFFSET UNITYSDK_OFFSET(0x1B72EF0)
#define MX_DATA_EXCEL_KEYMAPPINGTABEXCEL_GET_LEFTARROWKEY_OFFSET UNITYSDK_OFFSET(0x1B72F10)
#define MX_DATA_EXCEL_KEYMAPPINGTABEXCEL_GETLEFTARROWKEYBYTES_OFFSET UNITYSDK_OFFSET(0x1B72F50)
#define MX_DATA_EXCEL_KEYMAPPINGTABEXCEL_GET_RIGHTARROWKEY_OFFSET UNITYSDK_OFFSET(0x1B72F70)
#define MX_DATA_EXCEL_KEYMAPPINGTABEXCEL_GETRIGHTARROWKEYBYTES_OFFSET UNITYSDK_OFFSET(0x1B72FB0)
#define MX_DATA_EXCEL_KEYMAPPINGTABEXCEL_GET_LEFTICONPOSITIONX_OFFSET UNITYSDK_OFFSET(0x1B72FD0)
#define MX_DATA_EXCEL_KEYMAPPINGTABEXCEL_GET_LEFTICONPOSITIONY_OFFSET UNITYSDK_OFFSET(0x1B73020)
#define MX_DATA_EXCEL_KEYMAPPINGTABEXCEL_GET_LEFTICONSCALEX_OFFSET UNITYSDK_OFFSET(0x1B73070)
#define MX_DATA_EXCEL_KEYMAPPINGTABEXCEL_GET_LEFTICONSCALEY_OFFSET UNITYSDK_OFFSET(0x1B730C0)
#define MX_DATA_EXCEL_KEYMAPPINGTABEXCEL_GET_RIGHTICONPOSITIONX_OFFSET UNITYSDK_OFFSET(0x1B73110)
#define MX_DATA_EXCEL_KEYMAPPINGTABEXCEL_GET_RIGHTICONPOSITIONY_OFFSET UNITYSDK_OFFSET(0x1B73160)
#define MX_DATA_EXCEL_KEYMAPPINGTABEXCEL_GET_RIGHTICONSCALEX_OFFSET UNITYSDK_OFFSET(0x1B731B0)
#define MX_DATA_EXCEL_KEYMAPPINGTABEXCEL_GET_RIGHTICONSCALEY_OFFSET UNITYSDK_OFFSET(0x1B73200)
#define MX_DATA_EXCEL_KEYMAPPINGTABEXCEL_CREATEKEYMAPPINGTABEXCEL_OFFSET UNITYSDK_OFFSET(0x1B73250)
#define MX_DATA_EXCEL_KEYMAPPINGTABEXCEL_STARTKEYMAPPINGTABEXCEL_OFFSET UNITYSDK_OFFSET(0x1B73710)
#define MX_DATA_EXCEL_KEYMAPPINGTABEXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0x1B73690)
#define MX_DATA_EXCEL_KEYMAPPINGTABEXCEL_ADDLEFTARROWKEY_OFFSET UNITYSDK_OFFSET(0x1B73660)
#define MX_DATA_EXCEL_KEYMAPPINGTABEXCEL_ADDRIGHTARROWKEY_OFFSET UNITYSDK_OFFSET(0x1B73630)
#define MX_DATA_EXCEL_KEYMAPPINGTABEXCEL_ADDLEFTICONPOSITIONX_OFFSET UNITYSDK_OFFSET(0x1B73600)
#define MX_DATA_EXCEL_KEYMAPPINGTABEXCEL_ADDLEFTICONPOSITIONY_OFFSET UNITYSDK_OFFSET(0x1B735D0)
#define MX_DATA_EXCEL_KEYMAPPINGTABEXCEL_ADDLEFTICONSCALEX_OFFSET UNITYSDK_OFFSET(0x1B735A0)
#define MX_DATA_EXCEL_KEYMAPPINGTABEXCEL_ADDLEFTICONSCALEY_OFFSET UNITYSDK_OFFSET(0x1B73570)
#define MX_DATA_EXCEL_KEYMAPPINGTABEXCEL_ADDRIGHTICONPOSITIONX_OFFSET UNITYSDK_OFFSET(0x1B73540)
#define MX_DATA_EXCEL_KEYMAPPINGTABEXCEL_ADDRIGHTICONPOSITIONY_OFFSET UNITYSDK_OFFSET(0x1B73510)
#define MX_DATA_EXCEL_KEYMAPPINGTABEXCEL_ADDRIGHTICONSCALEX_OFFSET UNITYSDK_OFFSET(0x1B734E0)
#define MX_DATA_EXCEL_KEYMAPPINGTABEXCEL_ADDRIGHTICONSCALEY_OFFSET UNITYSDK_OFFSET(0x1B734B0)
#define MX_DATA_EXCEL_KEYMAPPINGTABEXCEL_ENDKEYMAPPINGTABEXCEL_OFFSET UNITYSDK_OFFSET(0x1B736C0)
#define MX_DATA_EXCEL_KEYMAPPINGTABEXCEL_FINISHKEYMAPPINGTABEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1B73730)
#define MX_DATA_EXCEL_KEYMAPPINGTABEXCEL_FINISHSIZEPREFIXEDKEYMAPPINGTABEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1B73750)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int KeyMappingTabExcel_TypeDefinitionIndex = 18332;

	class KeyMappingTabExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGTABEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::KeyMappingTabExcel* GetRootAsKeyMappingTabExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::KeyMappingTabExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGTABEXCEL_GETROOTASKEYMAPPINGTABEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::KeyMappingTabExcel* GetRootAsKeyMappingTabExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::KeyMappingTabExcel* arg)
		{
			return (return (::MX::Data::Excel::KeyMappingTabExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::KeyMappingTabExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGTABEXCEL_GETROOTASKEYMAPPINGTABEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGTABEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::KeyMappingTabExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::KeyMappingTabExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGTABEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::String* get_Id()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGTABEXCEL_GET_ID_OFFSET))(nullptr);
		}

		Il2CppObject* GetIdBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGTABEXCEL_GETIDBYTES_OFFSET))(nullptr);
		}

		::System::String* get_LeftArrowKey()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGTABEXCEL_GET_LEFTARROWKEY_OFFSET))(nullptr);
		}

		Il2CppObject* GetLeftArrowKeyBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGTABEXCEL_GETLEFTARROWKEYBYTES_OFFSET))(nullptr);
		}

		::System::String* get_RightArrowKey()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGTABEXCEL_GET_RIGHTARROWKEY_OFFSET))(nullptr);
		}

		Il2CppObject* GetRightArrowKeyBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGTABEXCEL_GETRIGHTARROWKEYBYTES_OFFSET))(nullptr);
		}

		::System::Single get_LeftIconPositionX()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGTABEXCEL_GET_LEFTICONPOSITIONX_OFFSET))(nullptr);
		}

		::System::Single get_LeftIconPositionY()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGTABEXCEL_GET_LEFTICONPOSITIONY_OFFSET))(nullptr);
		}

		::System::Single get_LeftIconScaleX()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGTABEXCEL_GET_LEFTICONSCALEX_OFFSET))(nullptr);
		}

		::System::Single get_LeftIconScaleY()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGTABEXCEL_GET_LEFTICONSCALEY_OFFSET))(nullptr);
		}

		::System::Single get_RightIconPositionX()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGTABEXCEL_GET_RIGHTICONPOSITIONX_OFFSET))(nullptr);
		}

		::System::Single get_RightIconPositionY()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGTABEXCEL_GET_RIGHTICONPOSITIONY_OFFSET))(nullptr);
		}

		::System::Single get_RightIconScaleX()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGTABEXCEL_GET_RIGHTICONSCALEX_OFFSET))(nullptr);
		}

		::System::Single get_RightIconScaleY()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGTABEXCEL_GET_RIGHTICONSCALEY_OFFSET))(nullptr);
		}

		Il2CppObject* CreateKeyMappingTabExcel(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGTABEXCEL_CREATEKEYMAPPINGTABEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartKeyMappingTabExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGTABEXCEL_STARTKEYMAPPINGTABEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGTABEXCEL_ADDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLeftArrowKey(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGTABEXCEL_ADDLEFTARROWKEY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRightArrowKey(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGTABEXCEL_ADDRIGHTARROWKEY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLeftIconPositionX(::FlatBuffers::FlatBufferBuilder* arg, ::System::Single arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGTABEXCEL_ADDLEFTICONPOSITIONX_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLeftIconPositionY(::FlatBuffers::FlatBufferBuilder* arg, ::System::Single arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGTABEXCEL_ADDLEFTICONPOSITIONY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLeftIconScaleX(::FlatBuffers::FlatBufferBuilder* arg, ::System::Single arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGTABEXCEL_ADDLEFTICONSCALEX_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLeftIconScaleY(::FlatBuffers::FlatBufferBuilder* arg, ::System::Single arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGTABEXCEL_ADDLEFTICONSCALEY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRightIconPositionX(::FlatBuffers::FlatBufferBuilder* arg, ::System::Single arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGTABEXCEL_ADDRIGHTICONPOSITIONX_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRightIconPositionY(::FlatBuffers::FlatBufferBuilder* arg, ::System::Single arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGTABEXCEL_ADDRIGHTICONPOSITIONY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRightIconScaleX(::FlatBuffers::FlatBufferBuilder* arg, ::System::Single arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGTABEXCEL_ADDRIGHTICONSCALEX_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRightIconScaleY(::FlatBuffers::FlatBufferBuilder* arg, ::System::Single arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGTABEXCEL_ADDRIGHTICONSCALEY_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndKeyMappingTabExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGTABEXCEL_ENDKEYMAPPINGTABEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishKeyMappingTabExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGTABEXCEL_FINISHKEYMAPPINGTABEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedKeyMappingTabExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_KEYMAPPINGTABEXCEL_FINISHSIZEPREFIXEDKEYMAPPINGTABEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

