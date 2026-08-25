#pragma once
#include "unitysdk.h"

class CameraConfigData;
class RenderPipelineConfigData;
class CameraConfigReceiver;
class ConfigHandles;

#define RENDERCONFIGLOADER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x20D5360)
#define RENDERCONFIGLOADER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x20D5690)
#define RENDERCONFIGLOADER_SETCAMERACONFIG_OFFSET UNITYSDK_OFFSET(0x20D57A0)
#define RENDERCONFIGLOADER_REMOVE_ONPIPELINECONFIGLOADED_OFFSET UNITYSDK_OFFSET(0x20D5B70)
#define RENDERCONFIGLOADER_GET_CURRENTRENDERERINDEX_OFFSET UNITYSDK_OFFSET(0x20D5C50)
#define RENDERCONFIGLOADER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x20D5CA0)
#define RENDERCONFIGLOADER_RELEASECAMERACONFIG_OFFSET UNITYSDK_OFFSET(0x20D5380)
#define RENDERCONFIGLOADER_SET_CURRENTRENDERERINDEX_OFFSET UNITYSDK_OFFSET(0x20D5CC0)
#define RENDERCONFIGLOADER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x20D5D10)
#define RENDERCONFIGLOADER_SET_ISLOADED_OFFSET UNITYSDK_OFFSET(0x20D5EA0)
#define RENDERCONFIGLOADER_.CTOR_OFFSET UNITYSDK_OFFSET(0x20D5EF0)
#define RENDERCONFIGLOADER_ADD_ONPIPELINECONFIGLOADED_OFFSET UNITYSDK_OFFSET(0x20D5F00)
#define RENDERCONFIGLOADER_RELEASEPIPELINECONFIG_OFFSET UNITYSDK_OFFSET(0x20D5550)
#define RENDERCONFIGLOADER_SETPIPELINECONFIG_OFFSET UNITYSDK_OFFSET(0x20D5D30)
#define RENDERCONFIGLOADER_GET_ISLOADED_OFFSET UNITYSDK_OFFSET(0x20D5FE0)

	inline static constexpr unsigned int RenderConfigLoader_TypeDefinitionIndex = 3726;

	class RenderConfigLoader : public Il2CppObject
	{
	public:
		::System::Action* OnPipelineConfigLoaded; // 0x0
		::System::Boolean _IsLoaded_k__BackingField; // 0x8
		::System::Int32 _CurrentRendererIndex_k__BackingField; // 0xC
		Il2CppObject* _rendererStack; // 0x10
		CameraConfigData* cameraConfigData; // 0x18
		RenderPipelineConfigData* pipelineConfigData; // 0x20
		CameraConfigReceiver* control; // 0x28
		ConfigHandles* handles; // 0x30
		::System::Boolean _rendererChanged; // 0x50
		::System::Boolean _isPipelineConfigLoaded; // 0x51
		::System::Object* _rendererHandle; // 0x58

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RENDERCONFIGLOADER_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RENDERCONFIGLOADER_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void SetCameraConfig()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RENDERCONFIGLOADER_SETCAMERACONFIG_OFFSET))(nullptr);
		}

		::System::Void remove_OnPipelineConfigLoaded(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + RENDERCONFIGLOADER_REMOVE_ONPIPELINECONFIGLOADED_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_CurrentRendererIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RENDERCONFIGLOADER_GET_CURRENTRENDERERINDEX_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RENDERCONFIGLOADER_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void ReleaseCameraConfig()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RENDERCONFIGLOADER_RELEASECAMERACONFIG_OFFSET))(nullptr);
		}

		::System::Void set_CurrentRendererIndex(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + RENDERCONFIGLOADER_SET_CURRENTRENDERERINDEX_OFFSET))(arg, nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RENDERCONFIGLOADER_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void set_IsLoaded(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + RENDERCONFIGLOADER_SET_ISLOADED_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RENDERCONFIGLOADER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void add_OnPipelineConfigLoaded(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + RENDERCONFIGLOADER_ADD_ONPIPELINECONFIGLOADED_OFFSET))(arg, nullptr);
		}

		::System::Void ReleasePipelineConfig()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RENDERCONFIGLOADER_RELEASEPIPELINECONFIG_OFFSET))(nullptr);
		}

		::System::Void SetPipelineConfig()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RENDERCONFIGLOADER_SETPIPELINECONFIG_OFFSET))(nullptr);
		}

		::System::Boolean get_IsLoaded()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RENDERCONFIGLOADER_GET_ISLOADED_OFFSET))(nullptr);
		}

	};

