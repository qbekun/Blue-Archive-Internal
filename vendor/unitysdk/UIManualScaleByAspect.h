#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Vector3; }

#define UIMANUALSCALEBYASPECT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xC1F3B0)
#define UIMANUALSCALEBYASPECT_.CTOR_OFFSET UNITYSDK_OFFSET(0xC1F6E0)
#define UIMANUALSCALEBYASPECT_INTVECTOR_OFFSET UNITYSDK_OFFSET(0xC1F700)
#define UIMANUALSCALEBYASPECT_REFRESH_OFFSET UNITYSDK_OFFSET(0xC1F910)
#define UIMANUALSCALEBYASPECT_DISCARD_OFFSET UNITYSDK_OFFSET(0xC1F4F0)
#define UIMANUALSCALEBYASPECT_ONENABLE_OFFSET UNITYSDK_OFFSET(0xC1FE80)

	inline static constexpr unsigned int UIManualScaleByAspect_TypeDefinitionIndex = 8871;

	class UIManualScaleByAspect : public Il2CppObject
	{
	public:
		::System::Single mostWideScale; // 0x18
		::System::Single mostNarrowScale; // 0x1C
		::Il2CppArray<::System::Object*>* scaleTransforms; // 0x20
		::Il2CppArray<::System::Object*>* offsetSettings; // 0x28
		::System::Single scaleFactor; // 0x30

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMANUALSCALEBYASPECT_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMANUALSCALEBYASPECT_.CTOR_OFFSET))(nullptr);
		}

		::UnityEngine::Vector3* IntVector(::UnityEngine::Vector3* arg)
		{
			return ((::UnityEngine::Vector3*(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UIMANUALSCALEBYASPECT_INTVECTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Refresh()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMANUALSCALEBYASPECT_REFRESH_OFFSET))(nullptr);
		}

		::System::Void Discard()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMANUALSCALEBYASPECT_DISCARD_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMANUALSCALEBYASPECT_ONENABLE_OFFSET))(nullptr);
		}

	};

