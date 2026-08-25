#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class AudioAnimatorExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }
namespace FlatBuffers { class VectorOffset; }

#define MX_DATA_EXCEL_AUDIOANIMATOREXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x19DF910)
#define MX_DATA_EXCEL_AUDIOANIMATOREXCEL_GETROOTASAUDIOANIMATOREXCEL_OFFSET UNITYSDK_OFFSET(0x19DF920)
#define MX_DATA_EXCEL_AUDIOANIMATOREXCEL_GETROOTASAUDIOANIMATOREXCEL_OFFSET UNITYSDK_OFFSET(0x19DF980)
#define MX_DATA_EXCEL_AUDIOANIMATOREXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x19DFA10)
#define MX_DATA_EXCEL_AUDIOANIMATOREXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x19DF9E0)
#define MX_DATA_EXCEL_AUDIOANIMATOREXCEL_GET_CONTROLLERNAMEHASH_OFFSET UNITYSDK_OFFSET(0x19DFA30)
#define MX_DATA_EXCEL_AUDIOANIMATOREXCEL_GET_VOICENAMEPREFIX_OFFSET UNITYSDK_OFFSET(0x19DFA80)
#define MX_DATA_EXCEL_AUDIOANIMATOREXCEL_GETVOICENAMEPREFIXBYTES_OFFSET UNITYSDK_OFFSET(0x19DFAC0)
#define MX_DATA_EXCEL_AUDIOANIMATOREXCEL_GET_STATENAMEHASH_OFFSET UNITYSDK_OFFSET(0x19DFAE0)
#define MX_DATA_EXCEL_AUDIOANIMATOREXCEL_GET_STATENAME_OFFSET UNITYSDK_OFFSET(0x19DFB30)
#define MX_DATA_EXCEL_AUDIOANIMATOREXCEL_GETSTATENAMEBYTES_OFFSET UNITYSDK_OFFSET(0x19DFB70)
#define MX_DATA_EXCEL_AUDIOANIMATOREXCEL_GET_IGNOREINTERRUPTDELAY_OFFSET UNITYSDK_OFFSET(0x19DFB90)
#define MX_DATA_EXCEL_AUDIOANIMATOREXCEL_GET_IGNOREINTERRUPTPLAY_OFFSET UNITYSDK_OFFSET(0x19DFBE0)
#define MX_DATA_EXCEL_AUDIOANIMATOREXCEL_GET_IGNOREVELOCITY_OFFSET UNITYSDK_OFFSET(0x19DFC30)
#define MX_DATA_EXCEL_AUDIOANIMATOREXCEL_GET_VOLUME_OFFSET UNITYSDK_OFFSET(0x19DFC80)
#define MX_DATA_EXCEL_AUDIOANIMATOREXCEL_GET_DELAY_OFFSET UNITYSDK_OFFSET(0x19DFCD0)
#define MX_DATA_EXCEL_AUDIOANIMATOREXCEL_GET_RANDOMPITCHMIN_OFFSET UNITYSDK_OFFSET(0x19DFD20)
#define MX_DATA_EXCEL_AUDIOANIMATOREXCEL_GET_RANDOMPITCHMAX_OFFSET UNITYSDK_OFFSET(0x19DFD70)
#define MX_DATA_EXCEL_AUDIOANIMATOREXCEL_GET_AUDIOPRIORITY_OFFSET UNITYSDK_OFFSET(0x19DFDC0)
#define MX_DATA_EXCEL_AUDIOANIMATOREXCEL_AUDIOCLIPPATH_OFFSET UNITYSDK_OFFSET(0x19DFE10)
#define MX_DATA_EXCEL_AUDIOANIMATOREXCEL_GET_AUDIOCLIPPATHLENGTH_OFFSET UNITYSDK_OFFSET(0x19DFE60)
#define MX_DATA_EXCEL_AUDIOANIMATOREXCEL_VOICEHASH_OFFSET UNITYSDK_OFFSET(0x19DFEA0)
#define MX_DATA_EXCEL_AUDIOANIMATOREXCEL_GET_VOICEHASHLENGTH_OFFSET UNITYSDK_OFFSET(0x19DFF00)
#define MX_DATA_EXCEL_AUDIOANIMATOREXCEL_GETVOICEHASHBYTES_OFFSET UNITYSDK_OFFSET(0x19DFF40)
#define MX_DATA_EXCEL_AUDIOANIMATOREXCEL_CREATEAUDIOANIMATOREXCEL_OFFSET UNITYSDK_OFFSET(0x19DFF60)
#define MX_DATA_EXCEL_AUDIOANIMATOREXCEL_STARTAUDIOANIMATOREXCEL_OFFSET UNITYSDK_OFFSET(0x19E04D0)
#define MX_DATA_EXCEL_AUDIOANIMATOREXCEL_ADDCONTROLLERNAMEHASH_OFFSET UNITYSDK_OFFSET(0x19E03C0)
#define MX_DATA_EXCEL_AUDIOANIMATOREXCEL_ADDVOICENAMEPREFIX_OFFSET UNITYSDK_OFFSET(0x19E0390)
#define MX_DATA_EXCEL_AUDIOANIMATOREXCEL_ADDSTATENAMEHASH_OFFSET UNITYSDK_OFFSET(0x19E0360)
#define MX_DATA_EXCEL_AUDIOANIMATOREXCEL_ADDSTATENAME_OFFSET UNITYSDK_OFFSET(0x19E0330)
#define MX_DATA_EXCEL_AUDIOANIMATOREXCEL_ADDIGNOREINTERRUPTDELAY_OFFSET UNITYSDK_OFFSET(0x19E0450)
#define MX_DATA_EXCEL_AUDIOANIMATOREXCEL_ADDIGNOREINTERRUPTPLAY_OFFSET UNITYSDK_OFFSET(0x19E0420)
#define MX_DATA_EXCEL_AUDIOANIMATOREXCEL_ADDIGNOREVELOCITY_OFFSET UNITYSDK_OFFSET(0x19E03F0)
#define MX_DATA_EXCEL_AUDIOANIMATOREXCEL_ADDVOLUME_OFFSET UNITYSDK_OFFSET(0x19E0300)
#define MX_DATA_EXCEL_AUDIOANIMATOREXCEL_ADDDELAY_OFFSET UNITYSDK_OFFSET(0x19E02D0)
#define MX_DATA_EXCEL_AUDIOANIMATOREXCEL_ADDRANDOMPITCHMIN_OFFSET UNITYSDK_OFFSET(0x19E02A0)
#define MX_DATA_EXCEL_AUDIOANIMATOREXCEL_ADDRANDOMPITCHMAX_OFFSET UNITYSDK_OFFSET(0x19E0270)
#define MX_DATA_EXCEL_AUDIOANIMATOREXCEL_ADDAUDIOPRIORITY_OFFSET UNITYSDK_OFFSET(0x19E0240)
#define MX_DATA_EXCEL_AUDIOANIMATOREXCEL_ADDAUDIOCLIPPATH_OFFSET UNITYSDK_OFFSET(0x19E0210)
#define MX_DATA_EXCEL_AUDIOANIMATOREXCEL_CREATEAUDIOCLIPPATHVECTOR_OFFSET UNITYSDK_OFFSET(0x19E04F0)
#define MX_DATA_EXCEL_AUDIOANIMATOREXCEL_STARTAUDIOCLIPPATHVECTOR_OFFSET UNITYSDK_OFFSET(0x19E0580)
#define MX_DATA_EXCEL_AUDIOANIMATOREXCEL_ADDVOICEHASH_OFFSET UNITYSDK_OFFSET(0x19E01E0)
#define MX_DATA_EXCEL_AUDIOANIMATOREXCEL_CREATEVOICEHASHVECTOR_OFFSET UNITYSDK_OFFSET(0x19E05C0)
#define MX_DATA_EXCEL_AUDIOANIMATOREXCEL_STARTVOICEHASHVECTOR_OFFSET UNITYSDK_OFFSET(0x19E0650)
#define MX_DATA_EXCEL_AUDIOANIMATOREXCEL_ENDAUDIOANIMATOREXCEL_OFFSET UNITYSDK_OFFSET(0x19E0480)
#define MX_DATA_EXCEL_AUDIOANIMATOREXCEL_FINISHAUDIOANIMATOREXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x19E0690)
#define MX_DATA_EXCEL_AUDIOANIMATOREXCEL_FINISHSIZEPREFIXEDAUDIOANIMATOREXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x19E06B0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int AudioAnimatorExcel_TypeDefinitionIndex = 16720;

	class AudioAnimatorExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_AUDIOANIMATOREXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::AudioAnimatorExcel* GetRootAsAudioAnimatorExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::AudioAnimatorExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_AUDIOANIMATOREXCEL_GETROOTASAUDIOANIMATOREXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::AudioAnimatorExcel* GetRootAsAudioAnimatorExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::AudioAnimatorExcel* arg)
		{
			return (return (::MX::Data::Excel::AudioAnimatorExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::AudioAnimatorExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_AUDIOANIMATOREXCEL_GETROOTASAUDIOANIMATOREXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_AUDIOANIMATOREXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::AudioAnimatorExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::AudioAnimatorExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_AUDIOANIMATOREXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::UInt32 get_ControllerNameHash()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_AUDIOANIMATOREXCEL_GET_CONTROLLERNAMEHASH_OFFSET))(nullptr);
		}

		::System::String* get_VoiceNamePrefix()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_AUDIOANIMATOREXCEL_GET_VOICENAMEPREFIX_OFFSET))(nullptr);
		}

		Il2CppObject* GetVoiceNamePrefixBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_AUDIOANIMATOREXCEL_GETVOICENAMEPREFIXBYTES_OFFSET))(nullptr);
		}

		::System::UInt32 get_StateNameHash()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_AUDIOANIMATOREXCEL_GET_STATENAMEHASH_OFFSET))(nullptr);
		}

		::System::String* get_StateName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_AUDIOANIMATOREXCEL_GET_STATENAME_OFFSET))(nullptr);
		}

		Il2CppObject* GetStateNameBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_AUDIOANIMATOREXCEL_GETSTATENAMEBYTES_OFFSET))(nullptr);
		}

		::System::Boolean get_IgnoreInterruptDelay()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_AUDIOANIMATOREXCEL_GET_IGNOREINTERRUPTDELAY_OFFSET))(nullptr);
		}

		::System::Boolean get_IgnoreInterruptPlay()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_AUDIOANIMATOREXCEL_GET_IGNOREINTERRUPTPLAY_OFFSET))(nullptr);
		}

		::System::Boolean get_IgnoreVelocity()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_AUDIOANIMATOREXCEL_GET_IGNOREVELOCITY_OFFSET))(nullptr);
		}

		::System::Single get_Volume()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_AUDIOANIMATOREXCEL_GET_VOLUME_OFFSET))(nullptr);
		}

		::System::Single get_Delay()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_AUDIOANIMATOREXCEL_GET_DELAY_OFFSET))(nullptr);
		}

		::System::Int32 get_RandomPitchMin()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_AUDIOANIMATOREXCEL_GET_RANDOMPITCHMIN_OFFSET))(nullptr);
		}

		::System::Int32 get_RandomPitchMax()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_AUDIOANIMATOREXCEL_GET_RANDOMPITCHMAX_OFFSET))(nullptr);
		}

		::System::Int32 get_AudioPriority()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_AUDIOANIMATOREXCEL_GET_AUDIOPRIORITY_OFFSET))(nullptr);
		}

		::System::String* AudioClipPath(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_AUDIOANIMATOREXCEL_AUDIOCLIPPATH_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_AudioClipPathLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_AUDIOANIMATOREXCEL_GET_AUDIOCLIPPATHLENGTH_OFFSET))(nullptr);
		}

		::System::UInt32 VoiceHash(::System::Int32 arg)
		{
			return (return (::System::UInt32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_AUDIOANIMATOREXCEL_VOICEHASH_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_VoiceHashLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_AUDIOANIMATOREXCEL_GET_VOICEHASHLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetVoiceHashBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_AUDIOANIMATOREXCEL_GETVOICEHASHBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateAudioAnimatorExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg, ::FlatBuffers::StringOffset* arg, ::System::UInt32 arg, ::FlatBuffers::StringOffset* arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Single arg, ::System::Single arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::FlatBuffers::StringOffset*, ::System::UInt32, ::FlatBuffers::StringOffset*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Single, ::System::Single, ::System::Int32, ::System::Int32, ::System::Int32, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_AUDIOANIMATOREXCEL_CREATEAUDIOANIMATOREXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartAudioAnimatorExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_AUDIOANIMATOREXCEL_STARTAUDIOANIMATOREXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddControllerNameHash(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_AUDIOANIMATOREXCEL_ADDCONTROLLERNAMEHASH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddVoiceNamePrefix(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_AUDIOANIMATOREXCEL_ADDVOICENAMEPREFIX_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStateNameHash(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_AUDIOANIMATOREXCEL_ADDSTATENAMEHASH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddStateName(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_AUDIOANIMATOREXCEL_ADDSTATENAME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddIgnoreInterruptDelay(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_AUDIOANIMATOREXCEL_ADDIGNOREINTERRUPTDELAY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddIgnoreInterruptPlay(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_AUDIOANIMATOREXCEL_ADDIGNOREINTERRUPTPLAY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddIgnoreVelocity(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_AUDIOANIMATOREXCEL_ADDIGNOREVELOCITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddVolume(::FlatBuffers::FlatBufferBuilder* arg, ::System::Single arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_AUDIOANIMATOREXCEL_ADDVOLUME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDelay(::FlatBuffers::FlatBufferBuilder* arg, ::System::Single arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_AUDIOANIMATOREXCEL_ADDDELAY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRandomPitchMin(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_AUDIOANIMATOREXCEL_ADDRANDOMPITCHMIN_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRandomPitchMax(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_AUDIOANIMATOREXCEL_ADDRANDOMPITCHMAX_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddAudioPriority(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_AUDIOANIMATOREXCEL_ADDAUDIOPRIORITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddAudioClipPath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_AUDIOANIMATOREXCEL_ADDAUDIOCLIPPATH_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateAudioClipPathVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_AUDIOANIMATOREXCEL_CREATEAUDIOCLIPPATHVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartAudioClipPathVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_AUDIOANIMATOREXCEL_STARTAUDIOCLIPPATHVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddVoiceHash(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_AUDIOANIMATOREXCEL_ADDVOICEHASH_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateVoiceHashVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_AUDIOANIMATOREXCEL_CREATEVOICEHASHVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartVoiceHashVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_AUDIOANIMATOREXCEL_STARTVOICEHASHVECTOR_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndAudioAnimatorExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_AUDIOANIMATOREXCEL_ENDAUDIOANIMATOREXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishAudioAnimatorExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_AUDIOANIMATOREXCEL_FINISHAUDIOANIMATOREXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedAudioAnimatorExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_AUDIOANIMATOREXCEL_FINISHSIZEPREFIXEDAUDIOANIMATOREXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

