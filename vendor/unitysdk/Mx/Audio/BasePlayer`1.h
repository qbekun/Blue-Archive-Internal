#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Transform; }
namespace UnityEngine { class AudioSource; }

#define MX_AUDIO_BASEPLAYER`1_SET_SOURCEOBJECTPARENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_AUDIO_BASEPLAYER`1_SET_SOURCEOBJECTS_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_AUDIO_BASEPLAYER`1_GETSOURCEOBJECT_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_AUDIO_BASEPLAYER`1_STOPIMMEDIATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_AUDIO_BASEPLAYER`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_AUDIO_BASEPLAYER`1_SET_DEFAULTAUDIOSOUCE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_AUDIO_BASEPLAYER`1_CREATESOURCEPARENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_AUDIO_BASEPLAYER`1_GET_SOURCEOBJECTTYPE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_AUDIO_BASEPLAYER`1_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_AUDIO_BASEPLAYER`1_GET_SOURCEOBJECTS_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_AUDIO_BASEPLAYER`1_LOADDEFAULTAUDIOSOURCE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_AUDIO_BASEPLAYER`1_ADDSOURCEOBJECT_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_AUDIO_BASEPLAYER`1_GET_DEFAULTAUDIOSOUCE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_AUDIO_BASEPLAYER`1_GET_ISINITIALIZED_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_AUDIO_BASEPLAYER`1_SET_SOURCEOBJECTTYPE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_AUDIO_BASEPLAYER`1_SET_ISINITIALIZED_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_AUDIO_BASEPLAYER`1_AWAKE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_AUDIO_BASEPLAYER`1_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_AUDIO_BASEPLAYER`1_ADDDEFAULTSOURCEOBJECTS_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_AUDIO_BASEPLAYER`1_ALLSTOP_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_AUDIO_BASEPLAYER`1_GET_DEFAULTLOADCOUNT_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_AUDIO_BASEPLAYER`1_GET_SOURCEOBJECTPARENT_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MX::Audio
{
	inline static constexpr unsigned int BasePlayer`1_TypeDefinitionIndex = 20175;

	class BasePlayer`1 : public Il2CppObject
	{
	public:
		::UnityEngine::Transform* _SourceObjectParent_k__BackingField; // 0x0
		Il2CppObject* _SourceObjects_k__BackingField; // 0x0
		::System::Type* _SourceObjectType_k__BackingField; // 0x0
		::System::Boolean _isInitialized_k__BackingField; // 0x0
		::UnityEngine::AudioSource* _DefaultAudioSouce_k__BackingField; // 0x0

		::System::Void set_SourceObjectParent(::UnityEngine::Transform* arg)
		{
			((::System::Void(*)(::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_BASEPLAYER`1_SET_SOURCEOBJECTPARENT_OFFSET))(arg, nullptr);
		}

		::System::Void set_SourceObjects(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_BASEPLAYER`1_SET_SOURCEOBJECTS_OFFSET))(arg, nullptr);
		}

		::System::Void GetSourceObject(::System::Boolean arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Boolean, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_BASEPLAYER`1_GETSOURCEOBJECT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StopImmediate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_BASEPLAYER`1_STOPIMMEDIATE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_BASEPLAYER`1_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_DefaultAudioSouce(::UnityEngine::AudioSource* arg)
		{
			((::System::Void(*)(::UnityEngine::AudioSource*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_BASEPLAYER`1_SET_DEFAULTAUDIOSOUCE_OFFSET))(arg, nullptr);
		}

		::System::Void CreateSourceParent()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_BASEPLAYER`1_CREATESOURCEPARENT_OFFSET))(nullptr);
		}

		::System::Type* get_SourceObjectType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_BASEPLAYER`1_GET_SOURCEOBJECTTYPE_OFFSET))(nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_BASEPLAYER`1_ONDESTROY_OFFSET))(nullptr);
		}

		Il2CppObject* get_SourceObjects()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_BASEPLAYER`1_GET_SOURCEOBJECTS_OFFSET))(nullptr);
		}

		::UnityEngine::AudioSource* LoadDefaultAudioSource()
		{
			return (return (::UnityEngine::AudioSource*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_BASEPLAYER`1_LOADDEFAULTAUDIOSOURCE_OFFSET))(nullptr);
		}

		Il2CppObject* AddSourceObject(::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_BASEPLAYER`1_ADDSOURCEOBJECT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::AudioSource* get_DefaultAudioSouce()
		{
			return (return (::UnityEngine::AudioSource*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_BASEPLAYER`1_GET_DEFAULTAUDIOSOUCE_OFFSET))(nullptr);
		}

		::System::Boolean get_isInitialized()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_BASEPLAYER`1_GET_ISINITIALIZED_OFFSET))(nullptr);
		}

		::System::Void set_SourceObjectType(::System::Type* arg)
		{
			((::System::Void(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_BASEPLAYER`1_SET_SOURCEOBJECTTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void set_isInitialized(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_BASEPLAYER`1_SET_ISINITIALIZED_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_BASEPLAYER`1_AWAKE_OFFSET))(nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_BASEPLAYER`1_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void AddDefaultSourceObjects()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_BASEPLAYER`1_ADDDEFAULTSOURCEOBJECTS_OFFSET))(nullptr);
		}

		::System::Void AllStop()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_BASEPLAYER`1_ALLSTOP_OFFSET))(nullptr);
		}

		::System::Int32 get_DefaultLoadCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_BASEPLAYER`1_GET_DEFAULTLOADCOUNT_OFFSET))(nullptr);
		}

		::UnityEngine::Transform* get_SourceObjectParent()
		{
			return (return (::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_BASEPLAYER`1_GET_SOURCEOBJECTPARENT_OFFSET))(nullptr);
		}

	};
}

