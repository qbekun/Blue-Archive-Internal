#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class TacticEntityEffectFilterExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }

#define MX_DATA_EXCEL_TACTICENTITYEFFECTFILTEREXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1C9C080)
#define MX_DATA_EXCEL_TACTICENTITYEFFECTFILTEREXCEL_GETROOTASTACTICENTITYEFFECTFILTEREXCEL_OFFSET UNITYSDK_OFFSET(0x1C9C090)
#define MX_DATA_EXCEL_TACTICENTITYEFFECTFILTEREXCEL_GETROOTASTACTICENTITYEFFECTFILTEREXCEL_OFFSET UNITYSDK_OFFSET(0x1C9C0F0)
#define MX_DATA_EXCEL_TACTICENTITYEFFECTFILTEREXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1C9C180)
#define MX_DATA_EXCEL_TACTICENTITYEFFECTFILTEREXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1C9C150)
#define MX_DATA_EXCEL_TACTICENTITYEFFECTFILTEREXCEL_GET_TARGETEFFECTNAME_OFFSET UNITYSDK_OFFSET(0x1C9C1A0)
#define MX_DATA_EXCEL_TACTICENTITYEFFECTFILTEREXCEL_GETTARGETEFFECTNAMEBYTES_OFFSET UNITYSDK_OFFSET(0x1C9C1E0)
#define MX_DATA_EXCEL_TACTICENTITYEFFECTFILTEREXCEL_GET_SHOWEFFECTTOVEHICLE_OFFSET UNITYSDK_OFFSET(0x1C9C200)
#define MX_DATA_EXCEL_TACTICENTITYEFFECTFILTEREXCEL_GET_SHOWEFFECTTOBOSS_OFFSET UNITYSDK_OFFSET(0x1C9C250)
#define MX_DATA_EXCEL_TACTICENTITYEFFECTFILTEREXCEL_CREATETACTICENTITYEFFECTFILTEREXCEL_OFFSET UNITYSDK_OFFSET(0x1C9C2A0)
#define MX_DATA_EXCEL_TACTICENTITYEFFECTFILTEREXCEL_STARTTACTICENTITYEFFECTFILTEREXCEL_OFFSET UNITYSDK_OFFSET(0x1C9C430)
#define MX_DATA_EXCEL_TACTICENTITYEFFECTFILTEREXCEL_ADDTARGETEFFECTNAME_OFFSET UNITYSDK_OFFSET(0x1C9C350)
#define MX_DATA_EXCEL_TACTICENTITYEFFECTFILTEREXCEL_ADDSHOWEFFECTTOVEHICLE_OFFSET UNITYSDK_OFFSET(0x1C9C3B0)
#define MX_DATA_EXCEL_TACTICENTITYEFFECTFILTEREXCEL_ADDSHOWEFFECTTOBOSS_OFFSET UNITYSDK_OFFSET(0x1C9C380)
#define MX_DATA_EXCEL_TACTICENTITYEFFECTFILTEREXCEL_ENDTACTICENTITYEFFECTFILTEREXCEL_OFFSET UNITYSDK_OFFSET(0x1C9C3E0)
#define MX_DATA_EXCEL_TACTICENTITYEFFECTFILTEREXCEL_FINISHTACTICENTITYEFFECTFILTEREXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C9C450)
#define MX_DATA_EXCEL_TACTICENTITYEFFECTFILTEREXCEL_FINISHSIZEPREFIXEDTACTICENTITYEFFECTFILTEREXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C9C470)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int TacticEntityEffectFilterExcel_TypeDefinitionIndex = 19572;

	class TacticEntityEffectFilterExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TACTICENTITYEFFECTFILTEREXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::TacticEntityEffectFilterExcel* GetRootAsTacticEntityEffectFilterExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::TacticEntityEffectFilterExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TACTICENTITYEFFECTFILTEREXCEL_GETROOTASTACTICENTITYEFFECTFILTEREXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::TacticEntityEffectFilterExcel* GetRootAsTacticEntityEffectFilterExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::TacticEntityEffectFilterExcel* arg)
		{
			return (return (::MX::Data::Excel::TacticEntityEffectFilterExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::TacticEntityEffectFilterExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TACTICENTITYEFFECTFILTEREXCEL_GETROOTASTACTICENTITYEFFECTFILTEREXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TACTICENTITYEFFECTFILTEREXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::TacticEntityEffectFilterExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::TacticEntityEffectFilterExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TACTICENTITYEFFECTFILTEREXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::String* get_TargetEffectName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TACTICENTITYEFFECTFILTEREXCEL_GET_TARGETEFFECTNAME_OFFSET))(nullptr);
		}

		Il2CppObject* GetTargetEffectNameBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TACTICENTITYEFFECTFILTEREXCEL_GETTARGETEFFECTNAMEBYTES_OFFSET))(nullptr);
		}

		::System::Boolean get_ShowEffectToVehicle()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TACTICENTITYEFFECTFILTEREXCEL_GET_SHOWEFFECTTOVEHICLE_OFFSET))(nullptr);
		}

		::System::Boolean get_ShowEffectToBoss()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TACTICENTITYEFFECTFILTEREXCEL_GET_SHOWEFFECTTOBOSS_OFFSET))(nullptr);
		}

		Il2CppObject* CreateTacticEntityEffectFilterExcel(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TACTICENTITYEFFECTFILTEREXCEL_CREATETACTICENTITYEFFECTFILTEREXCEL_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void StartTacticEntityEffectFilterExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TACTICENTITYEFFECTFILTEREXCEL_STARTTACTICENTITYEFFECTFILTEREXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddTargetEffectName(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TACTICENTITYEFFECTFILTEREXCEL_ADDTARGETEFFECTNAME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddShowEffectToVehicle(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TACTICENTITYEFFECTFILTEREXCEL_ADDSHOWEFFECTTOVEHICLE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddShowEffectToBoss(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TACTICENTITYEFFECTFILTEREXCEL_ADDSHOWEFFECTTOBOSS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndTacticEntityEffectFilterExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TACTICENTITYEFFECTFILTEREXCEL_ENDTACTICENTITYEFFECTFILTEREXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishTacticEntityEffectFilterExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TACTICENTITYEFFECTFILTEREXCEL_FINISHTACTICENTITYEFFECTFILTEREXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedTacticEntityEffectFilterExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TACTICENTITYEFFECTFILTEREXCEL_FINISHSIZEPREFIXEDTACTICENTITYEFFECTFILTEREXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

