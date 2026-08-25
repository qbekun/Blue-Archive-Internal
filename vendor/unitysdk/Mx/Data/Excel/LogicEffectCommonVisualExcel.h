#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class LogicEffectCommonVisualExcel; }
namespace FlatData { class EffectBone; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }
namespace FlatBuffers { class VectorOffset; }

#define MX_DATA_EXCEL_LOGICEFFECTCOMMONVISUALEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1B86060)
#define MX_DATA_EXCEL_LOGICEFFECTCOMMONVISUALEXCEL_GETROOTASLOGICEFFECTCOMMONVISUALEXCEL_OFFSET UNITYSDK_OFFSET(0x1B86070)
#define MX_DATA_EXCEL_LOGICEFFECTCOMMONVISUALEXCEL_GETROOTASLOGICEFFECTCOMMONVISUALEXCEL_OFFSET UNITYSDK_OFFSET(0x1B860D0)
#define MX_DATA_EXCEL_LOGICEFFECTCOMMONVISUALEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1B86160)
#define MX_DATA_EXCEL_LOGICEFFECTCOMMONVISUALEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1B86130)
#define MX_DATA_EXCEL_LOGICEFFECTCOMMONVISUALEXCEL_GET_STRINGID_OFFSET UNITYSDK_OFFSET(0x1B86180)
#define MX_DATA_EXCEL_LOGICEFFECTCOMMONVISUALEXCEL_GET_ICONSPRITENAME_OFFSET UNITYSDK_OFFSET(0x1B861D0)
#define MX_DATA_EXCEL_LOGICEFFECTCOMMONVISUALEXCEL_GETICONSPRITENAMEBYTES_OFFSET UNITYSDK_OFFSET(0x1B86210)
#define MX_DATA_EXCEL_LOGICEFFECTCOMMONVISUALEXCEL_ICONDISPELCOLOR_OFFSET UNITYSDK_OFFSET(0x1B86230)
#define MX_DATA_EXCEL_LOGICEFFECTCOMMONVISUALEXCEL_GET_ICONDISPELCOLORLENGTH_OFFSET UNITYSDK_OFFSET(0x1B86290)
#define MX_DATA_EXCEL_LOGICEFFECTCOMMONVISUALEXCEL_GETICONDISPELCOLORBYTES_OFFSET UNITYSDK_OFFSET(0x1B862D0)
#define MX_DATA_EXCEL_LOGICEFFECTCOMMONVISUALEXCEL_GET_PARTICLEENTERPATH_OFFSET UNITYSDK_OFFSET(0x1B862F0)
#define MX_DATA_EXCEL_LOGICEFFECTCOMMONVISUALEXCEL_GETPARTICLEENTERPATHBYTES_OFFSET UNITYSDK_OFFSET(0x1B86330)
#define MX_DATA_EXCEL_LOGICEFFECTCOMMONVISUALEXCEL_GET_PARTICLEENTERSOCKET_OFFSET UNITYSDK_OFFSET(0x1B86350)
#define MX_DATA_EXCEL_LOGICEFFECTCOMMONVISUALEXCEL_GET_PARTICLELOOPPATH_OFFSET UNITYSDK_OFFSET(0x1B863A0)
#define MX_DATA_EXCEL_LOGICEFFECTCOMMONVISUALEXCEL_GETPARTICLELOOPPATHBYTES_OFFSET UNITYSDK_OFFSET(0x1B863E0)
#define MX_DATA_EXCEL_LOGICEFFECTCOMMONVISUALEXCEL_GET_PARTICLELOOPSOCKET_OFFSET UNITYSDK_OFFSET(0x1B86400)
#define MX_DATA_EXCEL_LOGICEFFECTCOMMONVISUALEXCEL_GET_PARTICLEENDPATH_OFFSET UNITYSDK_OFFSET(0x1B86450)
#define MX_DATA_EXCEL_LOGICEFFECTCOMMONVISUALEXCEL_GETPARTICLEENDPATHBYTES_OFFSET UNITYSDK_OFFSET(0x1B86490)
#define MX_DATA_EXCEL_LOGICEFFECTCOMMONVISUALEXCEL_GET_PARTICLEENDSOCKET_OFFSET UNITYSDK_OFFSET(0x1B864B0)
#define MX_DATA_EXCEL_LOGICEFFECTCOMMONVISUALEXCEL_GET_PARTICLEAPPLYPATH_OFFSET UNITYSDK_OFFSET(0x1B86500)
#define MX_DATA_EXCEL_LOGICEFFECTCOMMONVISUALEXCEL_GETPARTICLEAPPLYPATHBYTES_OFFSET UNITYSDK_OFFSET(0x1B86540)
#define MX_DATA_EXCEL_LOGICEFFECTCOMMONVISUALEXCEL_GET_PARTICLEAPPLYSOCKET_OFFSET UNITYSDK_OFFSET(0x1B86560)
#define MX_DATA_EXCEL_LOGICEFFECTCOMMONVISUALEXCEL_GET_PARTICLEREMOVEDPATH_OFFSET UNITYSDK_OFFSET(0x1B865B0)
#define MX_DATA_EXCEL_LOGICEFFECTCOMMONVISUALEXCEL_GETPARTICLEREMOVEDPATHBYTES_OFFSET UNITYSDK_OFFSET(0x1B865F0)
#define MX_DATA_EXCEL_LOGICEFFECTCOMMONVISUALEXCEL_GET_PARTICLEREMOVEDSOCKET_OFFSET UNITYSDK_OFFSET(0x1B86610)
#define MX_DATA_EXCEL_LOGICEFFECTCOMMONVISUALEXCEL_CREATELOGICEFFECTCOMMONVISUALEXCEL_OFFSET UNITYSDK_OFFSET(0x1B86660)
#define MX_DATA_EXCEL_LOGICEFFECTCOMMONVISUALEXCEL_STARTLOGICEFFECTCOMMONVISUALEXCEL_OFFSET UNITYSDK_OFFSET(0x1B86B60)
#define MX_DATA_EXCEL_LOGICEFFECTCOMMONVISUALEXCEL_ADDSTRINGID_OFFSET UNITYSDK_OFFSET(0x1B86AE0)
#define MX_DATA_EXCEL_LOGICEFFECTCOMMONVISUALEXCEL_ADDICONSPRITENAME_OFFSET UNITYSDK_OFFSET(0x1B86AB0)
#define MX_DATA_EXCEL_LOGICEFFECTCOMMONVISUALEXCEL_ADDICONDISPELCOLOR_OFFSET UNITYSDK_OFFSET(0x1B86A80)
#define MX_DATA_EXCEL_LOGICEFFECTCOMMONVISUALEXCEL_CREATEICONDISPELCOLORVECTOR_OFFSET UNITYSDK_OFFSET(0x1B86B80)
#define MX_DATA_EXCEL_LOGICEFFECTCOMMONVISUALEXCEL_STARTICONDISPELCOLORVECTOR_OFFSET UNITYSDK_OFFSET(0x1B86C10)
#define MX_DATA_EXCEL_LOGICEFFECTCOMMONVISUALEXCEL_ADDPARTICLEENTERPATH_OFFSET UNITYSDK_OFFSET(0x1B86A50)
#define MX_DATA_EXCEL_LOGICEFFECTCOMMONVISUALEXCEL_ADDPARTICLEENTERSOCKET_OFFSET UNITYSDK_OFFSET(0x1B86A20)
#define MX_DATA_EXCEL_LOGICEFFECTCOMMONVISUALEXCEL_ADDPARTICLELOOPPATH_OFFSET UNITYSDK_OFFSET(0x1B869F0)
#define MX_DATA_EXCEL_LOGICEFFECTCOMMONVISUALEXCEL_ADDPARTICLELOOPSOCKET_OFFSET UNITYSDK_OFFSET(0x1B869C0)
#define MX_DATA_EXCEL_LOGICEFFECTCOMMONVISUALEXCEL_ADDPARTICLEENDPATH_OFFSET UNITYSDK_OFFSET(0x1B86990)
#define MX_DATA_EXCEL_LOGICEFFECTCOMMONVISUALEXCEL_ADDPARTICLEENDSOCKET_OFFSET UNITYSDK_OFFSET(0x1B86960)
#define MX_DATA_EXCEL_LOGICEFFECTCOMMONVISUALEXCEL_ADDPARTICLEAPPLYPATH_OFFSET UNITYSDK_OFFSET(0x1B86930)
#define MX_DATA_EXCEL_LOGICEFFECTCOMMONVISUALEXCEL_ADDPARTICLEAPPLYSOCKET_OFFSET UNITYSDK_OFFSET(0x1B86900)
#define MX_DATA_EXCEL_LOGICEFFECTCOMMONVISUALEXCEL_ADDPARTICLEREMOVEDPATH_OFFSET UNITYSDK_OFFSET(0x1B868D0)
#define MX_DATA_EXCEL_LOGICEFFECTCOMMONVISUALEXCEL_ADDPARTICLEREMOVEDSOCKET_OFFSET UNITYSDK_OFFSET(0x1B868A0)
#define MX_DATA_EXCEL_LOGICEFFECTCOMMONVISUALEXCEL_ENDLOGICEFFECTCOMMONVISUALEXCEL_OFFSET UNITYSDK_OFFSET(0x1B86B10)
#define MX_DATA_EXCEL_LOGICEFFECTCOMMONVISUALEXCEL_FINISHLOGICEFFECTCOMMONVISUALEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1B86C50)
#define MX_DATA_EXCEL_LOGICEFFECTCOMMONVISUALEXCEL_FINISHSIZEPREFIXEDLOGICEFFECTCOMMONVISUALEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1B86C70)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int LogicEffectCommonVisualExcel_TypeDefinitionIndex = 18409;

	class LogicEffectCommonVisualExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOGICEFFECTCOMMONVISUALEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::LogicEffectCommonVisualExcel* GetRootAsLogicEffectCommonVisualExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::LogicEffectCommonVisualExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOGICEFFECTCOMMONVISUALEXCEL_GETROOTASLOGICEFFECTCOMMONVISUALEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::LogicEffectCommonVisualExcel* GetRootAsLogicEffectCommonVisualExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::LogicEffectCommonVisualExcel* arg)
		{
			return (return (::MX::Data::Excel::LogicEffectCommonVisualExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::LogicEffectCommonVisualExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOGICEFFECTCOMMONVISUALEXCEL_GETROOTASLOGICEFFECTCOMMONVISUALEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOGICEFFECTCOMMONVISUALEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::LogicEffectCommonVisualExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::LogicEffectCommonVisualExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOGICEFFECTCOMMONVISUALEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::UInt32 get_StringID()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOGICEFFECTCOMMONVISUALEXCEL_GET_STRINGID_OFFSET))(nullptr);
		}

		::System::String* get_IconSpriteName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOGICEFFECTCOMMONVISUALEXCEL_GET_ICONSPRITENAME_OFFSET))(nullptr);
		}

		Il2CppObject* GetIconSpriteNameBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOGICEFFECTCOMMONVISUALEXCEL_GETICONSPRITENAMEBYTES_OFFSET))(nullptr);
		}

		::System::Single IconDispelColor(::System::Int32 arg)
		{
			return (return (::System::Single(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOGICEFFECTCOMMONVISUALEXCEL_ICONDISPELCOLOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_IconDispelColorLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOGICEFFECTCOMMONVISUALEXCEL_GET_ICONDISPELCOLORLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetIconDispelColorBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOGICEFFECTCOMMONVISUALEXCEL_GETICONDISPELCOLORBYTES_OFFSET))(nullptr);
		}

		::System::String* get_ParticleEnterPath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOGICEFFECTCOMMONVISUALEXCEL_GET_PARTICLEENTERPATH_OFFSET))(nullptr);
		}

		Il2CppObject* GetParticleEnterPathBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOGICEFFECTCOMMONVISUALEXCEL_GETPARTICLEENTERPATHBYTES_OFFSET))(nullptr);
		}

		::FlatData::EffectBone* get_ParticleEnterSocket()
		{
			return (return (::FlatData::EffectBone*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOGICEFFECTCOMMONVISUALEXCEL_GET_PARTICLEENTERSOCKET_OFFSET))(nullptr);
		}

		::System::String* get_ParticleLoopPath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOGICEFFECTCOMMONVISUALEXCEL_GET_PARTICLELOOPPATH_OFFSET))(nullptr);
		}

		Il2CppObject* GetParticleLoopPathBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOGICEFFECTCOMMONVISUALEXCEL_GETPARTICLELOOPPATHBYTES_OFFSET))(nullptr);
		}

		::FlatData::EffectBone* get_ParticleLoopSocket()
		{
			return (return (::FlatData::EffectBone*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOGICEFFECTCOMMONVISUALEXCEL_GET_PARTICLELOOPSOCKET_OFFSET))(nullptr);
		}

		::System::String* get_ParticleEndPath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOGICEFFECTCOMMONVISUALEXCEL_GET_PARTICLEENDPATH_OFFSET))(nullptr);
		}

		Il2CppObject* GetParticleEndPathBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOGICEFFECTCOMMONVISUALEXCEL_GETPARTICLEENDPATHBYTES_OFFSET))(nullptr);
		}

		::FlatData::EffectBone* get_ParticleEndSocket()
		{
			return (return (::FlatData::EffectBone*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOGICEFFECTCOMMONVISUALEXCEL_GET_PARTICLEENDSOCKET_OFFSET))(nullptr);
		}

		::System::String* get_ParticleApplyPath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOGICEFFECTCOMMONVISUALEXCEL_GET_PARTICLEAPPLYPATH_OFFSET))(nullptr);
		}

		Il2CppObject* GetParticleApplyPathBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOGICEFFECTCOMMONVISUALEXCEL_GETPARTICLEAPPLYPATHBYTES_OFFSET))(nullptr);
		}

		::FlatData::EffectBone* get_ParticleApplySocket()
		{
			return (return (::FlatData::EffectBone*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOGICEFFECTCOMMONVISUALEXCEL_GET_PARTICLEAPPLYSOCKET_OFFSET))(nullptr);
		}

		::System::String* get_ParticleRemovedPath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOGICEFFECTCOMMONVISUALEXCEL_GET_PARTICLEREMOVEDPATH_OFFSET))(nullptr);
		}

		Il2CppObject* GetParticleRemovedPathBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOGICEFFECTCOMMONVISUALEXCEL_GETPARTICLEREMOVEDPATHBYTES_OFFSET))(nullptr);
		}

		::FlatData::EffectBone* get_ParticleRemovedSocket()
		{
			return (return (::FlatData::EffectBone*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOGICEFFECTCOMMONVISUALEXCEL_GET_PARTICLEREMOVEDSOCKET_OFFSET))(nullptr);
		}

		Il2CppObject* CreateLogicEffectCommonVisualExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::StringOffset* arg, ::FlatData::EffectBone* arg, ::FlatBuffers::StringOffset* arg, ::FlatData::EffectBone* arg, ::FlatBuffers::StringOffset* arg, ::FlatData::EffectBone* arg, ::FlatBuffers::StringOffset* arg, ::FlatData::EffectBone* arg, ::FlatBuffers::StringOffset* arg, ::FlatData::EffectBone* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::FlatBuffers::StringOffset*, ::FlatBuffers::VectorOffset*, ::FlatBuffers::StringOffset*, ::FlatData::EffectBone*, ::FlatBuffers::StringOffset*, ::FlatData::EffectBone*, ::FlatBuffers::StringOffset*, ::FlatData::EffectBone*, ::FlatBuffers::StringOffset*, ::FlatData::EffectBone*, ::FlatBuffers::StringOffset*, ::FlatData::EffectBone*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOGICEFFECTCOMMONVISUALEXCEL_CREATELOGICEFFECTCOMMONVISUALEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartLogicEffectCommonVisualExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOGICEFFECTCOMMONVISUALEXCEL_STARTLOGICEFFECTCOMMONVISUALEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddStringID(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOGICEFFECTCOMMONVISUALEXCEL_ADDSTRINGID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddIconSpriteName(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOGICEFFECTCOMMONVISUALEXCEL_ADDICONSPRITENAME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddIconDispelColor(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOGICEFFECTCOMMONVISUALEXCEL_ADDICONDISPELCOLOR_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateIconDispelColorVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOGICEFFECTCOMMONVISUALEXCEL_CREATEICONDISPELCOLORVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartIconDispelColorVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOGICEFFECTCOMMONVISUALEXCEL_STARTICONDISPELCOLORVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddParticleEnterPath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOGICEFFECTCOMMONVISUALEXCEL_ADDPARTICLEENTERPATH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddParticleEnterSocket(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::EffectBone* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::EffectBone*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOGICEFFECTCOMMONVISUALEXCEL_ADDPARTICLEENTERSOCKET_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddParticleLoopPath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOGICEFFECTCOMMONVISUALEXCEL_ADDPARTICLELOOPPATH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddParticleLoopSocket(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::EffectBone* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::EffectBone*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOGICEFFECTCOMMONVISUALEXCEL_ADDPARTICLELOOPSOCKET_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddParticleEndPath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOGICEFFECTCOMMONVISUALEXCEL_ADDPARTICLEENDPATH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddParticleEndSocket(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::EffectBone* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::EffectBone*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOGICEFFECTCOMMONVISUALEXCEL_ADDPARTICLEENDSOCKET_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddParticleApplyPath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOGICEFFECTCOMMONVISUALEXCEL_ADDPARTICLEAPPLYPATH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddParticleApplySocket(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::EffectBone* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::EffectBone*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOGICEFFECTCOMMONVISUALEXCEL_ADDPARTICLEAPPLYSOCKET_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddParticleRemovedPath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOGICEFFECTCOMMONVISUALEXCEL_ADDPARTICLEREMOVEDPATH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddParticleRemovedSocket(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::EffectBone* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::EffectBone*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOGICEFFECTCOMMONVISUALEXCEL_ADDPARTICLEREMOVEDSOCKET_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndLogicEffectCommonVisualExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOGICEFFECTCOMMONVISUALEXCEL_ENDLOGICEFFECTCOMMONVISUALEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishLogicEffectCommonVisualExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOGICEFFECTCOMMONVISUALEXCEL_FINISHLOGICEFFECTCOMMONVISUALEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedLogicEffectCommonVisualExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOGICEFFECTCOMMONVISUALEXCEL_FINISHSIZEPREFIXEDLOGICEFFECTCOMMONVISUALEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

