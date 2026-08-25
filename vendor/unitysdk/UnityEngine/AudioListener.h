#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class FFTWindow; }
namespace UnityEngine { class AudioVelocityUpdateMode; }

#define UNITYENGINE_AUDIOLISTENER_GETOUTPUTDATAHELPER_OFFSET UNITYSDK_OFFSET(0xA1DBAB0)
#define UNITYENGINE_AUDIOLISTENER_GETSPECTRUMDATAHELPER_OFFSET UNITYSDK_OFFSET(0xA1DBAF0)
#define UNITYENGINE_AUDIOLISTENER_GET_VOLUME_OFFSET UNITYSDK_OFFSET(0xA1DBB40)
#define UNITYENGINE_AUDIOLISTENER_SET_VOLUME_OFFSET UNITYSDK_OFFSET(0xA1DBB80)
#define UNITYENGINE_AUDIOLISTENER_GET_PAUSE_OFFSET UNITYSDK_OFFSET(0xA1DBBD0)
#define UNITYENGINE_AUDIOLISTENER_SET_PAUSE_OFFSET UNITYSDK_OFFSET(0xA1DBC10)
#define UNITYENGINE_AUDIOLISTENER_GET_VELOCITYUPDATEMODE_OFFSET UNITYSDK_OFFSET(0xA1DBC50)
#define UNITYENGINE_AUDIOLISTENER_SET_VELOCITYUPDATEMODE_OFFSET UNITYSDK_OFFSET(0xA1DBC90)
#define UNITYENGINE_AUDIOLISTENER_GETOUTPUTDATA_OFFSET UNITYSDK_OFFSET(0xA1DBCD0)
#define UNITYENGINE_AUDIOLISTENER_GETOUTPUTDATA_OFFSET UNITYSDK_OFFSET(0xA1DBD40)
#define UNITYENGINE_AUDIOLISTENER_GETSPECTRUMDATA_OFFSET UNITYSDK_OFFSET(0xA1DBD80)
#define UNITYENGINE_AUDIOLISTENER_GETSPECTRUMDATA_OFFSET UNITYSDK_OFFSET(0xA1DBDF0)
#define UNITYENGINE_AUDIOLISTENER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA1DBE40)

namespace UnityEngine
{
	inline static constexpr unsigned int AudioListener_TypeDefinitionIndex = 37471;

	class AudioListener : public ::UnityEngine::TextCore::Glyph
	{
	public:
		::System::Void GetOutputDataHelper(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOLISTENER_GETOUTPUTDATAHELPER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void GetSpectrumDataHelper(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::UnityEngine::FFTWindow* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::UnityEngine::FFTWindow*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOLISTENER_GETSPECTRUMDATAHELPER_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Single get_volume()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOLISTENER_GET_VOLUME_OFFSET))(nullptr);
		}

		::System::Void set_volume(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOLISTENER_SET_VOLUME_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_pause()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOLISTENER_GET_PAUSE_OFFSET))(nullptr);
		}

		::System::Void set_pause(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOLISTENER_SET_PAUSE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::AudioVelocityUpdateMode* get_velocityUpdateMode()
		{
			return (return (::UnityEngine::AudioVelocityUpdateMode*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOLISTENER_GET_VELOCITYUPDATEMODE_OFFSET))(nullptr);
		}

		::System::Void set_velocityUpdateMode(::UnityEngine::AudioVelocityUpdateMode* arg)
		{
			((::System::Void(*)(::UnityEngine::AudioVelocityUpdateMode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOLISTENER_SET_VELOCITYUPDATEMODE_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetOutputData(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOLISTENER_GETOUTPUTDATA_OFFSET))(arg, arg, nullptr);
		}

		::System::Void GetOutputData(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOLISTENER_GETOUTPUTDATA_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetSpectrumData(::System::Int32 arg, ::System::Int32 arg, ::UnityEngine::FFTWindow* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Int32, ::System::Int32, ::UnityEngine::FFTWindow*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOLISTENER_GETSPECTRUMDATA_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void GetSpectrumData(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::UnityEngine::FFTWindow* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::UnityEngine::FFTWindow*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOLISTENER_GETSPECTRUMDATA_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOLISTENER_.CTOR_OFFSET))(nullptr);
		}

	};
}

