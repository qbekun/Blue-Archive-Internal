#pragma once
#include "unitysdk.h"

class SpineBase;
class DisableActionType;

#define SPINEPLAYCOMMANDER_GET_PLAYONENABLE_OFFSET UNITYSDK_OFFSET(0x20E9E40)
#define SPINEPLAYCOMMANDER_GET_ONENABLECLIPNAME_OFFSET UNITYSDK_OFFSET(0x20E9E50)
#define SPINEPLAYCOMMANDER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x20E9E60)
#define SPINEPLAYCOMMANDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x20E9FE0)
#define SPINEPLAYCOMMANDER_PLAYCLIPFORONENABLE_OFFSET UNITYSDK_OFFSET(0x20E9FF0)
#define SPINEPLAYCOMMANDER_PLAYCLIPFORONDISABLE_OFFSET UNITYSDK_OFFSET(0x20E9F10)
#define SPINEPLAYCOMMANDER_GET_ONDISABLECLIPNAME_OFFSET UNITYSDK_OFFSET(0x20EA0C0)
#define SPINEPLAYCOMMANDER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x20EA0D0)

	inline static constexpr unsigned int SpinePlayCommander_TypeDefinitionIndex = 3795;

	class SpinePlayCommander : public Il2CppObject
	{
	public:
		SpineBase* spine; // 0x18
		::System::Boolean playOnEnable; // 0x20
		::System::String* onEnableClip; // 0x28
		DisableActionType* actionOnDisable; // 0x30
		::System::String* onDisableClip; // 0x38

		::System::Boolean get_PlayOnEnable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINEPLAYCOMMANDER_GET_PLAYONENABLE_OFFSET))(nullptr);
		}

		::System::String* get_OnEnableClipName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINEPLAYCOMMANDER_GET_ONENABLECLIPNAME_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINEPLAYCOMMANDER_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINEPLAYCOMMANDER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void PlayClipForOnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINEPLAYCOMMANDER_PLAYCLIPFORONENABLE_OFFSET))(nullptr);
		}

		::System::Void PlayClipForOnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINEPLAYCOMMANDER_PLAYCLIPFORONDISABLE_OFFSET))(nullptr);
		}

		::System::String* get_OnDisableClipName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINEPLAYCOMMANDER_GET_ONDISABLECLIPNAME_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINEPLAYCOMMANDER_ONENABLE_OFFSET))(nullptr);
		}

	};

