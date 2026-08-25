#pragma once
#include "unitysdk.h"

class UISlider;

#define UITBGLOADING_GET_ISPLAYING_OFFSET UNITYSDK_OFFSET(0xB57EE0)
#define UITBGLOADING_ONOPENED_OFFSET UNITYSDK_OFFSET(0xB57EF0)
#define UITBGLOADING_GET_IGNORESETPANELDEPTH_OFFSET UNITYSDK_OFFSET(0xB58060)
#define UITBGLOADING_COPLAYPROGRESS_OFFSET UNITYSDK_OFFSET(0xB57FF0)
#define UITBGLOADING_SET_ISPLAYING_OFFSET UNITYSDK_OFFSET(0xB58090)
#define UITBGLOADING_.CTOR_OFFSET UNITYSDK_OFFSET(0xB580A0)

	inline static constexpr unsigned int UITBGLoading_TypeDefinitionIndex = 8396;

	class UITBGLoading : public Il2CppObject
	{
	public:
		UISlider* slider; // 0xD8
		::System::Boolean _IsPlaying_k__BackingField; // 0xE0

		::System::Boolean get_IsPlaying()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UITBGLOADING_GET_ISPLAYING_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UITBGLOADING_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IgnoreSetPanelDepth()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UITBGLOADING_GET_IGNORESETPANELDEPTH_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoPlayProgress()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UITBGLOADING_COPLAYPROGRESS_OFFSET))(nullptr);
		}

		::System::Void set_IsPlaying(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UITBGLOADING_SET_ISPLAYING_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITBGLOADING_.CTOR_OFFSET))(nullptr);
		}

	};

