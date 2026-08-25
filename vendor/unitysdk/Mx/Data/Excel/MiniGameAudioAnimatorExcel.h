#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class MiniGameAudioAnimatorExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }
namespace FlatBuffers { class VectorOffset; }

#define MX_DATA_EXCEL_MINIGAMEAUDIOANIMATOREXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1B8C4C0)
#define MX_DATA_EXCEL_MINIGAMEAUDIOANIMATOREXCEL_GETROOTASMINIGAMEAUDIOANIMATOREXCEL_OFFSET UNITYSDK_OFFSET(0x1B8C4D0)
#define MX_DATA_EXCEL_MINIGAMEAUDIOANIMATOREXCEL_GETROOTASMINIGAMEAUDIOANIMATOREXCEL_OFFSET UNITYSDK_OFFSET(0x1B8C530)
#define MX_DATA_EXCEL_MINIGAMEAUDIOANIMATOREXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1B8C5C0)
#define MX_DATA_EXCEL_MINIGAMEAUDIOANIMATOREXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1B8C590)
#define MX_DATA_EXCEL_MINIGAMEAUDIOANIMATOREXCEL_GET_CONTROLLERNAMEHASH_OFFSET UNITYSDK_OFFSET(0x1B8C5E0)
#define MX_DATA_EXCEL_MINIGAMEAUDIOANIMATOREXCEL_GET_VOICENAMEPREFIX_OFFSET UNITYSDK_OFFSET(0x1B8C630)
#define MX_DATA_EXCEL_MINIGAMEAUDIOANIMATOREXCEL_GETVOICENAMEPREFIXBYTES_OFFSET UNITYSDK_OFFSET(0x1B8C670)
#define MX_DATA_EXCEL_MINIGAMEAUDIOANIMATOREXCEL_GET_STATENAMEHASH_OFFSET UNITYSDK_OFFSET(0x1B8C690)
#define MX_DATA_EXCEL_MINIGAMEAUDIOANIMATOREXCEL_GET_STATENAME_OFFSET UNITYSDK_OFFSET(0x1B8C6E0)
#define MX_DATA_EXCEL_MINIGAMEAUDIOANIMATOREXCEL_GETSTATENAMEBYTES_OFFSET UNITYSDK_OFFSET(0x1B8C720)
#define MX_DATA_EXCEL_MINIGAMEAUDIOANIMATOREXCEL_GET_IGNOREINTERRUPTDELAY_OFFSET UNITYSDK_OFFSET(0x1B8C740)
#define MX_DATA_EXCEL_MINIGAMEAUDIOANIMATOREXCEL_GET_IGNOREINTERRUPTPLAY_OFFSET UNITYSDK_OFFSET(0x1B8C790)
#define MX_DATA_EXCEL_MINIGAMEAUDIOANIMATOREXCEL_GET_VOLUME_OFFSET UNITYSDK_OFFSET(0x1B8C7E0)
#define MX_DATA_EXCEL_MINIGAMEAUDIOANIMATOREXCEL_GET_DELAY_OFFSET UNITYSDK_OFFSET(0x1B8C830)
#define MX_DATA_EXCEL_MINIGAMEAUDIOANIMATOREXCEL_GET_AUDIOPRIORITY_OFFSET UNITYSDK_OFFSET(0x1B8C880)
#define MX_DATA_EXCEL_MINIGAMEAUDIOANIMATOREXCEL_AUDIOCLIPPATH_OFFSET UNITYSDK_OFFSET(0x1B8C8D0)
#define MX_DATA_EXCEL_MINIGAMEAUDIOANIMATOREXCEL_GET_AUDIOCLIPPATHLENGTH_OFFSET UNITYSDK_OFFSET(0x1B8C920)
#define MX_DATA_EXCEL_MINIGAMEAUDIOANIMATOREXCEL_VOICEHASH_OFFSET UNITYSDK_OFFSET(0x1B8C960)
#define MX_DATA_EXCEL_MINIGAMEAUDIOANIMATOREXCEL_GET_VOICEHASHLENGTH_OFFSET UNITYSDK_OFFSET(0x1B8C9C0)
#define MX_DATA_EXCEL_MINIGAMEAUDIOANIMATOREXCEL_GETVOICEHASHBYTES_OFFSET UNITYSDK_OFFSET(0x1B8CA00)
#define MX_DATA_EXCEL_MINIGAMEAUDIOANIMATOREXCEL_CREATEMINIGAMEAUDIOANIMATOREXCEL_OFFSET UNITYSDK_OFFSET(0x1B8CA20)
#define MX_DATA_EXCEL_MINIGAMEAUDIOANIMATOREXCEL_STARTMINIGAMEAUDIOANIMATOREXCEL_OFFSET UNITYSDK_OFFSET(0x1B8CE80)
#define MX_DATA_EXCEL_MINIGAMEAUDIOANIMATOREXCEL_ADDCONTROLLERNAMEHASH_OFFSET UNITYSDK_OFFSET(0x1B8CDA0)
#define MX_DATA_EXCEL_MINIGAMEAUDIOANIMATOREXCEL_ADDVOICENAMEPREFIX_OFFSET UNITYSDK_OFFSET(0x1B8CD70)
#define MX_DATA_EXCEL_MINIGAMEAUDIOANIMATOREXCEL_ADDSTATENAMEHASH_OFFSET UNITYSDK_OFFSET(0x1B8CD40)
#define MX_DATA_EXCEL_MINIGAMEAUDIOANIMATOREXCEL_ADDSTATENAME_OFFSET UNITYSDK_OFFSET(0x1B8CD10)
#define MX_DATA_EXCEL_MINIGAMEAUDIOANIMATOREXCEL_ADDIGNOREINTERRUPTDELAY_OFFSET UNITYSDK_OFFSET(0x1B8CE00)
#define MX_DATA_EXCEL_MINIGAMEAUDIOANIMATOREXCEL_ADDIGNOREINTERRUPTPLAY_OFFSET UNITYSDK_OFFSET(0x1B8CDD0)
#define MX_DATA_EXCEL_MINIGAMEAUDIOANIMATOREXCEL_ADDVOLUME_OFFSET UNITYSDK_OFFSET(0x1B8CCE0)
#define MX_DATA_EXCEL_MINIGAMEAUDIOANIMATOREXCEL_ADDDELAY_OFFSET UNITYSDK_OFFSET(0x1B8CCB0)
#define MX_DATA_EXCEL_MINIGAMEAUDIOANIMATOREXCEL_ADDAUDIOPRIORITY_OFFSET UNITYSDK_OFFSET(0x1B8CC80)
#define MX_DATA_EXCEL_MINIGAMEAUDIOANIMATOREXCEL_ADDAUDIOCLIPPATH_OFFSET UNITYSDK_OFFSET(0x1B8CC50)
#define MX_DATA_EXCEL_MINIGAMEAUDIOANIMATOREXCEL_CREATEAUDIOCLIPPATHVECTOR_OFFSET UNITYSDK_OFFSET(0x1B8CEA0)
#define MX_DATA_EXCEL_MINIGAMEAUDIOANIMATOREXCEL_STARTAUDIOCLIPPATHVECTOR_OFFSET UNITYSDK_OFFSET(0x1B8CF30)
#define MX_DATA_EXCEL_MINIGAMEAUDIOANIMATOREXCEL_ADDVOICEHASH_OFFSET UNITYSDK_OFFSET(0x1B8CC20)
#define MX_DATA_EXCEL_MINIGAMEAUDIOANIMATOREXCEL_CREATEVOICEHASHVECTOR_OFFSET UNITYSDK_OFFSET(0x1B8CF70)
#define MX_DATA_EXCEL_MINIGAMEAUDIOANIMATOREXCEL_STARTVOICEHASHVECTOR_OFFSET UNITYSDK_OFFSET(0x1B8D000)
#define MX_DATA_EXCEL_MINIGAMEAUDIOANIMATOREXCEL_ENDMINIGAMEAUDIOANIMATOREXCEL_OFFSET UNITYSDK_OFFSET(0x1B8CE30)
#define MX_DATA_EXCEL_MINIGAMEAUDIOANIMATOREXCEL_FINISHMINIGAMEAUDIOANIMATOREXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1B8D040)
#define MX_DATA_EXCEL_MINIGAMEAUDIOANIMATOREXCEL_FINISHSIZEPREFIXEDMINIGAMEAUDIOANIMATOREXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1B8D060)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int MiniGameAudioAnimatorExcel_TypeDefinitionIndex = 18437;

	class MiniGameAudioAnimatorExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEAUDIOANIMATOREXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::MiniGameAudioAnimatorExcel* GetRootAsMiniGameAudioAnimatorExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::MiniGameAudioAnimatorExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEAUDIOANIMATOREXCEL_GETROOTASMINIGAMEAUDIOANIMATOREXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::MiniGameAudioAnimatorExcel* GetRootAsMiniGameAudioAnimatorExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::MiniGameAudioAnimatorExcel* arg)
		{
			return (return (::MX::Data::Excel::MiniGameAudioAnimatorExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::MiniGameAudioAnimatorExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEAUDIOANIMATOREXCEL_GETROOTASMINIGAMEAUDIOANIMATOREXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEAUDIOANIMATOREXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::MiniGameAudioAnimatorExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::MiniGameAudioAnimatorExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEAUDIOANIMATOREXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::UInt32 get_ControllerNameHash()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEAUDIOANIMATOREXCEL_GET_CONTROLLERNAMEHASH_OFFSET))(nullptr);
		}

		::System::String* get_VoiceNamePrefix()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEAUDIOANIMATOREXCEL_GET_VOICENAMEPREFIX_OFFSET))(nullptr);
		}

		Il2CppObject* GetVoiceNamePrefixBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEAUDIOANIMATOREXCEL_GETVOICENAMEPREFIXBYTES_OFFSET))(nullptr);
		}

		::System::UInt32 get_StateNameHash()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEAUDIOANIMATOREXCEL_GET_STATENAMEHASH_OFFSET))(nullptr);
		}

		::System::String* get_StateName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEAUDIOANIMATOREXCEL_GET_STATENAME_OFFSET))(nullptr);
		}

		Il2CppObject* GetStateNameBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEAUDIOANIMATOREXCEL_GETSTATENAMEBYTES_OFFSET))(nullptr);
		}

		::System::Boolean get_IgnoreInterruptDelay()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEAUDIOANIMATOREXCEL_GET_IGNOREINTERRUPTDELAY_OFFSET))(nullptr);
		}

		::System::Boolean get_IgnoreInterruptPlay()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEAUDIOANIMATOREXCEL_GET_IGNOREINTERRUPTPLAY_OFFSET))(nullptr);
		}

		::System::Single get_Volume()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEAUDIOANIMATOREXCEL_GET_VOLUME_OFFSET))(nullptr);
		}

		::System::Single get_Delay()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEAUDIOANIMATOREXCEL_GET_DELAY_OFFSET))(nullptr);
		}

		::System::Int32 get_AudioPriority()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEAUDIOANIMATOREXCEL_GET_AUDIOPRIORITY_OFFSET))(nullptr);
		}

		::System::String* AudioClipPath(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEAUDIOANIMATOREXCEL_AUDIOCLIPPATH_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_AudioClipPathLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEAUDIOANIMATOREXCEL_GET_AUDIOCLIPPATHLENGTH_OFFSET))(nullptr);
		}

		::System::UInt32 VoiceHash(::System::Int32 arg)
		{
			return (return (::System::UInt32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEAUDIOANIMATOREXCEL_VOICEHASH_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_VoiceHashLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEAUDIOANIMATOREXCEL_GET_VOICEHASHLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetVoiceHashBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEAUDIOANIMATOREXCEL_GETVOICEHASHBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateMiniGameAudioAnimatorExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg, ::FlatBuffers::StringOffset* arg, ::System::UInt32 arg, ::FlatBuffers::StringOffset* arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Single arg, ::System::Single arg, ::System::Int32 arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::FlatBuffers::StringOffset*, ::System::UInt32, ::FlatBuffers::StringOffset*, ::System::Boolean, ::System::Boolean, ::System::Single, ::System::Single, ::System::Int32, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEAUDIOANIMATOREXCEL_CREATEMINIGAMEAUDIOANIMATOREXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartMiniGameAudioAnimatorExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEAUDIOANIMATOREXCEL_STARTMINIGAMEAUDIOANIMATOREXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddControllerNameHash(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEAUDIOANIMATOREXCEL_ADDCONTROLLERNAMEHASH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddVoiceNamePrefix(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEAUDIOANIMATOREXCEL_ADDVOICENAMEPREFIX_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStateNameHash(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEAUDIOANIMATOREXCEL_ADDSTATENAMEHASH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStateName(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEAUDIOANIMATOREXCEL_ADDSTATENAME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddIgnoreInterruptDelay(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEAUDIOANIMATOREXCEL_ADDIGNOREINTERRUPTDELAY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddIgnoreInterruptPlay(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEAUDIOANIMATOREXCEL_ADDIGNOREINTERRUPTPLAY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddVolume(::FlatBuffers::FlatBufferBuilder* arg, ::System::Single arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEAUDIOANIMATOREXCEL_ADDVOLUME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDelay(::FlatBuffers::FlatBufferBuilder* arg, ::System::Single arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEAUDIOANIMATOREXCEL_ADDDELAY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddAudioPriority(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEAUDIOANIMATOREXCEL_ADDAUDIOPRIORITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddAudioClipPath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEAUDIOANIMATOREXCEL_ADDAUDIOCLIPPATH_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateAudioClipPathVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEAUDIOANIMATOREXCEL_CREATEAUDIOCLIPPATHVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartAudioClipPathVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEAUDIOANIMATOREXCEL_STARTAUDIOCLIPPATHVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddVoiceHash(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEAUDIOANIMATOREXCEL_ADDVOICEHASH_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateVoiceHashVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEAUDIOANIMATOREXCEL_CREATEVOICEHASHVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartVoiceHashVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEAUDIOANIMATOREXCEL_STARTVOICEHASHVECTOR_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndMiniGameAudioAnimatorExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEAUDIOANIMATOREXCEL_ENDMINIGAMEAUDIOANIMATOREXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishMiniGameAudioAnimatorExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEAUDIOANIMATOREXCEL_FINISHMINIGAMEAUDIOANIMATOREXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedMiniGameAudioAnimatorExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEAUDIOANIMATOREXCEL_FINISHSIZEPREFIXEDMINIGAMEAUDIOANIMATOREXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

