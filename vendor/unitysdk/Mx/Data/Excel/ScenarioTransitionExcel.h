#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class ScenarioTransitionExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }

#define MX_DATA_EXCEL_SCENARIOTRANSITIONEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1C69B60)
#define MX_DATA_EXCEL_SCENARIOTRANSITIONEXCEL_GETROOTASSCENARIOTRANSITIONEXCEL_OFFSET UNITYSDK_OFFSET(0x1C69B70)
#define MX_DATA_EXCEL_SCENARIOTRANSITIONEXCEL_GETROOTASSCENARIOTRANSITIONEXCEL_OFFSET UNITYSDK_OFFSET(0x1C69BD0)
#define MX_DATA_EXCEL_SCENARIOTRANSITIONEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1C69C60)
#define MX_DATA_EXCEL_SCENARIOTRANSITIONEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1C69C30)
#define MX_DATA_EXCEL_SCENARIOTRANSITIONEXCEL_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1C69C80)
#define MX_DATA_EXCEL_SCENARIOTRANSITIONEXCEL_GET_TRANSITIONOUT_OFFSET UNITYSDK_OFFSET(0x1C69CD0)
#define MX_DATA_EXCEL_SCENARIOTRANSITIONEXCEL_GETTRANSITIONOUTBYTES_OFFSET UNITYSDK_OFFSET(0x1C69D10)
#define MX_DATA_EXCEL_SCENARIOTRANSITIONEXCEL_GET_TRANSITIONOUTDURATION_OFFSET UNITYSDK_OFFSET(0x1C69D30)
#define MX_DATA_EXCEL_SCENARIOTRANSITIONEXCEL_GET_TRANSITIONOUTRESOURCE_OFFSET UNITYSDK_OFFSET(0x1C69D80)
#define MX_DATA_EXCEL_SCENARIOTRANSITIONEXCEL_GETTRANSITIONOUTRESOURCEBYTES_OFFSET UNITYSDK_OFFSET(0x1C69DC0)
#define MX_DATA_EXCEL_SCENARIOTRANSITIONEXCEL_GET_TRANSITIONIN_OFFSET UNITYSDK_OFFSET(0x1C69DE0)
#define MX_DATA_EXCEL_SCENARIOTRANSITIONEXCEL_GETTRANSITIONINBYTES_OFFSET UNITYSDK_OFFSET(0x1C69E20)
#define MX_DATA_EXCEL_SCENARIOTRANSITIONEXCEL_GET_TRANSITIONINDURATION_OFFSET UNITYSDK_OFFSET(0x1C69E40)
#define MX_DATA_EXCEL_SCENARIOTRANSITIONEXCEL_GET_TRANSITIONINRESOURCE_OFFSET UNITYSDK_OFFSET(0x1C69E90)
#define MX_DATA_EXCEL_SCENARIOTRANSITIONEXCEL_GETTRANSITIONINRESOURCEBYTES_OFFSET UNITYSDK_OFFSET(0x1C69ED0)
#define MX_DATA_EXCEL_SCENARIOTRANSITIONEXCEL_CREATESCENARIOTRANSITIONEXCEL_OFFSET UNITYSDK_OFFSET(0x1C69EF0)
#define MX_DATA_EXCEL_SCENARIOTRANSITIONEXCEL_STARTSCENARIOTRANSITIONEXCEL_OFFSET UNITYSDK_OFFSET(0x1C6A1E0)
#define MX_DATA_EXCEL_SCENARIOTRANSITIONEXCEL_ADDNAME_OFFSET UNITYSDK_OFFSET(0x1C6A160)
#define MX_DATA_EXCEL_SCENARIOTRANSITIONEXCEL_ADDTRANSITIONOUT_OFFSET UNITYSDK_OFFSET(0x1C6A130)
#define MX_DATA_EXCEL_SCENARIOTRANSITIONEXCEL_ADDTRANSITIONOUTDURATION_OFFSET UNITYSDK_OFFSET(0x1C6A070)
#define MX_DATA_EXCEL_SCENARIOTRANSITIONEXCEL_ADDTRANSITIONOUTRESOURCE_OFFSET UNITYSDK_OFFSET(0x1C6A100)
#define MX_DATA_EXCEL_SCENARIOTRANSITIONEXCEL_ADDTRANSITIONIN_OFFSET UNITYSDK_OFFSET(0x1C6A0D0)
#define MX_DATA_EXCEL_SCENARIOTRANSITIONEXCEL_ADDTRANSITIONINDURATION_OFFSET UNITYSDK_OFFSET(0x1C6A040)
#define MX_DATA_EXCEL_SCENARIOTRANSITIONEXCEL_ADDTRANSITIONINRESOURCE_OFFSET UNITYSDK_OFFSET(0x1C6A0A0)
#define MX_DATA_EXCEL_SCENARIOTRANSITIONEXCEL_ENDSCENARIOTRANSITIONEXCEL_OFFSET UNITYSDK_OFFSET(0x1C6A190)
#define MX_DATA_EXCEL_SCENARIOTRANSITIONEXCEL_FINISHSCENARIOTRANSITIONEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C6A200)
#define MX_DATA_EXCEL_SCENARIOTRANSITIONEXCEL_FINISHSIZEPREFIXEDSCENARIOTRANSITIONEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C6A220)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ScenarioTransitionExcel_TypeDefinitionIndex = 19332;

	class ScenarioTransitionExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOTRANSITIONEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::ScenarioTransitionExcel* GetRootAsScenarioTransitionExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::ScenarioTransitionExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOTRANSITIONEXCEL_GETROOTASSCENARIOTRANSITIONEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::ScenarioTransitionExcel* GetRootAsScenarioTransitionExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::ScenarioTransitionExcel* arg)
		{
			return (return (::MX::Data::Excel::ScenarioTransitionExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::ScenarioTransitionExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOTRANSITIONEXCEL_GETROOTASSCENARIOTRANSITIONEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOTRANSITIONEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::ScenarioTransitionExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::ScenarioTransitionExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOTRANSITIONEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::UInt32 get_Name()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOTRANSITIONEXCEL_GET_NAME_OFFSET))(nullptr);
		}

		::System::String* get_TransitionOut()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOTRANSITIONEXCEL_GET_TRANSITIONOUT_OFFSET))(nullptr);
		}

		Il2CppObject* GetTransitionOutBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOTRANSITIONEXCEL_GETTRANSITIONOUTBYTES_OFFSET))(nullptr);
		}

		::System::Int64 get_TransitionOutDuration()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOTRANSITIONEXCEL_GET_TRANSITIONOUTDURATION_OFFSET))(nullptr);
		}

		::System::String* get_TransitionOutResource()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOTRANSITIONEXCEL_GET_TRANSITIONOUTRESOURCE_OFFSET))(nullptr);
		}

		Il2CppObject* GetTransitionOutResourceBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOTRANSITIONEXCEL_GETTRANSITIONOUTRESOURCEBYTES_OFFSET))(nullptr);
		}

		::System::String* get_TransitionIn()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOTRANSITIONEXCEL_GET_TRANSITIONIN_OFFSET))(nullptr);
		}

		Il2CppObject* GetTransitionInBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOTRANSITIONEXCEL_GETTRANSITIONINBYTES_OFFSET))(nullptr);
		}

		::System::Int64 get_TransitionInDuration()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOTRANSITIONEXCEL_GET_TRANSITIONINDURATION_OFFSET))(nullptr);
		}

		::System::String* get_TransitionInResource()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOTRANSITIONEXCEL_GET_TRANSITIONINRESOURCE_OFFSET))(nullptr);
		}

		Il2CppObject* GetTransitionInResourceBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOTRANSITIONEXCEL_GETTRANSITIONINRESOURCEBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateScenarioTransitionExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg, ::FlatBuffers::StringOffset* arg, ::System::Int64 arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::System::Int64 arg, ::FlatBuffers::StringOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::FlatBuffers::StringOffset*, ::System::Int64, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::System::Int64, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOTRANSITIONEXCEL_CREATESCENARIOTRANSITIONEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartScenarioTransitionExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOTRANSITIONEXCEL_STARTSCENARIOTRANSITIONEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddName(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOTRANSITIONEXCEL_ADDNAME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddTransitionOut(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOTRANSITIONEXCEL_ADDTRANSITIONOUT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddTransitionOutDuration(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOTRANSITIONEXCEL_ADDTRANSITIONOUTDURATION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddTransitionOutResource(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOTRANSITIONEXCEL_ADDTRANSITIONOUTRESOURCE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddTransitionIn(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOTRANSITIONEXCEL_ADDTRANSITIONIN_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddTransitionInDuration(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOTRANSITIONEXCEL_ADDTRANSITIONINDURATION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddTransitionInResource(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOTRANSITIONEXCEL_ADDTRANSITIONINRESOURCE_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndScenarioTransitionExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOTRANSITIONEXCEL_ENDSCENARIOTRANSITIONEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishScenarioTransitionExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOTRANSITIONEXCEL_FINISHSCENARIOTRANSITIONEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedScenarioTransitionExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOTRANSITIONEXCEL_FINISHSIZEPREFIXEDSCENARIOTRANSITIONEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

