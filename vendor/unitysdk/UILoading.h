#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Texture; }
class UITexture;
class UISlider;

#define UILOADING_LOADING_OFFSET UNITYSDK_OFFSET(0x2635720)
#define UILOADING_CO_LOADING_OFFSET UNITYSDK_OFFSET(0x26357D0)
#define UILOADING___N__0_OFFSET UNITYSDK_OFFSET(0x2635860)
#define UILOADING_SETPROGRESS_OFFSET UNITYSDK_OFFSET(0x2635870)
#define UILOADING_SET_IGNORESTOPBGM_OFFSET UNITYSDK_OFFSET(0x2635900)
#define UILOADING_ONCLOSED_OFFSET UNITYSDK_OFFSET(0x2635910)
#define UILOADING_SET_IMAGE_OFFSET UNITYSDK_OFFSET(0x2635B70)
#define UILOADING_NEXTIMAGEPRELOAD_OFFSET UNITYSDK_OFFSET(0x2635B10)
#define UILOADING_GET_IGNORESETPANELDEPTH_OFFSET UNITYSDK_OFFSET(0x2635BE0)
#define UILOADING_GET_IGNORESTOPBGM_OFFSET UNITYSDK_OFFSET(0x2635BF0)
#define UILOADING_GET_IMAGE_OFFSET UNITYSDK_OFFSET(0x2635C00)
#define UILOADING_ONOPENED_OFFSET UNITYSDK_OFFSET(0x2635C40)
#define UILOADING_.CTOR_OFFSET UNITYSDK_OFFSET(0x2635E90)

	inline static constexpr unsigned int UILoading_TypeDefinitionIndex = 6575;

	class UILoading : public Il2CppObject
	{
	public:
		::UnityEngine::Texture* _Image_k__BackingField; // 0x0
		UITexture* image; // 0xD8
		UISlider* loadingSlider; // 0xE0
		::System::Boolean _IgnoreStopBGM_k__BackingField; // 0xE8

		::System::Void Loading(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UILOADING_LOADING_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* Co_Loading()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOADING_CO_LOADING_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* __n__0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOADING___N__0_OFFSET))(nullptr);
		}

		::System::Void SetProgress(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UILOADING_SETPROGRESS_OFFSET))(arg, nullptr);
		}

		::System::Void set_IgnoreStopBGM(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UILOADING_SET_IGNORESTOPBGM_OFFSET))(arg, nullptr);
		}

		::System::Void OnClosed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOADING_ONCLOSED_OFFSET))(nullptr);
		}

		::System::Void set_Image(::UnityEngine::Texture* arg)
		{
			((::System::Void(*)(::UnityEngine::Texture*, ::PVOID))((::PBYTE)hIl2Cpp + UILOADING_SET_IMAGE_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* NextImagePreload()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOADING_NEXTIMAGEPRELOAD_OFFSET))(nullptr);
		}

		::System::Boolean get_IgnoreSetPanelDepth()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOADING_GET_IGNORESETPANELDEPTH_OFFSET))(nullptr);
		}

		::System::Boolean get_IgnoreStopBGM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOADING_GET_IGNORESTOPBGM_OFFSET))(nullptr);
		}

		::UnityEngine::Texture* get_Image()
		{
			return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOADING_GET_IMAGE_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UILOADING_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOADING_.CTOR_OFFSET))(nullptr);
		}

	};

